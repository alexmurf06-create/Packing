// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Outliner/BlotterUIEntryContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlotterUIEntryContainer() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterContainer_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryContainer();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryContainer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlotterUIEntryContainer Function ReceiveOnContainerUpdate ***************
struct BlotterUIEntryContainer_eventReceiveOnContainerUpdate_Parms
{
	const UBlotterContainer* Container;
};
static FName NAME_UBlotterUIEntryContainer_ReceiveOnContainerUpdate = FName(TEXT("ReceiveOnContainerUpdate"));
void UBlotterUIEntryContainer::ReceiveOnContainerUpdate(const UBlotterContainer* Container)
{
	BlotterUIEntryContainer_eventReceiveOnContainerUpdate_Parms Parms;
	Parms.Container=Container;
	UFunction* Func = FindFunctionChecked(NAME_UBlotterUIEntryContainer_ReceiveOnContainerUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnContainerUpdate" },
		{ "ModuleRelativePath", "Public/Outliner/BlotterUIEntryContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveOnContainerUpdate constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReceiveOnContainerUpdate constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReceiveOnContainerUpdate Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterUIEntryContainer_eventReceiveOnContainerUpdate_Parms, Container), Z_Construct_UClass_UBlotterContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::PropPointers) < 2048);
// ********** End Function ReceiveOnContainerUpdate Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterUIEntryContainer, nullptr, "ReceiveOnContainerUpdate", 	Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::PropPointers), 
sizeof(BlotterUIEntryContainer_eventReceiveOnContainerUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BlotterUIEntryContainer_eventReceiveOnContainerUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBlotterUIEntryContainer Function ReceiveOnContainerUpdate *****************

// ********** Begin Class UBlotterUIEntryContainer *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBlotterUIEntryContainer;
UClass* UBlotterUIEntryContainer::GetPrivateStaticClass()
{
	using TClass = UBlotterUIEntryContainer;
	if (!Z_Registration_Info_UClass_UBlotterUIEntryContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BlotterUIEntryContainer"),
			Z_Registration_Info_UClass_UBlotterUIEntryContainer.InnerSingleton,
			StaticRegisterNativesUBlotterUIEntryContainer,
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
	return Z_Registration_Info_UClass_UBlotterUIEntryContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlotterUIEntryContainer_NoRegister()
{
	return UBlotterUIEntryContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlotterUIEntryContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Outliner/BlotterUIEntryContainer.h" },
		{ "ModuleRelativePath", "Public/Outliner/BlotterUIEntryContainer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBlotterUIEntryContainer constinit property declarations *****************
// ********** End Class UBlotterUIEntryContainer constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlotterUIEntryContainer_ReceiveOnContainerUpdate, "ReceiveOnContainerUpdate" }, // 2747981740
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlotterUIEntryContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBlotterUIEntryContainer_Statics
UObject* (*const Z_Construct_UClass_UBlotterUIEntryContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBlotterUIEntryContainer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UBlotterUIEntryContainer, IUserObjectListEntry), false },  // 1012633399
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlotterUIEntryContainer_Statics::ClassParams = {
	&UBlotterUIEntryContainer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlotterUIEntryContainer_Statics::Class_MetaDataParams)
};
void UBlotterUIEntryContainer::StaticRegisterNativesUBlotterUIEntryContainer()
{
}
UClass* Z_Construct_UClass_UBlotterUIEntryContainer()
{
	if (!Z_Registration_Info_UClass_UBlotterUIEntryContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlotterUIEntryContainer.OuterSingleton, Z_Construct_UClass_UBlotterUIEntryContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlotterUIEntryContainer.OuterSingleton;
}
UBlotterUIEntryContainer::UBlotterUIEntryContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBlotterUIEntryContainer);
UBlotterUIEntryContainer::~UBlotterUIEntryContainer() {}
// ********** End Class UBlotterUIEntryContainer ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterUIEntryContainer_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlotterUIEntryContainer, UBlotterUIEntryContainer::StaticClass, TEXT("UBlotterUIEntryContainer"), &Z_Registration_Info_UClass_UBlotterUIEntryContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlotterUIEntryContainer), 3733135794U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterUIEntryContainer_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterUIEntryContainer_h__Script_InkpotEditor_3427392921{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterUIEntryContainer_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterUIEntryContainer_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
