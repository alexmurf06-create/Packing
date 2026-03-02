// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Outliner/InkpotOutliner.h"

#ifdef INKPOTEDITOR_InkpotOutliner_generated_h
#error "InkpotOutliner.generated.h already included, missing '#pragma once' in InkpotOutliner.h"
#endif
#define INKPOTEDITOR_InkpotOutliner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlotterContainer;
class UInkpotStory;

// ********** Begin Class UInkpotOutliner **********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnStoryBegin);


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInkpotOutliner_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotOutliner_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotOutliner(); \
	friend struct ::Z_Construct_UClass_UInkpotOutliner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UInkpotOutliner_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotOutliner, UEditorUtilityWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UInkpotOutliner_NoRegister) \
	DECLARE_SERIALIZER(UInkpotOutliner)


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotOutliner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotOutliner(UInkpotOutliner&&) = delete; \
	UInkpotOutliner(const UInkpotOutliner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotOutliner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotOutliner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotOutliner) \
	NO_API virtual ~UInkpotOutliner();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_10_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_13_CALLBACK_WRAPPERS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_13_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotOutliner;

// ********** End Class UInkpotOutliner ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_InkpotOutliner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
