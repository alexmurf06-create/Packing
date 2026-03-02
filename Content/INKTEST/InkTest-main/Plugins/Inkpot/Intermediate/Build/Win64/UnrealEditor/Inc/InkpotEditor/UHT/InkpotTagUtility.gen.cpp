// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTags/InkpotTagUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotTagUtility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotTagUtility();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotTagUtility_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotTagUtility ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotTagUtility;
UClass* UInkpotTagUtility::GetPrivateStaticClass()
{
	using TClass = UInkpotTagUtility;
	if (!Z_Registration_Info_UClass_UInkpotTagUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotTagUtility"),
			Z_Registration_Info_UClass_UInkpotTagUtility.InnerSingleton,
			StaticRegisterNativesUInkpotTagUtility,
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
	return Z_Registration_Info_UClass_UInkpotTagUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotTagUtility_NoRegister()
{
	return UInkpotTagUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotTagUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTags/InkpotTagUtility.h" },
		{ "ModuleRelativePath", "Public/GameplayTags/InkpotTagUtility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotTagUtility constinit property declarations ************************
// ********** End Class UInkpotTagUtility constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotTagUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotTagUtility_Statics
UObject* (*const Z_Construct_UClass_UInkpotTagUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotTagUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotTagUtility_Statics::ClassParams = {
	&UInkpotTagUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotTagUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotTagUtility_Statics::Class_MetaDataParams)
};
void UInkpotTagUtility::StaticRegisterNativesUInkpotTagUtility()
{
}
UClass* Z_Construct_UClass_UInkpotTagUtility()
{
	if (!Z_Registration_Info_UClass_UInkpotTagUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotTagUtility.OuterSingleton, Z_Construct_UClass_UInkpotTagUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotTagUtility.OuterSingleton;
}
UInkpotTagUtility::UInkpotTagUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotTagUtility);
UInkpotTagUtility::~UInkpotTagUtility() {}
// ********** End Class UInkpotTagUtility **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotTagUtility, UInkpotTagUtility::StaticClass, TEXT("UInkpotTagUtility"), &Z_Registration_Info_UClass_UInkpotTagUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotTagUtility), 1081682949U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h__Script_InkpotEditor_2241604520{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
