// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blotter/BlotterUIEntryOption.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlotterUIEntryOption() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterOption_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryOption();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryOption_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlotterUIEntryOption Function ReceiveOnListUpdate ***********************
struct BlotterUIEntryOption_eventReceiveOnListUpdate_Parms
{
	const UBlotterOption* Option;
};
static FName NAME_UBlotterUIEntryOption_ReceiveOnListUpdate = FName(TEXT("ReceiveOnListUpdate"));
void UBlotterUIEntryOption::ReceiveOnListUpdate(const UBlotterOption* Option)
{
	BlotterUIEntryOption_eventReceiveOnListUpdate_Parms Parms;
	Parms.Option=Option;
	UFunction* Func = FindFunctionChecked(NAME_UBlotterUIEntryOption_ReceiveOnListUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnListUpdate" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveOnListUpdate constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Option;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReceiveOnListUpdate constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReceiveOnListUpdate Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterUIEntryOption_eventReceiveOnListUpdate_Parms, Option), Z_Construct_UClass_UBlotterOption_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Option_MetaData), NewProp_Option_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::NewProp_Option,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::PropPointers) < 2048);
// ********** End Function ReceiveOnListUpdate Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterUIEntryOption, nullptr, "ReceiveOnListUpdate", 	Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::PropPointers), 
sizeof(BlotterUIEntryOption_eventReceiveOnListUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BlotterUIEntryOption_eventReceiveOnListUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBlotterUIEntryOption Function ReceiveOnListUpdate *************************

// ********** Begin Class UBlotterUIEntryOption ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBlotterUIEntryOption;
UClass* UBlotterUIEntryOption::GetPrivateStaticClass()
{
	using TClass = UBlotterUIEntryOption;
	if (!Z_Registration_Info_UClass_UBlotterUIEntryOption.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BlotterUIEntryOption"),
			Z_Registration_Info_UClass_UBlotterUIEntryOption.InnerSingleton,
			StaticRegisterNativesUBlotterUIEntryOption,
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
	return Z_Registration_Info_UClass_UBlotterUIEntryOption.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlotterUIEntryOption_NoRegister()
{
	return UBlotterUIEntryOption::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlotterUIEntryOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blotter/BlotterUIEntryOption.h" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryOption.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBlotterUIEntryOption constinit property declarations ********************
// ********** End Class UBlotterUIEntryOption constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlotterUIEntryOption_ReceiveOnListUpdate, "ReceiveOnListUpdate" }, // 1965241306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlotterUIEntryOption>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBlotterUIEntryOption_Statics
UObject* (*const Z_Construct_UClass_UBlotterUIEntryOption_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryOption_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBlotterUIEntryOption_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UBlotterUIEntryOption, IUserObjectListEntry), false },  // 1012633399
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlotterUIEntryOption_Statics::ClassParams = {
	&UBlotterUIEntryOption::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryOption_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlotterUIEntryOption_Statics::Class_MetaDataParams)
};
void UBlotterUIEntryOption::StaticRegisterNativesUBlotterUIEntryOption()
{
}
UClass* Z_Construct_UClass_UBlotterUIEntryOption()
{
	if (!Z_Registration_Info_UClass_UBlotterUIEntryOption.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlotterUIEntryOption.OuterSingleton, Z_Construct_UClass_UBlotterUIEntryOption_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlotterUIEntryOption.OuterSingleton;
}
UBlotterUIEntryOption::UBlotterUIEntryOption(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBlotterUIEntryOption);
UBlotterUIEntryOption::~UBlotterUIEntryOption() {}
// ********** End Class UBlotterUIEntryOption ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryOption_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlotterUIEntryOption, UBlotterUIEntryOption::StaticClass, TEXT("UBlotterUIEntryOption"), &Z_Registration_Info_UClass_UBlotterUIEntryOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlotterUIEntryOption), 1975262358U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryOption_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryOption_h__Script_InkpotEditor_2183742008{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryOption_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryOption_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
