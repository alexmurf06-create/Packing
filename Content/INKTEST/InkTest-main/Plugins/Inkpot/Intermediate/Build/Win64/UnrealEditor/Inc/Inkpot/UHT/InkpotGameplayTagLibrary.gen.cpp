// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/InkpotGameplayTagLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotGameplayTagLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotGameplayTagLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotGameplayTagLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotGameplayTagLibrary ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotGameplayTagLibrary;
UClass* UInkpotGameplayTagLibrary::GetPrivateStaticClass()
{
	using TClass = UInkpotGameplayTagLibrary;
	if (!Z_Registration_Info_UClass_UInkpotGameplayTagLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotGameplayTagLibrary"),
			Z_Registration_Info_UClass_UInkpotGameplayTagLibrary.InnerSingleton,
			StaticRegisterNativesUInkpotGameplayTagLibrary,
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
	return Z_Registration_Info_UClass_UInkpotGameplayTagLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotGameplayTagLibrary_NoRegister()
{
	return UInkpotGameplayTagLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotGameplayTagLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// meta Categories filters, these will not work as macros; however defined here commented out for ease of search\n//#define INK_ORIGIN_GAMEPLAYTAG_FILTER \"Ink.Origin\"\n//#define INK_PATH_GAMEPLAYTAG_FILTER \"Ink.Path\"\n//#define INK_VARIABLE_GAMEPLAYTAG_FILTER \"Ink.Variable\"\n" },
#endif
		{ "IncludePath", "Inkpot/InkpotGameplayTagLibrary.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotGameplayTagLibrary.h" },
		{ "ScriptName", "InkpotGameplayTagLibrary" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "meta Categories filters, these will not work as macros; however defined here commented out for ease of search\n#define INK_ORIGIN_GAMEPLAYTAG_FILTER \"Ink.Origin\"\n#define INK_PATH_GAMEPLAYTAG_FILTER \"Ink.Path\"\n#define INK_VARIABLE_GAMEPLAYTAG_FILTER \"Ink.Variable\"" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotGameplayTagLibrary constinit property declarations ****************
// ********** End Class UInkpotGameplayTagLibrary constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotGameplayTagLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotGameplayTagLibrary_Statics
UObject* (*const Z_Construct_UClass_UInkpotGameplayTagLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotGameplayTagLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotGameplayTagLibrary_Statics::ClassParams = {
	&UInkpotGameplayTagLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotGameplayTagLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotGameplayTagLibrary_Statics::Class_MetaDataParams)
};
void UInkpotGameplayTagLibrary::StaticRegisterNativesUInkpotGameplayTagLibrary()
{
}
UClass* Z_Construct_UClass_UInkpotGameplayTagLibrary()
{
	if (!Z_Registration_Info_UClass_UInkpotGameplayTagLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotGameplayTagLibrary.OuterSingleton, Z_Construct_UClass_UInkpotGameplayTagLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotGameplayTagLibrary.OuterSingleton;
}
UInkpotGameplayTagLibrary::UInkpotGameplayTagLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotGameplayTagLibrary);
UInkpotGameplayTagLibrary::~UInkpotGameplayTagLibrary() {}
// ********** End Class UInkpotGameplayTagLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotGameplayTagLibrary_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotGameplayTagLibrary, UInkpotGameplayTagLibrary::StaticClass, TEXT("UInkpotGameplayTagLibrary"), &Z_Registration_Info_UClass_UInkpotGameplayTagLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotGameplayTagLibrary), 1837337807U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotGameplayTagLibrary_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotGameplayTagLibrary_h__Script_Inkpot_3642619816{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotGameplayTagLibrary_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotGameplayTagLibrary_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
