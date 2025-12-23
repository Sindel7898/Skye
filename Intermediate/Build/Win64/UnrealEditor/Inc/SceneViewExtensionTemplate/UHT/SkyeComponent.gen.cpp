// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyeComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSkyeComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
SCENEVIEWEXTENSIONTEMPLATE_API UClass* Z_Construct_UClass_USkyeComponent();
SCENEVIEWEXTENSIONTEMPLATE_API UClass* Z_Construct_UClass_USkyeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SceneViewExtensionTemplate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USkyeComponent ***********************************************************
void USkyeComponent::StaticRegisterNativesUSkyeComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USkyeComponent;
UClass* USkyeComponent::GetPrivateStaticClass()
{
	using TClass = USkyeComponent;
	if (!Z_Registration_Info_UClass_USkyeComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SkyeComponent"),
			Z_Registration_Info_UClass_USkyeComponent.InnerSingleton,
			StaticRegisterNativesUSkyeComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USkyeComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USkyeComponent_NoRegister()
{
	return USkyeComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USkyeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SkyeComponent.h" },
		{ "ModuleRelativePath", "Public/SkyeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeTexture_MetaData[] = {
		{ "Category", "Cloud Settings" },
		{ "ModuleRelativePath", "Public/SkyeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyeComponent_Statics::NewProp_VolumeTexture = { "VolumeTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyeComponent, VolumeTexture), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeTexture_MetaData), NewProp_VolumeTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyeComponent_Statics::NewProp_VolumeTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkyeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SceneViewExtensionTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyeComponent_Statics::ClassParams = {
	&USkyeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USkyeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USkyeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USkyeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkyeComponent()
{
	if (!Z_Registration_Info_UClass_USkyeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyeComponent.OuterSingleton, Z_Construct_UClass_USkyeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkyeComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkyeComponent);
USkyeComponent::~USkyeComponent() {}
// ********** End Class USkyeComponent *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h__Script_SceneViewExtensionTemplate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkyeComponent, USkyeComponent::StaticClass, TEXT("USkyeComponent"), &Z_Registration_Info_UClass_USkyeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyeComponent), 601515929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h__Script_SceneViewExtensionTemplate_341018690(TEXT("/Script/SceneViewExtensionTemplate"),
	Z_CompiledInDeferFile_FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h__Script_SceneViewExtensionTemplate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h__Script_SceneViewExtensionTemplate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
