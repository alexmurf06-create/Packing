// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asset/InkpotStoryAssetFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotStoryAssetFactory() {}

// ********** Begin Cross Module References ********************************************************
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotStoryAssetFactory();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotStoryAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotStoryAssetFactory *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotStoryAssetFactory;
UClass* UInkpotStoryAssetFactory::GetPrivateStaticClass()
{
	using TClass = UInkpotStoryAssetFactory;
	if (!Z_Registration_Info_UClass_UInkpotStoryAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotStoryAssetFactory"),
			Z_Registration_Info_UClass_UInkpotStoryAssetFactory.InnerSingleton,
			StaticRegisterNativesUInkpotStoryAssetFactory,
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
	return Z_Registration_Info_UClass_UInkpotStoryAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotStoryAssetFactory_NoRegister()
{
	return UInkpotStoryAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotStoryAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Asset/InkpotStoryAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAssetFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotStoryAssetFactory constinit property declarations *****************
// ********** End Class UInkpotStoryAssetFactory constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStoryAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotStoryAssetFactory_Statics
UObject* (*const Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::ClassParams = {
	&UInkpotStoryAssetFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::Class_MetaDataParams)
};
void UInkpotStoryAssetFactory::StaticRegisterNativesUInkpotStoryAssetFactory()
{
}
UClass* Z_Construct_UClass_UInkpotStoryAssetFactory()
{
	if (!Z_Registration_Info_UClass_UInkpotStoryAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStoryAssetFactory.OuterSingleton, Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStoryAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotStoryAssetFactory);
UInkpotStoryAssetFactory::~UInkpotStoryAssetFactory() {}
// ********** End Class UInkpotStoryAssetFactory ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Asset_InkpotStoryAssetFactory_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStoryAssetFactory, UInkpotStoryAssetFactory::StaticClass, TEXT("UInkpotStoryAssetFactory"), &Z_Registration_Info_UClass_UInkpotStoryAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStoryAssetFactory), 3989334157U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Asset_InkpotStoryAssetFactory_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Asset_InkpotStoryAssetFactory_h__Script_InkpotEditor_726782623{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Asset_InkpotStoryAssetFactory_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Asset_InkpotStoryAssetFactory_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
