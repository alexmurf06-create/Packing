// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/InkpotChoice.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotChoice() {}

// ********** Begin Cross Module References ********************************************************
INKPOT_API UClass* Z_Construct_UClass_UInkpotChoice();
INKPOT_API UClass* Z_Construct_UClass_UInkpotChoice_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotLine();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotChoice Function GetIndex ******************************************
struct Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics
{
	struct InkpotChoice_eventGetIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Choice" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotChoice.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIndex constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIndex constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIndex Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotChoice_eventGetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::PropPointers) < 2048);
// ********** End Function GetIndex Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotChoice, nullptr, "GetIndex", 	Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::InkpotChoice_eventGetIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::InkpotChoice_eventGetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotChoice_GetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotChoice::execGetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndex();
	P_NATIVE_END;
}
// ********** End Class UInkpotChoice Function GetIndex ********************************************

// ********** Begin Class UInkpotChoice ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotChoice;
UClass* UInkpotChoice::GetPrivateStaticClass()
{
	using TClass = UInkpotChoice;
	if (!Z_Registration_Info_UClass_UInkpotChoice.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotChoice"),
			Z_Registration_Info_UClass_UInkpotChoice.InnerSingleton,
			StaticRegisterNativesUInkpotChoice,
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
	return Z_Registration_Info_UClass_UInkpotChoice.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotChoice_NoRegister()
{
	return UInkpotChoice::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inkpot/InkpotChoice.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotChoice.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotChoice constinit property declarations ****************************
// ********** End Class UInkpotChoice constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetIndex"), .Pointer = &UInkpotChoice::execGetIndex },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotChoice_GetIndex, "GetIndex" }, // 28943040
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotChoice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotChoice_Statics
UObject* (*const Z_Construct_UClass_UInkpotChoice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInkpotLine,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotChoice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotChoice_Statics::ClassParams = {
	&UInkpotChoice::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotChoice_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotChoice_Statics::Class_MetaDataParams)
};
void UInkpotChoice::StaticRegisterNativesUInkpotChoice()
{
	UClass* Class = UInkpotChoice::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotChoice_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotChoice()
{
	if (!Z_Registration_Info_UClass_UInkpotChoice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotChoice.OuterSingleton, Z_Construct_UClass_UInkpotChoice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotChoice.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotChoice);
UInkpotChoice::~UInkpotChoice() {}
// ********** End Class UInkpotChoice **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotChoice_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotChoice, UInkpotChoice::StaticClass, TEXT("UInkpotChoice"), &Z_Registration_Info_UClass_UInkpotChoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotChoice), 3162046189U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotChoice_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotChoice_h__Script_Inkpot_1044265043{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotChoice_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotChoice_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
