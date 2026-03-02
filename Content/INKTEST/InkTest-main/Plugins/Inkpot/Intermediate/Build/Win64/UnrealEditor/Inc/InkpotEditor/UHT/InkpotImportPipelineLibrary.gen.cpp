// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportPipeline/InkpotImportPipelineLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotImportPipelineLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAppMsgCategory();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotImportPipelineLibrary();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotImportPipelineLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotImportPipelineLibrary Function CompileInkFile *********************
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics
{
	struct InkpotImportPipelineLibrary_eventCompileInkFile_Parms
	{
		FString SourceFilePath;
		bool bSuccess;
		FString CompiledJSON;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* CompileInkFile \n\x09* Runs Inklecate internally on the provided source file and outputs the compiled reesult as a JSON string.\n\x09*/" },
#endif
		{ "ExpandBoolAsExecs", "bSuccess" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CompileInkFile\n      * Runs Inklecate internally on the provided source file and outputs the compiled reesult as a JSON string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CompileInkFile constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompiledJSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CompileInkFile constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CompileInkFile Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventCompileInkFile_Parms, SourceFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
void Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotImportPipelineLibrary_eventCompileInkFile_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotImportPipelineLibrary_eventCompileInkFile_Parms), &Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::NewProp_CompiledJSON = { "CompiledJSON", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventCompileInkFile_Parms, CompiledJSON), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::NewProp_CompiledJSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::PropPointers) < 2048);
// ********** End Function CompileInkFile Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "CompileInkFile", 	Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::InkpotImportPipelineLibrary_eventCompileInkFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::InkpotImportPipelineLibrary_eventCompileInkFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execCompileInkFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceFilePath);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CompiledJSON);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotImportPipelineLibrary::CompileInkFile(Z_Param_SourceFilePath,Z_Param_Out_bSuccess,Z_Param_Out_CompiledJSON);
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function CompileInkFile ***********************

// ********** Begin Class UInkpotImportPipelineLibrary Function CompileInkString *******************
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics
{
	struct InkpotImportPipelineLibrary_eventCompileInkString_Parms
	{
		FString SourceString;
		bool bSuccess;
		FString CompiledJSON;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* CompileInkString\n\x09* Runs Inklecate internally on the provided source file and outputs the compiled reesult as a JSON string.\n\x09*/" },
#endif
		{ "ExpandBoolAsExecs", "bSuccess" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CompileInkString\n      * Runs Inklecate internally on the provided source file and outputs the compiled reesult as a JSON string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CompileInkString constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceString;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompiledJSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CompileInkString constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CompileInkString Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::NewProp_SourceString = { "SourceString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventCompileInkString_Parms, SourceString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceString_MetaData), NewProp_SourceString_MetaData) };
void Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotImportPipelineLibrary_eventCompileInkString_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotImportPipelineLibrary_eventCompileInkString_Parms), &Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::NewProp_CompiledJSON = { "CompiledJSON", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventCompileInkString_Parms, CompiledJSON), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::NewProp_SourceString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::NewProp_CompiledJSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::PropPointers) < 2048);
// ********** End Function CompileInkString Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "CompileInkString", 	Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::InkpotImportPipelineLibrary_eventCompileInkString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::InkpotImportPipelineLibrary_eventCompileInkString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execCompileInkString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceString);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CompiledJSON);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotImportPipelineLibrary::CompileInkString(Z_Param_SourceString,Z_Param_Out_bSuccess,Z_Param_Out_CompiledJSON);
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function CompileInkString *********************

// ********** Begin Class UInkpotImportPipelineLibrary Function DumpStrings ************************
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics
{
	struct InkpotImportPipelineLibrary_eventDumpStrings_Parms
	{
		FString OutputFilePath;
		UInkpotStoryAsset* StoryAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Dump Strings\n\x09* Collates all the strings in the story to a csv file.\n\x09* If Output File Path is empty then the csv will be created in the source directory of the initial ink file.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dump Strings\n      * Collates all the strings in the story to a csv file.\n      * If Output File Path is empty then the csv will be created in the source directory of the initial ink file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DumpStrings constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoryAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DumpStrings constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DumpStrings Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::NewProp_OutputFilePath = { "OutputFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventDumpStrings_Parms, OutputFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputFilePath_MetaData), NewProp_OutputFilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::NewProp_StoryAsset = { "StoryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventDumpStrings_Parms, StoryAsset), Z_Construct_UClass_UInkpotStoryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::NewProp_OutputFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::NewProp_StoryAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::PropPointers) < 2048);
// ********** End Function DumpStrings Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "DumpStrings", 	Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::InkpotImportPipelineLibrary_eventDumpStrings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::InkpotImportPipelineLibrary_eventDumpStrings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execDumpStrings)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputFilePath);
	P_GET_OBJECT(UInkpotStoryAsset,Z_Param_StoryAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotImportPipelineLibrary::DumpStrings(Z_Param_OutputFilePath,Z_Param_StoryAsset);
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function DumpStrings **************************

// ********** Begin Class UInkpotImportPipelineLibrary Function ExecProcess ************************
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics
{
	struct InkpotImportPipelineLibrary_eventExecProcess_Parms
	{
		FString Command;
		FString WorkingDirectory;
		FString Params;
		int32 ReturnCode;
		FString StdOut;
		FString StdErr;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ExecProcess\n\x09* Executes an external process.\n\x09*/" },
#endif
		{ "ExpandBoolAsExecs", "bSuccess" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ExecProcess\n      * Executes an external process." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ExecProcess constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorkingDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Params;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StdOut;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StdErr;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExecProcess constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExecProcess Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventExecProcess_Parms, Command), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_WorkingDirectory = { "WorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventExecProcess_Parms, WorkingDirectory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventExecProcess_Parms, Params), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_ReturnCode = { "ReturnCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventExecProcess_Parms, ReturnCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_StdOut = { "StdOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventExecProcess_Parms, StdOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_StdErr = { "StdErr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventExecProcess_Parms, StdErr), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotImportPipelineLibrary_eventExecProcess_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotImportPipelineLibrary_eventExecProcess_Parms), &Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_WorkingDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_ReturnCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_StdOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_StdErr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::PropPointers) < 2048);
// ********** End Function ExecProcess Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "ExecProcess", 	Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::InkpotImportPipelineLibrary_eventExecProcess_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::InkpotImportPipelineLibrary_eventExecProcess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execExecProcess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_GET_PROPERTY(FStrProperty,Z_Param_WorkingDirectory);
	P_GET_PROPERTY(FStrProperty,Z_Param_Params);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ReturnCode);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StdOut);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StdErr);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotImportPipelineLibrary::ExecProcess(Z_Param_Command,Z_Param_WorkingDirectory,Z_Param_Params,Z_Param_Out_ReturnCode,Z_Param_Out_StdOut,Z_Param_Out_StdErr,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function ExecProcess **************************

// ********** Begin Class UInkpotImportPipelineLibrary Function FlushScratchDirectory **************
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_FlushScratchDirectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* GetScratchDirectory\n\x09* Deletes the contents of the Inkpot pipeline scratch directory.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetScratchDirectory\n      * Deletes the contents of the Inkpot pipeline scratch directory." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FlushScratchDirectory constinit property declarations *****************
// ********** End Function FlushScratchDirectory constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_FlushScratchDirectory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "FlushScratchDirectory", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_FlushScratchDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_FlushScratchDirectory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_FlushScratchDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_FlushScratchDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execFlushScratchDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotImportPipelineLibrary::FlushScratchDirectory();
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function FlushScratchDirectory ****************

// ********** Begin Class UInkpotImportPipelineLibrary Function GenerateTAGs ***********************
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics
{
	struct InkpotImportPipelineLibrary_eventGenerateTAGs_Parms
	{
		UInkpotStoryAsset* StoryAsset;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* GenerateTAGs\n\x09* Generates a GameplayTag table asset from the story asset. \n\x09* GameplayTag table asset is colocated with the story asset. \n\x09* Adds generated table to the Gamplay Tag Table List in the GameplayTags section of Project Settings.\n\x09*/" },
#endif
		{ "ExpandBoolAsExecs", "bSuccess" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GenerateTAGs\n      * Generates a GameplayTag table asset from the story asset.\n      * GameplayTag table asset is colocated with the story asset.\n      * Adds generated table to the Gamplay Tag Table List in the GameplayTags section of Project Settings." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateTAGs constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoryAsset;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateTAGs constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateTAGs Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::NewProp_StoryAsset = { "StoryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventGenerateTAGs_Parms, StoryAsset), Z_Construct_UClass_UInkpotStoryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotImportPipelineLibrary_eventGenerateTAGs_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotImportPipelineLibrary_eventGenerateTAGs_Parms), &Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::NewProp_StoryAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::PropPointers) < 2048);
// ********** End Function GenerateTAGs Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "GenerateTAGs", 	Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::InkpotImportPipelineLibrary_eventGenerateTAGs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::InkpotImportPipelineLibrary_eventGenerateTAGs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execGenerateTAGs)
{
	P_GET_OBJECT(UInkpotStoryAsset,Z_Param_StoryAsset);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotImportPipelineLibrary::GenerateTAGs(Z_Param_StoryAsset,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function GenerateTAGs *************************

// ********** Begin Class UInkpotImportPipelineLibrary Function GetPluginPath **********************
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics
{
	struct InkpotImportPipelineLibrary_eventGetPluginPath_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* GetPluginPath\n\x09* Gets the full file path to the inkpot plugin.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetPluginPath\n      * Gets the full file path to the inkpot plugin." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPluginPath constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPluginPath constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPluginPath Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventGetPluginPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::PropPointers) < 2048);
// ********** End Function GetPluginPath Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "GetPluginPath", 	Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::InkpotImportPipelineLibrary_eventGetPluginPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::InkpotImportPipelineLibrary_eventGetPluginPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execGetPluginPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInkpotImportPipelineLibrary::GetPluginPath();
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function GetPluginPath ************************

// ********** Begin Class UInkpotImportPipelineLibrary Function GetScratchDirectory ****************
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics
{
	struct InkpotImportPipelineLibrary_eventGetScratchDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* GetScratchDirectory\n\x09* Gets the full file path to the Inkpot pipeline scratch directory.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetScratchDirectory\n      * Gets the full file path to the Inkpot pipeline scratch directory." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetScratchDirectory constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetScratchDirectory constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetScratchDirectory Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventGetScratchDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::PropPointers) < 2048);
// ********** End Function GetScratchDirectory Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "GetScratchDirectory", 	Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::InkpotImportPipelineLibrary_eventGetScratchDirectory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::InkpotImportPipelineLibrary_eventGetScratchDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execGetScratchDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInkpotImportPipelineLibrary::GetScratchDirectory();
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function GetScratchDirectory ******************

// ********** Begin Class UInkpotImportPipelineLibrary Function LoadFileToString *******************
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics
{
	struct InkpotImportPipelineLibrary_eventLoadFileToString_Parms
	{
		FString SourceFilePath;
		FString LoadedString;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* LoadFileToString\n\x09* Loads the entirety of the source file to a string.\n\x09*/" },
#endif
		{ "ExpandBoolAsExecs", "bSuccess" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LoadFileToString\n      * Loads the entirety of the source file to a string." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function LoadFileToString constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LoadedString;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadFileToString constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadFileToString Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventLoadFileToString_Parms, SourceFilePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::NewProp_LoadedString = { "LoadedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventLoadFileToString_Parms, LoadedString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotImportPipelineLibrary_eventLoadFileToString_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotImportPipelineLibrary_eventLoadFileToString_Parms), &Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::NewProp_LoadedString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::PropPointers) < 2048);
// ********** End Function LoadFileToString Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "LoadFileToString", 	Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::InkpotImportPipelineLibrary_eventLoadFileToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::InkpotImportPipelineLibrary_eventLoadFileToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execLoadFileToString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceFilePath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LoadedString);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotImportPipelineLibrary::LoadFileToString(Z_Param_SourceFilePath,Z_Param_Out_LoadedString,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function LoadFileToString *********************

// ********** Begin Class UInkpotImportPipelineLibrary Function ShowInkpotImportMessageDialog ******
struct Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics
{
	struct InkpotImportPipelineLibrary_eventShowInkpotImportMessageDialog_Parms
	{
		FText Title;
		FText Message;
		EAppMsgCategory MessageCategory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ShowInkpotImportMessageDialog\n\x09* Shows a modal dialogue with the given message and title\n\x09*/" },
#endif
		{ "CPP_Default_MessageCategory", "Error" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ShowInkpotImportMessageDialog\n      * Shows a modal dialogue with the given message and title" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ShowInkpotImportMessageDialog constinit property declarations *********
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MessageCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowInkpotImportMessageDialog constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowInkpotImportMessageDialog Property Definitions ********************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventShowInkpotImportMessageDialog_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventShowInkpotImportMessageDialog_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::NewProp_MessageCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::NewProp_MessageCategory = { "MessageCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipelineLibrary_eventShowInkpotImportMessageDialog_Parms, MessageCategory), Z_Construct_UEnum_CoreUObject_EAppMsgCategory, METADATA_PARAMS(0, nullptr) }; // 525484583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::NewProp_MessageCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::NewProp_MessageCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::PropPointers) < 2048);
// ********** End Function ShowInkpotImportMessageDialog Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipelineLibrary, nullptr, "ShowInkpotImportMessageDialog", 	Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::InkpotImportPipelineLibrary_eventShowInkpotImportMessageDialog_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::InkpotImportPipelineLibrary_eventShowInkpotImportMessageDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipelineLibrary::execShowInkpotImportMessageDialog)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Title);
	P_GET_PROPERTY(FTextProperty,Z_Param_Message);
	P_GET_ENUM(EAppMsgCategory,Z_Param_MessageCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotImportPipelineLibrary::ShowInkpotImportMessageDialog(Z_Param_Title,Z_Param_Message,EAppMsgCategory(Z_Param_MessageCategory));
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipelineLibrary Function ShowInkpotImportMessageDialog ********

// ********** Begin Class UInkpotImportPipelineLibrary *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotImportPipelineLibrary;
UClass* UInkpotImportPipelineLibrary::GetPrivateStaticClass()
{
	using TClass = UInkpotImportPipelineLibrary;
	if (!Z_Registration_Info_UClass_UInkpotImportPipelineLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotImportPipelineLibrary"),
			Z_Registration_Info_UClass_UInkpotImportPipelineLibrary.InnerSingleton,
			StaticRegisterNativesUInkpotImportPipelineLibrary,
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
	return Z_Registration_Info_UClass_UInkpotImportPipelineLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotImportPipelineLibrary_NoRegister()
{
	return UInkpotImportPipelineLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ImportPipeline/InkpotImportPipelineLibrary.h" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipelineLibrary.h" },
		{ "ScriptName", "InkpotPipelineImportLibrary" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotImportPipelineLibrary constinit property declarations *************
// ********** End Class UInkpotImportPipelineLibrary constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CompileInkFile"), .Pointer = &UInkpotImportPipelineLibrary::execCompileInkFile },
		{ .NameUTF8 = UTF8TEXT("CompileInkString"), .Pointer = &UInkpotImportPipelineLibrary::execCompileInkString },
		{ .NameUTF8 = UTF8TEXT("DumpStrings"), .Pointer = &UInkpotImportPipelineLibrary::execDumpStrings },
		{ .NameUTF8 = UTF8TEXT("ExecProcess"), .Pointer = &UInkpotImportPipelineLibrary::execExecProcess },
		{ .NameUTF8 = UTF8TEXT("FlushScratchDirectory"), .Pointer = &UInkpotImportPipelineLibrary::execFlushScratchDirectory },
		{ .NameUTF8 = UTF8TEXT("GenerateTAGs"), .Pointer = &UInkpotImportPipelineLibrary::execGenerateTAGs },
		{ .NameUTF8 = UTF8TEXT("GetPluginPath"), .Pointer = &UInkpotImportPipelineLibrary::execGetPluginPath },
		{ .NameUTF8 = UTF8TEXT("GetScratchDirectory"), .Pointer = &UInkpotImportPipelineLibrary::execGetScratchDirectory },
		{ .NameUTF8 = UTF8TEXT("LoadFileToString"), .Pointer = &UInkpotImportPipelineLibrary::execLoadFileToString },
		{ .NameUTF8 = UTF8TEXT("ShowInkpotImportMessageDialog"), .Pointer = &UInkpotImportPipelineLibrary::execShowInkpotImportMessageDialog },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkFile, "CompileInkFile" }, // 844534695
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_CompileInkString, "CompileInkString" }, // 470739896
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_DumpStrings, "DumpStrings" }, // 4163362526
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_ExecProcess, "ExecProcess" }, // 817303591
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_FlushScratchDirectory, "FlushScratchDirectory" }, // 4029358280
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_GenerateTAGs, "GenerateTAGs" }, // 550285972
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetPluginPath, "GetPluginPath" }, // 584998777
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_GetScratchDirectory, "GetScratchDirectory" }, // 3982252574
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_LoadFileToString, "LoadFileToString" }, // 33323270
		{ &Z_Construct_UFunction_UInkpotImportPipelineLibrary_ShowInkpotImportMessageDialog, "ShowInkpotImportMessageDialog" }, // 2918465346
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotImportPipelineLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics
UObject* (*const Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics::ClassParams = {
	&UInkpotImportPipelineLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics::Class_MetaDataParams)
};
void UInkpotImportPipelineLibrary::StaticRegisterNativesUInkpotImportPipelineLibrary()
{
	UClass* Class = UInkpotImportPipelineLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotImportPipelineLibrary()
{
	if (!Z_Registration_Info_UClass_UInkpotImportPipelineLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotImportPipelineLibrary.OuterSingleton, Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotImportPipelineLibrary.OuterSingleton;
}
UInkpotImportPipelineLibrary::UInkpotImportPipelineLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotImportPipelineLibrary);
UInkpotImportPipelineLibrary::~UInkpotImportPipelineLibrary() {}
// ********** End Class UInkpotImportPipelineLibrary ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotImportPipelineLibrary, UInkpotImportPipelineLibrary::StaticClass, TEXT("UInkpotImportPipelineLibrary"), &Z_Registration_Info_UClass_UInkpotImportPipelineLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotImportPipelineLibrary), 3038300782U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h__Script_InkpotEditor_988711213{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
