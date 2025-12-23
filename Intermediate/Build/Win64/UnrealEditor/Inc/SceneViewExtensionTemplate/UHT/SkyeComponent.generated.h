// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkyeComponent.h"

#ifdef SCENEVIEWEXTENSIONTEMPLATE_SkyeComponent_generated_h
#error "SkyeComponent.generated.h already included, missing '#pragma once' in SkyeComponent.h"
#endif
#define SCENEVIEWEXTENSIONTEMPLATE_SkyeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkyeComponent ***********************************************************
SCENEVIEWEXTENSIONTEMPLATE_API UClass* Z_Construct_UClass_USkyeComponent_NoRegister();

#define FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyeComponent(); \
	friend struct Z_Construct_UClass_USkyeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENEVIEWEXTENSIONTEMPLATE_API UClass* Z_Construct_UClass_USkyeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USkyeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneViewExtensionTemplate"), Z_Construct_UClass_USkyeComponent_NoRegister) \
	DECLARE_SERIALIZER(USkyeComponent)


#define FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkyeComponent(USkyeComponent&&) = delete; \
	USkyeComponent(const USkyeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkyeComponent) \
	NO_API virtual ~USkyeComponent();


#define FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h_7_PROLOG
#define FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkyeComponent;

// ********** End Class USkyeComponent *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Plugin_Skye_Source_Public_SkyeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
