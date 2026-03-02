// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/InkpotValueLibrary.h"
#include "Inkpot/InkpotList.h"
#include "Inkpot/InkpotValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotValueLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotValueLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotValueLibrary_NoRegister();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotList();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotValueLibrary Function DefaultInkpotValue **************************
struct Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics
{
	struct InkpotValueLibrary_eventDefaultInkpotValue_Parms
	{
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DefaultInkpotValue\n\x09 * Default value for returning from functions.\n\x09 * \n\x09 * @returns an empty inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DefaultInkpotValue\nDefault value for returning from functions.\n\n@returns an empty inkpot value." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DefaultInkpotValue constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DefaultInkpotValue constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DefaultInkpotValue Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventDefaultInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::PropPointers) < 2048);
// ********** End Function DefaultInkpotValue Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "DefaultInkpotValue", 	Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::InkpotValueLibrary_eventDefaultInkpotValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::InkpotValueLibrary_eventDefaultInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execDefaultInkpotValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::DefaultInkpotValue();
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function DefaultInkpotValue ****************************

// ********** Begin Class UInkpotValueLibrary Function InkpotArrayValueAsBool **********************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsBool\n\x09 * Cast an Inkpot array value to a boolean.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns A boolean.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsBool\nCast an Inkpot array value to a boolean.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns A boolean." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotArrayValueAsBool constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotArrayValueAsBool constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotArrayValueAsBool Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::PropPointers) < 2048);
// ********** End Function InkpotArrayValueAsBool Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsBool", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsBool)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsBool(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotArrayValueAsBool ************************

// ********** Begin Class UInkpotValueLibrary Function InkpotArrayValueAsFloat *********************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsFloat\n\x09 * Cast an Inkpot array value to a floating point number.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns A float.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsFloat\nCast an Inkpot array value to a floating point number.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns A float." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotArrayValueAsFloat constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotArrayValueAsFloat constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotArrayValueAsFloat Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::PropPointers) < 2048);
// ********** End Function InkpotArrayValueAsFloat Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsFloat", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsFloat)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsFloat(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotArrayValueAsFloat ***********************

// ********** Begin Class UInkpotValueLibrary Function InkpotArrayValueAsInt ***********************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsInt\n\x09 * Cast an Inkpot array value to an integer.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns An integer.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsInt\nCast an Inkpot array value to an integer.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns An integer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotArrayValueAsInt constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotArrayValueAsInt constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotArrayValueAsInt Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::PropPointers) < 2048);
// ********** End Function InkpotArrayValueAsInt Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsInt", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsInt)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsInt(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotArrayValueAsInt *************************

// ********** Begin Class UInkpotValueLibrary Function InkpotArrayValueAsList **********************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsList_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsList\n\x09 * Cast Inkpot array value to an InkpotList.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns An InkpotList.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsList\nCast Inkpot array value to an InkpotList.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns An InkpotList." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotArrayValueAsList constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotArrayValueAsList constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotArrayValueAsList Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsList_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsList_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::PropPointers) < 2048);
// ********** End Function InkpotArrayValueAsList Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsList", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::InkpotValueLibrary_eventInkpotArrayValueAsList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::InkpotValueLibrary_eventInkpotArrayValueAsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsList)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsList(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotArrayValueAsList ************************

// ********** Begin Class UInkpotValueLibrary Function InkpotArrayValueAsString ********************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsString_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsString\n\x09 * Cast an Inkpot array value to a string.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns A string.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsString\nCast an Inkpot array value to a string.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns A string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotArrayValueAsString constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotArrayValueAsString constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotArrayValueAsString Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsString_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsString_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::PropPointers) < 2048);
// ********** End Function InkpotArrayValueAsString Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsString", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::InkpotValueLibrary_eventInkpotArrayValueAsString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::InkpotValueLibrary_eventInkpotArrayValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsString)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsString(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotArrayValueAsString **********************

// ********** Begin Class UInkpotValueLibrary Function InkpotValueAsBool ***************************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsBool_Parms
	{
		FInkpotValue Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsBool\n\x09 * Cast an Inkpot value to a boolean.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns A boolean.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsBool\nCast an Inkpot value to a boolean.\n\n@param Value - The Inkpot value to convert.\n@returns A boolean." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotValueAsBool constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotValueAsBool constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotValueAsBool Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsBool_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
void Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventInkpotValueAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventInkpotValueAsBool_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::PropPointers) < 2048);
// ********** End Function InkpotValueAsBool Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsBool", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::InkpotValueLibrary_eventInkpotValueAsBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::InkpotValueLibrary_eventInkpotValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsBool)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsBool(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotValueAsBool *****************************

// ********** Begin Class UInkpotValueLibrary Function InkpotValueAsFloat **************************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsFloat_Parms
	{
		FInkpotValue Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsFloat\n\x09 * Cast Inkpot value to a floating point number.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns A float.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsFloat\nCast Inkpot value to a floating point number.\n\n@param Value - The Inkpot value to convert.\n@returns A float." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotValueAsFloat constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotValueAsFloat constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotValueAsFloat Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsFloat_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::PropPointers) < 2048);
// ********** End Function InkpotValueAsFloat Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsFloat", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::InkpotValueLibrary_eventInkpotValueAsFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::InkpotValueLibrary_eventInkpotValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsFloat)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsFloat(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotValueAsFloat ****************************

// ********** Begin Class UInkpotValueLibrary Function InkpotValueAsInt ****************************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsInt_Parms
	{
		FInkpotValue Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsInt\n\x09 * Cast Inkpot value to an integer.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns An integer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsInt\nCast Inkpot value to an integer.\n\n@param Value - The Inkpot value to convert.\n@returns An integer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotValueAsInt constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotValueAsInt constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotValueAsInt Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsInt_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::PropPointers) < 2048);
// ********** End Function InkpotValueAsInt Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsInt", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::InkpotValueLibrary_eventInkpotValueAsInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::InkpotValueLibrary_eventInkpotValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsInt)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsInt(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotValueAsInt ******************************

// ********** Begin Class UInkpotValueLibrary Function InkpotValueAsList ***************************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsList_Parms
	{
		FInkpotValue Value;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsList\n\x09 * Cast Inkpot value to an InkpotList.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns An InkpotList.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsList\nCast Inkpot value to an InkpotList.\n\n@param Value - The Inkpot value to convert.\n@returns An InkpotList." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotValueAsList constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotValueAsList constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotValueAsList Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsList_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::PropPointers) < 2048);
// ********** End Function InkpotValueAsList Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsList", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::InkpotValueLibrary_eventInkpotValueAsList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::InkpotValueLibrary_eventInkpotValueAsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsList)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsList(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotValueAsList *****************************

// ********** Begin Class UInkpotValueLibrary Function InkpotValueAsString *************************
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsString_Parms
	{
		FInkpotValue Value;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsString\n\x09 * Cast Ink value to a string.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns A string.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsString\nCast Ink value to a string.\n\n@param Value - The Inkpot value to convert.\n@returns A string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InkpotValueAsString constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InkpotValueAsString constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InkpotValueAsString Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsString_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::PropPointers) < 2048);
// ********** End Function InkpotValueAsString Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsString", 	Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::InkpotValueLibrary_eventInkpotValueAsString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::InkpotValueLibrary_eventInkpotValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsString)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsString(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function InkpotValueAsString ***************************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotArrayValueBool **********************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics
{
	struct InkpotValueLibrary_eventIsInkpotArrayValueBool_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotArrayValueBool\n\x09 * Tests if the array Value is a boolean.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to test.\n\x09 * @returns true if the value is a a boolean.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotArrayValueBool\nTests if the array Value is a boolean.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to test.\n@returns true if the value is a a boolean." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotArrayValueBool constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotArrayValueBool constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotArrayValueBool Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueBool_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueBool_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotArrayValueBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotArrayValueBool_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotArrayValueBool Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotArrayValueBool", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::InkpotValueLibrary_eventIsInkpotArrayValueBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::InkpotValueLibrary_eventIsInkpotArrayValueBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotArrayValueBool)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotArrayValueBool(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotArrayValueBool ************************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotArrayValueFloat *********************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics
{
	struct InkpotValueLibrary_eventIsInkpotArrayValueFloat_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotArrayValueFloat\n\x09 * Tests if the array Value is a floating point value.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to test.\n\x09 * @returns true if the value is a float.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotArrayValueFloat\nTests if the array Value is a floating point value.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to test.\n@returns true if the value is a float." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotArrayValueFloat constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotArrayValueFloat constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotArrayValueFloat Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueFloat_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotArrayValueFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotArrayValueFloat_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotArrayValueFloat Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotArrayValueFloat", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::InkpotValueLibrary_eventIsInkpotArrayValueFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::InkpotValueLibrary_eventIsInkpotArrayValueFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotArrayValueFloat)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotArrayValueFloat(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotArrayValueFloat ***********************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotArrayValueInt ***********************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics
{
	struct InkpotValueLibrary_eventIsInkpotArrayValueInt_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotArrayValueInt\n\x09 * Tests if the array Value is an integer.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to test.\n\x09 * @returns true if the value is an int.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotArrayValueInt\nTests if the array Value is an integer.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to test.\n@returns true if the value is an int." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotArrayValueInt constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotArrayValueInt constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotArrayValueInt Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueInt_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueInt_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotArrayValueInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotArrayValueInt_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotArrayValueInt Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotArrayValueInt", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::InkpotValueLibrary_eventIsInkpotArrayValueInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::InkpotValueLibrary_eventIsInkpotArrayValueInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotArrayValueInt)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotArrayValueInt(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotArrayValueInt *************************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotArrayValueList **********************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics
{
	struct InkpotValueLibrary_eventIsInkpotArrayValueList_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotArrayValueList\n\x09 * Tests if the array Value is a list.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to test.\n\x09 * @returns true if the value is a list.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotArrayValueList\nTests if the array Value is a list.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to test.\n@returns true if the value is a list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotArrayValueList constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotArrayValueList constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotArrayValueList Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueList_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueList_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotArrayValueList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotArrayValueList_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotArrayValueList Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotArrayValueList", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::InkpotValueLibrary_eventIsInkpotArrayValueList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::InkpotValueLibrary_eventIsInkpotArrayValueList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotArrayValueList)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotArrayValueList(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotArrayValueList ************************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotArrayValueString ********************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics
{
	struct InkpotValueLibrary_eventIsInkpotArrayValueString_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotArrayValueString\n\x09 * Tests if the array Value is a string.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to test.\n\x09 * @returns true if the value is a string.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotArrayValueString\nTests if the array Value is a string.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to test.\n@returns true if the value is a string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotArrayValueString constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotArrayValueString constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotArrayValueString Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueString_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotArrayValueString_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotArrayValueString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotArrayValueString_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotArrayValueString Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotArrayValueString", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::InkpotValueLibrary_eventIsInkpotArrayValueString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::InkpotValueLibrary_eventIsInkpotArrayValueString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotArrayValueString)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotArrayValueString(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotArrayValueString **********************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotValueBool ***************************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics
{
	struct InkpotValueLibrary_eventIsInkpotValueBool_Parms
	{
		FInkpotValue Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotValueBool\n\x09 * Tests if the Value is a boolean.\n\x09 *\n\x09 * @param Value - The Inkpot value to test.\n\x09 * @returns true if the value is a a boolean.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotValueBool\nTests if the Value is a boolean.\n\n@param Value - The Inkpot value to test.\n@returns true if the value is a a boolean." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotValueBool constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotValueBool constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotValueBool Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotValueBool_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotValueBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotValueBool_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotValueBool Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotValueBool", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::InkpotValueLibrary_eventIsInkpotValueBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::InkpotValueLibrary_eventIsInkpotValueBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotValueBool)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotValueBool(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotValueBool *****************************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotValueFloat **************************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics
{
	struct InkpotValueLibrary_eventIsInkpotValueFloat_Parms
	{
		FInkpotValue Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotValueFloat\n\x09 * Tests if the Value is a floating point number.\n\x09 *\n\x09 * @param Value - The Inkpot value to test.\n\x09 * @returns true if the value is a float.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotValueFloat\nTests if the Value is a floating point number.\n\n@param Value - The Inkpot value to test.\n@returns true if the value is a float." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotValueFloat constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotValueFloat constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotValueFloat Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotValueFloat_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotValueFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotValueFloat_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotValueFloat Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotValueFloat", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::InkpotValueLibrary_eventIsInkpotValueFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::InkpotValueLibrary_eventIsInkpotValueFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotValueFloat)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotValueFloat(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotValueFloat ****************************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotValueInt ****************************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics
{
	struct InkpotValueLibrary_eventIsInkpotValueInt_Parms
	{
		FInkpotValue Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotValueInt\n\x09 * Tests if the Value is an integer.\n\x09 *\n\x09 * @param Value - The Inkpot value to test.\n\x09 * @returns true if the value is an integer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotValueInt\nTests if the Value is an integer.\n\n@param Value - The Inkpot value to test.\n@returns true if the value is an integer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotValueInt constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotValueInt constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotValueInt Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotValueInt_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotValueInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotValueInt_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotValueInt Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotValueInt", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::InkpotValueLibrary_eventIsInkpotValueInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::InkpotValueLibrary_eventIsInkpotValueInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotValueInt)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotValueInt(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotValueInt ******************************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotValueList ***************************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics
{
	struct InkpotValueLibrary_eventIsInkpotValueList_Parms
	{
		FInkpotValue Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotValueList\n\x09 * Tests if the Value is a List.\n\x09 *\n\x09 * @param Value - The Inkpot value to test.\n\x09 * @returns true if the value is a List.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotValueList\nTests if the Value is a List.\n\n@param Value - The Inkpot value to test.\n@returns true if the value is a List." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotValueList constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotValueList constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotValueList Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotValueList_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotValueList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotValueList_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotValueList Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotValueList", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::InkpotValueLibrary_eventIsInkpotValueList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::InkpotValueLibrary_eventIsInkpotValueList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotValueList)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotValueList(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotValueList *****************************

// ********** Begin Class UInkpotValueLibrary Function IsInkpotValueString *************************
struct Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics
{
	struct InkpotValueLibrary_eventIsInkpotValueString_Parms
	{
		FInkpotValue Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsInkpotValueString\n\x09 * Tests if the Value is a string.\n\x09 *\n\x09 * @param Value - The Inkpot value to test.\n\x09 * @returns true if the value is a string.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsInkpotValueString\nTests if the Value is a string.\n\n@param Value - The Inkpot value to test.\n@returns true if the value is a string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInkpotValueString constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInkpotValueString constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInkpotValueString Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventIsInkpotValueString_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
void Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventIsInkpotValueString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventIsInkpotValueString_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::PropPointers) < 2048);
// ********** End Function IsInkpotValueString Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "IsInkpotValueString", 	Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::InkpotValueLibrary_eventIsInkpotValueString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::InkpotValueLibrary_eventIsInkpotValueString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execIsInkpotValueString)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::IsInkpotValueString(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function IsInkpotValueString ***************************

// ********** Begin Class UInkpotValueLibrary Function MakeBoolInkpotValue *************************
struct Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics
{
	struct InkpotValueLibrary_eventMakeBoolInkpotValue_Parms
	{
		bool bValue;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeBoolInkpotValue\n\x09 * Create an Inkpot Value from a boolean.\n\x09 *\n\x09 * @param bValue - The boolean to convert.\n\x09 * @returns A new inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeBoolInkpotValue\nCreate an Inkpot Value from a boolean.\n\n@param bValue - The boolean to convert.\n@returns A new inkpot value." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MakeBoolInkpotValue constinit property declarations *******************
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeBoolInkpotValue constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeBoolInkpotValue Property Definitions ******************************
void Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventMakeBoolInkpotValue_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventMakeBoolInkpotValue_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeBoolInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::PropPointers) < 2048);
// ********** End Function MakeBoolInkpotValue Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "MakeBoolInkpotValue", 	Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::InkpotValueLibrary_eventMakeBoolInkpotValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::InkpotValueLibrary_eventMakeBoolInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execMakeBoolInkpotValue)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::MakeBoolInkpotValue(Z_Param_bValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function MakeBoolInkpotValue ***************************

// ********** Begin Class UInkpotValueLibrary Function MakeFloatInkpotValue ************************
struct Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics
{
	struct InkpotValueLibrary_eventMakeFloatInkpotValue_Parms
	{
		float Value;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeFloatInkpotValue\n\x09 * Create an Inkpot value from a floating point number.\n\x09 *\n\x09 * @param Value - The floating point number to convert.\n\x09 * @returns A new inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeFloatInkpotValue\nCreate an Inkpot value from a floating point number.\n\n@param Value - The floating point number to convert.\n@returns A new inkpot value." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MakeFloatInkpotValue constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeFloatInkpotValue constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeFloatInkpotValue Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeFloatInkpotValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeFloatInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::PropPointers) < 2048);
// ********** End Function MakeFloatInkpotValue Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "MakeFloatInkpotValue", 	Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::InkpotValueLibrary_eventMakeFloatInkpotValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::InkpotValueLibrary_eventMakeFloatInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execMakeFloatInkpotValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::MakeFloatInkpotValue(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function MakeFloatInkpotValue **************************

// ********** Begin Class UInkpotValueLibrary Function MakeIntInkpotValue **************************
struct Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics
{
	struct InkpotValueLibrary_eventMakeIntInkpotValue_Parms
	{
		int32 Value;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * MakeIntInkpotValue\n\x09 * Create an Inkpot Value from an integer.\n\x09 *\n\x09 * @param Value - The integer to convert.\n\x09 * @returns A new inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* MakeIntInkpotValue\n* Create an Inkpot Value from an integer.\n*\n* @param Value - The integer to convert.\n* @returns A new inkpot value." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MakeIntInkpotValue constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeIntInkpotValue constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeIntInkpotValue Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeIntInkpotValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeIntInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::PropPointers) < 2048);
// ********** End Function MakeIntInkpotValue Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "MakeIntInkpotValue", 	Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::InkpotValueLibrary_eventMakeIntInkpotValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::InkpotValueLibrary_eventMakeIntInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execMakeIntInkpotValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::MakeIntInkpotValue(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function MakeIntInkpotValue ****************************

// ********** Begin Class UInkpotValueLibrary Function MakeStringInkpotValue ***********************
struct Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics
{
	struct InkpotValueLibrary_eventMakeStringInkpotValue_Parms
	{
		FString Value;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeStringInkpotValue\n\x09 * Create an Inkpot value from a string.\n\x09 *\n\x09 * @param Value - The string to convert.\n\x09 * @returns A new inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeStringInkpotValue\nCreate an Inkpot value from a string.\n\n@param Value - The string to convert.\n@returns A new inkpot value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStringInkpotValue constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStringInkpotValue constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStringInkpotValue Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeStringInkpotValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeStringInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::PropPointers) < 2048);
// ********** End Function MakeStringInkpotValue Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "MakeStringInkpotValue", 	Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::InkpotValueLibrary_eventMakeStringInkpotValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::InkpotValueLibrary_eventMakeStringInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execMakeStringInkpotValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::MakeStringInkpotValue(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotValueLibrary Function MakeStringInkpotValue *************************

// ********** Begin Class UInkpotValueLibrary ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotValueLibrary;
UClass* UInkpotValueLibrary::GetPrivateStaticClass()
{
	using TClass = UInkpotValueLibrary;
	if (!Z_Registration_Info_UClass_UInkpotValueLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotValueLibrary"),
			Z_Registration_Info_UClass_UInkpotValueLibrary.InnerSingleton,
			StaticRegisterNativesUInkpotValueLibrary,
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
	return Z_Registration_Info_UClass_UInkpotValueLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotValueLibrary_NoRegister()
{
	return UInkpotValueLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotValueLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inkpot/InkpotValueLibrary.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
		{ "ScriptName", "InkpotValueLibrary" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotValueLibrary constinit property declarations **********************
// ********** End Class UInkpotValueLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DefaultInkpotValue"), .Pointer = &UInkpotValueLibrary::execDefaultInkpotValue },
		{ .NameUTF8 = UTF8TEXT("InkpotArrayValueAsBool"), .Pointer = &UInkpotValueLibrary::execInkpotArrayValueAsBool },
		{ .NameUTF8 = UTF8TEXT("InkpotArrayValueAsFloat"), .Pointer = &UInkpotValueLibrary::execInkpotArrayValueAsFloat },
		{ .NameUTF8 = UTF8TEXT("InkpotArrayValueAsInt"), .Pointer = &UInkpotValueLibrary::execInkpotArrayValueAsInt },
		{ .NameUTF8 = UTF8TEXT("InkpotArrayValueAsList"), .Pointer = &UInkpotValueLibrary::execInkpotArrayValueAsList },
		{ .NameUTF8 = UTF8TEXT("InkpotArrayValueAsString"), .Pointer = &UInkpotValueLibrary::execInkpotArrayValueAsString },
		{ .NameUTF8 = UTF8TEXT("InkpotValueAsBool"), .Pointer = &UInkpotValueLibrary::execInkpotValueAsBool },
		{ .NameUTF8 = UTF8TEXT("InkpotValueAsFloat"), .Pointer = &UInkpotValueLibrary::execInkpotValueAsFloat },
		{ .NameUTF8 = UTF8TEXT("InkpotValueAsInt"), .Pointer = &UInkpotValueLibrary::execInkpotValueAsInt },
		{ .NameUTF8 = UTF8TEXT("InkpotValueAsList"), .Pointer = &UInkpotValueLibrary::execInkpotValueAsList },
		{ .NameUTF8 = UTF8TEXT("InkpotValueAsString"), .Pointer = &UInkpotValueLibrary::execInkpotValueAsString },
		{ .NameUTF8 = UTF8TEXT("IsInkpotArrayValueBool"), .Pointer = &UInkpotValueLibrary::execIsInkpotArrayValueBool },
		{ .NameUTF8 = UTF8TEXT("IsInkpotArrayValueFloat"), .Pointer = &UInkpotValueLibrary::execIsInkpotArrayValueFloat },
		{ .NameUTF8 = UTF8TEXT("IsInkpotArrayValueInt"), .Pointer = &UInkpotValueLibrary::execIsInkpotArrayValueInt },
		{ .NameUTF8 = UTF8TEXT("IsInkpotArrayValueList"), .Pointer = &UInkpotValueLibrary::execIsInkpotArrayValueList },
		{ .NameUTF8 = UTF8TEXT("IsInkpotArrayValueString"), .Pointer = &UInkpotValueLibrary::execIsInkpotArrayValueString },
		{ .NameUTF8 = UTF8TEXT("IsInkpotValueBool"), .Pointer = &UInkpotValueLibrary::execIsInkpotValueBool },
		{ .NameUTF8 = UTF8TEXT("IsInkpotValueFloat"), .Pointer = &UInkpotValueLibrary::execIsInkpotValueFloat },
		{ .NameUTF8 = UTF8TEXT("IsInkpotValueInt"), .Pointer = &UInkpotValueLibrary::execIsInkpotValueInt },
		{ .NameUTF8 = UTF8TEXT("IsInkpotValueList"), .Pointer = &UInkpotValueLibrary::execIsInkpotValueList },
		{ .NameUTF8 = UTF8TEXT("IsInkpotValueString"), .Pointer = &UInkpotValueLibrary::execIsInkpotValueString },
		{ .NameUTF8 = UTF8TEXT("MakeBoolInkpotValue"), .Pointer = &UInkpotValueLibrary::execMakeBoolInkpotValue },
		{ .NameUTF8 = UTF8TEXT("MakeFloatInkpotValue"), .Pointer = &UInkpotValueLibrary::execMakeFloatInkpotValue },
		{ .NameUTF8 = UTF8TEXT("MakeIntInkpotValue"), .Pointer = &UInkpotValueLibrary::execMakeIntInkpotValue },
		{ .NameUTF8 = UTF8TEXT("MakeStringInkpotValue"), .Pointer = &UInkpotValueLibrary::execMakeStringInkpotValue },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue, "DefaultInkpotValue" }, // 1083073185
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool, "InkpotArrayValueAsBool" }, // 4133119824
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat, "InkpotArrayValueAsFloat" }, // 4054573176
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt, "InkpotArrayValueAsInt" }, // 4151679965
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList, "InkpotArrayValueAsList" }, // 4154415364
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString, "InkpotArrayValueAsString" }, // 2463512768
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool, "InkpotValueAsBool" }, // 451257742
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat, "InkpotValueAsFloat" }, // 4221116779
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt, "InkpotValueAsInt" }, // 402400649
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList, "InkpotValueAsList" }, // 15155266
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString, "InkpotValueAsString" }, // 2490719112
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueBool, "IsInkpotArrayValueBool" }, // 1227333620
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueFloat, "IsInkpotArrayValueFloat" }, // 2344320646
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueInt, "IsInkpotArrayValueInt" }, // 3525132983
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueList, "IsInkpotArrayValueList" }, // 1271043048
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotArrayValueString, "IsInkpotArrayValueString" }, // 3810937342
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueBool, "IsInkpotValueBool" }, // 1236773814
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueFloat, "IsInkpotValueFloat" }, // 1940505930
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueInt, "IsInkpotValueInt" }, // 3951968463
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueList, "IsInkpotValueList" }, // 129078171
		{ &Z_Construct_UFunction_UInkpotValueLibrary_IsInkpotValueString, "IsInkpotValueString" }, // 2486899472
		{ &Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue, "MakeBoolInkpotValue" }, // 1603568954
		{ &Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue, "MakeFloatInkpotValue" }, // 2559615645
		{ &Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue, "MakeIntInkpotValue" }, // 1781820229
		{ &Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue, "MakeStringInkpotValue" }, // 26495980
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotValueLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotValueLibrary_Statics
UObject* (*const Z_Construct_UClass_UInkpotValueLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotValueLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotValueLibrary_Statics::ClassParams = {
	&UInkpotValueLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotValueLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotValueLibrary_Statics::Class_MetaDataParams)
};
void UInkpotValueLibrary::StaticRegisterNativesUInkpotValueLibrary()
{
	UClass* Class = UInkpotValueLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotValueLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotValueLibrary()
{
	if (!Z_Registration_Info_UClass_UInkpotValueLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotValueLibrary.OuterSingleton, Z_Construct_UClass_UInkpotValueLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotValueLibrary.OuterSingleton;
}
UInkpotValueLibrary::UInkpotValueLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotValueLibrary);
UInkpotValueLibrary::~UInkpotValueLibrary() {}
// ********** End Class UInkpotValueLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotValueLibrary, UInkpotValueLibrary::StaticClass, TEXT("UInkpotValueLibrary"), &Z_Registration_Info_UClass_UInkpotValueLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotValueLibrary), 3283814039U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h__Script_Inkpot_1807911719{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
