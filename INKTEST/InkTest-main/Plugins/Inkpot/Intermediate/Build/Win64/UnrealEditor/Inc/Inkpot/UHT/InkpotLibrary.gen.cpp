// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/InkpotLibrary.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotLibrary_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotLibrary Function GetStoryAssetUserData ****************************
struct Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics
{
	struct InkpotLibrary_eventGetStoryAssetUserData_Parms
	{
		UInkpotStory* Story;
		TSubclassOf<UAssetUserData> Class;
		UAssetUserData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* GetStoryAssetUserData\n\x09* Get the asset user data instance (of class) from the story data asset used to create the story\n\x09*/" },
#endif
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetStoryAssetUserData\n      * Get the asset user data instance (of class) from the story data asset used to create the story" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStoryAssetUserData constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStoryAssetUserData constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStoryAssetUserData Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventGetStoryAssetUserData_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventGetStoryAssetUserData_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventGetStoryAssetUserData_Parms, ReturnValue), Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::PropPointers) < 2048);
// ********** End Function GetStoryAssetUserData Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "GetStoryAssetUserData", 	Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::InkpotLibrary_eventGetStoryAssetUserData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::InkpotLibrary_eventGetStoryAssetUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotLibrary::execGetStoryAssetUserData)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAssetUserData**)Z_Param__Result=UInkpotLibrary::GetStoryAssetUserData(Z_Param_Story,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UInkpotLibrary Function GetStoryAssetUserData ******************************

// ********** Begin Class UInkpotLibrary Function GetTagWithPrefixAndStrip *************************
struct Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics
{
	struct InkpotLibrary_eventGetTagWithPrefixAndStrip_Parms
	{
		UInkpotStory* Story;
		FString TagPrefix;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetTagWithPrefix\n\x09 * gets the first tag that starts with the specified prefix from the current list of tags.  \n\x09 * if found, strips the tag and returns the rest\n\x09 *\n\x09 * @param Story - The story to query.\n\x09 * @param TagPrefix - The prefix to match.\n\x09 * @returns A string made from the first matching tag but excluding the prefix.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetTagWithPrefix\ngets the first tag that starts with the specified prefix from the current list of tags.\nif found, strips the tag and returns the rest\n\n@param Story - The story to query.\n@param TagPrefix - The prefix to match.\n@returns A string made from the first matching tag but excluding the prefix." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagPrefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTagWithPrefixAndStrip constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagPrefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTagWithPrefixAndStrip constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTagWithPrefixAndStrip Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventGetTagWithPrefixAndStrip_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::NewProp_TagPrefix = { "TagPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventGetTagWithPrefixAndStrip_Parms, TagPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagPrefix_MetaData), NewProp_TagPrefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventGetTagWithPrefixAndStrip_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::NewProp_TagPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::PropPointers) < 2048);
// ********** End Function GetTagWithPrefixAndStrip Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "GetTagWithPrefixAndStrip", 	Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::InkpotLibrary_eventGetTagWithPrefixAndStrip_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::InkpotLibrary_eventGetTagWithPrefixAndStrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotLibrary::execGetTagWithPrefixAndStrip)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagPrefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInkpotLibrary::GetTagWithPrefixAndStrip(Z_Param_Story,Z_Param_TagPrefix);
	P_NATIVE_END;
}
// ********** End Class UInkpotLibrary Function GetTagWithPrefixAndStrip ***************************

// ********** Begin Class UInkpotLibrary ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotLibrary;
UClass* UInkpotLibrary::GetPrivateStaticClass()
{
	using TClass = UInkpotLibrary;
	if (!Z_Registration_Info_UClass_UInkpotLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotLibrary"),
			Z_Registration_Info_UClass_UInkpotLibrary.InnerSingleton,
			StaticRegisterNativesUInkpotLibrary,
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
	return Z_Registration_Info_UClass_UInkpotLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotLibrary_NoRegister()
{
	return UInkpotLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Inkpot/InkpotLibrary.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLibrary.h" },
		{ "ScriptName", "InkpotLibrary" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotLibrary constinit property declarations ***************************
// ********** End Class UInkpotLibrary constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetStoryAssetUserData"), .Pointer = &UInkpotLibrary::execGetStoryAssetUserData },
		{ .NameUTF8 = UTF8TEXT("GetTagWithPrefixAndStrip"), .Pointer = &UInkpotLibrary::execGetTagWithPrefixAndStrip },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotLibrary_GetStoryAssetUserData, "GetStoryAssetUserData" }, // 292325753
		{ &Z_Construct_UFunction_UInkpotLibrary_GetTagWithPrefixAndStrip, "GetTagWithPrefixAndStrip" }, // 1183907808
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotLibrary_Statics
UObject* (*const Z_Construct_UClass_UInkpotLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotLibrary_Statics::ClassParams = {
	&UInkpotLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotLibrary_Statics::Class_MetaDataParams)
};
void UInkpotLibrary::StaticRegisterNativesUInkpotLibrary()
{
	UClass* Class = UInkpotLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotLibrary()
{
	if (!Z_Registration_Info_UClass_UInkpotLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotLibrary.OuterSingleton, Z_Construct_UClass_UInkpotLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotLibrary.OuterSingleton;
}
UInkpotLibrary::UInkpotLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotLibrary);
UInkpotLibrary::~UInkpotLibrary() {}
// ********** End Class UInkpotLibrary *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLibrary_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotLibrary, UInkpotLibrary::StaticClass, TEXT("UInkpotLibrary"), &Z_Registration_Info_UClass_UInkpotLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotLibrary), 4062419190U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLibrary_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLibrary_h__Script_Inkpot_1792324241{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLibrary_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLibrary_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
