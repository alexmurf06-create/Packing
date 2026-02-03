// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/InkpotSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
INKPOT_API UClass* Z_Construct_UClass_UInkpotSettings();
INKPOT_API UClass* Z_Construct_UClass_UInkpotSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotSettings **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotSettings;
UClass* UInkpotSettings::GetPrivateStaticClass()
{
	using TClass = UInkpotSettings;
	if (!Z_Registration_Info_UClass_UInkpotSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotSettings"),
			Z_Registration_Info_UClass_UInkpotSettings.InnerSingleton,
			StaticRegisterNativesUInkpotSettings,
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
	return Z_Registration_Info_UClass_UInkpotSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotSettings_NoRegister()
{
	return UInkpotSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime settings for Inkpot\n" },
#endif
		{ "DisplayName", "Inkpot Settings" },
		{ "IncludePath", "Settings/InkpotSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/InkpotSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime settings for Inkpot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoryFactoryClass_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""Factory for creating an Inkpot story\n\x09*/" },
#endif
		{ "MetaClass", "/Script/Inkpot.InkpotStoryFactoryBase" },
		{ "ModuleRelativePath", "Public/Settings/InkpotSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory for creating an Inkpot story" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomImportClass_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""Custom import, a editor utility object to manage ink script import pipeline\n\x09*/" },
#endif
		{ "MetaClass", "/Script/InkpotEditor.InkpotImportPipeline" },
		{ "ModuleRelativePath", "Public/Settings/InkpotSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom import, a editor utility object to manage ink script import pipeline" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotSettings constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoryFactoryClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomImportClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInkpotSettings constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotSettings_Statics

// ********** Begin Class UInkpotSettings Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInkpotSettings_Statics::NewProp_StoryFactoryClass = { "StoryFactoryClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotSettings, StoryFactoryClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoryFactoryClass_MetaData), NewProp_StoryFactoryClass_MetaData) }; // 3467803280
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInkpotSettings_Statics::NewProp_CustomImportClass = { "CustomImportClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotSettings, CustomImportClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomImportClass_MetaData), NewProp_CustomImportClass_MetaData) }; // 3467803280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotSettings_Statics::NewProp_StoryFactoryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotSettings_Statics::NewProp_CustomImportClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::PropPointers) < 2048);
// ********** End Class UInkpotSettings Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UInkpotSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotSettings_Statics::ClassParams = {
	&UInkpotSettings::StaticClass,
	"Inkpot",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInkpotSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotSettings_Statics::Class_MetaDataParams)
};
void UInkpotSettings::StaticRegisterNativesUInkpotSettings()
{
}
UClass* Z_Construct_UClass_UInkpotSettings()
{
	if (!Z_Registration_Info_UClass_UInkpotSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotSettings.OuterSingleton, Z_Construct_UClass_UInkpotSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotSettings.OuterSingleton;
}
UInkpotSettings::UInkpotSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotSettings);
UInkpotSettings::~UInkpotSettings() {}
// ********** End Class UInkpotSettings ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotSettings, UInkpotSettings::StaticClass, TEXT("UInkpotSettings"), &Z_Registration_Info_UClass_UInkpotSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotSettings), 2970310292U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h__Script_Inkpot_1361830837{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
