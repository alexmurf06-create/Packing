// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportPipeline/InkpotImportPipelineLibrary.h"

#ifdef INKPOTEDITOR_InkpotImportPipelineLibrary_generated_h
#error "InkpotImportPipelineLibrary.generated.h already included, missing '#pragma once' in InkpotImportPipelineLibrary.h"
#endif
#define INKPOTEDITOR_InkpotImportPipelineLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotStoryAsset;
enum class EAppMsgCategory : uint8;

// ********** Begin Class UInkpotImportPipelineLibrary *********************************************
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowInkpotImportMessageDialog); \
	DECLARE_FUNCTION(execFlushScratchDirectory); \
	DECLARE_FUNCTION(execGetScratchDirectory); \
	DECLARE_FUNCTION(execGetPluginPath); \
	DECLARE_FUNCTION(execDumpStrings); \
	DECLARE_FUNCTION(execLoadFileToString); \
	DECLARE_FUNCTION(execExecProcess); \
	DECLARE_FUNCTION(execGenerateTAGs); \
	DECLARE_FUNCTION(execCompileInkString); \
	DECLARE_FUNCTION(execCompileInkFile);


struct Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotImportPipelineLibrary_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotImportPipelineLibrary(); \
	friend struct ::Z_Construct_UClass_UInkpotImportPipelineLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UInkpotImportPipelineLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotImportPipelineLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UInkpotImportPipelineLibrary_NoRegister) \
	DECLARE_SERIALIZER(UInkpotImportPipelineLibrary)


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INKPOTEDITOR_API UInkpotImportPipelineLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotImportPipelineLibrary(UInkpotImportPipelineLibrary&&) = delete; \
	UInkpotImportPipelineLibrary(const UInkpotImportPipelineLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INKPOTEDITOR_API, UInkpotImportPipelineLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotImportPipelineLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotImportPipelineLibrary) \
	INKPOTEDITOR_API virtual ~UInkpotImportPipelineLibrary();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h_9_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotImportPipelineLibrary;

// ********** End Class UInkpotImportPipelineLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipelineLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
