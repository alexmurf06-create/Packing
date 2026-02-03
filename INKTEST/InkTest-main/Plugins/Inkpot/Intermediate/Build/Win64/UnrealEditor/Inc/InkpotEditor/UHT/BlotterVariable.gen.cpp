// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blotter/BlotterVariable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlotterVariable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterOption_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryVariable_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterVariable();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterVariable_NoRegister();
INKPOTEDITOR_API UEnum* Z_Construct_UEnum_InkpotEditor_EBlotterVariableType();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBlotterVariableType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlotterVariableType;
static UEnum* EBlotterVariableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlotterVariableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlotterVariableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InkpotEditor_EBlotterVariableType, (UObject*)Z_Construct_UPackage__Script_InkpotEditor(), TEXT("EBlotterVariableType"));
	}
	return Z_Registration_Info_UEnum_EBlotterVariableType.OuterSingleton;
}
template<> INKPOTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlotterVariableType>()
{
	return EBlotterVariableType_StaticEnum();
}
struct Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChoicePoint.Name", "EBlotterVariableType::ChoicePoint" },
		{ "Container.Name", "EBlotterVariableType::Container" },
		{ "ControlCommand.Name", "EBlotterVariableType::ControlCommand" },
		{ "Divert.Name", "EBlotterVariableType::Divert" },
		{ "Glue.Name", "EBlotterVariableType::Glue" },
		{ "ListOrigin.Name", "EBlotterVariableType::ListOrigin" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
		{ "NativeFunctionCall.Name", "EBlotterVariableType::NativeFunctionCall" },
		{ "None.Name", "EBlotterVariableType::None" },
		{ "Object.Name", "EBlotterVariableType::Object" },
		{ "Tag.Name", "EBlotterVariableType::Tag" },
		{ "Value.Name", "EBlotterVariableType::Value" },
		{ "ValueBool.Name", "EBlotterVariableType::ValueBool" },
		{ "ValueDivertTarget.Name", "EBlotterVariableType::ValueDivertTarget" },
		{ "ValueFloat.Name", "EBlotterVariableType::ValueFloat" },
		{ "ValueInt.Name", "EBlotterVariableType::ValueInt" },
		{ "ValueList.Name", "EBlotterVariableType::ValueList" },
		{ "ValueString.Name", "EBlotterVariableType::ValueString" },
		{ "ValueVariablePointer.Name", "EBlotterVariableType::ValueVariablePointer" },
		{ "VariableAssignment.Name", "EBlotterVariableType::VariableAssignment" },
		{ "VariableReference.Name", "EBlotterVariableType::VariableReference" },
		{ "Void.Name", "EBlotterVariableType::Void" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlotterVariableType::None", (int64)EBlotterVariableType::None },
		{ "EBlotterVariableType::ChoicePoint", (int64)EBlotterVariableType::ChoicePoint },
		{ "EBlotterVariableType::Container", (int64)EBlotterVariableType::Container },
		{ "EBlotterVariableType::ControlCommand", (int64)EBlotterVariableType::ControlCommand },
		{ "EBlotterVariableType::Divert", (int64)EBlotterVariableType::Divert },
		{ "EBlotterVariableType::Glue", (int64)EBlotterVariableType::Glue },
		{ "EBlotterVariableType::NativeFunctionCall", (int64)EBlotterVariableType::NativeFunctionCall },
		{ "EBlotterVariableType::Tag", (int64)EBlotterVariableType::Tag },
		{ "EBlotterVariableType::ValueBool", (int64)EBlotterVariableType::ValueBool },
		{ "EBlotterVariableType::ValueDivertTarget", (int64)EBlotterVariableType::ValueDivertTarget },
		{ "EBlotterVariableType::ValueFloat", (int64)EBlotterVariableType::ValueFloat },
		{ "EBlotterVariableType::ValueInt", (int64)EBlotterVariableType::ValueInt },
		{ "EBlotterVariableType::ValueList", (int64)EBlotterVariableType::ValueList },
		{ "EBlotterVariableType::ValueString", (int64)EBlotterVariableType::ValueString },
		{ "EBlotterVariableType::ValueVariablePointer", (int64)EBlotterVariableType::ValueVariablePointer },
		{ "EBlotterVariableType::Value", (int64)EBlotterVariableType::Value },
		{ "EBlotterVariableType::VariableAssignment", (int64)EBlotterVariableType::VariableAssignment },
		{ "EBlotterVariableType::VariableReference", (int64)EBlotterVariableType::VariableReference },
		{ "EBlotterVariableType::Void", (int64)EBlotterVariableType::Void },
		{ "EBlotterVariableType::Object", (int64)EBlotterVariableType::Object },
		{ "EBlotterVariableType::ListOrigin", (int64)EBlotterVariableType::ListOrigin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InkpotEditor,
	nullptr,
	"EBlotterVariableType",
	"EBlotterVariableType",
	Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InkpotEditor_EBlotterVariableType()
{
	if (!Z_Registration_Info_UEnum_EBlotterVariableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlotterVariableType.InnerSingleton, Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlotterVariableType.InnerSingleton;
}
// ********** End Enum EBlotterVariableType ********************************************************

// ********** Begin Class UBlotterVariable Function GetDisplayValue ********************************
struct Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics
{
	struct BlotterVariable_eventGetDisplayValue_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDisplayValue constinit property declarations ***********************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDisplayValue constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDisplayValue Property Definitions **********************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetDisplayValue_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::PropPointers) < 2048);
// ********** End Function GetDisplayValue Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetDisplayValue", 	Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::BlotterVariable_eventGetDisplayValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::BlotterVariable_eventGetDisplayValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetDisplayValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetDisplayValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayValue();
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function GetDisplayValue **********************************

// ********** Begin Class UBlotterVariable Function GetIndex ***************************************
struct Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics
{
	struct BlotterVariable_eventGetIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIndex constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIndex constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIndex Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::PropPointers) < 2048);
// ********** End Function GetIndex Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetIndex", 	Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::BlotterVariable_eventGetIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::BlotterVariable_eventGetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndex();
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function GetIndex *****************************************

// ********** Begin Class UBlotterVariable Function GetListOptions *********************************
struct Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics
{
	struct BlotterVariable_eventGetListOptions_Parms
	{
		TArray<UBlotterOption*> ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetListOptions constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetListOptions constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetListOptions Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterOption_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetListOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((BlotterVariable_eventGetListOptions_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventGetListOptions_Parms), &Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::PropPointers) < 2048);
// ********** End Function GetListOptions Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetListOptions", 	Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::BlotterVariable_eventGetListOptions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::BlotterVariable_eventGetListOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetListOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetListOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetListOptions)
{
	P_GET_TARRAY_REF(UBlotterOption*,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetListOptions(Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function GetListOptions ***********************************

// ********** Begin Class UBlotterVariable Function GetName ****************************************
struct Z_Construct_UFunction_UBlotterVariable_GetName_Statics
{
	struct BlotterVariable_eventGetName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetName constinit property declarations *******************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetName constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetName Property Definitions ******************************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlotterVariable_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::PropPointers) < 2048);
// ********** End Function GetName Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetName", 	Z_Construct_UFunction_UBlotterVariable_GetName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::BlotterVariable_eventGetName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::BlotterVariable_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetName();
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function GetName ******************************************

// ********** Begin Class UBlotterVariable Function GetType ****************************************
struct Z_Construct_UFunction_UBlotterVariable_GetType_Statics
{
	struct BlotterVariable_eventGetType_Parms
	{
		EBlotterVariableType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetType constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetType constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetType Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlotterVariable_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlotterVariable_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_InkpotEditor_EBlotterVariableType, METADATA_PARAMS(0, nullptr) }; // 3256747930
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::PropPointers) < 2048);
// ********** End Function GetType Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetType", 	Z_Construct_UFunction_UBlotterVariable_GetType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::BlotterVariable_eventGetType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::BlotterVariable_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBlotterVariableType*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function GetType ******************************************

// ********** Begin Class UBlotterVariable Function GetTypeName ************************************
struct Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics
{
	struct BlotterVariable_eventGetTypeName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTypeName constinit property declarations ***************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTypeName constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTypeName Property Definitions **************************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetTypeName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::PropPointers) < 2048);
// ********** End Function GetTypeName Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetTypeName", 	Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::BlotterVariable_eventGetTypeName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::BlotterVariable_eventGetTypeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetTypeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetTypeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetTypeName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTypeName();
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function GetTypeName **************************************

// ********** Begin Class UBlotterVariable Function IsIndexEven ************************************
struct Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics
{
	struct BlotterVariable_eventIsIndexEven_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsIndexEven constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsIndexEven constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsIndexEven Property Definitions **************************************
void Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlotterVariable_eventIsIndexEven_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventIsIndexEven_Parms), &Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::PropPointers) < 2048);
// ********** End Function IsIndexEven Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "IsIndexEven", 	Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::BlotterVariable_eventIsIndexEven_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::BlotterVariable_eventIsIndexEven_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_IsIndexEven()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execIsIndexEven)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsIndexEven();
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function IsIndexEven **************************************

// ********** Begin Class UBlotterVariable Function IsOptionsOpen **********************************
struct Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics
{
	struct BlotterVariable_eventIsOptionsOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOptionsOpen constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOptionsOpen constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOptionsOpen Property Definitions ************************************
void Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlotterVariable_eventIsOptionsOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventIsOptionsOpen_Parms), &Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::PropPointers) < 2048);
// ********** End Function IsOptionsOpen Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "IsOptionsOpen", 	Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::BlotterVariable_eventIsOptionsOpen_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::BlotterVariable_eventIsOptionsOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execIsOptionsOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOptionsOpen();
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function IsOptionsOpen ************************************

// ********** Begin Class UBlotterVariable Function IsPinned ***************************************
struct Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics
{
	struct BlotterVariable_eventIsPinned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPinned constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPinned constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPinned Property Definitions *****************************************
void Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlotterVariable_eventIsPinned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventIsPinned_Parms), &Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::PropPointers) < 2048);
// ********** End Function IsPinned Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "IsPinned", 	Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::BlotterVariable_eventIsPinned_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::BlotterVariable_eventIsPinned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_IsPinned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_IsPinned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execIsPinned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPinned();
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function IsPinned *****************************************

// ********** Begin Class UBlotterVariable Function IsReadOnly *************************************
struct Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics
{
	struct BlotterVariable_eventIsReadOnly_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsReadOnly constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsReadOnly constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsReadOnly Property Definitions ***************************************
void Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlotterVariable_eventIsReadOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventIsReadOnly_Parms), &Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::PropPointers) < 2048);
// ********** End Function IsReadOnly Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "IsReadOnly", 	Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::BlotterVariable_eventIsReadOnly_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::BlotterVariable_eventIsReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_IsReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execIsReadOnly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReadOnly();
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function IsReadOnly ***************************************

// ********** Begin Class UBlotterVariable Function IsType *****************************************
struct Z_Construct_UFunction_UBlotterVariable_IsType_Statics
{
	struct BlotterVariable_eventIsType_Parms
	{
		EBlotterVariableType Type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsType constinit property declarations ********************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsType constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsType Property Definitions *******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlotterVariable_IsType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlotterVariable_IsType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventIsType_Parms, Type), Z_Construct_UEnum_InkpotEditor_EBlotterVariableType, METADATA_PARAMS(0, nullptr) }; // 3256747930
void Z_Construct_UFunction_UBlotterVariable_IsType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlotterVariable_eventIsType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_IsType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventIsType_Parms), &Z_Construct_UFunction_UBlotterVariable_IsType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_IsType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_IsType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_IsType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_IsType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsType_Statics::PropPointers) < 2048);
// ********** End Function IsType Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_IsType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "IsType", 	Z_Construct_UFunction_UBlotterVariable_IsType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_IsType_Statics::BlotterVariable_eventIsType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_IsType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_IsType_Statics::BlotterVariable_eventIsType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_IsType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_IsType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execIsType)
{
	P_GET_ENUM(EBlotterVariableType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsType(EBlotterVariableType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function IsType *******************************************

// ********** Begin Class UBlotterVariable Function SetDisplayValue ********************************
struct Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics
{
	struct BlotterVariable_eventSetDisplayValue_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDisplayValue constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDisplayValue constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDisplayValue Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventSetDisplayValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::PropPointers) < 2048);
// ********** End Function SetDisplayValue Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "SetDisplayValue", 	Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::BlotterVariable_eventSetDisplayValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::BlotterVariable_eventSetDisplayValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_SetDisplayValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execSetDisplayValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisplayValue(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function SetDisplayValue **********************************

// ********** Begin Class UBlotterVariable Function SetOptionsOpen *********************************
struct Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics
{
	struct BlotterVariable_eventSetOptionsOpen_Parms
	{
		bool bIsOptionsOpen;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOptionsOpen constinit property declarations ************************
	static void NewProp_bIsOptionsOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOptionsOpen;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOptionsOpen constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOptionsOpen Property Definitions ***********************************
void Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::NewProp_bIsOptionsOpen_SetBit(void* Obj)
{
	((BlotterVariable_eventSetOptionsOpen_Parms*)Obj)->bIsOptionsOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::NewProp_bIsOptionsOpen = { "bIsOptionsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventSetOptionsOpen_Parms), &Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::NewProp_bIsOptionsOpen_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlotterVariable_eventSetOptionsOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventSetOptionsOpen_Parms), &Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::NewProp_bIsOptionsOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::PropPointers) < 2048);
// ********** End Function SetOptionsOpen Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "SetOptionsOpen", 	Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::BlotterVariable_eventSetOptionsOpen_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::BlotterVariable_eventSetOptionsOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execSetOptionsOpen)
{
	P_GET_UBOOL(Z_Param_bIsOptionsOpen);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetOptionsOpen(Z_Param_bIsOptionsOpen);
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function SetOptionsOpen ***********************************

// ********** Begin Class UBlotterVariable Function SetPinned **************************************
struct Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics
{
	struct BlotterVariable_eventSetPinned_Parms
	{
		bool bIsPinned;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPinned constinit property declarations *****************************
	static void NewProp_bIsPinned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPinned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPinned constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPinned Property Definitions ****************************************
void Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::NewProp_bIsPinned_SetBit(void* Obj)
{
	((BlotterVariable_eventSetPinned_Parms*)Obj)->bIsPinned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::NewProp_bIsPinned = { "bIsPinned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventSetPinned_Parms), &Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::NewProp_bIsPinned_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::NewProp_bIsPinned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::PropPointers) < 2048);
// ********** End Function SetPinned Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "SetPinned", 	Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::BlotterVariable_eventSetPinned_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::BlotterVariable_eventSetPinned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_SetPinned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_SetPinned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execSetPinned)
{
	P_GET_UBOOL(Z_Param_bIsPinned);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPinned(Z_Param_bIsPinned);
	P_NATIVE_END;
}
// ********** End Class UBlotterVariable Function SetPinned ****************************************

// ********** Begin Class UBlotterVariable *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBlotterVariable;
UClass* UBlotterVariable::GetPrivateStaticClass()
{
	using TClass = UBlotterVariable;
	if (!Z_Registration_Info_UClass_UBlotterVariable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BlotterVariable"),
			Z_Registration_Info_UClass_UBlotterVariable.InnerSingleton,
			StaticRegisterNativesUBlotterVariable,
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
	return Z_Registration_Info_UClass_UBlotterVariable.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlotterVariable_NoRegister()
{
	return UBlotterVariable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlotterVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Blotter/BlotterVariable.h" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Story_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptionsOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPinned_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBlotterVariable constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TypeText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
	static void NewProp_bOptionsOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptionsOpen;
	static void NewProp_bPinned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinned;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBlotterVariable constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDisplayValue"), .Pointer = &UBlotterVariable::execGetDisplayValue },
		{ .NameUTF8 = UTF8TEXT("GetIndex"), .Pointer = &UBlotterVariable::execGetIndex },
		{ .NameUTF8 = UTF8TEXT("GetListOptions"), .Pointer = &UBlotterVariable::execGetListOptions },
		{ .NameUTF8 = UTF8TEXT("GetName"), .Pointer = &UBlotterVariable::execGetName },
		{ .NameUTF8 = UTF8TEXT("GetType"), .Pointer = &UBlotterVariable::execGetType },
		{ .NameUTF8 = UTF8TEXT("GetTypeName"), .Pointer = &UBlotterVariable::execGetTypeName },
		{ .NameUTF8 = UTF8TEXT("IsIndexEven"), .Pointer = &UBlotterVariable::execIsIndexEven },
		{ .NameUTF8 = UTF8TEXT("IsOptionsOpen"), .Pointer = &UBlotterVariable::execIsOptionsOpen },
		{ .NameUTF8 = UTF8TEXT("IsPinned"), .Pointer = &UBlotterVariable::execIsPinned },
		{ .NameUTF8 = UTF8TEXT("IsReadOnly"), .Pointer = &UBlotterVariable::execIsReadOnly },
		{ .NameUTF8 = UTF8TEXT("IsType"), .Pointer = &UBlotterVariable::execIsType },
		{ .NameUTF8 = UTF8TEXT("SetDisplayValue"), .Pointer = &UBlotterVariable::execSetDisplayValue },
		{ .NameUTF8 = UTF8TEXT("SetOptionsOpen"), .Pointer = &UBlotterVariable::execSetOptionsOpen },
		{ .NameUTF8 = UTF8TEXT("SetPinned"), .Pointer = &UBlotterVariable::execSetPinned },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlotterVariable_GetDisplayValue, "GetDisplayValue" }, // 668953785
		{ &Z_Construct_UFunction_UBlotterVariable_GetIndex, "GetIndex" }, // 1764972665
		{ &Z_Construct_UFunction_UBlotterVariable_GetListOptions, "GetListOptions" }, // 1668030416
		{ &Z_Construct_UFunction_UBlotterVariable_GetName, "GetName" }, // 2964124306
		{ &Z_Construct_UFunction_UBlotterVariable_GetType, "GetType" }, // 1584584455
		{ &Z_Construct_UFunction_UBlotterVariable_GetTypeName, "GetTypeName" }, // 1510642540
		{ &Z_Construct_UFunction_UBlotterVariable_IsIndexEven, "IsIndexEven" }, // 1690085717
		{ &Z_Construct_UFunction_UBlotterVariable_IsOptionsOpen, "IsOptionsOpen" }, // 1705329541
		{ &Z_Construct_UFunction_UBlotterVariable_IsPinned, "IsPinned" }, // 2810932035
		{ &Z_Construct_UFunction_UBlotterVariable_IsReadOnly, "IsReadOnly" }, // 1406148125
		{ &Z_Construct_UFunction_UBlotterVariable_IsType, "IsType" }, // 3908078464
		{ &Z_Construct_UFunction_UBlotterVariable_SetDisplayValue, "SetDisplayValue" }, // 4104481276
		{ &Z_Construct_UFunction_UBlotterVariable_SetOptionsOpen, "SetOptionsOpen" }, // 392688672
		{ &Z_Construct_UFunction_UBlotterVariable_SetPinned, "SetPinned" }, // 3641823611
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlotterVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBlotterVariable_Statics

// ********** Begin Class UBlotterVariable Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Story_MetaData), NewProp_Story_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_TypeText = { "TypeText", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, TypeText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeText_MetaData), NewProp_TypeText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Type), Z_Construct_UEnum_InkpotEditor_EBlotterVariableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3256747930
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UClass_UBlotterVariable_Statics::NewProp_bOptionsOpen_SetBit(void* Obj)
{
	((UBlotterVariable*)Obj)->bOptionsOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_bOptionsOpen = { "bOptionsOpen", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlotterVariable), &Z_Construct_UClass_UBlotterVariable_Statics::NewProp_bOptionsOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptionsOpen_MetaData), NewProp_bOptionsOpen_MetaData) };
void Z_Construct_UClass_UBlotterVariable_Statics::NewProp_bPinned_SetBit(void* Obj)
{
	((UBlotterVariable*)Obj)->bPinned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_bPinned = { "bPinned", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlotterVariable), &Z_Construct_UClass_UBlotterVariable_Statics::NewProp_bPinned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPinned_MetaData), NewProp_bPinned_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_DisplayWidget = { "DisplayWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, DisplayWidget), Z_Construct_UClass_UBlotterUIEntryVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayWidget_MetaData), NewProp_DisplayWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlotterVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_TypeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_bOptionsOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_bPinned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_DisplayWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterVariable_Statics::PropPointers) < 2048);
// ********** End Class UBlotterVariable Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UBlotterVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlotterVariable_Statics::ClassParams = {
	&UBlotterVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlotterVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterVariable_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlotterVariable_Statics::Class_MetaDataParams)
};
void UBlotterVariable::StaticRegisterNativesUBlotterVariable()
{
	UClass* Class = UBlotterVariable::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBlotterVariable_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBlotterVariable()
{
	if (!Z_Registration_Info_UClass_UBlotterVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlotterVariable.OuterSingleton, Z_Construct_UClass_UBlotterVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlotterVariable.OuterSingleton;
}
UBlotterVariable::UBlotterVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBlotterVariable);
UBlotterVariable::~UBlotterVariable() {}
// ********** End Class UBlotterVariable ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h__Script_InkpotEditor_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlotterVariableType_StaticEnum, TEXT("EBlotterVariableType"), &Z_Registration_Info_UEnum_EBlotterVariableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3256747930U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlotterVariable, UBlotterVariable::StaticClass, TEXT("UBlotterVariable"), &Z_Registration_Info_UClass_UBlotterVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlotterVariable), 2155962200U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h__Script_InkpotEditor_3531045132{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h__Script_InkpotEditor_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h__Script_InkpotEditor_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
