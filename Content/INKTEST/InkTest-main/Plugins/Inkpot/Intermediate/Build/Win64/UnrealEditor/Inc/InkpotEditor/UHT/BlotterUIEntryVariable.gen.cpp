// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blotter/BlotterUIEntryVariable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlotterUIEntryVariable() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryVariable();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryVariable_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterVariable_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlotterUIEntryVariable Function ReceiveOnVariableUpdate *****************
static FName NAME_UBlotterUIEntryVariable_ReceiveOnVariableUpdate = FName(TEXT("ReceiveOnVariableUpdate"));
void UBlotterUIEntryVariable::ReceiveOnVariableUpdate()
{
	UFunction* Func = FindFunctionChecked(NAME_UBlotterUIEntryVariable_ReceiveOnVariableUpdate);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnVariableUpdate" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveOnVariableUpdate constinit property declarations ***************
// ********** End Function ReceiveOnVariableUpdate constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterUIEntryVariable, nullptr, "ReceiveOnVariableUpdate", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBlotterUIEntryVariable Function ReceiveOnVariableUpdate *******************

// ********** Begin Class UBlotterUIEntryVariable Function Refresh *********************************
struct Z_Construct_UFunction_UBlotterUIEntryVariable_Refresh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Refresh constinit property declarations *******************************
// ********** End Function Refresh constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterUIEntryVariable_Refresh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterUIEntryVariable, nullptr, "Refresh", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_Refresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterUIEntryVariable_Refresh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBlotterUIEntryVariable_Refresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterUIEntryVariable_Refresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterUIEntryVariable::execRefresh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Refresh();
	P_NATIVE_END;
}
// ********** End Class UBlotterUIEntryVariable Function Refresh ***********************************

// ********** Begin Class UBlotterUIEntryVariable Function SetVariableFromText *********************
struct Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics
{
	struct BlotterUIEntryVariable_eventSetVariableFromText_Parms
	{
		FText Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVariableFromText constinit property declarations *******************
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVariableFromText constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVariableFromText Property Definitions ******************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterUIEntryVariable_eventSetVariableFromText_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::PropPointers) < 2048);
// ********** End Function SetVariableFromText Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterUIEntryVariable, nullptr, "SetVariableFromText", 	Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::BlotterUIEntryVariable_eventSetVariableFromText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::BlotterUIEntryVariable_eventSetVariableFromText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterUIEntryVariable::execSetVariableFromText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariableFromText(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UBlotterUIEntryVariable Function SetVariableFromText ***********************

// ********** Begin Class UBlotterUIEntryVariable **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBlotterUIEntryVariable;
UClass* UBlotterUIEntryVariable::GetPrivateStaticClass()
{
	using TClass = UBlotterUIEntryVariable;
	if (!Z_Registration_Info_UClass_UBlotterUIEntryVariable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BlotterUIEntryVariable"),
			Z_Registration_Info_UClass_UBlotterUIEntryVariable.InnerSingleton,
			StaticRegisterNativesUBlotterUIEntryVariable,
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
	return Z_Registration_Info_UClass_UBlotterUIEntryVariable.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlotterUIEntryVariable_NoRegister()
{
	return UBlotterUIEntryVariable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlotterUIEntryVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blotter/BlotterUIEntryVariable.h" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlotterVariable_MetaData[] = {
		{ "Category", "BlotterUIEntryVariable" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBlotterUIEntryVariable constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlotterVariable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBlotterUIEntryVariable constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Refresh"), .Pointer = &UBlotterUIEntryVariable::execRefresh },
		{ .NameUTF8 = UTF8TEXT("SetVariableFromText"), .Pointer = &UBlotterUIEntryVariable::execSetVariableFromText },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate, "ReceiveOnVariableUpdate" }, // 3525316019
		{ &Z_Construct_UFunction_UBlotterUIEntryVariable_Refresh, "Refresh" }, // 2702191954
		{ &Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText, "SetVariableFromText" }, // 2595047616
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlotterUIEntryVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBlotterUIEntryVariable_Statics

// ********** Begin Class UBlotterUIEntryVariable Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlotterUIEntryVariable_Statics::NewProp_BlotterVariable = { "BlotterVariable", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterUIEntryVariable, BlotterVariable), Z_Construct_UClass_UBlotterVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlotterVariable_MetaData), NewProp_BlotterVariable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlotterUIEntryVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterUIEntryVariable_Statics::NewProp_BlotterVariable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryVariable_Statics::PropPointers) < 2048);
// ********** End Class UBlotterUIEntryVariable Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UBlotterUIEntryVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBlotterUIEntryVariable_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UBlotterUIEntryVariable, IUserObjectListEntry), false },  // 1012633399
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlotterUIEntryVariable_Statics::ClassParams = {
	&UBlotterUIEntryVariable::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlotterUIEntryVariable_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryVariable_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlotterUIEntryVariable_Statics::Class_MetaDataParams)
};
void UBlotterUIEntryVariable::StaticRegisterNativesUBlotterUIEntryVariable()
{
	UClass* Class = UBlotterUIEntryVariable::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBlotterUIEntryVariable_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBlotterUIEntryVariable()
{
	if (!Z_Registration_Info_UClass_UBlotterUIEntryVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlotterUIEntryVariable.OuterSingleton, Z_Construct_UClass_UBlotterUIEntryVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlotterUIEntryVariable.OuterSingleton;
}
UBlotterUIEntryVariable::UBlotterUIEntryVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBlotterUIEntryVariable);
UBlotterUIEntryVariable::~UBlotterUIEntryVariable() {}
// ********** End Class UBlotterUIEntryVariable ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlotterUIEntryVariable, UBlotterUIEntryVariable::StaticClass, TEXT("UBlotterUIEntryVariable"), &Z_Registration_Info_UClass_UBlotterUIEntryVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlotterUIEntryVariable), 3587044984U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h__Script_InkpotEditor_3004047507{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
