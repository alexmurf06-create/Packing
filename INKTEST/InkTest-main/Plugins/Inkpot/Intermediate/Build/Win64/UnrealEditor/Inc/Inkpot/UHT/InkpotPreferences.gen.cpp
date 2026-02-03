// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/InkpotPreferences.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotPreferences() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
INKPOT_API UClass* Z_Construct_UClass_UInkpotPreferences();
INKPOT_API UClass* Z_Construct_UClass_UInkpotPreferences_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotPreferences *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotPreferences;
UClass* UInkpotPreferences::GetPrivateStaticClass()
{
	using TClass = UInkpotPreferences;
	if (!Z_Registration_Info_UClass_UInkpotPreferences.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotPreferences"),
			Z_Registration_Info_UClass_UInkpotPreferences.InnerSingleton,
			StaticRegisterNativesUInkpotPreferences,
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
	return Z_Registration_Info_UClass_UInkpotPreferences.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotPreferences_NoRegister()
{
	return UInkpotPreferences::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotPreferences_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editor preferences for Inkpot\n" },
#endif
		{ "DisplayName", "Inkpot Preferences" },
		{ "IncludePath", "Settings/InkpotPreferences.h" },
		{ "ModuleRelativePath", "Public/Settings/InkpotPreferences.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor preferences for Inkpot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutogenerateGameplayTags_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09Generate gameplay tag table automatically on import or not.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Settings/InkpotPreferences.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate gameplay tag table automatically on import or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateGameplayTagsList_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""Automatically update the GameplayTagTableList setting of teh Project GameplayTags section.\n\x09(Tag files need to be added to this list before they can be used by any of the gamplay tag functionality of Inpot )\n\x09*/" },
#endif
		{ "EditCondition", "bAutogenerateGameplayTags" },
		{ "ModuleRelativePath", "Public/Settings/InkpotPreferences.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically update the GameplayTagTableList setting of teh Project GameplayTags section.\n(Tag files need to be added to this list before they can be used by any of the gamplay tag functionality of Inpot )" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugLog_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09Show Inkpot debug log or not.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Settings/InkpotPreferences.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show Inkpot debug log or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReloadIfAssetChanged_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09Should the story be reloaded if the story asset has been updated at runtime.\n\x09This will cause the story to reset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Settings/InkpotPreferences.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the story be reloaded if the story asset has been updated at runtime.\nThis will cause the story to reset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplayIfReloaded_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09If a reload occurs should Inkpot replay the story.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Settings/InkpotPreferences.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a reload occurs should Inkpot replay the story." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotPreferences constinit property declarations ***********************
	static void NewProp_bAutogenerateGameplayTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutogenerateGameplayTags;
	static void NewProp_bAutoUpdateGameplayTagsList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateGameplayTagsList;
	static void NewProp_bDebugLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugLog;
	static void NewProp_bReloadIfAssetChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadIfAssetChanged;
	static void NewProp_bReplayIfReloaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplayIfReloaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInkpotPreferences constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotPreferences>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotPreferences_Statics

// ********** Begin Class UInkpotPreferences Property Definitions **********************************
void Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bAutogenerateGameplayTags_SetBit(void* Obj)
{
	((UInkpotPreferences*)Obj)->bAutogenerateGameplayTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bAutogenerateGameplayTags = { "bAutogenerateGameplayTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotPreferences), &Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bAutogenerateGameplayTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutogenerateGameplayTags_MetaData), NewProp_bAutogenerateGameplayTags_MetaData) };
void Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bAutoUpdateGameplayTagsList_SetBit(void* Obj)
{
	((UInkpotPreferences*)Obj)->bAutoUpdateGameplayTagsList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bAutoUpdateGameplayTagsList = { "bAutoUpdateGameplayTagsList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotPreferences), &Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bAutoUpdateGameplayTagsList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoUpdateGameplayTagsList_MetaData), NewProp_bAutoUpdateGameplayTagsList_MetaData) };
void Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bDebugLog_SetBit(void* Obj)
{
	((UInkpotPreferences*)Obj)->bDebugLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bDebugLog = { "bDebugLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotPreferences), &Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bDebugLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugLog_MetaData), NewProp_bDebugLog_MetaData) };
void Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bReloadIfAssetChanged_SetBit(void* Obj)
{
	((UInkpotPreferences*)Obj)->bReloadIfAssetChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bReloadIfAssetChanged = { "bReloadIfAssetChanged", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotPreferences), &Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bReloadIfAssetChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReloadIfAssetChanged_MetaData), NewProp_bReloadIfAssetChanged_MetaData) };
void Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bReplayIfReloaded_SetBit(void* Obj)
{
	((UInkpotPreferences*)Obj)->bReplayIfReloaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bReplayIfReloaded = { "bReplayIfReloaded", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotPreferences), &Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bReplayIfReloaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplayIfReloaded_MetaData), NewProp_bReplayIfReloaded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotPreferences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bAutogenerateGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bAutoUpdateGameplayTagsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bDebugLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bReloadIfAssetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotPreferences_Statics::NewProp_bReplayIfReloaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotPreferences_Statics::PropPointers) < 2048);
// ********** End Class UInkpotPreferences Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UInkpotPreferences_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotPreferences_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotPreferences_Statics::ClassParams = {
	&UInkpotPreferences::StaticClass,
	"EditorSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInkpotPreferences_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotPreferences_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotPreferences_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotPreferences_Statics::Class_MetaDataParams)
};
void UInkpotPreferences::StaticRegisterNativesUInkpotPreferences()
{
}
UClass* Z_Construct_UClass_UInkpotPreferences()
{
	if (!Z_Registration_Info_UClass_UInkpotPreferences.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotPreferences.OuterSingleton, Z_Construct_UClass_UInkpotPreferences_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotPreferences.OuterSingleton;
}
UInkpotPreferences::UInkpotPreferences(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotPreferences);
UInkpotPreferences::~UInkpotPreferences() {}
// ********** End Class UInkpotPreferences *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotPreferences, UInkpotPreferences::StaticClass, TEXT("UInkpotPreferences"), &Z_Registration_Info_UClass_UInkpotPreferences, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotPreferences), 3830596453U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h__Script_Inkpot_3469878407{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
