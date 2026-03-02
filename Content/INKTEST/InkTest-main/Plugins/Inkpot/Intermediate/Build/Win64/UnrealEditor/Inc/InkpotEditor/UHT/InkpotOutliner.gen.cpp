// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Outliner/InkpotOutliner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotOutliner() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterContainer_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotOutliner();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotOutliner_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotOutliner Function OnStoryBegin ************************************
struct Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics
{
	struct InkpotOutliner_eventOnStoryBegin_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Outliner/InkpotOutliner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStoryBegin constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnStoryBegin constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnStoryBegin Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotOutliner_eventOnStoryBegin_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::PropPointers) < 2048);
// ********** End Function OnStoryBegin Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotOutliner, nullptr, "OnStoryBegin", 	Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::InkpotOutliner_eventOnStoryBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::InkpotOutliner_eventOnStoryBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotOutliner::execOnStoryBegin)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStoryBegin(Z_Param_Story);
	P_NATIVE_END;
}
// ********** End Class UInkpotOutliner Function OnStoryBegin **************************************

// ********** Begin Class UInkpotOutliner Function ReceiveOnStoryDisplay ***************************
struct InkpotOutliner_eventReceiveOnStoryDisplay_Parms
{
	UBlotterContainer* StoryRoot;
};
static FName NAME_UInkpotOutliner_ReceiveOnStoryDisplay = FName(TEXT("ReceiveOnStoryDisplay"));
void UInkpotOutliner::ReceiveOnStoryDisplay(UBlotterContainer* StoryRoot)
{
	InkpotOutliner_eventReceiveOnStoryDisplay_Parms Parms;
	Parms.StoryRoot=StoryRoot;
	UFunction* Func = FindFunctionChecked(NAME_UInkpotOutliner_ReceiveOnStoryDisplay);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "DisplayName", "OnStoryDisplay" },
		{ "ModuleRelativePath", "Public/Outliner/InkpotOutliner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveOnStoryDisplay constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoryRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReceiveOnStoryDisplay constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReceiveOnStoryDisplay Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::NewProp_StoryRoot = { "StoryRoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotOutliner_eventReceiveOnStoryDisplay_Parms, StoryRoot), Z_Construct_UClass_UBlotterContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::NewProp_StoryRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::PropPointers) < 2048);
// ********** End Function ReceiveOnStoryDisplay Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotOutliner, nullptr, "ReceiveOnStoryDisplay", 	Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::PropPointers), 
sizeof(InkpotOutliner_eventReceiveOnStoryDisplay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InkpotOutliner_eventReceiveOnStoryDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInkpotOutliner Function ReceiveOnStoryDisplay *****************************

// ********** Begin Class UInkpotOutliner **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotOutliner;
UClass* UInkpotOutliner::GetPrivateStaticClass()
{
	using TClass = UInkpotOutliner;
	if (!Z_Registration_Info_UClass_UInkpotOutliner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotOutliner"),
			Z_Registration_Info_UClass_UInkpotOutliner.InnerSingleton,
			StaticRegisterNativesUInkpotOutliner,
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
	return Z_Registration_Info_UClass_UInkpotOutliner.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotOutliner_NoRegister()
{
	return UInkpotOutliner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotOutliner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Outliner/InkpotOutliner.h" },
		{ "ModuleRelativePath", "Public/Outliner/InkpotOutliner.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotOutliner constinit property declarations **************************
// ********** End Class UInkpotOutliner constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnStoryBegin"), .Pointer = &UInkpotOutliner::execOnStoryBegin },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotOutliner_OnStoryBegin, "OnStoryBegin" }, // 4231570115
		{ &Z_Construct_UFunction_UInkpotOutliner_ReceiveOnStoryDisplay, "ReceiveOnStoryDisplay" }, // 2355459925
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotOutliner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotOutliner_Statics
UObject* (*const Z_Construct_UClass_UInkpotOutliner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotOutliner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotOutliner_Statics::ClassParams = {
	&UInkpotOutliner::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotOutliner_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotOutliner_Statics::Class_MetaDataParams)
};
void UInkpotOutliner::StaticRegisterNativesUInkpotOutliner()
{
	UClass* Class = UInkpotOutliner::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotOutliner_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotOutliner()
{
	if (!Z_Registration_Info_UClass_UInkpotOutliner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotOutliner.OuterSingleton, Z_Construct_UClass_UInkpotOutliner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotOutliner.OuterSingleton;
}
UInkpotOutliner::UInkpotOutliner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotOutliner);
UInkpotOutliner::~UInkpotOutliner() {}
// ********** End Class UInkpotOutliner ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotOutliner, UInkpotOutliner::StaticClass, TEXT("UInkpotOutliner"), &Z_Registration_Info_UClass_UInkpotOutliner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotOutliner), 3880961083U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h__Script_InkpotEditor_1724296337{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
