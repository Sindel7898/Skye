#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h" // Changed include
#include "SkyeComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SCENEVIEWEXTENSIONTEMPLATE_API USkyeComponent : public USceneComponent 
{
	GENERATED_BODY()

public:
	USkyeComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cloud Settings")
	class UVolumeTexture* VolumeTexture;
};