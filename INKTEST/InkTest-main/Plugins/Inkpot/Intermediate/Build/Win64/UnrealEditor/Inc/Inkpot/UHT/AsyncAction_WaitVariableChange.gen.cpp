// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h"
#include "Inkpot/InkpotValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAsyncAction_WaitVariableChange() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UAsyncAction_WaitVariableChange();
INKPOT_API UClass* Z_Construct_UClass_UAsyncAction_WaitVariableChange_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpot_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FInkpotVariableChangeSignature ****************************************
struct Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics
{
	struct AsyncAction_WaitVariableChange_eventInkpotVariableChangeSignature_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FInkpotVariableChangeSignature constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FInkpotVariableChangeSignature constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FInkpotVariableChangeSignature Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventInkpotVariableChangeSignature_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventInkpotVariableChangeSignature_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventInkpotVariableChangeSignature_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FInkpotVariableChangeSignature Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitVariableChange, nullptr, "InkpotVariableChangeSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::AsyncAction_WaitVariableChange_eventInkpotVariableChangeSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::AsyncAction_WaitVariableChange_eventInkpotVariableChangeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAsyncAction_WaitVariableChange::FInkpotVariableChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& InkpotVariableChangeSignature, UInkpotStory* Story, const FString& Variable, FInkpotValue const& Value)
{
	struct AsyncAction_WaitVariableChange_eventInkpotVariableChangeSignature_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue Value;
	};
	AsyncAction_WaitVariableChange_eventInkpotVariableChangeSignature_Parms Parms;
	Parms.Story=Story;
	Parms.Variable=Variable;
	Parms.Value=Value;
	InkpotVariableChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FInkpotVariableChangeSignature ******************************************

// ********** Begin Class UAsyncAction_WaitVariableChange Function EndTask *************************
struct Z_Construct_UFunction_UAsyncAction_WaitVariableChange_EndTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Async Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* You must call this function manually when you want the AsyncTask to End\n\x09* For UMG Widgets, you would call it in the Widget's Destruct event\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to End\nFor UMG Widgets, you would call it in the Widget's Destruct event" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EndTask constinit property declarations *******************************
// ********** End Function EndTask constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_EndTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitVariableChange, nullptr, "EndTask", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitVariableChange_EndTask_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncAction_WaitVariableChange_EndTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitVariableChange_EndTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitVariableChange::execEndTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTask();
	P_NATIVE_END;
}
// ********** End Class UAsyncAction_WaitVariableChange Function EndTask ***************************

// ********** Begin Class UAsyncAction_WaitVariableChange Function ListenForVariableChange *********
struct Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics
{
	struct AsyncAction_WaitVariableChange_eventListenForVariableChange_Parms
	{
		UObject* WorldContextObject;
		FString VariableToListen;
		bool bTriggerOnce;
		UAsyncAction_WaitVariableChange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "VariableToListen" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Inkpot|Async Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This Task will listen for any Variable changes in the current Active Story\n\x09* @param VariableToListen Name of the Variable to listen for changes\n\x09* @param bTriggerOnce This Task will be automatically terminated upon the first Variable Change\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Task will listen for any Variable changes in the current Active Story\n@param VariableToListen Name of the Variable to listen for changes\n@param bTriggerOnce This Task will be automatically terminated upon the first Variable Change" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableToListen_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerOnce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ListenForVariableChange constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableToListen;
	static void NewProp_bTriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ListenForVariableChange constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ListenForVariableChange Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventListenForVariableChange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_VariableToListen = { "VariableToListen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventListenForVariableChange_Parms, VariableToListen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableToListen_MetaData), NewProp_VariableToListen_MetaData) };
void Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_bTriggerOnce_SetBit(void* Obj)
{
	((AsyncAction_WaitVariableChange_eventListenForVariableChange_Parms*)Obj)->bTriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_bTriggerOnce = { "bTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_WaitVariableChange_eventListenForVariableChange_Parms), &Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_bTriggerOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerOnce_MetaData), NewProp_bTriggerOnce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventListenForVariableChange_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_WaitVariableChange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_VariableToListen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_bTriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::PropPointers) < 2048);
// ********** End Function ListenForVariableChange Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitVariableChange, nullptr, "ListenForVariableChange", 	Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::AsyncAction_WaitVariableChange_eventListenForVariableChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::AsyncAction_WaitVariableChange_eventListenForVariableChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitVariableChange::execListenForVariableChange)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableToListen);
	P_GET_UBOOL(Z_Param_bTriggerOnce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_WaitVariableChange**)Z_Param__Result=UAsyncAction_WaitVariableChange::ListenForVariableChange(Z_Param_WorldContextObject,Z_Param_VariableToListen,Z_Param_bTriggerOnce);
	P_NATIVE_END;
}
// ********** End Class UAsyncAction_WaitVariableChange Function ListenForVariableChange ***********

// ********** Begin Class UAsyncAction_WaitVariableChange Function OnBeginStory ********************
struct Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics
{
	struct AsyncAction_WaitVariableChange_eventOnBeginStory_Parms
	{
		UInkpotStory* InStory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnBeginStory constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnBeginStory constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnBeginStory Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::NewProp_InStory = { "InStory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventOnBeginStory_Parms, InStory), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::NewProp_InStory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::PropPointers) < 2048);
// ********** End Function OnBeginStory Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitVariableChange, nullptr, "OnBeginStory", 	Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::AsyncAction_WaitVariableChange_eventOnBeginStory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::AsyncAction_WaitVariableChange_eventOnBeginStory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitVariableChange::execOnBeginStory)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_InStory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginStory(Z_Param_InStory);
	P_NATIVE_END;
}
// ********** End Class UAsyncAction_WaitVariableChange Function OnBeginStory **********************

// ********** Begin Class UAsyncAction_WaitVariableChange Function OnEndStory **********************
struct Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics
{
	struct AsyncAction_WaitVariableChange_eventOnEndStory_Parms
	{
		UInkpotStory* InStory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnEndStory constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnEndStory constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnEndStory Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::NewProp_InStory = { "InStory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventOnEndStory_Parms, InStory), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::NewProp_InStory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::PropPointers) < 2048);
// ********** End Function OnEndStory Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitVariableChange, nullptr, "OnEndStory", 	Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::AsyncAction_WaitVariableChange_eventOnEndStory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::AsyncAction_WaitVariableChange_eventOnEndStory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitVariableChange::execOnEndStory)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_InStory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndStory(Z_Param_InStory);
	P_NATIVE_END;
}
// ********** End Class UAsyncAction_WaitVariableChange Function OnEndStory ************************

// ********** Begin Class UAsyncAction_WaitVariableChange Function OnVariableChange ****************
struct Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics
{
	struct AsyncAction_WaitVariableChange_eventOnVariableChange_Parms
	{
		UInkpotStory* InStory;
		FString InVariable;
		FInkpotValue NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnVariableChange constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnVariableChange constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnVariableChange Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::NewProp_InStory = { "InStory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventOnVariableChange_Parms, InStory), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::NewProp_InVariable = { "InVariable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventOnVariableChange_Parms, InVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariable_MetaData), NewProp_InVariable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitVariableChange_eventOnVariableChange_Parms, NewValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::NewProp_InStory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::NewProp_InVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::PropPointers) < 2048);
// ********** End Function OnVariableChange Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitVariableChange, nullptr, "OnVariableChange", 	Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::AsyncAction_WaitVariableChange_eventOnVariableChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::AsyncAction_WaitVariableChange_eventOnVariableChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitVariableChange::execOnVariableChange)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_InStory);
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariable);
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVariableChange(Z_Param_InStory,Z_Param_InVariable,Z_Param_Out_NewValue);
	P_NATIVE_END;
}
// ********** End Class UAsyncAction_WaitVariableChange Function OnVariableChange ******************

// ********** Begin Class UAsyncAction_WaitVariableChange ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncAction_WaitVariableChange;
UClass* UAsyncAction_WaitVariableChange::GetPrivateStaticClass()
{
	using TClass = UAsyncAction_WaitVariableChange;
	if (!Z_Registration_Info_UClass_UAsyncAction_WaitVariableChange.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AsyncAction_WaitVariableChange"),
			Z_Registration_Info_UClass_UAsyncAction_WaitVariableChange.InnerSingleton,
			StaticRegisterNativesUAsyncAction_WaitVariableChange,
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
	return Z_Registration_Info_UClass_UAsyncAction_WaitVariableChange.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncAction_WaitVariableChange_NoRegister()
{
	return UAsyncAction_WaitVariableChange::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVariableChangeDelegate_MetaData[] = {
		{ "Category", "Inkpot|Async Actions" },
		{ "DisplayName", "Variable Changed" },
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inkpot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAsyncAction_WaitVariableChange constinit property declarations **********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVariableChangeDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentStory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inkpot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAsyncAction_WaitVariableChange constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EndTask"), .Pointer = &UAsyncAction_WaitVariableChange::execEndTask },
		{ .NameUTF8 = UTF8TEXT("ListenForVariableChange"), .Pointer = &UAsyncAction_WaitVariableChange::execListenForVariableChange },
		{ .NameUTF8 = UTF8TEXT("OnBeginStory"), .Pointer = &UAsyncAction_WaitVariableChange::execOnBeginStory },
		{ .NameUTF8 = UTF8TEXT("OnEndStory"), .Pointer = &UAsyncAction_WaitVariableChange::execOnEndStory },
		{ .NameUTF8 = UTF8TEXT("OnVariableChange"), .Pointer = &UAsyncAction_WaitVariableChange::execOnVariableChange },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_WaitVariableChange_EndTask, "EndTask" }, // 1505706480
		{ &Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature, "InkpotVariableChangeSignature__DelegateSignature" }, // 3098304485
		{ &Z_Construct_UFunction_UAsyncAction_WaitVariableChange_ListenForVariableChange, "ListenForVariableChange" }, // 2062542383
		{ &Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnBeginStory, "OnBeginStory" }, // 1046893353
		{ &Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnEndStory, "OnEndStory" }, // 406401299
		{ &Z_Construct_UFunction_UAsyncAction_WaitVariableChange_OnVariableChange, "OnVariableChange" }, // 2707014743
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_WaitVariableChange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics

// ********** Begin Class UAsyncAction_WaitVariableChange Property Definitions *********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::NewProp_OnVariableChangeDelegate = { "OnVariableChangeDelegate", nullptr, (EPropertyFlags)0x0010000010282000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_WaitVariableChange, OnVariableChangeDelegate), Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVariableChangeDelegate_MetaData), NewProp_OnVariableChangeDelegate_MetaData) }; // 3098304485
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_WaitVariableChange, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::NewProp_CurrentStory = { "CurrentStory", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_WaitVariableChange, CurrentStory), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStory_MetaData), NewProp_CurrentStory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::NewProp_Inkpot = { "Inkpot", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_WaitVariableChange, Inkpot), Z_Construct_UClass_UInkpot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inkpot_MetaData), NewProp_Inkpot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::NewProp_OnVariableChangeDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::NewProp_CurrentStory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::NewProp_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::PropPointers) < 2048);
// ********** End Class UAsyncAction_WaitVariableChange Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::ClassParams = {
	&UAsyncAction_WaitVariableChange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::Class_MetaDataParams)
};
void UAsyncAction_WaitVariableChange::StaticRegisterNativesUAsyncAction_WaitVariableChange()
{
	UClass* Class = UAsyncAction_WaitVariableChange::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAsyncAction_WaitVariableChange()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_WaitVariableChange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_WaitVariableChange.OuterSingleton, Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_WaitVariableChange.OuterSingleton;
}
UAsyncAction_WaitVariableChange::UAsyncAction_WaitVariableChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAsyncAction_WaitVariableChange);
UAsyncAction_WaitVariableChange::~UAsyncAction_WaitVariableChange() {}
// ********** End Class UAsyncAction_WaitVariableChange ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_WaitVariableChange, UAsyncAction_WaitVariableChange::StaticClass, TEXT("UAsyncAction_WaitVariableChange"), &Z_Registration_Info_UClass_UAsyncAction_WaitVariableChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_WaitVariableChange), 3340076196U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h__Script_Inkpot_254198124{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
