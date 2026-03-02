// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blotter/InkpotBlotter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotBlotter() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterString_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterVariable_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotBlotter();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotBlotter_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotBlotter Function FilterVariables **********************************
struct Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics
{
	struct InkpotBlotter_eventFilterVariables_Parms
	{
		TArray<UBlotterVariable*> Variables;
		FString Filter;
		TArray<UBlotterVariable*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FilterVariables constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FilterVariables constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FilterVariables Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventFilterVariables_Parms, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventFilterVariables_Parms, Filter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventFilterVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_Variables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_Variables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::PropPointers) < 2048);
// ********** End Function FilterVariables Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "FilterVariables", 	Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::InkpotBlotter_eventFilterVariables_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::InkpotBlotter_eventFilterVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_FilterVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_FilterVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execFilterVariables)
{
	P_GET_TARRAY_REF(UBlotterVariable*,Z_Param_Out_Variables);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
	P_GET_TARRAY_REF(UBlotterVariable*,Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FilterVariables(Z_Param_Out_Variables,Z_Param_Filter,Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function FilterVariables ************************************

// ********** Begin Class UInkpotBlotter Function GetAliveFlowNames ********************************
struct Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics
{
	struct InkpotBlotter_eventGetAliveFlowNames_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterString*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintPure, Category = \"Inkpot|Blotter\")\n//FString GetCurrentFlowName(UInkpotStory* Story);\n" },
#endif
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"Inkpot|Blotter\")\nFString GetCurrentFlowName(UInkpotStory* Story);" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAliveFlowNames constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAliveFlowNames constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAliveFlowNames Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetAliveFlowNames_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetAliveFlowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::PropPointers) < 2048);
// ********** End Function GetAliveFlowNames Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetAliveFlowNames", 	Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::InkpotBlotter_eventGetAliveFlowNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::InkpotBlotter_eventGetAliveFlowNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetAliveFlowNames)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterString*>*)Z_Param__Result=P_THIS->GetAliveFlowNames(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function GetAliveFlowNames **********************************

// ********** Begin Class UInkpotBlotter Function GetChoices ***************************************
struct Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics
{
	struct InkpotBlotter_eventGetChoices_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterString*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetChoices constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetChoices constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetChoices Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetChoices_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetChoices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::PropPointers) < 2048);
// ********** End Function GetChoices Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetChoices", 	Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::InkpotBlotter_eventGetChoices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::InkpotBlotter_eventGetChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetChoices)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterString*>*)Z_Param__Result=P_THIS->GetChoices(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function GetChoices *****************************************

// ********** Begin Class UInkpotBlotter Function GetCurrentTags ***********************************
struct Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics
{
	struct InkpotBlotter_eventGetCurrentTags_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterString*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintPure, Category = \"Inkpot|Blotter\")\n//FString currentText = GetCurrentText(UInkpotStory * Story);\n" },
#endif
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"Inkpot|Blotter\")\nFString currentText = GetCurrentText(UInkpotStory * Story);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentTags constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentTags constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentTags Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetCurrentTags_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetCurrentTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentTags Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetCurrentTags", 	Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::InkpotBlotter_eventGetCurrentTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::InkpotBlotter_eventGetCurrentTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetCurrentTags)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterString*>*)Z_Param__Result=P_THIS->GetCurrentTags(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function GetCurrentTags *************************************

// ********** Begin Class UInkpotBlotter Function GetOrigins ***************************************
struct Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics
{
	struct InkpotBlotter_eventGetOrigins_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterVariable*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOrigins constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOrigins constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOrigins Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetOrigins_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetOrigins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::PropPointers) < 2048);
// ********** End Function GetOrigins Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetOrigins", 	Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::InkpotBlotter_eventGetOrigins_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::InkpotBlotter_eventGetOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetOrigins)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterVariable*>*)Z_Param__Result=P_THIS->GetOrigins(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function GetOrigins *****************************************

// ********** Begin Class UInkpotBlotter Function GetVariables *************************************
struct Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics
{
	struct InkpotBlotter_eventGetVariables_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterVariable*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVariables constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVariables constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVariables Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetVariables_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::PropPointers) < 2048);
// ********** End Function GetVariables Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetVariables", 	Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::InkpotBlotter_eventGetVariables_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::InkpotBlotter_eventGetVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetVariables)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterVariable*>*)Z_Param__Result=P_THIS->GetVariables(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function GetVariables ***************************************

// ********** Begin Class UInkpotBlotter Function GlobalTags ***************************************
struct Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics
{
	struct InkpotBlotter_eventGlobalTags_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterString*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GlobalTags constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GlobalTags constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GlobalTags Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGlobalTags_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGlobalTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::PropPointers) < 2048);
// ********** End Function GlobalTags Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GlobalTags", 	Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::InkpotBlotter_eventGlobalTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::InkpotBlotter_eventGlobalTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GlobalTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGlobalTags)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterString*>*)Z_Param__Result=P_THIS->GlobalTags(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function GlobalTags *****************************************

// ********** Begin Class UInkpotBlotter Function OnDebugRefresh ***********************************
struct Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics
{
	struct InkpotBlotter_eventOnDebugRefresh_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDebugRefresh constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnDebugRefresh constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnDebugRefresh Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventOnDebugRefresh_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::PropPointers) < 2048);
// ********** End Function OnDebugRefresh Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "OnDebugRefresh", 	Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::InkpotBlotter_eventOnDebugRefresh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::InkpotBlotter_eventOnDebugRefresh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execOnDebugRefresh)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDebugRefresh(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function OnDebugRefresh *************************************

// ********** Begin Class UInkpotBlotter Function OnPIEEnd *****************************************
struct Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics
{
	struct InkpotBlotter_eventOnPIEEnd_Parms
	{
		bool bStandard;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPIEEnd constinit property declarations ******************************
	static void NewProp_bStandard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStandard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPIEEnd constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPIEEnd Property Definitions *****************************************
void Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::NewProp_bStandard_SetBit(void* Obj)
{
	((InkpotBlotter_eventOnPIEEnd_Parms*)Obj)->bStandard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::NewProp_bStandard = { "bStandard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotBlotter_eventOnPIEEnd_Parms), &Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::NewProp_bStandard_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::NewProp_bStandard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::PropPointers) < 2048);
// ********** End Function OnPIEEnd Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "OnPIEEnd", 	Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::InkpotBlotter_eventOnPIEEnd_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::InkpotBlotter_eventOnPIEEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execOnPIEEnd)
{
	P_GET_UBOOL(Z_Param_bStandard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPIEEnd(Z_Param_bStandard);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function OnPIEEnd *******************************************

// ********** Begin Class UInkpotBlotter Function OnPIEStart ***************************************
struct Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics
{
	struct InkpotBlotter_eventOnPIEStart_Parms
	{
		bool bStandard;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPIEStart constinit property declarations ****************************
	static void NewProp_bStandard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStandard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPIEStart constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPIEStart Property Definitions ***************************************
void Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::NewProp_bStandard_SetBit(void* Obj)
{
	((InkpotBlotter_eventOnPIEStart_Parms*)Obj)->bStandard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::NewProp_bStandard = { "bStandard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotBlotter_eventOnPIEStart_Parms), &Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::NewProp_bStandard_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::NewProp_bStandard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::PropPointers) < 2048);
// ********** End Function OnPIEStart Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "OnPIEStart", 	Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::InkpotBlotter_eventOnPIEStart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::InkpotBlotter_eventOnPIEStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_OnPIEStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_OnPIEStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execOnPIEStart)
{
	P_GET_UBOOL(Z_Param_bStandard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPIEStart(Z_Param_bStandard);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function OnPIEStart *****************************************

// ********** Begin Class UInkpotBlotter Function OnStoryBegin *************************************
struct Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics
{
	struct InkpotBlotter_eventOnStoryBegin_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStoryBegin constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnStoryBegin constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnStoryBegin Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventOnStoryBegin_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::PropPointers) < 2048);
// ********** End Function OnStoryBegin Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "OnStoryBegin", 	Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::InkpotBlotter_eventOnStoryBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::InkpotBlotter_eventOnStoryBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execOnStoryBegin)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStoryBegin(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotBlotter Function OnStoryBegin ***************************************

// ********** Begin Class UInkpotBlotter Function ReceiveOnDebugEnd ********************************
static FName NAME_UInkpotBlotter_ReceiveOnDebugEnd = FName(TEXT("ReceiveOnDebugEnd"));
void UInkpotBlotter::ReceiveOnDebugEnd()
{
	UFunction* Func = FindFunctionChecked(NAME_UInkpotBlotter_ReceiveOnDebugEnd);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "DisplayName", "OnDebugEnd" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveOnDebugEnd constinit property declarations *********************
// ********** End Function ReceiveOnDebugEnd constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "ReceiveOnDebugEnd", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInkpotBlotter Function ReceiveOnDebugEnd **********************************

// ********** Begin Class UInkpotBlotter Function ReceiveOnDebugRefresh ****************************
struct InkpotBlotter_eventReceiveOnDebugRefresh_Parms
{
	UInkpotStory* Story;
	bool bBuild;
};
static FName NAME_UInkpotBlotter_ReceiveOnDebugRefresh = FName(TEXT("ReceiveOnDebugRefresh"));
void UInkpotBlotter::ReceiveOnDebugRefresh(UInkpotStory* Story, bool bBuild)
{
	InkpotBlotter_eventReceiveOnDebugRefresh_Parms Parms;
	Parms.Story=Story;
	Parms.bBuild=bBuild ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UInkpotBlotter_ReceiveOnDebugRefresh);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "DisplayName", "OnDebugRefresh" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveOnDebugRefresh constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static void NewProp_bBuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuild;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReceiveOnDebugRefresh constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReceiveOnDebugRefresh Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventReceiveOnDebugRefresh_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::NewProp_bBuild_SetBit(void* Obj)
{
	((InkpotBlotter_eventReceiveOnDebugRefresh_Parms*)Obj)->bBuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::NewProp_bBuild = { "bBuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotBlotter_eventReceiveOnDebugRefresh_Parms), &Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::NewProp_bBuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::NewProp_bBuild,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::PropPointers) < 2048);
// ********** End Function ReceiveOnDebugRefresh Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "ReceiveOnDebugRefresh", 	Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::PropPointers), 
sizeof(InkpotBlotter_eventReceiveOnDebugRefresh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InkpotBlotter_eventReceiveOnDebugRefresh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInkpotBlotter Function ReceiveOnDebugRefresh ******************************

// ********** Begin Class UInkpotBlotter ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotBlotter;
UClass* UInkpotBlotter::GetPrivateStaticClass()
{
	using TClass = UInkpotBlotter;
	if (!Z_Registration_Info_UClass_UInkpotBlotter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotBlotter"),
			Z_Registration_Info_UClass_UInkpotBlotter.InnerSingleton,
			StaticRegisterNativesUInkpotBlotter,
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
	return Z_Registration_Info_UClass_UInkpotBlotter.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotBlotter_NoRegister()
{
	return UInkpotBlotter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotBlotter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blotter/InkpotBlotter.h" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotBlotter constinit property declarations ***************************
// ********** End Class UInkpotBlotter constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FilterVariables"), .Pointer = &UInkpotBlotter::execFilterVariables },
		{ .NameUTF8 = UTF8TEXT("GetAliveFlowNames"), .Pointer = &UInkpotBlotter::execGetAliveFlowNames },
		{ .NameUTF8 = UTF8TEXT("GetChoices"), .Pointer = &UInkpotBlotter::execGetChoices },
		{ .NameUTF8 = UTF8TEXT("GetCurrentTags"), .Pointer = &UInkpotBlotter::execGetCurrentTags },
		{ .NameUTF8 = UTF8TEXT("GetOrigins"), .Pointer = &UInkpotBlotter::execGetOrigins },
		{ .NameUTF8 = UTF8TEXT("GetVariables"), .Pointer = &UInkpotBlotter::execGetVariables },
		{ .NameUTF8 = UTF8TEXT("GlobalTags"), .Pointer = &UInkpotBlotter::execGlobalTags },
		{ .NameUTF8 = UTF8TEXT("OnDebugRefresh"), .Pointer = &UInkpotBlotter::execOnDebugRefresh },
		{ .NameUTF8 = UTF8TEXT("OnPIEEnd"), .Pointer = &UInkpotBlotter::execOnPIEEnd },
		{ .NameUTF8 = UTF8TEXT("OnPIEStart"), .Pointer = &UInkpotBlotter::execOnPIEStart },
		{ .NameUTF8 = UTF8TEXT("OnStoryBegin"), .Pointer = &UInkpotBlotter::execOnStoryBegin },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotBlotter_FilterVariables, "FilterVariables" }, // 1424991419
		{ &Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames, "GetAliveFlowNames" }, // 4173668936
		{ &Z_Construct_UFunction_UInkpotBlotter_GetChoices, "GetChoices" }, // 512639734
		{ &Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags, "GetCurrentTags" }, // 2292265559
		{ &Z_Construct_UFunction_UInkpotBlotter_GetOrigins, "GetOrigins" }, // 1572418209
		{ &Z_Construct_UFunction_UInkpotBlotter_GetVariables, "GetVariables" }, // 2423842158
		{ &Z_Construct_UFunction_UInkpotBlotter_GlobalTags, "GlobalTags" }, // 607968055
		{ &Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh, "OnDebugRefresh" }, // 4148337535
		{ &Z_Construct_UFunction_UInkpotBlotter_OnPIEEnd, "OnPIEEnd" }, // 2197881677
		{ &Z_Construct_UFunction_UInkpotBlotter_OnPIEStart, "OnPIEStart" }, // 1474900134
		{ &Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin, "OnStoryBegin" }, // 3936940364
		{ &Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugEnd, "ReceiveOnDebugEnd" }, // 3123854629
		{ &Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh, "ReceiveOnDebugRefresh" }, // 3001700418
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotBlotter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotBlotter_Statics
UObject* (*const Z_Construct_UClass_UInkpotBlotter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotBlotter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotBlotter_Statics::ClassParams = {
	&UInkpotBlotter::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotBlotter_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotBlotter_Statics::Class_MetaDataParams)
};
void UInkpotBlotter::StaticRegisterNativesUInkpotBlotter()
{
	UClass* Class = UInkpotBlotter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotBlotter_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotBlotter()
{
	if (!Z_Registration_Info_UClass_UInkpotBlotter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotBlotter.OuterSingleton, Z_Construct_UClass_UInkpotBlotter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotBlotter.OuterSingleton;
}
UInkpotBlotter::UInkpotBlotter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotBlotter);
UInkpotBlotter::~UInkpotBlotter() {}
// ********** End Class UInkpotBlotter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotBlotter, UInkpotBlotter::StaticClass, TEXT("UInkpotBlotter"), &Z_Registration_Info_UClass_UInkpotBlotter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotBlotter), 54204912U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h__Script_InkpotEditor_1811540564{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
