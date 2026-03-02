// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/InkpotValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotValue() {}

// ********** Begin Cross Module References ********************************************************
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInkpotValue ******************************************************
struct Z_Construct_UScriptStruct_FInkpotValue_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInkpotValue); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInkpotValue); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// a reference to the value type in the Ink VM \n" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "a reference to the value type in the Ink VM" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInkpotValue constinit property declarations **********************
// ********** End ScriptStruct FInkpotValue constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInkpotValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInkpotValue_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInkpotValue;
class UScriptStruct* FInkpotValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInkpotValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInkpotValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInkpotValue, (UObject*)Z_Construct_UPackage__Script_Inkpot(), TEXT("InkpotValue"));
	}
	return Z_Registration_Info_UScriptStruct_FInkpotValue.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInkpotValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	nullptr,
	&NewStructOps,
	"InkpotValue",
	nullptr,
	0,
	sizeof(FInkpotValue),
	alignof(FInkpotValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInkpotValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue()
{
	if (!Z_Registration_Info_UScriptStruct_FInkpotValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInkpotValue.InnerSingleton, Z_Construct_UScriptStruct_FInkpotValue_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInkpotValue.InnerSingleton);
}
// ********** End ScriptStruct FInkpotValue ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h__Script_Inkpot_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInkpotValue::StaticStruct, Z_Construct_UScriptStruct_FInkpotValue_Statics::NewStructOps, TEXT("InkpotValue"),&Z_Registration_Info_UScriptStruct_FInkpotValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInkpotValue), 3323750409U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h__Script_Inkpot_1801501169{
	TEXT("/Script/Inkpot"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h__Script_Inkpot_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h__Script_Inkpot_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
