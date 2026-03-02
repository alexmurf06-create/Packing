// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/InkpotList.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotList() {}

// ********** Begin Cross Module References ********************************************************
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotList();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInkpotList *******************************************************
struct Z_Construct_UScriptStruct_FInkpotList_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInkpotList); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInkpotList); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotList.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInkpotList constinit property declarations ***********************
// ********** End ScriptStruct FInkpotList constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInkpotList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInkpotList_Statics
static_assert(std::is_polymorphic<FInkpotList>() == std::is_polymorphic<FInkpotValue>(), "USTRUCT FInkpotList cannot be polymorphic unless super FInkpotValue is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInkpotList;
class UScriptStruct* FInkpotList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInkpotList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInkpotList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInkpotList, (UObject*)Z_Construct_UPackage__Script_Inkpot(), TEXT("InkpotList"));
	}
	return Z_Registration_Info_UScriptStruct_FInkpotList.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInkpotList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	Z_Construct_UScriptStruct_FInkpotValue,
	&NewStructOps,
	"InkpotList",
	nullptr,
	0,
	sizeof(FInkpotList),
	alignof(FInkpotList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInkpotList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInkpotList()
{
	if (!Z_Registration_Info_UScriptStruct_FInkpotList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInkpotList.InnerSingleton, Z_Construct_UScriptStruct_FInkpotList_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInkpotList.InnerSingleton);
}
// ********** End ScriptStruct FInkpotList *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotList_h__Script_Inkpot_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInkpotList::StaticStruct, Z_Construct_UScriptStruct_FInkpotList_Statics::NewStructOps, TEXT("InkpotList"),&Z_Registration_Info_UScriptStruct_FInkpotList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInkpotList), 1132618465U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotList_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotList_h__Script_Inkpot_3306143205{
	TEXT("/Script/Inkpot"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotList_h__Script_Inkpot_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotList_h__Script_Inkpot_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
