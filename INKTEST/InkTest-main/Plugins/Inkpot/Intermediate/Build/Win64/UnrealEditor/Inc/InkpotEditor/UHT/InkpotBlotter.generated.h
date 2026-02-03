// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blotter/InkpotBlotter.h"

#ifdef INKPOTEDITOR_InkpotBlotter_generated_h
#error "InkpotBlotter.generated.h already included, missing '#pragma once' in InkpotBlotter.h"
#endif
#define INKPOTEDITOR_InkpotBlotter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlotterString;
class UBlotterVariable;
class UInkpotStory;

// ********** Begin Class UInkpotBlotter ***********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDebugRefresh); \
	DECLARE_FUNCTION(execOnStoryBegin); \
	DECLARE_FUNCTION(execOnPIEEnd); \
	DECLARE_FUNCTION(execOnPIEStart); \
	DECLARE_FUNCTION(execGetOrigins); \
	DECLARE_FUNCTION(execFilterVariables); \
	DECLARE_FUNCTION(execGetVariables); \
	DECLARE_FUNCTION(execGetChoices); \
	DECLARE_FUNCTION(execGlobalTags); \
	DECLARE_FUNCTION(execGetCurrentTags); \
	DECLARE_FUNCTION(execGetAliveFlowNames);


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInkpotBlotter_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotBlotter_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotBlotter(); \
	friend struct ::Z_Construct_UClass_UInkpotBlotter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UInkpotBlotter_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotBlotter, UEditorUtilityWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UInkpotBlotter_NoRegister) \
	DECLARE_SERIALIZER(UInkpotBlotter)


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotBlotter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotBlotter(UInkpotBlotter&&) = delete; \
	UInkpotBlotter(const UInkpotBlotter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotBlotter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotBlotter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotBlotter) \
	NO_API virtual ~UInkpotBlotter();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_9_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_CALLBACK_WRAPPERS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotBlotter;

// ********** End Class UInkpotBlotter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
