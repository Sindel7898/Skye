// Custom SceneViewExtension Template for Unreal Engine
// Copyright 2023 - 2025 Ossi Luoto
// 
// Custom SceneViewExtension implementation

#include "CustomSceneViewExtension.h"

#include <functional>

#include "Engine/VolumeTexture.h"
//Reference to specific shader file and entry point
IMPLEMENT_GLOBAL_SHADER(FCustomShader, "/Plugins/SceneViewExtensionTemplate/PostProcessCS.usf", "MainCS", SF_Compute);

//Console Commands
namespace
{
	TAutoConsoleVariable<int32> ConsoleVariable(
		TEXT("r.SceneViewExtensionTemplate"),
		0,
		TEXT("Enable Custom SceneViewExtension \n")
		TEXT(" 0: OFF;")
		TEXT(" 1: ON."),
		ECVF_RenderThreadSafe);
}


FCustomSceneViewExtension::FCustomSceneViewExtension(const FAutoRegister& AutoRegister) : FSceneViewExtensionBase(AutoRegister)
{
	UE_LOG(LogTemp, Log, TEXT("SceneViewExtensionTemplate: Custom SceneViewExtension registered"));
}

void FCustomSceneViewExtension::SubscribeToPostProcessingPass(EPostProcessingPass PassId, const FSceneView& View, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled)
{
	// Define to what Post Processing stage to hook the SceneViewExtension into. See SceneViewExtension.h and PostProcessing.cpp for more info
	if (PassId == EPostProcessingPass::MotionBlur)
	{
		InOutPassCallbacks.Add(FAfterPassCallbackDelegate::CreateRaw(this, &FCustomSceneViewExtension::CustomPostProcessing));
	}
}


FScreenPassTexture FCustomSceneViewExtension::CustomPostProcessing(FRDGBuilder& GraphBuilder, const FSceneView& SceneView, const FPostProcessMaterialInputs& Inputs)
{
	// SceneViewExtension gives SceneView, not ViewInfo so we need to setup some basics
	const FSceneViewFamily& ViewFamily = *SceneView.Family;

	const FScreenPassTexture& SceneColor = FScreenPassTexture::CopyFromSlice(GraphBuilder, Inputs.GetInput(EPostProcessMaterialInput::SceneColor));

	// Check if we have valid input and if the effect is enabled
	if (!SceneColor.IsValid() || ConsoleVariable.GetValueOnRenderThread() == 0)
	{
		return SceneColor;
	}
	
	const FScreenPassTextureViewport SceneColorViewport(SceneColor);
	
	// Here starts the RDG stuff
	RDG_EVENT_SCOPE(GraphBuilder, "Custom Postprocess Effect");

	{
		// Accesspoint to our Shaders
		FGlobalShaderMap* GlobalShaderMap = GetGlobalShaderMap(ViewFamily.GetFeatureLevel());

		// Setup all the descriptors to create a target texture
		FRDGTextureDesc OutputDesc;
		{
			OutputDesc = SceneColor.Texture->Desc;

			OutputDesc.Reset();
			OutputDesc.Flags |= TexCreate_UAV; //we need UAV (unordered access view) for compute shader output

			// We don't need Raster RenderTargetable or FastVRAM for this effect
			OutputDesc.Flags &= ~(TexCreate_RenderTargetable | TexCreate_FastVRAM);

			OutputDesc.ClearValue = FClearValueBinding(FLinearColor::Black);
		}

		// Create target texture
		FRDGTextureRef OutputTexture = GraphBuilder.CreateTexture(OutputDesc, TEXT("Custom Effect Output Texture"));
		
		FIntPoint PassViewSize = SceneColor.ViewRect.Size();

		// Calculate group count based on view size and thread group size defined in the shader
		FIntVector GroupCount = FComputeShaderUtils::GetGroupCount(PassViewSize, FComputeShaderUtils::kGolden2DGroupSize);

		
		
		FScopeLock Lock(&RenderDataLock); 

		for (const FCloudInstanceData& Cloud : CloudData)
		{
			if (!Cloud.VolumeTexture) continue;

			auto* PassParameters = GraphBuilder.AllocParameters<FCustomShader::FParameters>();
			PassParameters->SceneColorViewport = GetScreenPassTextureViewportParameters(SceneColorViewport);
			PassParameters->OriginalSceneColor = SceneColor.Texture;
			PassParameters->Output = GraphBuilder.CreateUAV(FRDGTextureUAVDesc(OutputTexture));
    
			FTextureResource* Resource = Cloud.VolumeTexture->GetResource();

			if (Resource && Resource->TextureRHI)
			{
				FRHITexture* TextureRHI = Resource->TextureRHI;

				FRDGTextureRef VolTex = GraphBuilder.RegisterExternalTexture(
					CreateRenderTarget(TextureRHI, TEXT("CloudVolume"))
				);

				PassParameters->CurrentVolumeTexture = VolTex;
			}
			
			PassParameters->CurrentCloudPosition = (FVector4f)Cloud.ArithmeticData.Position; 

			TShaderMapRef<FCustomShader> ComputeShader(GlobalShaderMap);
			FComputeShaderUtils::AddPass(
				GraphBuilder,
				RDG_EVENT_NAME("Render Cloud Instance"),
				ComputeShader,
				PassParameters,
				GroupCount
			);
		}

		// Copy the output texture back to SceneColor
		// Returning the new texture as ScreenPassTexture doesn't work, so this is pretty fast alternative
		// Also with f.ex 'PrePostProcessPass_RenderThread' you get only input and something similar needs to be implemented then
		AddCopyTexturePass(GraphBuilder, OutputTexture, SceneColor.Texture);
	}

	// The call expects ScreenPassTexture as a return, we return with the same texture as we started with, see AddCopyTexturePass above 
	return SceneColor;
}


void FCustomSceneViewExtension::BeginRenderViewFamily(FSceneViewFamily& InViewFamily)
{
	CloudData.Reset();
	
	const UWorld* World = InViewFamily.Scene->GetWorld();
	
	if (!World) {return;};
	
	for (TObjectIterator<USkyeComponent> Component; Component; ++Component)
	{
		// Verify this component belongs to the world we are rendering
		if (Component && Component->GetWorld() == World && Component->IsVisible())
		{
			
			if (Component->VolumeTexture && Component->VolumeTexture->GetResource())
			{
				FCloudInstanceData Data;
                Data.ArithmeticData.Position = FVector4f(FVector3f(Component->GetComponentLocation()), 1.0f);
				Data.VolumeTexture = Component->VolumeTexture;
				
				CloudData.Add(Data);
			}
		}
	}
}
