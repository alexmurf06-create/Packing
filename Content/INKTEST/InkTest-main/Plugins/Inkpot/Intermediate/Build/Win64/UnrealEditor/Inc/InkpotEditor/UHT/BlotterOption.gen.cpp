// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blotter/BlotterOption.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlotterOption() {}

// ********** Begin Cross Module References ********************************************************
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterOption();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterOption_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterString();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlotterOption Function GetState *****************************************
struct Z_Construct_UFunction_UBlotterOption_GetState_Statics
{
	struct BlotterOption_eventGetState_Parms
	{
		ECheckBoxState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterOption.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetState constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetState constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetState Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlotterOption_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlotterOption_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterOption_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(0, nullptr) }; // 1595478579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterOption_GetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterOption_GetState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterOption_GetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterOption_GetState_Statics::PropPointers) < 2048);
// ********** End Function GetState Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterOption_GetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterOption, nullptr, "GetState", 	Z_Construct_UFunction_UBlotterOption_GetState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterOption_GetState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterOption_GetState_Statics::BlotterOption_eventGetState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterOption_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterOption_GetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterOption_GetState_Statics::BlotterOption_eventGetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterOption_GetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterOption_GetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterOption::execGetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECheckBoxState*)Z_Param__Result=P_THIS->GetState();
	P_NATIVE_END;
}
// ********** End Class UBlotterOption Function GetState *******************************************

// ********** Begin Class UBlotterOption Function IsSelected ***************************************
struct Z_Construct_UFunction_UBlotterOption_IsSelected_Statics
{
	struct BlotterOption_eventIsSelected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterOption.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSelected constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSelected constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSelected Property Definitions ***************************************
void Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlotterOption_eventIsSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterOption_eventIsSelected_Parms), &Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::PropPointers) < 2048);
// ********** End Function IsSelected Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterOption, nullptr, "IsSelected", 	Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::BlotterOption_eventIsSelected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::BlotterOption_eventIsSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterOption_IsSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterOption_IsSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterOption::execIsSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSelected();
	P_NATIVE_END;
}
// ********** End Class UBlotterOption Function IsSelected *****************************************

// ********** Begin Class UBlotterOption Function SetSelected **************************************
struct Z_Construct_UFunction_UBlotterOption_SetSelected_Statics
{
	struct BlotterOption_eventSetSelected_Parms
	{
		bool bIsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterOption.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelected constinit property declarations ***************************
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelected constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelected Property Definitions **************************************
void Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((BlotterOption_eventSetSelected_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterOption_eventSetSelected_Parms), &Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::PropPointers) < 2048);
// ********** End Function SetSelected Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterOption, nullptr, "SetSelected", 	Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::BlotterOption_eventSetSelected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::BlotterOption_eventSetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterOption_SetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterOption_SetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterOption::execSetSelected)
{
	P_GET_UBOOL(Z_Param_bIsSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelected(Z_Param_bIsSelected);
	P_NATIVE_END;
}
// ********** End Class UBlotterOption Function SetSelected ****************************************

// ********** Begin Class UBlotterOption ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBlotterOption;
UClass* UBlotterOption::GetPrivateStaticClass()
{
	using TClass = UBlotterOption;
	if (!Z_Registration_Info_UClass_UBlotterOption.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BlotterOption"),
			Z_Registration_Info_UClass_UBlotterOption.InnerSingleton,
			StaticRegisterNativesUBlotterOption,
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
	return Z_Registration_Info_UClass_UBlotterOption.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlotterOption_NoRegister()
{
	return UBlotterOption::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlotterOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Blotter/BlotterOption.h" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[] = {
		{ "Category", "BlotterOption" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterOption.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBlotterOption constinit property declarations ***************************
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBlotterOption constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetState"), .Pointer = &UBlotterOption::execGetState },
		{ .NameUTF8 = UTF8TEXT("IsSelected"), .Pointer = &UBlotterOption::execIsSelected },
		{ .NameUTF8 = UTF8TEXT("SetSelected"), .Pointer = &UBlotterOption::execSetSelected },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlotterOption_GetState, "GetState" }, // 493321392
		{ &Z_Construct_UFunction_UBlotterOption_IsSelected, "IsSelected" }, // 3979803949
		{ &Z_Construct_UFunction_UBlotterOption_SetSelected, "SetSelected" }, // 328066896
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlotterOption>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBlotterOption_Statics

// ********** Begin Class UBlotterOption Property Definitions **************************************
void Z_Construct_UClass_UBlotterOption_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((UBlotterOption*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlotterOption_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlotterOption), &Z_Construct_UClass_UBlotterOption_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelected_MetaData), NewProp_bIsSelected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlotterOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterOption_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterOption_Statics::PropPointers) < 2048);
// ********** End Class UBlotterOption Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UBlotterOption_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlotterString,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterOption_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlotterOption_Statics::ClassParams = {
	&UBlotterOption::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlotterOption_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterOption_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterOption_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlotterOption_Statics::Class_MetaDataParams)
};
void UBlotterOption::StaticRegisterNativesUBlotterOption()
{
	UClass* Class = UBlotterOption::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBlotterOption_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBlotterOption()
{
	if (!Z_Registration_Info_UClass_UBlotterOption.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlotterOption.OuterSingleton, Z_Construct_UClass_UBlotterOption_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlotterOption.OuterSingleton;
}
UBlotterOption::UBlotterOption(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBlotterOption);
UBlotterOption::~UBlotterOption() {}
// ********** End Class UBlotterOption *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlotterOption, UBlotterOption::StaticClass, TEXT("UBlotterOption"), &Z_Registration_Info_UClass_UBlotterOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlotterOption), 3120506731U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h__Script_InkpotEditor_2668630209{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
