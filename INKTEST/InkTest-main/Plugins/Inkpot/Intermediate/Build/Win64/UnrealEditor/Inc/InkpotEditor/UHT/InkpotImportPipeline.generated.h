// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportPipeline/InkpotImportPipeline.h"

#ifdef INKPOTEDITOR_InkpotImportPipeline_generated_h
#error "InkpotImportPipeline.generated.h already included, missing '#pragma once' in InkpotImportPipeline.h"
#endif
#define INKPOTEDITOR_InkpotImportPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotStoryAsset;

// ********** Begin Class UInkpotImportPipeline ****************************************************
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLogMsgs); \
	DECLARE_FUNCTION(execLogMsg); \
	DECLARE_FUNCTION(execFinalise);


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInkpotImportPipeline_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotImportPipeline_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotImportPipeline(); \
	friend struct ::Z_Construct_UClass_UInkpotImportPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UInkpotImportPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotImportPipeline, UEditorUtilityObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UInkpotImportPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInkpotImportPipeline) \
	virtual UObject* _getUObject() const override { return const_cast<UInkpotImportPipeline*>(this); }


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotImportPipeline(UInkpotImportPipeline&&) = delete; \
	UInkpotImportPipeline(const UInkpotImportPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INKPOTEDITOR_API, UInkpotImportPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotImportPipeline); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotImportPipeline) \
	INKPOTEDITOR_API virtual ~UInkpotImportPipeline();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_11_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_14_CALLBACK_WRAPPERS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_14_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotImportPipeline;

// ********** End Class UInkpotImportPipeline ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_ImportPipeline_InkpotImportPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
