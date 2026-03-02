// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/InkpotStory.h"
#include "GameplayTagContainer.h"
#include "Inkpot/InkpotList.h"
#include "Inkpot/InkpotValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotStory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INKPOT_API UClass* Z_Construct_UClass_UInkpotChoice_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotLine_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotList();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStoryContinue ******************************************************
struct Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnStoryContinue_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStoryContinue constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStoryContinue constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStoryContinue Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnStoryContinue_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnStoryContinue Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnStoryContinue__DelegateSignature", 	Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryContinue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStoryContinue_DelegateWrapper(const FMulticastScriptDelegate& OnStoryContinue, UInkpotStory* Story)
{
	struct _Script_Inkpot_eventOnStoryContinue_Parms
	{
		UInkpotStory* Story;
	};
	_Script_Inkpot_eventOnStoryContinue_Parms Parms;
	Parms.Story=Story;
	OnStoryContinue.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStoryContinue ********************************************************

// ********** Begin Delegate FOnMakeChoice *********************************************************
struct Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnMakeChoice_Parms
	{
		UInkpotStory* Story;
		UInkpotChoice* Choice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMakeChoice constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMakeChoice constinit property declarations ***************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMakeChoice Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnMakeChoice_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnMakeChoice_Parms, Choice), Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Choice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMakeChoice Property Definitions **************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnMakeChoice__DelegateSignature", 	Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::_Script_Inkpot_eventOnMakeChoice_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::_Script_Inkpot_eventOnMakeChoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMakeChoice_DelegateWrapper(const FMulticastScriptDelegate& OnMakeChoice, UInkpotStory* Story, UInkpotChoice* Choice)
{
	struct _Script_Inkpot_eventOnMakeChoice_Parms
	{
		UInkpotStory* Story;
		UInkpotChoice* Choice;
	};
	_Script_Inkpot_eventOnMakeChoice_Parms Parms;
	Parms.Story=Story;
	Parms.Choice=Choice;
	OnMakeChoice.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMakeChoice ***********************************************************

// ********** Begin Delegate FOnChoosePath *********************************************************
struct Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnChoosePath_Parms
	{
		UInkpotStory* Story;
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnChoosePath constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnChoosePath constinit property declarations ***************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnChoosePath Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnChoosePath_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnChoosePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnChoosePath Property Definitions **************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnChoosePath__DelegateSignature", 	Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::_Script_Inkpot_eventOnChoosePath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::_Script_Inkpot_eventOnChoosePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChoosePath_DelegateWrapper(const FMulticastScriptDelegate& OnChoosePath, UInkpotStory* Story, const FString& Path)
{
	struct _Script_Inkpot_eventOnChoosePath_Parms
	{
		UInkpotStory* Story;
		FString Path;
	};
	_Script_Inkpot_eventOnChoosePath_Parms Parms;
	Parms.Story=Story;
	Parms.Path=Path;
	OnChoosePath.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnChoosePath ***********************************************************

// ********** Begin Delegate FOnSwitchFlow *********************************************************
struct Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnSwitchFlow_Parms
	{
		UInkpotStory* Story;
		FString Flow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSwitchFlow constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Flow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSwitchFlow constinit property declarations ***************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSwitchFlow Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnSwitchFlow_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnSwitchFlow_Parms, Flow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flow_MetaData), NewProp_Flow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Flow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSwitchFlow Property Definitions **************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnSwitchFlow__DelegateSignature", 	Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::_Script_Inkpot_eventOnSwitchFlow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::_Script_Inkpot_eventOnSwitchFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSwitchFlow_DelegateWrapper(const FMulticastScriptDelegate& OnSwitchFlow, UInkpotStory* Story, const FString& Flow)
{
	struct _Script_Inkpot_eventOnSwitchFlow_Parms
	{
		UInkpotStory* Story;
		FString Flow;
	};
	_Script_Inkpot_eventOnSwitchFlow_Parms Parms;
	Parms.Story=Story;
	Parms.Flow=Flow;
	OnSwitchFlow.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSwitchFlow ***********************************************************

// ********** Begin Delegate FOnInkpotVariableChange ***********************************************
struct Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnInkpotVariableChange_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnInkpotVariableChange constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnInkpotVariableChange constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnInkpotVariableChange Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnInkpotVariableChange_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnInkpotVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnInkpotVariableChange_Parms, NewValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnInkpotVariableChange Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnInkpotVariableChange__DelegateSignature", 	Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::_Script_Inkpot_eventOnInkpotVariableChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::_Script_Inkpot_eventOnInkpotVariableChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInkpotVariableChange_DelegateWrapper(const FScriptDelegate& OnInkpotVariableChange, UInkpotStory* Story, const FString& Variable, FInkpotValue const& NewValue)
{
	struct _Script_Inkpot_eventOnInkpotVariableChange_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue NewValue;
	};
	_Script_Inkpot_eventOnInkpotVariableChange_Parms Parms;
	Parms.Story=Story;
	Parms.Variable=Variable;
	Parms.NewValue=NewValue;
	OnInkpotVariableChange.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnInkpotVariableChange *************************************************

// ********** Begin Delegate FInkpotExternalFunction ***********************************************
struct Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventInkpotExternalFunction_Parms
	{
		TArray<FInkpotValue> Values;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FInkpotExternalFunction constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FInkpotExternalFunction constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FInkpotExternalFunction Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventInkpotExternalFunction_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventInkpotExternalFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FInkpotExternalFunction Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "InkpotExternalFunction__DelegateSignature", 	Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::_Script_Inkpot_eventInkpotExternalFunction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::_Script_Inkpot_eventInkpotExternalFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FInkpotValue FInkpotExternalFunction_DelegateWrapper(const FScriptDelegate& InkpotExternalFunction, TArray<FInkpotValue> const& Values)
{
	struct _Script_Inkpot_eventInkpotExternalFunction_Parms
	{
		TArray<FInkpotValue> Values;
		FInkpotValue ReturnValue;
	};
	_Script_Inkpot_eventInkpotExternalFunction_Parms Parms;
	Parms.Values=Values;
	InkpotExternalFunction.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// ********** End Delegate FInkpotExternalFunction *************************************************

// ********** Begin Delegate FOnStoryLoadJSON ******************************************************
struct Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnStoryLoadJSON_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStoryLoadJSON constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStoryLoadJSON constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStoryLoadJSON Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnStoryLoadJSON_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnStoryLoadJSON Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnStoryLoadJSON__DelegateSignature", 	Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryLoadJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryLoadJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStoryLoadJSON_DelegateWrapper(const FMulticastScriptDelegate& OnStoryLoadJSON, UInkpotStory* Story)
{
	struct _Script_Inkpot_eventOnStoryLoadJSON_Parms
	{
		UInkpotStory* Story;
	};
	_Script_Inkpot_eventOnStoryLoadJSON_Parms Parms;
	Parms.Story=Story;
	OnStoryLoadJSON.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStoryLoadJSON ********************************************************

// ********** Begin Delegate FOnLineComplete *******************************************************
struct Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnLineComplete_Parms
	{
		UInkpotStory* Story;
		FName Context;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLineComplete constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Context;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLineComplete constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLineComplete Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnLineComplete_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnLineComplete_Parms, Context), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
void Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_Inkpot_eventOnLineComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Inkpot_eventOnLineComplete_Parms), &Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLineComplete Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnLineComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::_Script_Inkpot_eventOnLineComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::_Script_Inkpot_eventOnLineComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLineComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLineComplete, UInkpotStory* Story, FName const& Context, bool bSuccess)
{
	struct _Script_Inkpot_eventOnLineComplete_Parms
	{
		UInkpotStory* Story;
		FName Context;
		bool bSuccess;
	};
	_Script_Inkpot_eventOnLineComplete_Parms Parms;
	Parms.Story=Story;
	Parms.Context=Context;
	Parms.bSuccess=bSuccess ? true : false;
	OnLineComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLineComplete *********************************************************

// ********** Begin Class UInkpotStory Function BindExternalFunction *******************************
struct Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics
{
	struct InkpotStory_eventBindExternalFunction_Parms
	{
		FString FunctionName;
		FScriptDelegate Function;
		bool bLookAheadSafe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * BindExternalFunction\n\x09 * Binds a blueprint or C++ function as an external call from Ink. \n\x09 *\n\x09 * @param FunctionName - Name of the function as it will be called from the context of the Ink script.\n\x09 * @param Function - Function, event or delegate to be called.\n\x09 * @param bLookAheadSafe - Whether the ink VM can safely call this function when parsing future content. \n\x09 *                        If your function is being called twice, set this to false.\n\x09 */" },
#endif
		{ "CPP_Default_bLookAheadSafe", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BindExternalFunction\nBinds a blueprint or C++ function as an external call from Ink.\n\n@param FunctionName - Name of the function as it will be called from the context of the Ink script.\n@param Function - Function, event or delegate to be called.\n@param bLookAheadSafe - Whether the ink VM can safely call this function when parsing future content.\n                       If your function is being called twice, set this to false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "DisplayName", "Function" },
	};
#endif // WITH_METADATA

// ********** Begin Function BindExternalFunction constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Function;
	static void NewProp_bLookAheadSafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLookAheadSafe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BindExternalFunction constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BindExternalFunction Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventBindExternalFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventBindExternalFunction_Parms, Function), Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) }; // 1629065697
void Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe_SetBit(void* Obj)
{
	((InkpotStory_eventBindExternalFunction_Parms*)Obj)->bLookAheadSafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe = { "bLookAheadSafe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventBindExternalFunction_Parms), &Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers) < 2048);
// ********** End Function BindExternalFunction Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "BindExternalFunction", 	Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::InkpotStory_eventBindExternalFunction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::InkpotStory_eventBindExternalFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_BindExternalFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execBindExternalFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Function);
	P_GET_UBOOL(Z_Param_bLookAheadSafe);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindExternalFunction(Z_Param_FunctionName,FInkpotExternalFunction(Z_Param_Function),Z_Param_bLookAheadSafe);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function BindExternalFunction *********************************

// ********** Begin Class UInkpotStory Function CanContinue ****************************************
struct Z_Construct_UFunction_UInkpotStory_CanContinue_Statics
{
	struct InkpotStory_eventCanContinue_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * CanContinue\n\x09 * Tests if the story can continue - the story still has content, and no choices. \n\x09 *\n\x09 * @returns True if there is content, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CanContinue\nTests if the story can continue - the story still has content, and no choices.\n\n@returns True if there is content, false otherwise." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CanContinue constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanContinue constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanContinue Property Definitions **************************************
void Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventCanContinue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventCanContinue_Parms), &Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers) < 2048);
// ********** End Function CanContinue Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "CanContinue", 	Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::InkpotStory_eventCanContinue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::InkpotStory_eventCanContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_CanContinue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execCanContinue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanContinue();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function CanContinue ******************************************

// ********** Begin Class UInkpotStory Function ChooseChoice ***************************************
struct Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics
{
	struct InkpotStory_eventChooseChoice_Parms
	{
		UInkpotChoice* Choice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChooseChoice\n\x09 * Choose a choice at a decision point in the story.\n\x09 *\n\x09 * @param Choice - A choice, typiclaly from the results given by GetCurrentChoices. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChooseChoice\nChoose a choice at a decision point in the story.\n\n@param Choice - A choice, typiclaly from the results given by GetCurrentChoices." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ChooseChoice constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChooseChoice constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChooseChoice Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChooseChoice_Parms, Choice), Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::NewProp_Choice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers) < 2048);
// ********** End Function ChooseChoice Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChooseChoice", 	Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::InkpotStory_eventChooseChoice_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::InkpotStory_eventChooseChoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChooseChoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChooseChoice)
{
	P_GET_OBJECT(UInkpotChoice,Z_Param_Choice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseChoice(Z_Param_Choice);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ChooseChoice *****************************************

// ********** Begin Class UInkpotStory Function ChooseChoiceIndex **********************************
struct Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics
{
	struct InkpotStory_eventChooseChoiceIndex_Parms
	{
		int32 Choice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChooseChoiceIndex\n\x09 * Choose a choice at a decision point in the story.\n\x09 *\n\x09 * @param Choice - An index into the array returned by GetCurrentChoices. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChooseChoiceIndex\nChoose a choice at a decision point in the story.\n\n@param Choice - An index into the array returned by GetCurrentChoices." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ChooseChoiceIndex constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Choice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChooseChoiceIndex constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChooseChoiceIndex Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChooseChoiceIndex_Parms, Choice), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::NewProp_Choice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers) < 2048);
// ********** End Function ChooseChoiceIndex Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChooseChoiceIndex", 	Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::InkpotStory_eventChooseChoiceIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::InkpotStory_eventChooseChoiceIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChooseChoiceIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Choice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseChoiceIndex(Z_Param_Choice);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ChooseChoiceIndex ************************************

// ********** Begin Class UInkpotStory Function ChoosePath *****************************************
struct Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics
{
	struct InkpotStory_eventChoosePath_Parms
	{
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChoosePath\n\x09 * Choose a new point of execution for the current flow.\n\x09 *\n\x09 * @param Path - Knot and\\or stitch of where to start.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChoosePath\nChoose a new point of execution for the current flow.\n\n@param Path - Knot and\\or stitch of where to start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChoosePath constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChoosePath constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChoosePath Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers) < 2048);
// ********** End Function ChoosePath Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChoosePath", 	Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::InkpotStory_eventChoosePath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::InkpotStory_eventChoosePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChoosePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChoosePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChoosePath(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ChoosePath *******************************************

// ********** Begin Class UInkpotStory Function ChoosePathGT ***************************************
struct Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics
{
	struct InkpotStory_eventChoosePathGT_Parms
	{
		FGameplayTag Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Path" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChoosePathGT\n\x09 * ( GameplayTag version of ChoosePath ) \n\x09 * Choose a new point of execution for the current flow.\n\x09 *\n\x09 * @param Path - Knot and\\or stitch of where to start.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChoosePathGT\n( GameplayTag version of ChoosePath )\nChoose a new point of execution for the current flow.\n\n@param Path - Knot and\\or stitch of where to start." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ChoosePathGT constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChoosePathGT constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChoosePathGT Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePathGT_Parms, Path), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::PropPointers) < 2048);
// ********** End Function ChoosePathGT Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChoosePathGT", 	Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::InkpotStory_eventChoosePathGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::InkpotStory_eventChoosePathGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChoosePathGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChoosePathGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChoosePathGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChoosePathGT(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ChoosePathGT *****************************************

// ********** Begin Class UInkpotStory Function ChoosePathString ***********************************
struct Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics
{
	struct InkpotStory_eventChoosePathString_Parms
	{
		FString Path;
		TArray<FInkpotValue> Values;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChoosePathString\n\x09 * Choose a new point of execution for the current flow. Passing paramters to the story.\n\x09 *\n\x09 * @param Path - Knot and\\or stitch of where to start.\n\x09 * @param Values - Array of values to pass to the knot\\stitch.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChoosePathString\nChoose a new point of execution for the current flow. Passing paramters to the story.\n\n@param Path - Knot and\\or stitch of where to start.\n@param Values - Array of values to pass to the knot\\stitch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChoosePathString constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChoosePathString constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChoosePathString Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePathString_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePathString_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers) < 2048);
// ********** End Function ChoosePathString Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChoosePathString", 	Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::InkpotStory_eventChoosePathString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::InkpotStory_eventChoosePathString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChoosePathString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChoosePathString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChoosePathString(Z_Param_Path,Z_Param_Out_Values);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ChoosePathString *************************************

// ********** Begin Class UInkpotStory Function ChoosePathStringGT *********************************
struct Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics
{
	struct InkpotStory_eventChoosePathStringGT_Parms
	{
		FGameplayTag Path;
		TArray<FInkpotValue> Values;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Path" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChoosePathStringGT\n\x09 * ( GameplayTag version of ChoosePathString ) \n\x09 * Choose a new point of execution for the current flow. Passing paramters to the story.\n\x09 *\n\x09 * @param Path - Knot and\\or stitch of where to start.\n\x09 * @param Values - Array of values to pass to the knot\\stitch.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChoosePathStringGT\n( GameplayTag version of ChoosePathString )\nChoose a new point of execution for the current flow. Passing paramters to the story.\n\n@param Path - Knot and\\or stitch of where to start.\n@param Values - Array of values to pass to the knot\\stitch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChoosePathStringGT constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChoosePathStringGT constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChoosePathStringGT Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePathStringGT_Parms, Path), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePathStringGT_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::PropPointers) < 2048);
// ********** End Function ChoosePathStringGT Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChoosePathStringGT", 	Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::InkpotStory_eventChoosePathStringGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::InkpotStory_eventChoosePathStringGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChoosePathStringGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Path);
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChoosePathStringGT(Z_Param_Path,Z_Param_Out_Values);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ChoosePathStringGT ***********************************

// ********** Begin Class UInkpotStory Function ClearAllVariableObservers **************************
struct Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics
{
	struct InkpotStory_eventClearAllVariableObservers_Parms
	{
		FString Variable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ClearAllVariableObservers\n\x09 * Clears all delegate bindings for the named variable.\n\x09 *\n\x09 * @param Variable - The name of the variable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ClearAllVariableObservers\nClears all delegate bindings for the named variable.\n\n@param Variable - The name of the variable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearAllVariableObservers constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearAllVariableObservers constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearAllVariableObservers Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearAllVariableObservers_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::PropPointers) < 2048);
// ********** End Function ClearAllVariableObservers Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ClearAllVariableObservers", 	Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::InkpotStory_eventClearAllVariableObservers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::InkpotStory_eventClearAllVariableObservers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execClearAllVariableObservers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllVariableObservers(Z_Param_Variable);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ClearAllVariableObservers ****************************

// ********** Begin Class UInkpotStory Function ClearAllVariableObserversGT ************************
struct Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics
{
	struct InkpotStory_eventClearAllVariableObserversGT_Parms
	{
		FGameplayTag Variable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ClearAllVariableObserversGT\n\x09 * ( GameplayTag version of ClearAllVariableObservers ) \n\x09 * Clears all delegate bindings for the named variable.\n\x09 *\n\x09 * @param Variable - The name of the variable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ClearAllVariableObserversGT\n( GameplayTag version of ClearAllVariableObservers )\nClears all delegate bindings for the named variable.\n\n@param Variable - The name of the variable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearAllVariableObserversGT constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearAllVariableObserversGT constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearAllVariableObserversGT Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearAllVariableObserversGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::PropPointers) < 2048);
// ********** End Function ClearAllVariableObserversGT Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ClearAllVariableObserversGT", 	Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::InkpotStory_eventClearAllVariableObserversGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::InkpotStory_eventClearAllVariableObserversGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execClearAllVariableObserversGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllVariableObserversGT(Z_Param_Variable);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ClearAllVariableObserversGT **************************

// ********** Begin Class UInkpotStory Function ClearVariableChange ********************************
struct Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics
{
	struct InkpotStory_eventClearVariableChange_Parms
	{
		const UObject* Owner;
		FString Variable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ClearVariableChange\n\x09 * Clears delegate binding created by SetOnVariableChange.\n\x09 *\n\x09 * @param Owner - Object that initially called SetOnVariableChange\n\x09 * @param Variable - The name of the variable.\n\x09 */" },
#endif
		{ "DefaultToSelf", "Owner" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ClearVariableChange\nClears delegate binding created by SetOnVariableChange.\n\n@param Owner - Object that initially called SetOnVariableChange\n@param Variable - The name of the variable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearVariableChange constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearVariableChange constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearVariableChange Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearVariableChange_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventClearVariableChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventClearVariableChange_Parms), &Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers) < 2048);
// ********** End Function ClearVariableChange Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ClearVariableChange", 	Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::InkpotStory_eventClearVariableChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::InkpotStory_eventClearVariableChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ClearVariableChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execClearVariableChange)
{
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearVariableChange(Z_Param_Owner,Z_Param_Variable);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ClearVariableChange **********************************

// ********** Begin Class UInkpotStory Function ClearVariableChangeGT ******************************
struct Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics
{
	struct InkpotStory_eventClearVariableChangeGT_Parms
	{
		const UObject* Owner;
		FGameplayTag Variable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ClearVariableChangeGT\n\x09 * ( GameplayTag version of ClearVariableChange ) \n\x09 * Clears delegate binding created by SetOnVariableChange.\n\x09 *\n\x09 * @param Owner - Object that initially called SetOnVariableChange\n\x09 * @param Variable - The name of the variable.\n\x09 */" },
#endif
		{ "DefaultToSelf", "Owner" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ClearVariableChangeGT\n( GameplayTag version of ClearVariableChange )\nClears delegate binding created by SetOnVariableChange.\n\n@param Owner - Object that initially called SetOnVariableChange\n@param Variable - The name of the variable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearVariableChangeGT constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearVariableChangeGT constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearVariableChangeGT Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearVariableChangeGT_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearVariableChangeGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventClearVariableChangeGT_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventClearVariableChangeGT_Parms), &Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::PropPointers) < 2048);
// ********** End Function ClearVariableChangeGT Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ClearVariableChangeGT", 	Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::InkpotStory_eventClearVariableChangeGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::InkpotStory_eventClearVariableChangeGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execClearVariableChangeGT)
{
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearVariableChangeGT(Z_Param_Owner,Z_Param_Variable);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ClearVariableChangeGT ********************************

// ********** Begin Class UInkpotStory Function Continue *******************************************
struct Z_Construct_UFunction_UInkpotStory_Continue_Statics
{
	struct InkpotStory_eventContinue_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Continue\n\x09 * Executes story script until choices or a newline are encountered.\n\x09 *\n\x09 * @returns The current line of text for the story.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continue\nExecutes story script until choices or a newline are encountered.\n\n@returns The current line of text for the story." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Continue constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Continue constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Continue Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_Continue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_Continue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers) < 2048);
// ********** End Function Continue Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_Continue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "Continue", 	Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_Continue_Statics::InkpotStory_eventContinue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_Continue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_Continue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_Continue_Statics::InkpotStory_eventContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_Continue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_Continue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execContinue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->Continue();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function Continue *********************************************

// ********** Begin Class UInkpotStory Function ContinueIfYouCan ***********************************
struct Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics
{
	struct InkpotStory_eventContinueIfYouCan_Parms
	{
		bool Continued;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContinueIfYouCan\n\x09 * If the story can continue, thie executes story script until choices or a newline are encountered.\n\x09 *\n\x09 * @param Continued - returns if the story continued or not\n\x09 * @returns The current line of text for the story.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContinueIfYouCan\nIf the story can continue, thie executes story script until choices or a newline are encountered.\n\n@param Continued - returns if the story continued or not\n@returns The current line of text for the story." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ContinueIfYouCan constinit property declarations **********************
	static void NewProp_Continued_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Continued;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ContinueIfYouCan constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ContinueIfYouCan Property Definitions *********************************
void Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::NewProp_Continued_SetBit(void* Obj)
{
	((InkpotStory_eventContinueIfYouCan_Parms*)Obj)->Continued = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::NewProp_Continued = { "Continued", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventContinueIfYouCan_Parms), &Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::NewProp_Continued_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueIfYouCan_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::NewProp_Continued,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::PropPointers) < 2048);
// ********** End Function ContinueIfYouCan Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ContinueIfYouCan", 	Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::InkpotStory_eventContinueIfYouCan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::InkpotStory_eventContinueIfYouCan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execContinueIfYouCan)
{
	P_GET_UBOOL_REF(Z_Param_Out_Continued);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ContinueIfYouCan(Z_Param_Out_Continued);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ContinueIfYouCan *************************************

// ********** Begin Class UInkpotStory Function ContinueMaximally **********************************
struct Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics
{
	struct InkpotStory_eventContinueMaximally_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContinueMaximally\n\x09 * Executes story script until choice or no more content.\n\x09 *\n\x09 * @returns The collated lines of text up to the point of termination.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContinueMaximally\nExecutes story script until choice or no more content.\n\n@returns The collated lines of text up to the point of termination." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ContinueMaximally constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ContinueMaximally constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ContinueMaximally Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximally_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers) < 2048);
// ********** End Function ContinueMaximally Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ContinueMaximally", 	Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::InkpotStory_eventContinueMaximally_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::InkpotStory_eventContinueMaximally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ContinueMaximally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execContinueMaximally)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ContinueMaximally();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ContinueMaximally ************************************

// ********** Begin Class UInkpotStory Function ContinueMaximallyAtPath ****************************
struct Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics
{
	struct InkpotStory_eventContinueMaximallyAtPath_Parms
	{
		FString Path;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContinueMaximallyAtPath\n\x09 * Executes story script until choice or no more content, from a specified point in the story.\n\x09 *\n\x09 * @param Path - The knot and\\or the stitch to start the story at, \n\x09 * @returns The collated lines of text up to the point of termination.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContinueMaximallyAtPath\nExecutes story script until choice or no more content, from a specified point in the story.\n\n@param Path - The knot and\\or the stitch to start the story at,\n@returns The collated lines of text up to the point of termination." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ContinueMaximallyAtPath constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ContinueMaximallyAtPath constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ContinueMaximallyAtPath Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximallyAtPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximallyAtPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers) < 2048);
// ********** End Function ContinueMaximallyAtPath Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ContinueMaximallyAtPath", 	Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::InkpotStory_eventContinueMaximallyAtPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::InkpotStory_eventContinueMaximallyAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execContinueMaximallyAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ContinueMaximallyAtPath(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ContinueMaximallyAtPath ******************************

// ********** Begin Class UInkpotStory Function ContinueMaximallyAtPathGT **************************
struct Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics
{
	struct InkpotStory_eventContinueMaximallyAtPathGT_Parms
	{
		FGameplayTag Path;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Path" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContinueMaximallyAtPathGT\n\x09 * ( GameplayTag version of ContinueMaximallyAtPath ) \n\x09 * Executes story script until choice or no more content, from a specified point in the story.\n\x09 *\n\x09 * @param Path - The knot and\\or the stitch to start the story at, \n\x09 * @returns The collated lines of text up to the point of termination.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContinueMaximallyAtPathGT\n( GameplayTag version of ContinueMaximallyAtPath )\nExecutes story script until choice or no more content, from a specified point in the story.\n\n@param Path - The knot and\\or the stitch to start the story at,\n@returns The collated lines of text up to the point of termination." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ContinueMaximallyAtPathGT constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ContinueMaximallyAtPathGT constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ContinueMaximallyAtPathGT Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximallyAtPathGT_Parms, Path), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximallyAtPathGT_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::PropPointers) < 2048);
// ********** End Function ContinueMaximallyAtPathGT Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ContinueMaximallyAtPathGT", 	Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::InkpotStory_eventContinueMaximallyAtPathGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::InkpotStory_eventContinueMaximallyAtPathGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execContinueMaximallyAtPathGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ContinueMaximallyAtPathGT(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ContinueMaximallyAtPathGT ****************************

// ********** Begin Class UInkpotStory Function DumpContentAtKnot **********************************
struct Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics
{
	struct InkpotStory_eventDumpContentAtKnot_Parms
	{
		FString InName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DumpContentAtKnot\n\x09 * Writes all Ink opcodes for content at specified Knot to debug log. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DumpContentAtKnot\nWrites all Ink opcodes for content at specified Knot to debug log." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DumpContentAtKnot constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DumpContentAtKnot constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DumpContentAtKnot Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventDumpContentAtKnot_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::NewProp_InName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::PropPointers) < 2048);
// ********** End Function DumpContentAtKnot Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "DumpContentAtKnot", 	Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::InkpotStory_eventDumpContentAtKnot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::InkpotStory_eventDumpContentAtKnot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execDumpContentAtKnot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpContentAtKnot(Z_Param_InName);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function DumpContentAtKnot ************************************

// ********** Begin Class UInkpotStory Function DumpContentAtPath **********************************
struct Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics
{
	struct InkpotStory_eventDumpContentAtPath_Parms
	{
		FString InName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DumpContentAtPath\n\x09 * Writes all Ink opcodes for content at specified Knot & Stitch to debug log. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DumpContentAtPath\nWrites all Ink opcodes for content at specified Knot & Stitch to debug log." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DumpContentAtPath constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DumpContentAtPath constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DumpContentAtPath Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventDumpContentAtPath_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::NewProp_InName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::PropPointers) < 2048);
// ********** End Function DumpContentAtPath Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "DumpContentAtPath", 	Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::InkpotStory_eventDumpContentAtPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::InkpotStory_eventDumpContentAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_DumpContentAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execDumpContentAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpContentAtPath(Z_Param_InName);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function DumpContentAtPath ************************************

// ********** Begin Class UInkpotStory Function DumpDebug ******************************************
struct Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DumpDebug\n\x09 * Writes current state of InkVM to debug log. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DumpDebug\nWrites current state of InkVM to debug log." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DumpDebug constinit property declarations *****************************
// ********** End Function DumpDebug constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "DumpDebug", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInkpotStory_DumpDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execDumpDebug)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpDebug();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function DumpDebug ********************************************

// ********** Begin Class UInkpotStory Function DumpMainContent ************************************
struct Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DumpMainContent\n\x09 * Writes all Ink opcodes for content of current story to debug log. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DumpMainContent\nWrites all Ink opcodes for content of current story to debug log." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DumpMainContent constinit property declarations ***********************
// ********** End Function DumpMainContent constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "DumpMainContent", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInkpotStory_DumpMainContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execDumpMainContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpMainContent();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function DumpMainContent **************************************

// ********** Begin Class UInkpotStory Function EvalFunction ***************************************
struct Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics
{
	struct InkpotStory_eventEvalFunction_Parms
	{
		FString FunctionName;
		FInkpotValue ReturnValue;
		FString CapturedText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * EvalFunction\n\x09 * Evaluates a function defined in Ink script from Blueprint or C++.\n\x09 * Identical to EvaluateFunction, but with no InValues\n\x09 *\n\x09 * @param FunctionName - Name of the function to call in the script.\n\x09 * @param ReturnValue - The to return from the function.\n\x09 * @param CapturedText - Any text that the function may generated in the normal ink output way\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EvalFunction\nEvaluates a function defined in Ink script from Blueprint or C++.\nIdentical to EvaluateFunction, but with no InValues\n\n@param FunctionName - Name of the function to call in the script.\n@param ReturnValue - The to return from the function.\n@param CapturedText - Any text that the function may generated in the normal ink output way" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EvalFunction constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CapturedText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EvalFunction constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EvalFunction Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvalFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvalFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::NewProp_CapturedText = { "CapturedText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvalFunction_Parms, CapturedText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::NewProp_CapturedText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::PropPointers) < 2048);
// ********** End Function EvalFunction Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "EvalFunction", 	Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::InkpotStory_eventEvalFunction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::InkpotStory_eventEvalFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_EvalFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_EvalFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execEvalFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_ReturnValue);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CapturedText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EvalFunction(Z_Param_FunctionName,Z_Param_Out_ReturnValue,Z_Param_Out_CapturedText);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function EvalFunction *****************************************

// ********** Begin Class UInkpotStory Function EvaluateFunction ***********************************
struct Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics
{
	struct InkpotStory_eventEvaluateFunction_Parms
	{
		FString FunctionName;
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
		FString CapturedText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * EvaluateFunction\n\x09 * Evaluates a function defined in Ink script from Blueprint or C++. \n\x09 *\n\x09 * @param FunctionName - Name of the function to call in the script.\n\x09 * @param InValues - The parameters to pass into the function\n\x09 * @param ReturnValue - The to return from the function.\n\x09 * @param CapturedText - Any text that the function may generated in the normal ink output way\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EvaluateFunction\nEvaluates a function defined in Ink script from Blueprint or C++.\n\n@param FunctionName - Name of the function to call in the script.\n@param InValues - The parameters to pass into the function\n@param ReturnValue - The to return from the function.\n@param CapturedText - Any text that the function may generated in the normal ink output way" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EvaluateFunction constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CapturedText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EvaluateFunction constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EvaluateFunction Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvaluateFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvaluateFunction_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 3323750409
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvaluateFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_CapturedText = { "CapturedText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvaluateFunction_Parms, CapturedText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_CapturedText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::PropPointers) < 2048);
// ********** End Function EvaluateFunction Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "EvaluateFunction", 	Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::InkpotStory_eventEvaluateFunction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::InkpotStory_eventEvaluateFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_EvaluateFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execEvaluateFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_ReturnValue);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CapturedText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EvaluateFunction(Z_Param_FunctionName,Z_Param_Out_InValues,Z_Param_Out_ReturnValue,Z_Param_Out_CapturedText);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function EvaluateFunction *************************************

// ********** Begin Class UInkpotStory Function GatherAllStrings ***********************************
struct Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics
{
	struct InkpotStory_eventGatherAllStrings_Parms
	{
		TMap<FString,FString> OutStrings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GatherAllStrings\n\x09 * Walks the whole of the story and finds all string definitions. \n\x09 * Write result to map, key=id, value=string found. id generated from knot and stitch name\n\x09 *\n\x09 * @param OutStrings - Map to write the strings found into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GatherAllStrings\nWalks the whole of the story and finds all string definitions.\nWrite result to map, key=id, value=string found. id generated from knot and stitch name\n\n@param OutStrings - Map to write the strings found into." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GatherAllStrings constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutStrings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutStrings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutStrings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GatherAllStrings constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GatherAllStrings Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings_ValueProp = { "OutStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings_Key_KeyProp = { "OutStrings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings = { "OutStrings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGatherAllStrings_Parms, OutStrings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::PropPointers) < 2048);
// ********** End Function GatherAllStrings Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GatherAllStrings", 	Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::InkpotStory_eventGatherAllStrings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::InkpotStory_eventGatherAllStrings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GatherAllStrings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGatherAllStrings)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutStrings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GatherAllStrings(Z_Param_Out_OutStrings);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GatherAllStrings *************************************

// ********** Begin Class UInkpotStory Function GetAliveFlowCount **********************************
struct Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics
{
	struct InkpotStory_eventGetAliveFlowCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetAliveFlowCount\n\x09 * Gets a the number of flows that are alive.\n\x09 *\n\x09 * @returns Alive flow count.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetAliveFlowCount\nGets a the number of flows that are alive.\n\n@returns Alive flow count." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAliveFlowCount constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAliveFlowCount constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAliveFlowCount Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetAliveFlowCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers) < 2048);
// ********** End Function GetAliveFlowCount Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetAliveFlowCount", 	Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::InkpotStory_eventGetAliveFlowCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::InkpotStory_eventGetAliveFlowCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetAliveFlowCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAliveFlowCount();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetAliveFlowCount ************************************

// ********** Begin Class UInkpotStory Function GetAliveFlowNames **********************************
struct Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics
{
	struct InkpotStory_eventGetAliveFlowNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetAliveFlowNames\n\x09 * Gets a list of all the flows that are alive.\n\x09 *\n\x09 * @returns Array of flow names.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetAliveFlowNames\nGets a list of all the flows that are alive.\n\n@returns Array of flow names." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAliveFlowNames constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAliveFlowNames constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAliveFlowNames Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetAliveFlowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers) < 2048);
// ********** End Function GetAliveFlowNames Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetAliveFlowNames", 	Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::InkpotStory_eventGetAliveFlowNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::InkpotStory_eventGetAliveFlowNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetAliveFlowNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAliveFlowNames();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetAliveFlowNames ************************************

// ********** Begin Class UInkpotStory Function GetBool ********************************************
struct Z_Construct_UFunction_UInkpotStory_GetBool_Statics
{
	struct InkpotStory_eventGetBool_Parms
	{
		FString Variable;
		bool ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetBool\n\x09 * Gets the value of a boolean variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetBool\nGets the value of a boolean variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBool constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBool constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBool Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetBool_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventGetBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetBool_Parms), &Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetBool_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetBool_Parms), &Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers) < 2048);
// ********** End Function GetBool Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetBool", 	Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::InkpotStory_eventGetBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::InkpotStory_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBool(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetBool **********************************************

// ********** Begin Class UInkpotStory Function GetBoolGT ******************************************
struct Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics
{
	struct InkpotStory_eventGetBoolGT_Parms
	{
		FGameplayTag Variable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetBoolGT\n\x09 * ( GameplayTag version of GetBool ) \n\x09 * Gets the value of a boolean variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetBoolGT\n( GameplayTag version of GetBool )\nGets the value of a boolean variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoolGT constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoolGT constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoolGT Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetBoolGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventGetBoolGT_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetBoolGT_Parms), &Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::PropPointers) < 2048);
// ********** End Function GetBoolGT Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetBoolGT", 	Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::InkpotStory_eventGetBoolGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::InkpotStory_eventGetBoolGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetBoolGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetBoolGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetBoolGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBoolGT(Z_Param_Variable,Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetBoolGT ********************************************

// ********** Begin Class UInkpotStory Function GetCurrentChoices **********************************
struct Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics
{
	struct InkpotStory_eventGetCurrentChoices_Parms
	{
		TArray<UInkpotChoice*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentChoices\n\x09 * Returns the current choices of the story as an array of UInkpotChoices. ( localisation to be implemented ) \n\x09 * UInkpotChoices has both the text for the choice and the tags associated with them. \n\x09 * Mainly for use with UMG list types.\n\x09 *\n\x09 * @returns True is the story has choices to display, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentChoices\nReturns the current choices of the story as an array of UInkpotChoices. ( localisation to be implemented )\nUInkpotChoices has both the text for the choice and the tags associated with them.\nMainly for use with UMG list types.\n\n@returns True is the story has choices to display, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentChoices constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentChoices constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentChoices Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentChoices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentChoices Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentChoices", 	Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::InkpotStory_eventGetCurrentChoices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::InkpotStory_eventGetCurrentChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentChoices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UInkpotChoice*>*)Z_Param__Result=P_THIS->GetCurrentChoices();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetCurrentChoices ************************************

// ********** Begin Class UInkpotStory Function GetCurrentFlowName *********************************
struct Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics
{
	struct InkpotStory_eventGetCurrentFlowName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentFlowName\n\x09 * Gets the name of the currently active flow.\n\x09 *\n\x09 * @returns The flowname of the active flow.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentFlowName\nGets the name of the currently active flow.\n\n@returns The flowname of the active flow." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentFlowName constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentFlowName constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentFlowName Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentFlowName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentFlowName Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentFlowName", 	Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::InkpotStory_eventGetCurrentFlowName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::InkpotStory_eventGetCurrentFlowName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentFlowName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentFlowName();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetCurrentFlowName ***********************************

// ********** Begin Class UInkpotStory Function GetCurrentLine *************************************
struct Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics
{
	struct InkpotStory_eventGetCurrentLine_Parms
	{
		UInkpotLine* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentLine\n\x09 * Gets the localised line of text for the story, with tags. ( localisation to be implemented ) \n\x09 * Mainly for use with UMG list types. \n\x09 *\n\x09 * @returns The current line of text, wrapped as a UInkpotLine.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentLine\nGets the localised line of text for the story, with tags. ( localisation to be implemented )\nMainly for use with UMG list types.\n\n@returns The current line of text, wrapped as a UInkpotLine." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentLine constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentLine constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentLine Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentLine_Parms, ReturnValue), Z_Construct_UClass_UInkpotLine_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentLine Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentLine", 	Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::InkpotStory_eventGetCurrentLine_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::InkpotStory_eventGetCurrentLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInkpotLine**)Z_Param__Result=P_THIS->GetCurrentLine();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetCurrentLine ***************************************

// ********** Begin Class UInkpotStory Function GetCurrentTags *************************************
struct Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics
{
	struct InkpotStory_eventGetCurrentTags_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentTags\n\x09 * Gets a tags that are present for the current state of the story.\n\x09 *\n\x09 * @returns Array of tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentTags\nGets a tags that are present for the current state of the story.\n\n@returns Array of tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentTags constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentTags constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentTags Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentTags Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentTags", 	Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::InkpotStory_eventGetCurrentTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::InkpotStory_eventGetCurrentTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetCurrentTags();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetCurrentTags ***************************************

// ********** Begin Class UInkpotStory Function GetCurrentText *************************************
struct Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics
{
	struct InkpotStory_eventGetCurrentText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentText\n\x09 * Gets the current line of text for the story. \n\x09 *\n\x09 * @returns The current line of text.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentText\nGets the current line of text for the story.\n\n@returns The current line of text." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentText constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentText constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentText Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentText Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentText", 	Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::InkpotStory_eventGetCurrentText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::InkpotStory_eventGetCurrentText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentText();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetCurrentText ***************************************

// ********** Begin Class UInkpotStory Function GetFloat *******************************************
struct Z_Construct_UFunction_UInkpotStory_GetFloat_Statics
{
	struct InkpotStory_eventGetFloat_Parms
	{
		FString Variable;
		float ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetFloat\n\x09 * Gets the value of a floating variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetFloat\nGets the value of a floating variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFloat constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFloat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFloat Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetFloat_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetFloat_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetFloat_Parms), &Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers) < 2048);
// ********** End Function GetFloat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetFloat", 	Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::InkpotStory_eventGetFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::InkpotStory_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFloat(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetFloat *********************************************

// ********** Begin Class UInkpotStory Function GetFloatGT *****************************************
struct Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics
{
	struct InkpotStory_eventGetFloatGT_Parms
	{
		FGameplayTag Variable;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetFloatGT\n\x09 * ( GameplayTag version of GetFloat ) \n\x09 * Gets the value of a floating variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetFloatGT\n( GameplayTag version of GetFloat )\nGets the value of a floating variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFloatGT constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFloatGT constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFloatGT Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetFloatGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetFloatGT_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::PropPointers) < 2048);
// ********** End Function GetFloatGT Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetFloatGT", 	Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::InkpotStory_eventGetFloatGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::InkpotStory_eventGetFloatGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetFloatGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetFloatGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetFloatGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFloatGT(Z_Param_Variable,Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetFloatGT *******************************************

// ********** Begin Class UInkpotStory Function GetInt *********************************************
struct Z_Construct_UFunction_UInkpotStory_GetInt_Statics
{
	struct InkpotStory_eventGetInt_Parms
	{
		FString Variable;
		int32 ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetInt\n\x09 * Gets the value of an Integer variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a success. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetInt\nGets the value of an Integer variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a success. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInt constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInt constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInt Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetInt_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetInt_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetInt_Parms), &Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers) < 2048);
// ********** End Function GetInt Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetInt", 	Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::InkpotStory_eventGetInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::InkpotStory_eventGetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInt(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetInt ***********************************************

// ********** Begin Class UInkpotStory Function GetIntGT *******************************************
struct Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics
{
	struct InkpotStory_eventGetIntGT_Parms
	{
		FGameplayTag Variable;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetIntGT\n\x09 * ( GameplayTag version of GetInt ) \n\x09 * Gets the value of an Integer variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetIntGT\n( GameplayTag version of GetInt )\nGets the value of an Integer variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetIntGT constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIntGT constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIntGT Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetIntGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetIntGT_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::PropPointers) < 2048);
// ********** End Function GetIntGT Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetIntGT", 	Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::InkpotStory_eventGetIntGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::InkpotStory_eventGetIntGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetIntGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetIntGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetIntGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetIntGT(Z_Param_Variable,Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetIntGT *********************************************

// ********** Begin Class UInkpotStory Function GetList ********************************************
struct Z_Construct_UFunction_UInkpotStory_GetList_Statics
{
	struct InkpotStory_eventGetList_Parms
	{
		FString Variable;
		FInkpotList ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetList\n\x09 * Gets the value of an Ink List in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetList\nGets the value of an Ink List in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetList constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetList constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetList Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetList_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
void Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetList_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetList_Parms), &Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetList_Statics::PropPointers) < 2048);
// ********** End Function GetList Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetList", 	Z_Construct_UFunction_UInkpotStory_GetList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetList_Statics::InkpotStory_eventGetList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetList_Statics::InkpotStory_eventGetList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetList(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetList **********************************************

// ********** Begin Class UInkpotStory Function GetListGT ******************************************
struct Z_Construct_UFunction_UInkpotStory_GetListGT_Statics
{
	struct InkpotStory_eventGetListGT_Parms
	{
		FGameplayTag Variable;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetListGT\n\x09 * ( GameplayTag version of GetList ) \n\x09 * Gets the value of an Ink List in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetListGT\n( GameplayTag version of GetList )\nGets the value of an Ink List in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetListGT constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetListGT constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetListGT Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetListGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetListGT_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::PropPointers) < 2048);
// ********** End Function GetListGT Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetListGT", 	Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::InkpotStory_eventGetListGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::InkpotStory_eventGetListGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetListGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetListGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetListGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetListGT(Z_Param_Variable,Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetListGT ********************************************

// ********** Begin Class UInkpotStory Function GetNamedContent ************************************
struct Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics
{
	struct InkpotStory_eventGetNamedContent_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetNamedContent\n\x09 * Gets all named sections within a story. \n\x09 * This is essentially all the top level knots of the story.\n\x09 *\n\x09 * @returns List of all named knots.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetNamedContent\nGets all named sections within a story.\nThis is essentially all the top level knots of the story.\n\n@returns List of all named knots." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNamedContent constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNamedContent constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNamedContent Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers) < 2048);
// ********** End Function GetNamedContent Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetNamedContent", 	Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::InkpotStory_eventGetNamedContent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::InkpotStory_eventGetNamedContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetNamedContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetNamedContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetNamedContent();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetNamedContent **************************************

// ********** Begin Class UInkpotStory Function GetNamedContentForKnot *****************************
struct Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics
{
	struct InkpotStory_eventGetNamedContentForKnot_Parms
	{
		FString KnotName;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetNamedContentForKnot\n\x09 * Gets all named stitches within a knot. \n\x09 *\n\x09 * @returns List of all named stitches within knot.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetNamedContentForKnot\nGets all named stitches within a knot.\n\n@returns List of all named stitches within knot." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNamedContentForKnot constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_KnotName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNamedContentForKnot constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNamedContentForKnot Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_KnotName = { "KnotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForKnot_Parms, KnotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnotName_MetaData), NewProp_KnotName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForKnot_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_KnotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers) < 2048);
// ********** End Function GetNamedContentForKnot Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetNamedContentForKnot", 	Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::InkpotStory_eventGetNamedContentForKnot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::InkpotStory_eventGetNamedContentForKnot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetNamedContentForKnot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KnotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetNamedContentForKnot(Z_Param_KnotName);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetNamedContentForKnot *******************************

// ********** Begin Class UInkpotStory Function GetNamedContentForPath *****************************
struct Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics
{
	struct InkpotStory_eventGetNamedContentForPath_Parms
	{
		FString Path;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNamedContentForPath constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNamedContentForPath constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNamedContentForPath Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers) < 2048);
// ********** End Function GetNamedContentForPath Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetNamedContentForPath", 	Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::InkpotStory_eventGetNamedContentForPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::InkpotStory_eventGetNamedContentForPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetNamedContentForPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetNamedContentForPath(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetNamedContentForPath *******************************

// ********** Begin Class UInkpotStory Function GetString ******************************************
struct Z_Construct_UFunction_UInkpotStory_GetString_Statics
{
	struct InkpotStory_eventGetString_Parms
	{
		FString Variable;
		FString ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetString\n\x09 * Gets the value of a character string in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetString\nGets the value of a character string in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetString constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetString constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetString Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetString_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetString_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetString_Parms), &Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers) < 2048);
// ********** End Function GetString Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetString", 	Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetString_Statics::InkpotStory_eventGetString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetString_Statics::InkpotStory_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetString(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetString ********************************************

// ********** Begin Class UInkpotStory Function GetStringGT ****************************************
struct Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics
{
	struct InkpotStory_eventGetStringGT_Parms
	{
		FGameplayTag Variable;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetStringGT\n\x09 * ( GameplayTag version of GetString ) \n\x09 * Gets the value of a character string in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetStringGT\n( GameplayTag version of GetString )\nGets the value of a character string in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetStringGT constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStringGT constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStringGT Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetStringGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetStringGT_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::PropPointers) < 2048);
// ********** End Function GetStringGT Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetStringGT", 	Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::InkpotStory_eventGetStringGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::InkpotStory_eventGetStringGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetStringGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetStringGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetStringGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetStringGT(Z_Param_Variable,Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetStringGT ******************************************

// ********** Begin Class UInkpotStory Function GetValue *******************************************
struct Z_Construct_UFunction_UInkpotStory_GetValue_Statics
{
	struct InkpotStory_eventGetValue_Parms
	{
		FString Variable;
		FInkpotValue ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetValue\n\x09 * Gets the value of a variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetValue\nGets the value of a variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetValue constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetValue constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetValue Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetValue_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
void Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetValue_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetValue_Parms), &Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers) < 2048);
// ********** End Function GetValue Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetValue", 	Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::InkpotStory_eventGetValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::InkpotStory_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetValue(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetValue *********************************************

// ********** Begin Class UInkpotStory Function GetValueGT *****************************************
struct Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics
{
	struct InkpotStory_eventGetValueGT_Parms
	{
		FGameplayTag Variable;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetValueGT\n\x09 * ( GameplayTag version of GetValue ) \n\x09 * Gets the value of a variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetValueGT\n( GameplayTag version of GetValue )\nGets the value of a variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetValueGT constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetValueGT constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetValueGT Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetValueGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetValueGT_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::PropPointers) < 2048);
// ********** End Function GetValueGT Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetValueGT", 	Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::InkpotStory_eventGetValueGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::InkpotStory_eventGetValueGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetValueGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetValueGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetValueGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetValueGT(Z_Param_Variable,Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GetValueGT *******************************************

// ********** Begin Class UInkpotStory Function GlobalTags *****************************************
struct Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics
{
	struct InkpotStory_eventGlobalTags_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GlobalTags\n\x09 * Gets a tags that are set at the top of the story.\n\x09 *\n\x09 * @returns Array of tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GlobalTags\nGets a tags that are set at the top of the story.\n\n@returns Array of tags." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GlobalTags constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GlobalTags constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GlobalTags Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGlobalTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers) < 2048);
// ********** End Function GlobalTags Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GlobalTags", 	Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::InkpotStory_eventGlobalTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::InkpotStory_eventGlobalTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GlobalTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGlobalTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GlobalTags();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function GlobalTags *******************************************

// ********** Begin Class UInkpotStory Function HasChoices *****************************************
struct Z_Construct_UFunction_UInkpotStory_HasChoices_Statics
{
	struct InkpotStory_eventHasChoices_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * HasChoices\n\x09 * Does the story currently have active choices to display. \n\x09 *\n\x09 * @returns True is the story has choices to display, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HasChoices\nDoes the story currently have active choices to display.\n\n@returns True is the story has choices to display, false otherwise." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasChoices constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasChoices constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasChoices Property Definitions ***************************************
void Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventHasChoices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventHasChoices_Parms), &Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers) < 2048);
// ********** End Function HasChoices Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "HasChoices", 	Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::InkpotStory_eventHasChoices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::InkpotStory_eventHasChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_HasChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execHasChoices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasChoices();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function HasChoices *******************************************

// ********** Begin Class UInkpotStory Function IsFlowAlive ****************************************
struct Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics
{
	struct InkpotStory_eventIsFlowAlive_Parms
	{
		FString FlowName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsFlowAlive\n\x09 * Checks if a flow still has content to display.\n\x09 *\n\x09 * @param FlowName - The name of the flow to check.\n\x09 * @returns True if the flow still has content.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsFlowAlive\nChecks if a flow still has content to display.\n\n@param FlowName - The name of the flow to check.\n@returns True if the flow still has content." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFlowAlive constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFlowAlive constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFlowAlive Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventIsFlowAlive_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowName_MetaData), NewProp_FlowName_MetaData) };
void Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventIsFlowAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventIsFlowAlive_Parms), &Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_FlowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers) < 2048);
// ********** End Function IsFlowAlive Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "IsFlowAlive", 	Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::InkpotStory_eventIsFlowAlive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::InkpotStory_eventIsFlowAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_IsFlowAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execIsFlowAlive)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFlowAlive(Z_Param_FlowName);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function IsFlowAlive ******************************************

// ********** Begin Class UInkpotStory Function IsLineRendering ************************************
struct Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics
{
	struct InkpotStory_eventIsLineRendering_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsLineRendering\n\x09 * returns whether the line is still rendering wrt to NotifyLineRenderBegin, NotifyLineRenderEnd calls \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsLineRendering\nreturns whether the line is still rendering wrt to NotifyLineRenderBegin, NotifyLineRenderEnd calls" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsLineRendering constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLineRendering constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLineRendering Property Definitions **********************************
void Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventIsLineRendering_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventIsLineRendering_Parms), &Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::PropPointers) < 2048);
// ********** End Function IsLineRendering Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "IsLineRendering", 	Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::InkpotStory_eventIsLineRendering_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::InkpotStory_eventIsLineRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_IsLineRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_IsLineRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execIsLineRendering)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLineRendering();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function IsLineRendering **************************************

// ********** Begin Class UInkpotStory Function IsVariableDefined **********************************
struct Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics
{
	struct InkpotStory_eventIsVariableDefined_Parms
	{
		FString Variable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsVariableDefined\n\x09 * Checks if a variable exists in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to clear.\n\x09 * @returns True if the variable exists, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsVariableDefined\nChecks if a variable exists in the story.\n\n@param Variable - Name of the variable to clear.\n@returns True if the variable exists, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsVariableDefined constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsVariableDefined constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsVariableDefined Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventIsVariableDefined_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventIsVariableDefined_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventIsVariableDefined_Parms), &Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::PropPointers) < 2048);
// ********** End Function IsVariableDefined Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "IsVariableDefined", 	Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::InkpotStory_eventIsVariableDefined_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::InkpotStory_eventIsVariableDefined_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_IsVariableDefined()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execIsVariableDefined)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVariableDefined(Z_Param_Variable);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function IsVariableDefined ************************************

// ********** Begin Class UInkpotStory Function IsVariableDefinedGT ********************************
struct Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics
{
	struct InkpotStory_eventIsVariableDefinedGT_Parms
	{
		FGameplayTag Variable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsVariableDefinedGT\n\x09 * ( GameplayTag version of IsVariableDefined ) \n\x09 * Checks if a variable exists in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to clear.\n\x09 * @returns True if the variable exists, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsVariableDefinedGT\n( GameplayTag version of IsVariableDefined )\nChecks if a variable exists in the story.\n\n@param Variable - Name of the variable to clear.\n@returns True if the variable exists, false otherwise." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsVariableDefinedGT constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsVariableDefinedGT constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsVariableDefinedGT Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventIsVariableDefinedGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventIsVariableDefinedGT_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventIsVariableDefinedGT_Parms), &Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::PropPointers) < 2048);
// ********** End Function IsVariableDefinedGT Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "IsVariableDefinedGT", 	Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::InkpotStory_eventIsVariableDefinedGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::InkpotStory_eventIsVariableDefinedGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execIsVariableDefinedGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVariableDefinedGT(Z_Param_Variable);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function IsVariableDefinedGT **********************************

// ********** Begin Class UInkpotStory Function LoadJSON *******************************************
struct Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics
{
	struct InkpotStory_eventLoadJSON_Parms
	{
		FString InJSON;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * LoadJSON\n\x09 * Unserialises the state of the Ink VM from a JSON string. \n\x09 *\n\x09 * @param InJSON - The serialised state to set the Ink VM to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LoadJSON\nUnserialises the state of the Ink VM from a JSON string.\n\n@param InJSON - The serialised state to set the Ink VM to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InJSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadJSON constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InJSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadJSON constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadJSON Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::NewProp_InJSON = { "InJSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventLoadJSON_Parms, InJSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InJSON_MetaData), NewProp_InJSON_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::NewProp_InJSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers) < 2048);
// ********** End Function LoadJSON Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "LoadJSON", 	Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::InkpotStory_eventLoadJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::InkpotStory_eventLoadJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_LoadJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execLoadJSON)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InJSON);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadJSON(Z_Param_InJSON);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function LoadJSON *********************************************

// ********** Begin Class UInkpotStory Function NotifyLineRenderBegin ******************************
struct Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics
{
	struct InkpotStory_eventNotifyLineRenderBegin_Parms
	{
		FName Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NotifyLineRenderBegin\n\x09 * Marks the rendering of a line as having started for the given context\n\x09 * context could be subtitles, audio, animation etc\n\x09 * Continue & canContinue will be ignored if and 'line render' context is in flight\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NotifyLineRenderBegin\nMarks the rendering of a line as having started for the given context\ncontext could be subtitles, audio, animation etc\nContinue & canContinue will be ignored if and 'line render' context is in flight" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyLineRenderBegin constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyLineRenderBegin constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyLineRenderBegin Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventNotifyLineRenderBegin_Parms, Context), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::PropPointers) < 2048);
// ********** End Function NotifyLineRenderBegin Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "NotifyLineRenderBegin", 	Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::InkpotStory_eventNotifyLineRenderBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::InkpotStory_eventNotifyLineRenderBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execNotifyLineRenderBegin)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyLineRenderBegin(Z_Param_Context);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function NotifyLineRenderBegin ********************************

// ********** Begin Class UInkpotStory Function NotifyLineRenderEnd ********************************
struct Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics
{
	struct InkpotStory_eventNotifyLineRenderEnd_Parms
	{
		FName Context;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NotifyLineRenderEnd\n\x09 * Invokes OnLineCompleted delegate, allows many different systems to co-ordinate when they have finished rendering the line\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NotifyLineRenderEnd\nInvokes OnLineCompleted delegate, allows many different systems to co-ordinate when they have finished rendering the line" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyLineRenderEnd constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Context;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyLineRenderEnd constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyLineRenderEnd Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventNotifyLineRenderEnd_Parms, Context), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventNotifyLineRenderEnd_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventNotifyLineRenderEnd_Parms), &Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::PropPointers) < 2048);
// ********** End Function NotifyLineRenderEnd Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "NotifyLineRenderEnd", 	Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::InkpotStory_eventNotifyLineRenderEnd_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::InkpotStory_eventNotifyLineRenderEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execNotifyLineRenderEnd)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Context);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyLineRenderEnd(Z_Param_Context,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function NotifyLineRenderEnd **********************************

// ********** Begin Class UInkpotStory Function RemoveFlow *****************************************
struct Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics
{
	struct InkpotStory_eventRemoveFlow_Parms
	{
		FString FlowName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * RemoveFlow\n\x09 * Removes a flow from the current set of flows .\n\x09 *\n\x09 * @param FlowName - The name of the flow to remove.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RemoveFlow\nRemoves a flow from the current set of flows .\n\n@param FlowName - The name of the flow to remove." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveFlow constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveFlow constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveFlow Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventRemoveFlow_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowName_MetaData), NewProp_FlowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::NewProp_FlowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers) < 2048);
// ********** End Function RemoveFlow Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "RemoveFlow", 	Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::InkpotStory_eventRemoveFlow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::InkpotStory_eventRemoveFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_RemoveFlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execRemoveFlow)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFlow(Z_Param_FlowName);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function RemoveFlow *******************************************

// ********** Begin Class UInkpotStory Function SetBool ********************************************
struct Z_Construct_UFunction_UInkpotStory_SetBool_Statics
{
	struct InkpotStory_eventSetBool_Parms
	{
		FString Variable;
		bool bValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetBool\n\x09 * Sets the value of a boolean variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetBool\nSets the value of a boolean variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBool constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBool constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBool Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetBool_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((InkpotStory_eventSetBool_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetBool_Parms), &Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetBool_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetBool_Parms), &Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers) < 2048);
// ********** End Function SetBool Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetBool", 	Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::InkpotStory_eventSetBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::InkpotStory_eventSetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_UBOOL(Z_Param_bValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBool(Z_Param_Variable,Z_Param_bValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetBool **********************************************

// ********** Begin Class UInkpotStory Function SetBoolGT ******************************************
struct Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics
{
	struct InkpotStory_eventSetBoolGT_Parms
	{
		FGameplayTag Variable;
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetBoolGT\n\x09 * ( GameplayTag version of SetBool ) \n\x09 * Sets the value of a boolean variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetBoolGT\n( GameplayTag version of SetBool )\nSets the value of a boolean variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetBoolGT constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBoolGT constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBoolGT Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetBoolGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((InkpotStory_eventSetBoolGT_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetBoolGT_Parms), &Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::PropPointers) < 2048);
// ********** End Function SetBoolGT Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetBoolGT", 	Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::InkpotStory_eventSetBoolGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::InkpotStory_eventSetBoolGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetBoolGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetBoolGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetBoolGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolGT(Z_Param_Variable,Z_Param_bValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetBoolGT ********************************************

// ********** Begin Class UInkpotStory Function SetEmpty *******************************************
struct Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics
{
	struct InkpotStory_eventSetEmpty_Parms
	{
		FString Variable;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetEmpty\n\x09 * Clears the value of a variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to clear.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetEmpty\nClears the value of a variable in the story.\n\n@param Variable - Name of the variable to clear.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEmpty constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEmpty constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEmpty Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetEmpty_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetEmpty_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetEmpty_Parms), &Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers) < 2048);
// ********** End Function SetEmpty Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetEmpty", 	Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::InkpotStory_eventSetEmpty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::InkpotStory_eventSetEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetEmpty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEmpty(Z_Param_Variable,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetEmpty *********************************************

// ********** Begin Class UInkpotStory Function SetEmptyGT *****************************************
struct Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics
{
	struct InkpotStory_eventSetEmptyGT_Parms
	{
		FGameplayTag Variable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetEmptyGT\n\x09 * ( GameplayTag version of SetEmpty ) \n\x09 * Clears the value of a variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to clear.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetEmptyGT\n( GameplayTag version of SetEmpty )\nClears the value of a variable in the story.\n\n@param Variable - Name of the variable to clear." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEmptyGT constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEmptyGT constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEmptyGT Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetEmptyGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::PropPointers) < 2048);
// ********** End Function SetEmptyGT Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetEmptyGT", 	Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::InkpotStory_eventSetEmptyGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::InkpotStory_eventSetEmptyGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetEmptyGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetEmptyGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetEmptyGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEmptyGT(Z_Param_Variable);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetEmptyGT *******************************************

// ********** Begin Class UInkpotStory Function SetFloat *******************************************
struct Z_Construct_UFunction_UInkpotStory_SetFloat_Statics
{
	struct InkpotStory_eventSetFloat_Parms
	{
		FString Variable;
		float Value;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetFloat\n\x09 * Sets the value of a floating point variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a success. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetFloat\nSets the value of a floating point variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a success. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFloat constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFloat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFloat Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetFloat_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetFloat_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetFloat_Parms), &Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers) < 2048);
// ********** End Function SetFloat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetFloat", 	Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::InkpotStory_eventSetFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::InkpotStory_eventSetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloat(Z_Param_Variable,Z_Param_Value,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetFloat *********************************************

// ********** Begin Class UInkpotStory Function SetFloatGT *****************************************
struct Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics
{
	struct InkpotStory_eventSetFloatGT_Parms
	{
		FGameplayTag Variable;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetFloatGT\n\x09 * ( GameplayTag version of SetFloat ) \n\x09 * Sets the value of a floating point variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetFloatGT\n( GameplayTag version of SetFloat )\nSets the value of a floating point variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetFloatGT constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFloatGT constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFloatGT Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetFloatGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetFloatGT_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::PropPointers) < 2048);
// ********** End Function SetFloatGT Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetFloatGT", 	Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::InkpotStory_eventSetFloatGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::InkpotStory_eventSetFloatGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetFloatGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetFloatGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetFloatGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloatGT(Z_Param_Variable,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetFloatGT *******************************************

// ********** Begin Class UInkpotStory Function SetInt *********************************************
struct Z_Construct_UFunction_UInkpotStory_SetInt_Statics
{
	struct InkpotStory_eventSetInt_Parms
	{
		FString Variable;
		int32 Value;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetInt\n\x09 * Sets the value of an integer variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a success. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetInt\nSets the value of an integer variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a success. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInt constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInt constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInt Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetInt_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetInt_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetInt_Parms), &Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers) < 2048);
// ********** End Function SetInt Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetInt", 	Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::InkpotStory_eventSetInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::InkpotStory_eventSetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInt(Z_Param_Variable,Z_Param_Value,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetInt ***********************************************

// ********** Begin Class UInkpotStory Function SetIntGT *******************************************
struct Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics
{
	struct InkpotStory_eventSetIntGT_Parms
	{
		FGameplayTag Variable;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetIntGT\n\x09 * ( GameplayTag version of SetInt ) \n\x09 * Sets the value of an integer variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a success. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetIntGT\n( GameplayTag version of SetInt )\nSets the value of an integer variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a success. False typically means the variable does not exist." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetIntGT constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIntGT constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIntGT Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetIntGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetIntGT_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::PropPointers) < 2048);
// ********** End Function SetIntGT Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetIntGT", 	Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::InkpotStory_eventSetIntGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::InkpotStory_eventSetIntGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetIntGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetIntGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetIntGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntGT(Z_Param_Variable,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetIntGT *********************************************

// ********** Begin Class UInkpotStory Function SetList ********************************************
struct Z_Construct_UFunction_UInkpotStory_SetList_Statics
{
	struct InkpotStory_eventSetList_Parms
	{
		FString Variable;
		FInkpotList Value;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetList\n\x09 * Sets the value of an Ink List in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetList\nSets the value of an Ink List in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetList constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetList constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetList Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetList_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetList_Parms, Value), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1132618465
void Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetList_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetList_Parms), &Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetList_Statics::PropPointers) < 2048);
// ********** End Function SetList Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetList", 	Z_Construct_UFunction_UInkpotStory_SetList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetList_Statics::InkpotStory_eventSetList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetList_Statics::InkpotStory_eventSetList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Value);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetList(Z_Param_Variable,Z_Param_Out_Value,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetList **********************************************

// ********** Begin Class UInkpotStory Function SetListGT ******************************************
struct Z_Construct_UFunction_UInkpotStory_SetListGT_Statics
{
	struct InkpotStory_eventSetListGT_Parms
	{
		FGameplayTag Variable;
		FInkpotList Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetListGT\n\x09 * ( GameplayTag version of SetList ) \n\x09 * Sets the value of an Ink List in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetListGT\n( GameplayTag version of SetList )\nSets the value of an Ink List in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetListGT constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetListGT constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetListGT Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetListGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetListGT_Parms, Value), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::PropPointers) < 2048);
// ********** End Function SetListGT Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetListGT", 	Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::InkpotStory_eventSetListGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::InkpotStory_eventSetListGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetListGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetListGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetListGT)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Variable);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetListGT(Z_Param_Out_Variable,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetListGT ********************************************

// ********** Begin Class UInkpotStory Function SetOnVariableChange ********************************
struct Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics
{
	struct InkpotStory_eventSetOnVariableChange_Parms
	{
		FScriptDelegate Delegate;
		FString Variable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetOnVariableChange\n\x09 * Binds a delegate to when the value of the stated variable changes.\n\x09 *\n\x09 * @param Delegate - The delegate to call when the variable changes.\n\x09 * @param Variable - The name of the variable to watch.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetOnVariableChange\nBinds a delegate to when the value of the stated variable changes.\n\n@param Delegate - The delegate to call when the variable changes.\n@param Variable - The name of the variable to watch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOnVariableChange constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOnVariableChange constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOnVariableChange Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetOnVariableChange_Parms, Delegate), Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 1332856048
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetOnVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers) < 2048);
// ********** End Function SetOnVariableChange Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetOnVariableChange", 	Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::InkpotStory_eventSetOnVariableChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::InkpotStory_eventSetOnVariableChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetOnVariableChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetOnVariableChange)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnVariableChange(FOnInkpotVariableChange(Z_Param_Delegate),Z_Param_Variable);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetOnVariableChange **********************************

// ********** Begin Class UInkpotStory Function SetOnVariableChangeGT ******************************
struct Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics
{
	struct InkpotStory_eventSetOnVariableChangeGT_Parms
	{
		FScriptDelegate Delegate;
		FGameplayTag Variable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetOnVariableChangeGT\n\x09 * ( GameplayTag version of SetOnVariableChange ) \n\x09 * Binds a delegate to when the value of the stated variable changes.\n\x09 *\n\x09 * @param Delegate - The delegate to call when the variable changes.\n\x09 * @param Variable - The name of the variable to watch.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetOnVariableChangeGT\n( GameplayTag version of SetOnVariableChange )\nBinds a delegate to when the value of the stated variable changes.\n\n@param Delegate - The delegate to call when the variable changes.\n@param Variable - The name of the variable to watch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOnVariableChangeGT constinit property declarations *****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOnVariableChangeGT constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOnVariableChangeGT Property Definitions ****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetOnVariableChangeGT_Parms, Delegate), Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 1332856048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetOnVariableChangeGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::PropPointers) < 2048);
// ********** End Function SetOnVariableChangeGT Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetOnVariableChangeGT", 	Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::InkpotStory_eventSetOnVariableChangeGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::InkpotStory_eventSetOnVariableChangeGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetOnVariableChangeGT)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnVariableChangeGT(FOnInkpotVariableChange(Z_Param_Delegate),Z_Param_Variable);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetOnVariableChangeGT ********************************

// ********** Begin Class UInkpotStory Function SetString ******************************************
struct Z_Construct_UFunction_UInkpotStory_SetString_Statics
{
	struct InkpotStory_eventSetString_Parms
	{
		FString Variable;
		FString Value;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetString\n\x09 * Sets the value of a character string in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetString\nSets the value of a character string in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetString constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetString constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetString Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetString_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetString_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetString_Parms), &Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers) < 2048);
// ********** End Function SetString Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetString", 	Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetString_Statics::InkpotStory_eventSetString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetString_Statics::InkpotStory_eventSetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetString(Z_Param_Variable,Z_Param_Value,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetString ********************************************

// ********** Begin Class UInkpotStory Function SetStringGT ****************************************
struct Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics
{
	struct InkpotStory_eventSetStringGT_Parms
	{
		FGameplayTag Variable;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetStringGT\n\x09 * ( GameplayTag version of SetString ) \n\x09 * Sets the value of a character string in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetStringGT\n( GameplayTag version of SetString )\nSets the value of a character string in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStringGT constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStringGT constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStringGT Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetStringGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetStringGT_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::PropPointers) < 2048);
// ********** End Function SetStringGT Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetStringGT", 	Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::InkpotStory_eventSetStringGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::InkpotStory_eventSetStringGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetStringGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetStringGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetStringGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStringGT(Z_Param_Variable,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetStringGT ******************************************

// ********** Begin Class UInkpotStory Function SetValue *******************************************
struct Z_Construct_UFunction_UInkpotStory_SetValue_Statics
{
	struct InkpotStory_eventSetValue_Parms
	{
		FString Variable;
		FInkpotValue Value;
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetValue\n\x09 * Sets the value of a variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a success. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetValue\nSets the value of a variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a success. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetValue constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetValue constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetValue Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetValue_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetValue_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
void Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Success_SetBit(void* Obj)
{
	((InkpotStory_eventSetValue_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetValue_Parms), &Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers) < 2048);
// ********** End Function SetValue Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetValue", 	Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::InkpotStory_eventSetValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::InkpotStory_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_STRUCT(FInkpotValue,Z_Param_Value);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_Variable,Z_Param_Value,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetValue *********************************************

// ********** Begin Class UInkpotStory Function SetValueGT *****************************************
struct Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics
{
	struct InkpotStory_eventSetValueGT_Parms
	{
		FGameplayTag Variable;
		FInkpotValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Variable" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetValueGT\n\x09 * ( GameplayTag version of SetValue ) \n\x09 * Sets the value of a variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetValueGT\n( GameplayTag version of SetValue )\nSets the value of a variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetValueGT constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetValueGT constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetValueGT Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetValueGT_Parms, Variable), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetValueGT_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::PropPointers) < 2048);
// ********** End Function SetValueGT Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetValueGT", 	Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::InkpotStory_eventSetValueGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::InkpotStory_eventSetValueGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetValueGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetValueGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetValueGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Variable);
	P_GET_STRUCT(FInkpotValue,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueGT(Z_Param_Variable,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SetValueGT *******************************************

// ********** Begin Class UInkpotStory Function SwitchFlow *****************************************
struct Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics
{
	struct InkpotStory_eventSwitchFlow_Parms
	{
		FString FlowName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SwitchFlow\n\x09 * Switches the flow of the story. A flow is a path of execution of the story. Simple stories have but one flow, but there can be many.\n\x09 *\n\x09 * @param FlowName - The name of the flow to switch to. If a flow of that name does not exist a new flow will be created. \n\x09 * @returns true if the switch created a new flow.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SwitchFlow\nSwitches the flow of the story. A flow is a path of execution of the story. Simple stories have but one flow, but there can be many.\n\n@param FlowName - The name of the flow to switch to. If a flow of that name does not exist a new flow will be created.\n@returns true if the switch created a new flow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SwitchFlow constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SwitchFlow constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SwitchFlow Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSwitchFlow_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowName_MetaData), NewProp_FlowName_MetaData) };
void Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventSwitchFlow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSwitchFlow_Parms), &Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_FlowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers) < 2048);
// ********** End Function SwitchFlow Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SwitchFlow", 	Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::InkpotStory_eventSwitchFlow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::InkpotStory_eventSwitchFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SwitchFlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSwitchFlow)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchFlow(Z_Param_FlowName);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SwitchFlow *******************************************

// ********** Begin Class UInkpotStory Function SwitchFlowToPath ***********************************
struct Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics
{
	struct InkpotStory_eventSwitchFlowToPath_Parms
	{
		FString FlowName;
		FString Path;
		bool Restart;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SwitchFlowToPath\n\x09 * Switches the flow of the story and sets that flow to start from a spefcified path.\n\x09 *\n\x09 * @param FlowName - The name of the flow to switch to. If a flow of that name does not exist a new flow will be created.\n\x09 * @param Path - The path to switch the flow to, specified as knot.stitch.\n\x09 * @param Restart - Should the flow reset to the start of the path or not.\n\x09 * @returns true if the switch created a new flow.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SwitchFlowToPath\nSwitches the flow of the story and sets that flow to start from a spefcified path.\n\n@param FlowName - The name of the flow to switch to. If a flow of that name does not exist a new flow will be created.\n@param Path - The path to switch the flow to, specified as knot.stitch.\n@param Restart - Should the flow reset to the start of the path or not.\n@returns true if the switch created a new flow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SwitchFlowToPath constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_Restart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Restart;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SwitchFlowToPath constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SwitchFlowToPath Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSwitchFlowToPath_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowName_MetaData), NewProp_FlowName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSwitchFlowToPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_Restart_SetBit(void* Obj)
{
	((InkpotStory_eventSwitchFlowToPath_Parms*)Obj)->Restart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSwitchFlowToPath_Parms), &Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventSwitchFlowToPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSwitchFlowToPath_Parms), &Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_FlowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_Restart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::PropPointers) < 2048);
// ********** End Function SwitchFlowToPath Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SwitchFlowToPath", 	Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::InkpotStory_eventSwitchFlowToPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::InkpotStory_eventSwitchFlowToPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSwitchFlowToPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_UBOOL(Z_Param_Restart);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchFlowToPath(Z_Param_FlowName,Z_Param_Path,Z_Param_Restart);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SwitchFlowToPath *************************************

// ********** Begin Class UInkpotStory Function SwitchFlowToPathGT *********************************
struct Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics
{
	struct InkpotStory_eventSwitchFlowToPathGT_Parms
	{
		FString FlowName;
		FGameplayTag Path;
		bool Restart;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Path" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SwitchFlowToPathGT\n\x09 * ( GameplayTag version of SwitchFlowToPath )\n\x09 * Switches the flow of the story and sets that flow to start from a spefcified path.\n\x09 *\n\x09 * @param FlowName - The name of the flow to switch to. If a flow of that name does not exist a new flow will be created.\n\x09 * @param Path - Tag for path start.\n\x09 * @param Restart - Should the flow reset to the start of the path or not.\n\x09 * @returns true if the switch created a new flow.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SwitchFlowToPathGT\n( GameplayTag version of SwitchFlowToPath )\nSwitches the flow of the story and sets that flow to start from a spefcified path.\n\n@param FlowName - The name of the flow to switch to. If a flow of that name does not exist a new flow will be created.\n@param Path - Tag for path start.\n@param Restart - Should the flow reset to the start of the path or not.\n@returns true if the switch created a new flow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SwitchFlowToPathGT constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static void NewProp_Restart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Restart;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SwitchFlowToPathGT constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SwitchFlowToPathGT Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSwitchFlowToPathGT_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowName_MetaData), NewProp_FlowName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSwitchFlowToPathGT_Parms, Path), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_Restart_SetBit(void* Obj)
{
	((InkpotStory_eventSwitchFlowToPathGT_Parms*)Obj)->Restart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSwitchFlowToPathGT_Parms), &Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventSwitchFlowToPathGT_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSwitchFlowToPathGT_Parms), &Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_FlowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_Restart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::PropPointers) < 2048);
// ********** End Function SwitchFlowToPathGT Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SwitchFlowToPathGT", 	Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::InkpotStory_eventSwitchFlowToPathGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::InkpotStory_eventSwitchFlowToPathGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSwitchFlowToPathGT)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
	P_GET_STRUCT(FGameplayTag,Z_Param_Path);
	P_GET_UBOOL(Z_Param_Restart);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchFlowToPathGT(Z_Param_FlowName,Z_Param_Path,Z_Param_Restart);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SwitchFlowToPathGT ***********************************

// ********** Begin Class UInkpotStory Function SwitchToDefaultFlow ********************************
struct Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SwitchToDefaultFlow\n\x09 * Switch back to executing the default flow.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SwitchToDefaultFlow\nSwitch back to executing the default flow." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SwitchToDefaultFlow constinit property declarations *******************
// ********** End Function SwitchToDefaultFlow constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SwitchToDefaultFlow", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSwitchToDefaultFlow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToDefaultFlow();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function SwitchToDefaultFlow **********************************

// ********** Begin Class UInkpotStory Function TagsForContentAtPath *******************************
struct Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics
{
	struct InkpotStory_eventTagsForContentAtPath_Parms
	{
		FString Path;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * TagsForContentAtPath\n\x09 * Gets a tags that are set at the top of the knot and\\or stitch passed in.\n\x09 *\n\x09 * @param Path - Knot and\\or stitch of where to look for the tags.\n\x09 * @returns Array of tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TagsForContentAtPath\nGets a tags that are set at the top of the knot and\\or stitch passed in.\n\n@param Path - Knot and\\or stitch of where to look for the tags.\n@returns Array of tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TagsForContentAtPath constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TagsForContentAtPath constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TagsForContentAtPath Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventTagsForContentAtPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventTagsForContentAtPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers) < 2048);
// ********** End Function TagsForContentAtPath Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "TagsForContentAtPath", 	Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::InkpotStory_eventTagsForContentAtPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::InkpotStory_eventTagsForContentAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execTagsForContentAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->TagsForContentAtPath(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function TagsForContentAtPath *********************************

// ********** Begin Class UInkpotStory Function TagsForContentAtPathGT *****************************
struct Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics
{
	struct InkpotStory_eventTagsForContentAtPathGT_Parms
	{
		FGameplayTag Path;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Path" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * TagsForContentAtPathGT\n\x09 * ( GameplayTag version of TagsForContentAtPath ) \n\x09 * Gets a tags that are set at the top of the knot and\\or stitch passed in.\n\x09 *\n\x09 * @param Path - Knot and\\or stitch of where to look for the tags.\n\x09 * @returns Array of tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TagsForContentAtPathGT\n( GameplayTag version of TagsForContentAtPath )\nGets a tags that are set at the top of the knot and\\or stitch passed in.\n\n@param Path - Knot and\\or stitch of where to look for the tags.\n@returns Array of tags." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TagsForContentAtPathGT constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TagsForContentAtPathGT constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TagsForContentAtPathGT Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventTagsForContentAtPathGT_Parms, Path), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventTagsForContentAtPathGT_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::PropPointers) < 2048);
// ********** End Function TagsForContentAtPathGT Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "TagsForContentAtPathGT", 	Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::InkpotStory_eventTagsForContentAtPathGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::InkpotStory_eventTagsForContentAtPathGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execTagsForContentAtPathGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->TagsForContentAtPathGT(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function TagsForContentAtPathGT *******************************

// ********** Begin Class UInkpotStory Function ToJSON *********************************************
struct Z_Construct_UFunction_UInkpotStory_ToJSON_Statics
{
	struct InkpotStory_eventToJSON_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ToJSON\n\x09 * Serialises the state of the Ink VM to a JSON string. \n\x09 *\n\x09 * @returns String - The serialised state of the Ink VM \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ToJSON\nSerialises the state of the Ink VM to a JSON string.\n\n@returns String - The serialised state of the Ink VM" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ToJSON constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToJSON constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToJSON Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventToJSON_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers) < 2048);
// ********** End Function ToJSON Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ToJSON", 	Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::InkpotStory_eventToJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::InkpotStory_eventToJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ToJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execToJSON)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToJSON();
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function ToJSON ***********************************************

// ********** Begin Class UInkpotStory Function UnbindExternalFunction *****************************
struct Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics
{
	struct InkpotStory_eventUnbindExternalFunction_Parms
	{
		FString FunctionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * UnbindExternalFunction\n\x09 * Unbinds a function that was bound by BindExternalFunction. \n\x09 *\n\x09 * @param FunctionName - Name of the function to unbind.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UnbindExternalFunction\nUnbinds a function that was bound by BindExternalFunction.\n\n@param FunctionName - Name of the function to unbind." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnbindExternalFunction constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnbindExternalFunction constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnbindExternalFunction Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventUnbindExternalFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::NewProp_FunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers) < 2048);
// ********** End Function UnbindExternalFunction Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "UnbindExternalFunction", 	Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::InkpotStory_eventUnbindExternalFunction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::InkpotStory_eventUnbindExternalFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execUnbindExternalFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindExternalFunction(Z_Param_FunctionName);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function UnbindExternalFunction *******************************

// ********** Begin Class UInkpotStory Function VisitCountAtPathString *****************************
struct Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics
{
	struct InkpotStory_eventVisitCountAtPathString_Parms
	{
		FString Path;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * VisitCountAtPathString\n\x09 * Returns the number of times the content at the given path has bee visited \n\x09 *\n\x09 * @returns Visit Count.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VisitCountAtPathString\nReturns the number of times the content at the given path has bee visited\n\n@returns Visit Count." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function VisitCountAtPathString constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function VisitCountAtPathString constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function VisitCountAtPathString Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventVisitCountAtPathString_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventVisitCountAtPathString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::PropPointers) < 2048);
// ********** End Function VisitCountAtPathString Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "VisitCountAtPathString", 	Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::InkpotStory_eventVisitCountAtPathString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::InkpotStory_eventVisitCountAtPathString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execVisitCountAtPathString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->VisitCountAtPathString(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function VisitCountAtPathString *******************************

// ********** Begin Class UInkpotStory Function VisitCountAtPathStringGT ***************************
struct Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics
{
	struct InkpotStory_eventVisitCountAtPathStringGT_Parms
	{
		FGameplayTag Path;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Ink.Path" },
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * VisitCountAtPathStringGT\n\x09 * ( GameplayTag version of VisitCountAtPathString ) \n\x09 * Returns the number of times the content at the given path has bee visited \n\x09 *\n\x09 * @returns Visit Count.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VisitCountAtPathStringGT\n( GameplayTag version of VisitCountAtPathString )\nReturns the number of times the content at the given path has bee visited\n\n@returns Visit Count." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function VisitCountAtPathStringGT constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function VisitCountAtPathStringGT constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function VisitCountAtPathStringGT Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventVisitCountAtPathStringGT_Parms, Path), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventVisitCountAtPathStringGT_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::PropPointers) < 2048);
// ********** End Function VisitCountAtPathStringGT Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "VisitCountAtPathStringGT", 	Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::InkpotStory_eventVisitCountAtPathStringGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::InkpotStory_eventVisitCountAtPathStringGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execVisitCountAtPathStringGT)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->VisitCountAtPathStringGT(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStory Function VisitCountAtPathStringGT *****************************

// ********** Begin Class UInkpotStory *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotStory;
UClass* UInkpotStory::GetPrivateStaticClass()
{
	using TClass = UInkpotStory;
	if (!Z_Registration_Info_UClass_UInkpotStory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotStory"),
			Z_Registration_Info_UClass_UInkpotStory.InnerSingleton,
			StaticRegisterNativesUInkpotStory,
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
	return Z_Registration_Info_UClass_UInkpotStory.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotStory_NoRegister()
{
	return UInkpotStory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotStory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inkpot/InkpotStory.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnContinue_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnContinue" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnMakeChoice_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnMakeChoice" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnChoosePath_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnChoosePath" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnSwitchFlow_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnSwitchFlow" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnStoryLoadJSON_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnStoryLoadJSON" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnLineComplete_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnLineComplete" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnDebugRefresh_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnDebugRefresh" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInFunctionEvaluation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineRenderContextsInFlight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotStory constinit property declarations *****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnContinue;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnMakeChoice;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnChoosePath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnSwitchFlow;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnStoryLoadJSON;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnLineComplete;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnDebugRefresh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Choices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
	static void NewProp_bIsInFunctionEvaluation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInFunctionEvaluation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LineRenderContextsInFlight_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LineRenderContextsInFlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInkpotStory constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BindExternalFunction"), .Pointer = &UInkpotStory::execBindExternalFunction },
		{ .NameUTF8 = UTF8TEXT("CanContinue"), .Pointer = &UInkpotStory::execCanContinue },
		{ .NameUTF8 = UTF8TEXT("ChooseChoice"), .Pointer = &UInkpotStory::execChooseChoice },
		{ .NameUTF8 = UTF8TEXT("ChooseChoiceIndex"), .Pointer = &UInkpotStory::execChooseChoiceIndex },
		{ .NameUTF8 = UTF8TEXT("ChoosePath"), .Pointer = &UInkpotStory::execChoosePath },
		{ .NameUTF8 = UTF8TEXT("ChoosePathGT"), .Pointer = &UInkpotStory::execChoosePathGT },
		{ .NameUTF8 = UTF8TEXT("ChoosePathString"), .Pointer = &UInkpotStory::execChoosePathString },
		{ .NameUTF8 = UTF8TEXT("ChoosePathStringGT"), .Pointer = &UInkpotStory::execChoosePathStringGT },
		{ .NameUTF8 = UTF8TEXT("ClearAllVariableObservers"), .Pointer = &UInkpotStory::execClearAllVariableObservers },
		{ .NameUTF8 = UTF8TEXT("ClearAllVariableObserversGT"), .Pointer = &UInkpotStory::execClearAllVariableObserversGT },
		{ .NameUTF8 = UTF8TEXT("ClearVariableChange"), .Pointer = &UInkpotStory::execClearVariableChange },
		{ .NameUTF8 = UTF8TEXT("ClearVariableChangeGT"), .Pointer = &UInkpotStory::execClearVariableChangeGT },
		{ .NameUTF8 = UTF8TEXT("Continue"), .Pointer = &UInkpotStory::execContinue },
		{ .NameUTF8 = UTF8TEXT("ContinueIfYouCan"), .Pointer = &UInkpotStory::execContinueIfYouCan },
		{ .NameUTF8 = UTF8TEXT("ContinueMaximally"), .Pointer = &UInkpotStory::execContinueMaximally },
		{ .NameUTF8 = UTF8TEXT("ContinueMaximallyAtPath"), .Pointer = &UInkpotStory::execContinueMaximallyAtPath },
		{ .NameUTF8 = UTF8TEXT("ContinueMaximallyAtPathGT"), .Pointer = &UInkpotStory::execContinueMaximallyAtPathGT },
		{ .NameUTF8 = UTF8TEXT("DumpContentAtKnot"), .Pointer = &UInkpotStory::execDumpContentAtKnot },
		{ .NameUTF8 = UTF8TEXT("DumpContentAtPath"), .Pointer = &UInkpotStory::execDumpContentAtPath },
		{ .NameUTF8 = UTF8TEXT("DumpDebug"), .Pointer = &UInkpotStory::execDumpDebug },
		{ .NameUTF8 = UTF8TEXT("DumpMainContent"), .Pointer = &UInkpotStory::execDumpMainContent },
		{ .NameUTF8 = UTF8TEXT("EvalFunction"), .Pointer = &UInkpotStory::execEvalFunction },
		{ .NameUTF8 = UTF8TEXT("EvaluateFunction"), .Pointer = &UInkpotStory::execEvaluateFunction },
		{ .NameUTF8 = UTF8TEXT("GatherAllStrings"), .Pointer = &UInkpotStory::execGatherAllStrings },
		{ .NameUTF8 = UTF8TEXT("GetAliveFlowCount"), .Pointer = &UInkpotStory::execGetAliveFlowCount },
		{ .NameUTF8 = UTF8TEXT("GetAliveFlowNames"), .Pointer = &UInkpotStory::execGetAliveFlowNames },
		{ .NameUTF8 = UTF8TEXT("GetBool"), .Pointer = &UInkpotStory::execGetBool },
		{ .NameUTF8 = UTF8TEXT("GetBoolGT"), .Pointer = &UInkpotStory::execGetBoolGT },
		{ .NameUTF8 = UTF8TEXT("GetCurrentChoices"), .Pointer = &UInkpotStory::execGetCurrentChoices },
		{ .NameUTF8 = UTF8TEXT("GetCurrentFlowName"), .Pointer = &UInkpotStory::execGetCurrentFlowName },
		{ .NameUTF8 = UTF8TEXT("GetCurrentLine"), .Pointer = &UInkpotStory::execGetCurrentLine },
		{ .NameUTF8 = UTF8TEXT("GetCurrentTags"), .Pointer = &UInkpotStory::execGetCurrentTags },
		{ .NameUTF8 = UTF8TEXT("GetCurrentText"), .Pointer = &UInkpotStory::execGetCurrentText },
		{ .NameUTF8 = UTF8TEXT("GetFloat"), .Pointer = &UInkpotStory::execGetFloat },
		{ .NameUTF8 = UTF8TEXT("GetFloatGT"), .Pointer = &UInkpotStory::execGetFloatGT },
		{ .NameUTF8 = UTF8TEXT("GetInt"), .Pointer = &UInkpotStory::execGetInt },
		{ .NameUTF8 = UTF8TEXT("GetIntGT"), .Pointer = &UInkpotStory::execGetIntGT },
		{ .NameUTF8 = UTF8TEXT("GetList"), .Pointer = &UInkpotStory::execGetList },
		{ .NameUTF8 = UTF8TEXT("GetListGT"), .Pointer = &UInkpotStory::execGetListGT },
		{ .NameUTF8 = UTF8TEXT("GetNamedContent"), .Pointer = &UInkpotStory::execGetNamedContent },
		{ .NameUTF8 = UTF8TEXT("GetNamedContentForKnot"), .Pointer = &UInkpotStory::execGetNamedContentForKnot },
		{ .NameUTF8 = UTF8TEXT("GetNamedContentForPath"), .Pointer = &UInkpotStory::execGetNamedContentForPath },
		{ .NameUTF8 = UTF8TEXT("GetString"), .Pointer = &UInkpotStory::execGetString },
		{ .NameUTF8 = UTF8TEXT("GetStringGT"), .Pointer = &UInkpotStory::execGetStringGT },
		{ .NameUTF8 = UTF8TEXT("GetValue"), .Pointer = &UInkpotStory::execGetValue },
		{ .NameUTF8 = UTF8TEXT("GetValueGT"), .Pointer = &UInkpotStory::execGetValueGT },
		{ .NameUTF8 = UTF8TEXT("GlobalTags"), .Pointer = &UInkpotStory::execGlobalTags },
		{ .NameUTF8 = UTF8TEXT("HasChoices"), .Pointer = &UInkpotStory::execHasChoices },
		{ .NameUTF8 = UTF8TEXT("IsFlowAlive"), .Pointer = &UInkpotStory::execIsFlowAlive },
		{ .NameUTF8 = UTF8TEXT("IsLineRendering"), .Pointer = &UInkpotStory::execIsLineRendering },
		{ .NameUTF8 = UTF8TEXT("IsVariableDefined"), .Pointer = &UInkpotStory::execIsVariableDefined },
		{ .NameUTF8 = UTF8TEXT("IsVariableDefinedGT"), .Pointer = &UInkpotStory::execIsVariableDefinedGT },
		{ .NameUTF8 = UTF8TEXT("LoadJSON"), .Pointer = &UInkpotStory::execLoadJSON },
		{ .NameUTF8 = UTF8TEXT("NotifyLineRenderBegin"), .Pointer = &UInkpotStory::execNotifyLineRenderBegin },
		{ .NameUTF8 = UTF8TEXT("NotifyLineRenderEnd"), .Pointer = &UInkpotStory::execNotifyLineRenderEnd },
		{ .NameUTF8 = UTF8TEXT("RemoveFlow"), .Pointer = &UInkpotStory::execRemoveFlow },
		{ .NameUTF8 = UTF8TEXT("SetBool"), .Pointer = &UInkpotStory::execSetBool },
		{ .NameUTF8 = UTF8TEXT("SetBoolGT"), .Pointer = &UInkpotStory::execSetBoolGT },
		{ .NameUTF8 = UTF8TEXT("SetEmpty"), .Pointer = &UInkpotStory::execSetEmpty },
		{ .NameUTF8 = UTF8TEXT("SetEmptyGT"), .Pointer = &UInkpotStory::execSetEmptyGT },
		{ .NameUTF8 = UTF8TEXT("SetFloat"), .Pointer = &UInkpotStory::execSetFloat },
		{ .NameUTF8 = UTF8TEXT("SetFloatGT"), .Pointer = &UInkpotStory::execSetFloatGT },
		{ .NameUTF8 = UTF8TEXT("SetInt"), .Pointer = &UInkpotStory::execSetInt },
		{ .NameUTF8 = UTF8TEXT("SetIntGT"), .Pointer = &UInkpotStory::execSetIntGT },
		{ .NameUTF8 = UTF8TEXT("SetList"), .Pointer = &UInkpotStory::execSetList },
		{ .NameUTF8 = UTF8TEXT("SetListGT"), .Pointer = &UInkpotStory::execSetListGT },
		{ .NameUTF8 = UTF8TEXT("SetOnVariableChange"), .Pointer = &UInkpotStory::execSetOnVariableChange },
		{ .NameUTF8 = UTF8TEXT("SetOnVariableChangeGT"), .Pointer = &UInkpotStory::execSetOnVariableChangeGT },
		{ .NameUTF8 = UTF8TEXT("SetString"), .Pointer = &UInkpotStory::execSetString },
		{ .NameUTF8 = UTF8TEXT("SetStringGT"), .Pointer = &UInkpotStory::execSetStringGT },
		{ .NameUTF8 = UTF8TEXT("SetValue"), .Pointer = &UInkpotStory::execSetValue },
		{ .NameUTF8 = UTF8TEXT("SetValueGT"), .Pointer = &UInkpotStory::execSetValueGT },
		{ .NameUTF8 = UTF8TEXT("SwitchFlow"), .Pointer = &UInkpotStory::execSwitchFlow },
		{ .NameUTF8 = UTF8TEXT("SwitchFlowToPath"), .Pointer = &UInkpotStory::execSwitchFlowToPath },
		{ .NameUTF8 = UTF8TEXT("SwitchFlowToPathGT"), .Pointer = &UInkpotStory::execSwitchFlowToPathGT },
		{ .NameUTF8 = UTF8TEXT("SwitchToDefaultFlow"), .Pointer = &UInkpotStory::execSwitchToDefaultFlow },
		{ .NameUTF8 = UTF8TEXT("TagsForContentAtPath"), .Pointer = &UInkpotStory::execTagsForContentAtPath },
		{ .NameUTF8 = UTF8TEXT("TagsForContentAtPathGT"), .Pointer = &UInkpotStory::execTagsForContentAtPathGT },
		{ .NameUTF8 = UTF8TEXT("ToJSON"), .Pointer = &UInkpotStory::execToJSON },
		{ .NameUTF8 = UTF8TEXT("UnbindExternalFunction"), .Pointer = &UInkpotStory::execUnbindExternalFunction },
		{ .NameUTF8 = UTF8TEXT("VisitCountAtPathString"), .Pointer = &UInkpotStory::execVisitCountAtPathString },
		{ .NameUTF8 = UTF8TEXT("VisitCountAtPathStringGT"), .Pointer = &UInkpotStory::execVisitCountAtPathStringGT },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotStory_BindExternalFunction, "BindExternalFunction" }, // 290762179
		{ &Z_Construct_UFunction_UInkpotStory_CanContinue, "CanContinue" }, // 3419233592
		{ &Z_Construct_UFunction_UInkpotStory_ChooseChoice, "ChooseChoice" }, // 1743453862
		{ &Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex, "ChooseChoiceIndex" }, // 2944495955
		{ &Z_Construct_UFunction_UInkpotStory_ChoosePath, "ChoosePath" }, // 368723908
		{ &Z_Construct_UFunction_UInkpotStory_ChoosePathGT, "ChoosePathGT" }, // 3636298785
		{ &Z_Construct_UFunction_UInkpotStory_ChoosePathString, "ChoosePathString" }, // 3813905031
		{ &Z_Construct_UFunction_UInkpotStory_ChoosePathStringGT, "ChoosePathStringGT" }, // 223923231
		{ &Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers, "ClearAllVariableObservers" }, // 2942933793
		{ &Z_Construct_UFunction_UInkpotStory_ClearAllVariableObserversGT, "ClearAllVariableObserversGT" }, // 2503595598
		{ &Z_Construct_UFunction_UInkpotStory_ClearVariableChange, "ClearVariableChange" }, // 485823078
		{ &Z_Construct_UFunction_UInkpotStory_ClearVariableChangeGT, "ClearVariableChangeGT" }, // 1372543691
		{ &Z_Construct_UFunction_UInkpotStory_Continue, "Continue" }, // 1470528135
		{ &Z_Construct_UFunction_UInkpotStory_ContinueIfYouCan, "ContinueIfYouCan" }, // 2299486236
		{ &Z_Construct_UFunction_UInkpotStory_ContinueMaximally, "ContinueMaximally" }, // 3976597372
		{ &Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath, "ContinueMaximallyAtPath" }, // 3308624547
		{ &Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPathGT, "ContinueMaximallyAtPathGT" }, // 1713815973
		{ &Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot, "DumpContentAtKnot" }, // 281185189
		{ &Z_Construct_UFunction_UInkpotStory_DumpContentAtPath, "DumpContentAtPath" }, // 1105939472
		{ &Z_Construct_UFunction_UInkpotStory_DumpDebug, "DumpDebug" }, // 2821212359
		{ &Z_Construct_UFunction_UInkpotStory_DumpMainContent, "DumpMainContent" }, // 1008231747
		{ &Z_Construct_UFunction_UInkpotStory_EvalFunction, "EvalFunction" }, // 4230872130
		{ &Z_Construct_UFunction_UInkpotStory_EvaluateFunction, "EvaluateFunction" }, // 2571728138
		{ &Z_Construct_UFunction_UInkpotStory_GatherAllStrings, "GatherAllStrings" }, // 1416588620
		{ &Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount, "GetAliveFlowCount" }, // 3313449315
		{ &Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames, "GetAliveFlowNames" }, // 1919290442
		{ &Z_Construct_UFunction_UInkpotStory_GetBool, "GetBool" }, // 1426493193
		{ &Z_Construct_UFunction_UInkpotStory_GetBoolGT, "GetBoolGT" }, // 1085088907
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentChoices, "GetCurrentChoices" }, // 3626283755
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName, "GetCurrentFlowName" }, // 1506937239
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentLine, "GetCurrentLine" }, // 3253284368
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentTags, "GetCurrentTags" }, // 1267339819
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentText, "GetCurrentText" }, // 3274477131
		{ &Z_Construct_UFunction_UInkpotStory_GetFloat, "GetFloat" }, // 2566699248
		{ &Z_Construct_UFunction_UInkpotStory_GetFloatGT, "GetFloatGT" }, // 2219502006
		{ &Z_Construct_UFunction_UInkpotStory_GetInt, "GetInt" }, // 3527032388
		{ &Z_Construct_UFunction_UInkpotStory_GetIntGT, "GetIntGT" }, // 3379640981
		{ &Z_Construct_UFunction_UInkpotStory_GetList, "GetList" }, // 1097350439
		{ &Z_Construct_UFunction_UInkpotStory_GetListGT, "GetListGT" }, // 1528950089
		{ &Z_Construct_UFunction_UInkpotStory_GetNamedContent, "GetNamedContent" }, // 85279867
		{ &Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot, "GetNamedContentForKnot" }, // 1487360625
		{ &Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath, "GetNamedContentForPath" }, // 2203195529
		{ &Z_Construct_UFunction_UInkpotStory_GetString, "GetString" }, // 3643105782
		{ &Z_Construct_UFunction_UInkpotStory_GetStringGT, "GetStringGT" }, // 1550198173
		{ &Z_Construct_UFunction_UInkpotStory_GetValue, "GetValue" }, // 337911530
		{ &Z_Construct_UFunction_UInkpotStory_GetValueGT, "GetValueGT" }, // 412474653
		{ &Z_Construct_UFunction_UInkpotStory_GlobalTags, "GlobalTags" }, // 2839418922
		{ &Z_Construct_UFunction_UInkpotStory_HasChoices, "HasChoices" }, // 3400419761
		{ &Z_Construct_UFunction_UInkpotStory_IsFlowAlive, "IsFlowAlive" }, // 1803901505
		{ &Z_Construct_UFunction_UInkpotStory_IsLineRendering, "IsLineRendering" }, // 2845002382
		{ &Z_Construct_UFunction_UInkpotStory_IsVariableDefined, "IsVariableDefined" }, // 692112370
		{ &Z_Construct_UFunction_UInkpotStory_IsVariableDefinedGT, "IsVariableDefinedGT" }, // 2892140838
		{ &Z_Construct_UFunction_UInkpotStory_LoadJSON, "LoadJSON" }, // 1309048852
		{ &Z_Construct_UFunction_UInkpotStory_NotifyLineRenderBegin, "NotifyLineRenderBegin" }, // 1128697660
		{ &Z_Construct_UFunction_UInkpotStory_NotifyLineRenderEnd, "NotifyLineRenderEnd" }, // 148530375
		{ &Z_Construct_UFunction_UInkpotStory_RemoveFlow, "RemoveFlow" }, // 3381800336
		{ &Z_Construct_UFunction_UInkpotStory_SetBool, "SetBool" }, // 1361936812
		{ &Z_Construct_UFunction_UInkpotStory_SetBoolGT, "SetBoolGT" }, // 1686721658
		{ &Z_Construct_UFunction_UInkpotStory_SetEmpty, "SetEmpty" }, // 349146711
		{ &Z_Construct_UFunction_UInkpotStory_SetEmptyGT, "SetEmptyGT" }, // 2136594603
		{ &Z_Construct_UFunction_UInkpotStory_SetFloat, "SetFloat" }, // 3628033487
		{ &Z_Construct_UFunction_UInkpotStory_SetFloatGT, "SetFloatGT" }, // 2416071842
		{ &Z_Construct_UFunction_UInkpotStory_SetInt, "SetInt" }, // 2935338586
		{ &Z_Construct_UFunction_UInkpotStory_SetIntGT, "SetIntGT" }, // 4272359900
		{ &Z_Construct_UFunction_UInkpotStory_SetList, "SetList" }, // 2717114657
		{ &Z_Construct_UFunction_UInkpotStory_SetListGT, "SetListGT" }, // 1024306327
		{ &Z_Construct_UFunction_UInkpotStory_SetOnVariableChange, "SetOnVariableChange" }, // 1036949620
		{ &Z_Construct_UFunction_UInkpotStory_SetOnVariableChangeGT, "SetOnVariableChangeGT" }, // 2233395557
		{ &Z_Construct_UFunction_UInkpotStory_SetString, "SetString" }, // 1213835554
		{ &Z_Construct_UFunction_UInkpotStory_SetStringGT, "SetStringGT" }, // 2238230287
		{ &Z_Construct_UFunction_UInkpotStory_SetValue, "SetValue" }, // 994887962
		{ &Z_Construct_UFunction_UInkpotStory_SetValueGT, "SetValueGT" }, // 2147055515
		{ &Z_Construct_UFunction_UInkpotStory_SwitchFlow, "SwitchFlow" }, // 1589262129
		{ &Z_Construct_UFunction_UInkpotStory_SwitchFlowToPath, "SwitchFlowToPath" }, // 1180849541
		{ &Z_Construct_UFunction_UInkpotStory_SwitchFlowToPathGT, "SwitchFlowToPathGT" }, // 929188147
		{ &Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow, "SwitchToDefaultFlow" }, // 834477167
		{ &Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath, "TagsForContentAtPath" }, // 1340474932
		{ &Z_Construct_UFunction_UInkpotStory_TagsForContentAtPathGT, "TagsForContentAtPathGT" }, // 2714475650
		{ &Z_Construct_UFunction_UInkpotStory_ToJSON, "ToJSON" }, // 1459136926
		{ &Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction, "UnbindExternalFunction" }, // 3690632919
		{ &Z_Construct_UFunction_UInkpotStory_VisitCountAtPathString, "VisitCountAtPathString" }, // 103747973
		{ &Z_Construct_UFunction_UInkpotStory_VisitCountAtPathStringGT, "VisitCountAtPathStringGT" }, // 2361363267
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotStory_Statics

// ********** Begin Class UInkpotStory Property Definitions ****************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnContinue = { "EventOnContinue", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnContinue), Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnContinue_MetaData), NewProp_EventOnContinue_MetaData) }; // 2788924541
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnMakeChoice = { "EventOnMakeChoice", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnMakeChoice), Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnMakeChoice_MetaData), NewProp_EventOnMakeChoice_MetaData) }; // 1052867878
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnChoosePath = { "EventOnChoosePath", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnChoosePath), Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnChoosePath_MetaData), NewProp_EventOnChoosePath_MetaData) }; // 33931600
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnSwitchFlow = { "EventOnSwitchFlow", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnSwitchFlow), Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnSwitchFlow_MetaData), NewProp_EventOnSwitchFlow_MetaData) }; // 598553101
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnStoryLoadJSON = { "EventOnStoryLoadJSON", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnStoryLoadJSON), Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnStoryLoadJSON_MetaData), NewProp_EventOnStoryLoadJSON_MetaData) }; // 4262035491
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnLineComplete = { "EventOnLineComplete", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnLineComplete), Z_Construct_UDelegateFunction_Inkpot_OnLineComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnLineComplete_MetaData), NewProp_EventOnLineComplete_MetaData) }; // 1760513249
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnDebugRefresh = { "EventOnDebugRefresh", nullptr, (EPropertyFlags)0x0020080810080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnDebugRefresh), Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnDebugRefresh_MetaData), NewProp_EventOnDebugRefresh_MetaData) }; // 2788924541
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) };
void Z_Construct_UClass_UInkpotStory_Statics::NewProp_bIsInFunctionEvaluation_SetBit(void* Obj)
{
	((UInkpotStory*)Obj)->bIsInFunctionEvaluation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_bIsInFunctionEvaluation = { "bIsInFunctionEvaluation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotStory), &Z_Construct_UClass_UInkpotStory_Statics::NewProp_bIsInFunctionEvaluation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInFunctionEvaluation_MetaData), NewProp_bIsInFunctionEvaluation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_LineRenderContextsInFlight_ElementProp = { "LineRenderContextsInFlight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_LineRenderContextsInFlight = { "LineRenderContextsInFlight", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, LineRenderContextsInFlight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineRenderContextsInFlight_MetaData), NewProp_LineRenderContextsInFlight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnContinue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnMakeChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnChoosePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnSwitchFlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnStoryLoadJSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnLineComplete,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnDebugRefresh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_bIsInFunctionEvaluation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_LineRenderContextsInFlight_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_LineRenderContextsInFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::PropPointers) < 2048);
// ********** End Class UInkpotStory Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UInkpotStory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStory_Statics::ClassParams = {
	&UInkpotStory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInkpotStory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStory_Statics::Class_MetaDataParams)
};
void UInkpotStory::StaticRegisterNativesUInkpotStory()
{
	UClass* Class = UInkpotStory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotStory_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotStory()
{
	if (!Z_Registration_Info_UClass_UInkpotStory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStory.OuterSingleton, Z_Construct_UClass_UInkpotStory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStory.OuterSingleton;
}
UInkpotStory::UInkpotStory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotStory);
UInkpotStory::~UInkpotStory() {}
// ********** End Class UInkpotStory ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStory, UInkpotStory::StaticClass, TEXT("UInkpotStory"), &Z_Registration_Info_UClass_UInkpotStory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStory), 3454671970U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h__Script_Inkpot_1922356939{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
