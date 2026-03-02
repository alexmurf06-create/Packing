// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTags/InkpotTagMenu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotTagMenu() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotTagMenu();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotTagMenu_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotTagMenu ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotTagMenu;
UClass* UInkpotTagMenu::GetPrivateStaticClass()
{
	using TClass = UInkpotTagMenu;
	if (!Z_Registration_Info_UClass_UInkpotTagMenu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotTagMenu"),
			Z_Registration_Info_UClass_UInkpotTagMenu.InnerSingleton,
			StaticRegisterNativesUInkpotTagMenu,
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
	return Z_Registration_Info_UClass_UInkpotTagMenu.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotTagMenu_NoRegister()
{
	return UInkpotTagMenu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotTagMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTags/InkpotTagMenu.h" },
		{ "ModuleRelativePath", "Public/GameplayTags/InkpotTagMenu.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotTagMenu constinit property declarations ***************************
// ********** End Class UInkpotTagMenu constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotTagMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotTagMenu_Statics
UObject* (*const Z_Construct_UClass_UInkpotTagMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotTagMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotTagMenu_Statics::ClassParams = {
	&UInkpotTagMenu::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotTagMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotTagMenu_Statics::Class_MetaDataParams)
};
void UInkpotTagMenu::StaticRegisterNativesUInkpotTagMenu()
{
}
UClass* Z_Construct_UClass_UInkpotTagMenu()
{
	if (!Z_Registration_Info_UClass_UInkpotTagMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotTagMenu.OuterSingleton, Z_Construct_UClass_UInkpotTagMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotTagMenu.OuterSingleton;
}
UInkpotTagMenu::UInkpotTagMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotTagMenu);
UInkpotTagMenu::~UInkpotTagMenu() {}
// ********** End Class UInkpotTagMenu *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagMenu_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotTagMenu, UInkpotTagMenu::StaticClass, TEXT("UInkpotTagMenu"), &Z_Registration_Info_UClass_UInkpotTagMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotTagMenu), 24311081U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagMenu_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagMenu_h__Script_InkpotEditor_3905589632{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagMenu_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagMenu_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
