// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/AsyncActions/AsyncAction_WaitVariableChange.h"

#ifdef INKPOT_AsyncAction_WaitVariableChange_generated_h
#error "AsyncAction_WaitVariableChange.generated.h already included, missing '#pragma once' in AsyncAction_WaitVariableChange.h"
#endif
#define INKPOT_AsyncAction_WaitVariableChange_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncAction_WaitVariableChange;
class UInkpotStory;
class UObject;
struct FInkpotValue;

// ********** Begin Delegate FInkpotVariableChangeSignature ****************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h_15_DELEGATE \
static void FInkpotVariableChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& InkpotVariableChangeSignature, UInkpotStory* Story, const FString& Variable, FInkpotValue const& Value);


// ********** End Delegate FInkpotVariableChangeSignature ******************************************

// ********** Begin Class UAsyncAction_WaitVariableChange ******************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnVariableChange); \
	DECLARE_FUNCTION(execOnEndStory); \
	DECLARE_FUNCTION(execOnBeginStory); \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForVariableChange);


struct Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics;
INKPOT_API UClass* Z_Construct_UClass_UAsyncAction_WaitVariableChange_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_WaitVariableChange(); \
	friend struct ::Z_Construct_UClass_UAsyncAction_WaitVariableChange_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UAsyncAction_WaitVariableChange_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_WaitVariableChange, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UAsyncAction_WaitVariableChange_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_WaitVariableChange)


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_WaitVariableChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_WaitVariableChange(UAsyncAction_WaitVariableChange&&) = delete; \
	UAsyncAction_WaitVariableChange(const UAsyncAction_WaitVariableChange&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_WaitVariableChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_WaitVariableChange); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_WaitVariableChange) \
	NO_API virtual ~UAsyncAction_WaitVariableChange();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h_10_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h_13_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_WaitVariableChange;

// ********** End Class UAsyncAction_WaitVariableChange ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_AsyncActions_AsyncAction_WaitVariableChange_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
