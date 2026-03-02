// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Outliner/BlotterContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlotterContainer() {}

// ********** Begin Cross Module References ********************************************************
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterContainer();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterContainer_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterString();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlotterContainer Function GetChildren ***********************************
struct Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics
{
	struct BlotterContainer_eventGetChildren_Parms
	{
		TArray<UBlotterContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Outliner/BlotterContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetChildren constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetChildren constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetChildren Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterContainer_eventGetChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::PropPointers) < 2048);
// ********** End Function GetChildren Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterContainer, nullptr, "GetChildren", 	Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::BlotterContainer_eventGetChildren_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::BlotterContainer_eventGetChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterContainer_GetChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterContainer_GetChildren_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterContainer::execGetChildren)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterContainer*>*)Z_Param__Result=P_THIS->GetChildren();
	P_NATIVE_END;
}
// ********** End Class UBlotterContainer Function GetChildren *************************************

// ********** Begin Class UBlotterContainer Function GetLevel **************************************
struct Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics
{
	struct BlotterContainer_eventGetLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Outliner/BlotterContainer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLevel constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLevel constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLevel Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterContainer_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::PropPointers) < 2048);
// ********** End Function GetLevel Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlotterContainer, nullptr, "GetLevel", 	Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::BlotterContainer_eventGetLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::BlotterContainer_eventGetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterContainer_GetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterContainer_GetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterContainer::execGetLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLevel();
	P_NATIVE_END;
}
// ********** End Class UBlotterContainer Function GetLevel ****************************************

// ********** Begin Class UBlotterContainer ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBlotterContainer;
UClass* UBlotterContainer::GetPrivateStaticClass()
{
	using TClass = UBlotterContainer;
	if (!Z_Registration_Info_UClass_UBlotterContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BlotterContainer"),
			Z_Registration_Info_UClass_UBlotterContainer.InnerSingleton,
			StaticRegisterNativesUBlotterContainer,
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
	return Z_Registration_Info_UClass_UBlotterContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlotterContainer_NoRegister()
{
	return UBlotterContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlotterContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Outliner/BlotterContainer.h" },
		{ "ModuleRelativePath", "Public/Outliner/BlotterContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Category", "BlotterContainer" },
		{ "ModuleRelativePath", "Public/Outliner/BlotterContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "BlotterContainer" },
		{ "ModuleRelativePath", "Public/Outliner/BlotterContainer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBlotterContainer constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBlotterContainer constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetChildren"), .Pointer = &UBlotterContainer::execGetChildren },
		{ .NameUTF8 = UTF8TEXT("GetLevel"), .Pointer = &UBlotterContainer::execGetLevel },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlotterContainer_GetChildren, "GetChildren" }, // 1517696424
		{ &Z_Construct_UFunction_UBlotterContainer_GetLevel, "GetLevel" }, // 2812400246
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlotterContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBlotterContainer_Statics

// ********** Begin Class UBlotterContainer Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlotterContainer_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlotterContainer_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterContainer, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlotterContainer_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterContainer, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlotterContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterContainer_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterContainer_Statics::NewProp_Children,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterContainer_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterContainer_Statics::PropPointers) < 2048);
// ********** End Class UBlotterContainer Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UBlotterContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlotterString,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlotterContainer_Statics::ClassParams = {
	&UBlotterContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlotterContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterContainer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlotterContainer_Statics::Class_MetaDataParams)
};
void UBlotterContainer::StaticRegisterNativesUBlotterContainer()
{
	UClass* Class = UBlotterContainer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBlotterContainer_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBlotterContainer()
{
	if (!Z_Registration_Info_UClass_UBlotterContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlotterContainer.OuterSingleton, Z_Construct_UClass_UBlotterContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlotterContainer.OuterSingleton;
}
UBlotterContainer::UBlotterContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBlotterContainer);
UBlotterContainer::~UBlotterContainer() {}
// ********** End Class UBlotterContainer **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlotterContainer, UBlotterContainer::StaticClass, TEXT("UBlotterContainer"), &Z_Registration_Info_UClass_UBlotterContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlotterContainer), 2780976816U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h__Script_InkpotEditor_2191569636{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
