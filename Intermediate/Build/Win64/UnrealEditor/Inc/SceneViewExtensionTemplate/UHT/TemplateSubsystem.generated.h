// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TemplateSubsystem.h"

#ifdef SCENEVIEWEXTENSIONTEMPLATE_TemplateSubsystem_generated_h
#error "TemplateSubsystem.generated.h already included, missing '#pragma once' in TemplateSubsystem.h"
#endif
#define SCENEVIEWEXTENSIONTEMPLATE_TemplateSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTemplateSubsystem *******************************************************
SCENEVIEWEXTENSIONTEMPLATE_API UClass* Z_Construct_UClass_UTemplateSubsystem_NoRegister();

#define FID_Unreal_Plugin_Skye_Source_Public_TemplateSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateSubsystem(); \
	friend struct Z_Construct_UClass_UTemplateSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENEVIEWEXTENSIONTEMPLATE_API UClass* Z_Construct_UClass_UTemplateSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTemplateSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneViewExtensionTemplate"), Z_Construct_UClass_UTemplateSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UTemplateSubsystem)


#define FID_Unreal_Plugin_Skye_Source_Public_TemplateSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTemplateSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTemplateSubsystem(UTemplateSubsystem&&) = delete; \
	UTemplateSubsystem(const UTemplateSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTemplateSubsystem) \
	NO_API virtual ~UTemplateSubsystem();


#define FID_Unreal_Plugin_Skye_Source_Public_TemplateSubsystem_h_12_PROLOG
#define FID_Unreal_Plugin_Skye_Source_Public_TemplateSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Plugin_Skye_Source_Public_TemplateSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Plugin_Skye_Source_Public_TemplateSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTemplateSubsystem;

// ********** End Class UTemplateSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Plugin_Skye_Source_Public_TemplateSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
