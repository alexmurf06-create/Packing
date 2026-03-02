// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportPipeline/InkpotImportPipeline.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotImportPipeline() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityExtension_NoRegister();
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityObject();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotImportPipeline();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotImportPipeline_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotImportPipeline Function Finalise **********************************
struct Z_Construct_UFunction_UInkpotImportPipeline_Finalise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finalise \n\x09* Marks the import process as having succeeded.\n\x09* If this is not called the import process will fail gracefully.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipeline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finalise\n      * Marks the import process as having succeeded.\n      * If this is not called the import process will fail gracefully." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Finalise constinit property declarations ******************************
// ********** End Function Finalise constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipeline_Finalise_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipeline, nullptr, "Finalise", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_Finalise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipeline_Finalise_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInkpotImportPipeline_Finalise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipeline_Finalise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipeline::execFinalise)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Finalise();
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipeline Function Finalise ************************************

// ********** Begin Class UInkpotImportPipeline Function Import ************************************
struct InkpotImportPipeline_eventImport_Parms
{
	FString SourceFile;
	UInkpotStoryAsset* NewStoryAsset;
};
static FName NAME_UInkpotImportPipeline_Import = FName(TEXT("Import"));
void UInkpotImportPipeline::Import(const FString& SourceFile, UInkpotStoryAsset* NewStoryAsset)
{
	InkpotImportPipeline_eventImport_Parms Parms;
	Parms.SourceFile=SourceFile;
	Parms.NewStoryAsset=NewStoryAsset;
	UFunction* Func = FindFunctionChecked(NAME_UInkpotImportPipeline_Import);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Import\n\x09* Event for processing of the ink import pipeline.\n\x09* Passes in full file path of the source ink file with the newly created but empty story asset.\n\x09* Intent is that after processing the source we get compiled JSON which is then set on the story asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipeline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import\n      * Event for processing of the ink import pipeline.\n      * Passes in full file path of the source ink file with the newly created but empty story asset.\n      * Intent is that after processing the source we get compiled JSON which is then set on the story asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Import constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewStoryAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Import constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Import Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::NewProp_SourceFile = { "SourceFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipeline_eventImport_Parms, SourceFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFile_MetaData), NewProp_SourceFile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::NewProp_NewStoryAsset = { "NewStoryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipeline_eventImport_Parms, NewStoryAsset), Z_Construct_UClass_UInkpotStoryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::NewProp_SourceFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::NewProp_NewStoryAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::PropPointers) < 2048);
// ********** End Function Import Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipeline, nullptr, "Import", 	Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::PropPointers), 
sizeof(InkpotImportPipeline_eventImport_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InkpotImportPipeline_eventImport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipeline_Import()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipeline_Import_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInkpotImportPipeline Function Import **************************************

// ********** Begin Class UInkpotImportPipeline Function LogMsg ************************************
struct Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics
{
	struct InkpotImportPipeline_eventLogMsg_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipeline.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LogMsg constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LogMsg constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LogMsg Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipeline_eventLogMsg_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::PropPointers) < 2048);
// ********** End Function LogMsg Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipeline, nullptr, "LogMsg", 	Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::InkpotImportPipeline_eventLogMsg_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::InkpotImportPipeline_eventLogMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipeline_LogMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipeline_LogMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipeline::execLogMsg)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogMsg(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipeline Function LogMsg **************************************

// ********** Begin Class UInkpotImportPipeline Function LogMsgs ***********************************
struct Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics
{
	struct InkpotImportPipeline_eventLogMsgs_Parms
	{
		TArray<FString> Messages;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Import" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipeline.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LogMsgs constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Messages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LogMsgs constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LogMsgs Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotImportPipeline_eventLogMsgs_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::NewProp_Messages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::PropPointers) < 2048);
// ********** End Function LogMsgs Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotImportPipeline, nullptr, "LogMsgs", 	Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::InkpotImportPipeline_eventLogMsgs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::InkpotImportPipeline_eventLogMsgs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotImportPipeline::execLogMsgs)
{
	P_GET_TARRAY(FString,Z_Param_Messages);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogMsgs(Z_Param_Messages);
	P_NATIVE_END;
}
// ********** End Class UInkpotImportPipeline Function LogMsgs *************************************

// ********** Begin Class UInkpotImportPipeline ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotImportPipeline;
UClass* UInkpotImportPipeline::GetPrivateStaticClass()
{
	using TClass = UInkpotImportPipeline;
	if (!Z_Registration_Info_UClass_UInkpotImportPipeline.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotImportPipeline"),
			Z_Registration_Info_UClass_UInkpotImportPipeline.InnerSingleton,
			StaticRegisterNativesUInkpotImportPipeline,
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
	return Z_Registration_Info_UClass_UInkpotImportPipeline.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotImportPipeline_NoRegister()
{
	return UInkpotImportPipeline::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotImportPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ImportPipeline/InkpotImportPipeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipeline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinalised_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImportPipeline/InkpotImportPipeline.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotImportPipeline constinit property declarations ********************
	static void NewProp_bFinalised_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinalised;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInkpotImportPipeline constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Finalise"), .Pointer = &UInkpotImportPipeline::execFinalise },
		{ .NameUTF8 = UTF8TEXT("LogMsg"), .Pointer = &UInkpotImportPipeline::execLogMsg },
		{ .NameUTF8 = UTF8TEXT("LogMsgs"), .Pointer = &UInkpotImportPipeline::execLogMsgs },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotImportPipeline_Finalise, "Finalise" }, // 3284739862
		{ &Z_Construct_UFunction_UInkpotImportPipeline_Import, "Import" }, // 1929229134
		{ &Z_Construct_UFunction_UInkpotImportPipeline_LogMsg, "LogMsg" }, // 3382794519
		{ &Z_Construct_UFunction_UInkpotImportPipeline_LogMsgs, "LogMsgs" }, // 2579072551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotImportPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotImportPipeline_Statics

// ********** Begin Class UInkpotImportPipeline Property Definitions *******************************
void Z_Construct_UClass_UInkpotImportPipeline_Statics::NewProp_bFinalised_SetBit(void* Obj)
{
	((UInkpotImportPipeline*)Obj)->bFinalised = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotImportPipeline_Statics::NewProp_bFinalised = { "bFinalised", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotImportPipeline), &Z_Construct_UClass_UInkpotImportPipeline_Statics::NewProp_bFinalised_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinalised_MetaData), NewProp_bFinalised_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotImportPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotImportPipeline_Statics::NewProp_bFinalised,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotImportPipeline_Statics::PropPointers) < 2048);
// ********** End Class UInkpotImportPipeline Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UInkpotImportPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotImportPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInkpotImportPipeline_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEditorUtilityExtension_NoRegister, (int32)VTABLE_OFFSET(UInkpotImportPipeline, IEditorUtilityExtension), false },  // 3812874892
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotImportPipeline_Statics::ClassParams = {
	&UInkpotImportPipeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInkpotImportPipeline_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotImportPipeline_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotImportPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotImportPipeline_Statics::Class_MetaDataParams)
};
void UInkpotImportPipeline::StaticRegisterNativesUInkpotImportPipeline()
{
	UClass* Class = UInkpotImportPipeline::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotImportPipeline_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotImportPipeline()
{
	if (!Z_Registration_Info_UClass_UInkpotImportPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotImportPipeline.OuterSingleton, Z_Construct_UClass_UInkpotImportPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotImportPipeline.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotImportPipeline);
UInkpotImportPipeline::~UInkpotImportPipeline() {}
// ********** End Class UInkpotImportPipeline ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h__Script_InkpotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotImportPipeline, UInkpotImportPipeline::StaticClass, TEXT("UInkpotImportPipeline"), &Z_Registration_Info_UClass_UInkpotImportPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotImportPipeline), 3934199065U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h__Script_InkpotEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h__Script_InkpotEditor_3666270257{
	TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h__Script_InkpotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h__Script_InkpotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
