// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asset/InkpotStoryAsset.h"
#include "Serialization/StructuredArchive.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotStoryAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotStoryAsset Function AddAssetUserData ******************************
struct Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics
{
	struct InkpotStoryAsset_eventAddAssetUserData_Parms
	{
		UAssetUserData* UserData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|StoryAsset" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAssetUserData constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAssetUserData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAssetUserData Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryAsset_eventAddAssetUserData_Parms, UserData), Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserData_MetaData), NewProp_UserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::NewProp_UserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::PropPointers) < 2048);
// ********** End Function AddAssetUserData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryAsset, nullptr, "AddAssetUserData", 	Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::InkpotStoryAsset_eventAddAssetUserData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::InkpotStoryAsset_eventAddAssetUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryAsset::execAddAssetUserData)
{
	P_GET_OBJECT(UAssetUserData,Z_Param_UserData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAssetUserData(Z_Param_UserData);
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryAsset Function AddAssetUserData ********************************

// ********** Begin Class UInkpotStoryAsset Function GetAssetUserDataOfClass ***********************
struct Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics
{
	struct InkpotStoryAsset_eventGetAssetUserDataOfClass_Parms
	{
		TSubclassOf<UAssetUserData> Class;
		UAssetUserData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|StoryAsset" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssetUserDataOfClass constinit property declarations ***************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssetUserDataOfClass constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssetUserDataOfClass Property Definitions **************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryAsset_eventGetAssetUserDataOfClass_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryAsset_eventGetAssetUserDataOfClass_Parms, ReturnValue), Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::PropPointers) < 2048);
// ********** End Function GetAssetUserDataOfClass Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryAsset, nullptr, "GetAssetUserDataOfClass", 	Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::InkpotStoryAsset_eventGetAssetUserDataOfClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::InkpotStoryAsset_eventGetAssetUserDataOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryAsset::execGetAssetUserDataOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAssetUserData**)Z_Param__Result=P_THIS->GetAssetUserDataOfClass(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryAsset Function GetAssetUserDataOfClass *************************

// ********** Begin Class UInkpotStoryAsset Function GetCompiledJSON *******************************
struct Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics
{
	struct InkpotStoryAsset_eventGetCompiledJSON_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* GetCompiledJSON\n\x09* Gets the JSON content of the Asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCompiledJSON\n      * Gets the JSON content of the Asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCompiledJSON constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCompiledJSON constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCompiledJSON Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryAsset_eventGetCompiledJSON_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::PropPointers) < 2048);
// ********** End Function GetCompiledJSON Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryAsset, nullptr, "GetCompiledJSON", 	Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::InkpotStoryAsset_eventGetCompiledJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::InkpotStoryAsset_eventGetCompiledJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryAsset::execGetCompiledJSON)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCompiledJSON();
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryAsset Function GetCompiledJSON *********************************

// ********** Begin Class UInkpotStoryAsset Function GetSource *************************************
struct Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics
{
	struct InkpotStoryAsset_eventGetSource_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* GetSource\n\x09* returns the source contents of the Asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetSource\n      * returns the source contents of the Asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSource constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSource constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSource Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryAsset_eventGetSource_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::PropPointers) < 2048);
// ********** End Function GetSource Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryAsset, nullptr, "GetSource", 	Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::InkpotStoryAsset_eventGetSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::InkpotStoryAsset_eventGetSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryAsset_GetSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryAsset_GetSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryAsset::execGetSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSource();
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryAsset Function GetSource ***************************************

// ********** Begin Class UInkpotStoryAsset Function SetCompiledJSON *******************************
struct Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics
{
	struct InkpotStoryAsset_eventSetCompiledJSON_Parms
	{
		FString JSON;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* SetCompiledJSON\n\x09* Sets the JSON content of the Asset.\n\x09* This is required for the story to be loadable by the Ink runtime.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetCompiledJSON\n      * Sets the JSON content of the Asset.\n      * This is required for the story to be loadable by the Ink runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCompiledJSON constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCompiledJSON constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCompiledJSON Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryAsset_eventSetCompiledJSON_Parms, JSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSON_MetaData), NewProp_JSON_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::NewProp_JSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::PropPointers) < 2048);
// ********** End Function SetCompiledJSON Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryAsset, nullptr, "SetCompiledJSON", 	Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::InkpotStoryAsset_eventSetCompiledJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::InkpotStoryAsset_eventSetCompiledJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryAsset::execSetCompiledJSON)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSON);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCompiledJSON(Z_Param_JSON);
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryAsset Function SetCompiledJSON *********************************

// ********** Begin Class UInkpotStoryAsset Function SetSource *************************************
struct Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics
{
	struct InkpotStoryAsset_eventSetSource_Parms
	{
		FString Source;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* SetSource\n\x09* Set the source contents of the Asset, this is not used by the runtime and can be left blank.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetSource\n      * Set the source contents of the Asset, this is not used by the runtime and can be left blank." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSource constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSource constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSource Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryAsset_eventSetSource_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::PropPointers) < 2048);
// ********** End Function SetSource Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotStoryAsset, nullptr, "SetSource", 	Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::InkpotStoryAsset_eventSetSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::InkpotStoryAsset_eventSetSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStoryAsset_SetSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryAsset_SetSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStoryAsset::execSetSource)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSource(Z_Param_Source);
	P_NATIVE_END;
}
// ********** End Class UInkpotStoryAsset Function SetSource ***************************************

// ********** Begin Class UInkpotStoryAsset ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotStoryAsset;
UClass* UInkpotStoryAsset::GetPrivateStaticClass()
{
	using TClass = UInkpotStoryAsset;
	if (!Z_Registration_Info_UClass_UInkpotStoryAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotStoryAsset"),
			Z_Registration_Info_UClass_UInkpotStoryAsset.InnerSingleton,
			StaticRegisterNativesUInkpotStoryAsset,
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
	return Z_Registration_Info_UClass_UInkpotStoryAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister()
{
	return UInkpotStoryAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotStoryAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Asset/InkpotStoryAsset.h" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Inkpot|StoryAsset" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[] = {
		{ "Category", "Inkpot|StoryAsset" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[] = {
		{ "Category", "Inkpot|StoryAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UInkpotStoryAsset constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSON;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInkpotStoryAsset constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddAssetUserData"), .Pointer = &UInkpotStoryAsset::execAddAssetUserData },
		{ .NameUTF8 = UTF8TEXT("GetAssetUserDataOfClass"), .Pointer = &UInkpotStoryAsset::execGetAssetUserDataOfClass },
		{ .NameUTF8 = UTF8TEXT("GetCompiledJSON"), .Pointer = &UInkpotStoryAsset::execGetCompiledJSON },
		{ .NameUTF8 = UTF8TEXT("GetSource"), .Pointer = &UInkpotStoryAsset::execGetSource },
		{ .NameUTF8 = UTF8TEXT("SetCompiledJSON"), .Pointer = &UInkpotStoryAsset::execSetCompiledJSON },
		{ .NameUTF8 = UTF8TEXT("SetSource"), .Pointer = &UInkpotStoryAsset::execSetSource },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotStoryAsset_AddAssetUserData, "AddAssetUserData" }, // 552135577
		{ &Z_Construct_UFunction_UInkpotStoryAsset_GetAssetUserDataOfClass, "GetAssetUserDataOfClass" }, // 3686651248
		{ &Z_Construct_UFunction_UInkpotStoryAsset_GetCompiledJSON, "GetCompiledJSON" }, // 2896208653
		{ &Z_Construct_UFunction_UInkpotStoryAsset_GetSource, "GetSource" }, // 2568962453
		{ &Z_Construct_UFunction_UInkpotStoryAsset_SetCompiledJSON, "SetCompiledJSON" }, // 1575086362
		{ &Z_Construct_UFunction_UInkpotStoryAsset_SetSource, "SetSource" }, // 3871418330
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStoryAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotStoryAsset_Statics

// ********** Begin Class UInkpotStoryAsset Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, JSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSON_MetaData), NewProp_JSON_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, UserData), Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserData_MetaData), NewProp_UserData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01460008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_JSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_UserData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers) < 2048);
// ********** End Class UInkpotStoryAsset Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UInkpotStoryAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInkpotStoryAsset_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UInkpotStoryAsset, IInterface_AssetUserData), false },  // 3366309698
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStoryAsset_Statics::ClassParams = {
	&UInkpotStoryAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStoryAsset_Statics::Class_MetaDataParams)
};
void UInkpotStoryAsset::StaticRegisterNativesUInkpotStoryAsset()
{
	UClass* Class = UInkpotStoryAsset::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotStoryAsset_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotStoryAsset()
{
	if (!Z_Registration_Info_UClass_UInkpotStoryAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStoryAsset.OuterSingleton, Z_Construct_UClass_UInkpotStoryAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStoryAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotStoryAsset);
UInkpotStoryAsset::~UInkpotStoryAsset() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FARCHIVE_SERIALIZER(UInkpotStoryAsset)
#endif // WITH_EDITORONLY_DATA
// ********** End Class UInkpotStoryAsset **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStoryAsset, UInkpotStoryAsset::StaticClass, TEXT("UInkpotStoryAsset"), &Z_Registration_Info_UClass_UInkpotStoryAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStoryAsset), 2942397653U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h__Script_Inkpot_367395598{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
