// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/InkFunctionTests.h"
#include "Inkpot/InkpotValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkFunctionTests() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkFunctionTests();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkFunctionTests_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkFunctionTests Function BoolTrue **************************************
struct Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics
{
	struct InkFunctionTests_eventBoolTrue_Parms
	{
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BoolTrue constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BoolTrue constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BoolTrue Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventBoolTrue_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 3323750409
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventBoolTrue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::PropPointers) < 2048);
// ********** End Function BoolTrue Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkFunctionTests, nullptr, "BoolTrue", 	Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::InkFunctionTests_eventBoolTrue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::InkFunctionTests_eventBoolTrue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkFunctionTests_BoolTrue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkFunctionTests_BoolTrue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkFunctionTests::execBoolTrue)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=P_THIS->BoolTrue(Z_Param_Out_InValues);
	P_NATIVE_END;
}
// ********** End Class UInkFunctionTests Function BoolTrue ****************************************

// ********** Begin Class UInkFunctionTests Function Message ***************************************
struct Z_Construct_UFunction_UInkFunctionTests_Message_Statics
{
	struct InkFunctionTests_eventMessage_Parms
	{
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Message constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Message constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Message Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventMessage_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 3323750409
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventMessage_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkFunctionTests_Message_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::PropPointers) < 2048);
// ********** End Function Message Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkFunctionTests_Message_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkFunctionTests, nullptr, "Message", 	Z_Construct_UFunction_UInkFunctionTests_Message_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::InkFunctionTests_eventMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkFunctionTests_Message_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::InkFunctionTests_eventMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkFunctionTests_Message()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkFunctionTests_Message_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkFunctionTests::execMessage)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=P_THIS->Message(Z_Param_Out_InValues);
	P_NATIVE_END;
}
// ********** End Class UInkFunctionTests Function Message *****************************************

// ********** Begin Class UInkFunctionTests Function Multiply **************************************
struct Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics
{
	struct InkFunctionTests_eventMultiply_Parms
	{
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Multiply constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Multiply constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Multiply Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventMultiply_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 3323750409
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventMultiply_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::PropPointers) < 2048);
// ********** End Function Multiply Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkFunctionTests, nullptr, "Multiply", 	Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::InkFunctionTests_eventMultiply_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::InkFunctionTests_eventMultiply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkFunctionTests_Multiply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkFunctionTests::execMultiply)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=P_THIS->Multiply(Z_Param_Out_InValues);
	P_NATIVE_END;
}
// ********** End Class UInkFunctionTests Function Multiply ****************************************

// ********** Begin Class UInkFunctionTests Function Times *****************************************
struct Z_Construct_UFunction_UInkFunctionTests_Times_Statics
{
	struct InkFunctionTests_eventTimes_Parms
	{
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Times constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Times constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Times Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventTimes_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 3323750409
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventTimes_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3323750409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkFunctionTests_Times_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::PropPointers) < 2048);
// ********** End Function Times Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkFunctionTests_Times_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkFunctionTests, nullptr, "Times", 	Z_Construct_UFunction_UInkFunctionTests_Times_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::InkFunctionTests_eventTimes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkFunctionTests_Times_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::InkFunctionTests_eventTimes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkFunctionTests_Times()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkFunctionTests_Times_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkFunctionTests::execTimes)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=P_THIS->Times(Z_Param_Out_InValues);
	P_NATIVE_END;
}
// ********** End Class UInkFunctionTests Function Times *******************************************

// ********** Begin Class UInkFunctionTests ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkFunctionTests;
UClass* UInkFunctionTests::GetPrivateStaticClass()
{
	using TClass = UInkFunctionTests;
	if (!Z_Registration_Info_UClass_UInkFunctionTests.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkFunctionTests"),
			Z_Registration_Info_UClass_UInkFunctionTests.InnerSingleton,
			StaticRegisterNativesUInkFunctionTests,
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
	return Z_Registration_Info_UClass_UInkFunctionTests.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkFunctionTests_NoRegister()
{
	return UInkFunctionTests::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkFunctionTests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Test/InkFunctionTests.h" },
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkFunctionTests constinit property declarations ************************
// ********** End Class UInkFunctionTests constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BoolTrue"), .Pointer = &UInkFunctionTests::execBoolTrue },
		{ .NameUTF8 = UTF8TEXT("Message"), .Pointer = &UInkFunctionTests::execMessage },
		{ .NameUTF8 = UTF8TEXT("Multiply"), .Pointer = &UInkFunctionTests::execMultiply },
		{ .NameUTF8 = UTF8TEXT("Times"), .Pointer = &UInkFunctionTests::execTimes },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkFunctionTests_BoolTrue, "BoolTrue" }, // 1314282450
		{ &Z_Construct_UFunction_UInkFunctionTests_Message, "Message" }, // 4077229972
		{ &Z_Construct_UFunction_UInkFunctionTests_Multiply, "Multiply" }, // 2189587243
		{ &Z_Construct_UFunction_UInkFunctionTests_Times, "Times" }, // 2069371894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkFunctionTests>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkFunctionTests_Statics
UObject* (*const Z_Construct_UClass_UInkFunctionTests_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkFunctionTests_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkFunctionTests_Statics::ClassParams = {
	&UInkFunctionTests::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkFunctionTests_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkFunctionTests_Statics::Class_MetaDataParams)
};
void UInkFunctionTests::StaticRegisterNativesUInkFunctionTests()
{
	UClass* Class = UInkFunctionTests::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkFunctionTests_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkFunctionTests()
{
	if (!Z_Registration_Info_UClass_UInkFunctionTests.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkFunctionTests.OuterSingleton, Z_Construct_UClass_UInkFunctionTests_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkFunctionTests.OuterSingleton;
}
UInkFunctionTests::UInkFunctionTests(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkFunctionTests);
UInkFunctionTests::~UInkFunctionTests() {}
// ********** End Class UInkFunctionTests **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkFunctionTests, UInkFunctionTests::StaticClass, TEXT("UInkFunctionTests"), &Z_Registration_Info_UClass_UInkFunctionTests, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkFunctionTests), 1531097729U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h__Script_InkpotEditor_8219245{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
