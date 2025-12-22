// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTemplateSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
SCENEVIEWEXTENSIONTEMPLATE_API UClass* Z_Construct_UClass_UTemplateSubsystem();
SCENEVIEWEXTENSIONTEMPLATE_API UClass* Z_Construct_UClass_UTemplateSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SceneViewExtensionTemplate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTemplateSubsystem *******************************************************
void UTemplateSubsystem::StaticRegisterNativesUTemplateSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTemplateSubsystem;
UClass* UTemplateSubsystem::GetPrivateStaticClass()
{
	using TClass = UTemplateSubsystem;
	if (!Z_Registration_Info_UClass_UTemplateSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TemplateSubsystem"),
			Z_Registration_Info_UClass_UTemplateSubsystem.InnerSingleton,
			StaticRegisterNativesUTemplateSubsystem,
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
	return Z_Registration_Info_UClass_UTemplateSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UTemplateSubsystem_NoRegister()
{
	return UTemplateSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTemplateSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TemplateSubsystem.h" },
		{ "ModuleRelativePath", "Private/TemplateSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTemplateSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SceneViewExtensionTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSubsystem_Statics::ClassParams = {
	&UTemplateSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemplateSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemplateSubsystem()
{
	if (!Z_Registration_Info_UClass_UTemplateSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSubsystem.OuterSingleton, Z_Construct_UClass_UTemplateSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemplateSubsystem.OuterSingleton;
}
UTemplateSubsystem::UTemplateSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSubsystem);
UTemplateSubsystem::~UTemplateSubsystem() {}
// ********** End Class UTemplateSubsystem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TestBed_Plugins_SceneViewExtensionTemplate_SceneViewExtensionTemplate_Source_SceneViewExtensionTemplate_Private_TemplateSubsystem_h__Script_SceneViewExtensionTemplate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateSubsystem, UTemplateSubsystem::StaticClass, TEXT("UTemplateSubsystem"), &Z_Registration_Info_UClass_UTemplateSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSubsystem), 4204323209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestBed_Plugins_SceneViewExtensionTemplate_SceneViewExtensionTemplate_Source_SceneViewExtensionTemplate_Private_TemplateSubsystem_h__Script_SceneViewExtensionTemplate_3638280068(TEXT("/Script/SceneViewExtensionTemplate"),
	Z_CompiledInDeferFile_FID_TestBed_Plugins_SceneViewExtensionTemplate_SceneViewExtensionTemplate_Source_SceneViewExtensionTemplate_Private_TemplateSubsystem_h__Script_SceneViewExtensionTemplate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestBed_Plugins_SceneViewExtensionTemplate_SceneViewExtensionTemplate_Source_SceneViewExtensionTemplate_Private_TemplateSubsystem_h__Script_SceneViewExtensionTemplate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
