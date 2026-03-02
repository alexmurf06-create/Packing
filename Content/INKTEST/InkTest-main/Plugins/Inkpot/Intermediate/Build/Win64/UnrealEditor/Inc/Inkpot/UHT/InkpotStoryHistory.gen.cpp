// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/InkpotStoryHistory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotStoryHistory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOT_API UClass* Z_Construct_UClass_UInkpotChoice_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryHistory();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryHistory_NoRegister();
INKPOT_API UEnum* Z_Construct_UEnum_Inkpot_EInkpotStoryEventType();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EInkpotStoryEventType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInkpotStoryEventType;
static UEnum* EInkpotStoryEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInkpotStoryEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInkpotStoryEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inkpot_EInkpotStoryEventType, (UObject*)Z_Construct_UPackage__Script_Inkpot(), TEXT("EInkpotStoryEventType"));
	}
	return Z_Registration_Info_UEnum_EInkpotStoryEventType.OuterSingleton;
}
template<> INKPOT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInkpotStoryEventType>()
{
	return EInkpotStoryEventType_StaticEnum();
}
struct Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Choice.Name", "EInkpotStoryEventType::Choice" },
		{ "ChoosePath.Name", "EInkpotStoryEventType::ChoosePath" },
		{ "Continue.Name", "EInkpotStoryEventType::Continue" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
		{ "None.Name", "EInkpotStoryEventType::None" },
		{ "SwitchFlow.Name", "EInkpotStoryEventType::SwitchFlow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInkpotStoryEventType::None", (int64)EInkpotStoryEventType::None },
		{ "EInkpotStoryEventType::Continue", (int64)EInkpotStoryEventType::Continue },
		{ "EInkpotStoryEventType::Choice", (int64)EInkpotStoryEventType::Choice },
		{ "EInkpotStoryEventType::SwitchFlow", (int64)EInkpotStoryEventType::SwitchFlow },
		{ "EInkpotStoryEventType::ChoosePath", (int64)EInkpotStoryEventType::ChoosePath },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Inkpot,
	nullptr,
	"EInkpotStoryEventType",
	"EInkpotStoryEventType",
	Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Inkpot_EInkpotStoryEventType()
{
	if (!Z_Registration_Info_UEnum_EInkpotStoryEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInkpotStoryEventType.InnerSingleton, Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInkpotStoryEventType.InnerSingleton;
}
// ********** End Enum EInkpotStoryEventType *******************************************************

// ********** Begin ScriptStruct FInkpotStoryHistoryEvent ******************************************
struct Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInkpotStoryHistoryEvent); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInkpotStoryHistoryEvent); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choice_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInkpotStoryHistoryEvent constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Choice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FInkpotStoryHistoryEvent constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInkpotStoryHistoryEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInkpotStoryHistoryEvent;
class UScriptStruct* FInkpotStoryHistoryEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInkpotStoryHistoryEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInkpotStoryHistoryEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent, (UObject*)Z_Construct_UPackage__Script_Inkpot(), TEXT("InkpotStoryHistoryEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FInkpotStoryHistoryEvent.OuterSingleton;
	}

// ********** Begin ScriptStruct FInkpotStoryHistoryEvent Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInkpotStoryHistoryEvent, Type), Z_Construct_UEnum_Inkpot_EInkpotStoryEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4261158683
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInkpotStoryHistoryEvent, Choice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choice_MetaData), NewProp_Choice_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInkpotStoryHistoryEvent, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Choice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FInkpotStoryHistoryEvent Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	nullptr,
	&NewStructOps,
	"InkpotStoryHistoryEvent",
	Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::PropPointers),
	sizeof(FInkpotStoryHistoryEvent),
	alignof(FInkpotStoryHistoryEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FInkpotStoryHistoryEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInkpotStoryHistoryEvent.InnerSingleton, Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInkpotStoryHistoryEvent.InnerSingleton);
}
// ********** End ScriptStruct FInkpotStoryHistoryEvent ********************************************

// ********** Begin Class UInkpotStoryHistory Function OnStoryChoice *******************************
struct Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics
{
	struct InkpotStoryHistory_eventOnStoryChoice_Parms
	{
		UInkpotStory* Story;
		UInkpotChoice* Choice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStoryChoice constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnStoryChoice constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnStoryChoice Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryChoice_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryChoice_Parms, Choice), Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::NewProp_Choice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::PropPointers) < 2048);
// ********** End Function OnStoryChoice Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryHistory, nullptr, "OnStoryChoice", 	Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::InkpotStoryHistory_eventOnStoryChoice_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::InkpotStoryHistory_eventOnStoryChoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryHistory::execOnStoryChoice)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_OBJECT(UInkpotChoice,Z_Param_Choice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStoryChoice(Z_Param_Story,Z_Param_Choice);
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryHistory Function OnStoryChoice *********************************

// ********** Begin Class UInkpotStoryHistory Function OnStoryChoosePath ***************************
struct Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics
{
	struct InkpotStoryHistory_eventOnStoryChoosePath_Parms
	{
		UInkpotStory* Story;
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStoryChoosePath constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnStoryChoosePath constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnStoryChoosePath Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryChoosePath_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryChoosePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::PropPointers) < 2048);
// ********** End Function OnStoryChoosePath Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryHistory, nullptr, "OnStoryChoosePath", 	Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::InkpotStoryHistory_eventOnStoryChoosePath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::InkpotStoryHistory_eventOnStoryChoosePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryHistory::execOnStoryChoosePath)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStoryChoosePath(Z_Param_Story,Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryHistory Function OnStoryChoosePath *****************************

// ********** Begin Class UInkpotStoryHistory Function OnStoryContinue *****************************
struct Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics
{
	struct InkpotStoryHistory_eventOnStoryContinue_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStoryContinue constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnStoryContinue constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnStoryContinue Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryContinue_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::PropPointers) < 2048);
// ********** End Function OnStoryContinue Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryHistory, nullptr, "OnStoryContinue", 	Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::InkpotStoryHistory_eventOnStoryContinue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::InkpotStoryHistory_eventOnStoryContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryHistory::execOnStoryContinue)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStoryContinue(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryHistory Function OnStoryContinue *******************************

// ********** Begin Class UInkpotStoryHistory Function OnStorySwitchFlow ***************************
struct Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics
{
	struct InkpotStoryHistory_eventOnStorySwitchFlow_Parms
	{
		UInkpotStory* Story;
		FString Flow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStorySwitchFlow constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Flow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnStorySwitchFlow constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnStorySwitchFlow Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStorySwitchFlow_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStorySwitchFlow_Parms, Flow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flow_MetaData), NewProp_Flow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Flow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::PropPointers) < 2048);
// ********** End Function OnStorySwitchFlow Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryHistory, nullptr, "OnStorySwitchFlow", 	Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::InkpotStoryHistory_eventOnStorySwitchFlow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::InkpotStoryHistory_eventOnStorySwitchFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryHistory::execOnStorySwitchFlow)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_PROPERTY(FStrProperty,Z_Param_Flow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStorySwitchFlow(Z_Param_Story,Z_Param_Flow);
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryHistory Function OnStorySwitchFlow *****************************

// ********** Begin Class UInkpotStoryHistory ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotStoryHistory;
UClass* UInkpotStoryHistory::GetPrivateStaticClass()
{
	using TClass = UInkpotStoryHistory;
	if (!Z_Registration_Info_UClass_UInkpotStoryHistory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotStoryHistory"),
			Z_Registration_Info_UClass_UInkpotStoryHistory.InnerSingleton,
			StaticRegisterNativesUInkpotStoryHistory,
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
	return Z_Registration_Info_UClass_UInkpotStoryHistory.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotStoryHistory_NoRegister()
{
	return UInkpotStoryHistory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotStoryHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inkpot/InkpotStoryHistory.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInReplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotStoryHistory constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
	static void NewProp_bInReplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInkpotStoryHistory constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnStoryChoice"), .Pointer = &UInkpotStoryHistory::execOnStoryChoice },
		{ .NameUTF8 = UTF8TEXT("OnStoryChoosePath"), .Pointer = &UInkpotStoryHistory::execOnStoryChoosePath },
		{ .NameUTF8 = UTF8TEXT("OnStoryContinue"), .Pointer = &UInkpotStoryHistory::execOnStoryContinue },
		{ .NameUTF8 = UTF8TEXT("OnStorySwitchFlow"), .Pointer = &UInkpotStoryHistory::execOnStorySwitchFlow },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice, "OnStoryChoice" }, // 3455986374
		{ &Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath, "OnStoryChoosePath" }, // 109017894
		{ &Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue, "OnStoryContinue" }, // 3297711493
		{ &Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow, "OnStorySwitchFlow" }, // 1119540847
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStoryHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotStoryHistory_Statics

// ********** Begin Class UInkpotStoryHistory Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_RandSeed = { "RandSeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryHistory, RandSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandSeed_MetaData), NewProp_RandSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent, METADATA_PARAMS(0, nullptr) }; // 177521617
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryHistory, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) }; // 177521617
void Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay_SetBit(void* Obj)
{
	((UInkpotStoryHistory*)Obj)->bInReplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay = { "bInReplay", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotStoryHistory), &Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInReplay_MetaData), NewProp_bInReplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStoryHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_RandSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::PropPointers) < 2048);
// ********** End Class UInkpotStoryHistory Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UInkpotStoryHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStoryHistory_Statics::ClassParams = {
	&UInkpotStoryHistory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInkpotStoryHistory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStoryHistory_Statics::Class_MetaDataParams)
};
void UInkpotStoryHistory::StaticRegisterNativesUInkpotStoryHistory()
{
	UClass* Class = UInkpotStoryHistory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotStoryHistory_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotStoryHistory()
{
	if (!Z_Registration_Info_UClass_UInkpotStoryHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStoryHistory.OuterSingleton, Z_Construct_UClass_UInkpotStoryHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStoryHistory.OuterSingleton;
}
UInkpotStoryHistory::UInkpotStoryHistory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotStoryHistory);
UInkpotStoryHistory::~UInkpotStoryHistory() {}
// ********** End Class UInkpotStoryHistory ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h__Script_Inkpot_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInkpotStoryEventType_StaticEnum, TEXT("EInkpotStoryEventType"), &Z_Registration_Info_UEnum_EInkpotStoryEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4261158683U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInkpotStoryHistoryEvent::StaticStruct, Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewStructOps, TEXT("InkpotStoryHistoryEvent"),&Z_Registration_Info_UScriptStruct_FInkpotStoryHistoryEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInkpotStoryHistoryEvent), 177521617U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStoryHistory, UInkpotStoryHistory::StaticClass, TEXT("UInkpotStoryHistory"), &Z_Registration_Info_UClass_UInkpotStoryHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStoryHistory), 3330895552U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h__Script_Inkpot_595712628{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h__Script_Inkpot_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h__Script_Inkpot_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h__Script_Inkpot_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h__Script_Inkpot_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h__Script_Inkpot_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
