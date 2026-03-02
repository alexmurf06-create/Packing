// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotStory.h"

#ifdef INKPOT_InkpotStory_generated_h
#error "InkpotStory.generated.h already included, missing '#pragma once' in InkpotStory.h"
#endif
#define INKPOT_InkpotStory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotChoice;
class UInkpotLine;
class UInkpotStory;
class UObject;
struct FGameplayTag;
struct FInkpotList;
struct FInkpotValue;

// ********** Begin Delegate FOnStoryContinue ******************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_12_DELEGATE \
INKPOT_API void FOnStoryContinue_DelegateWrapper(const FMulticastScriptDelegate& OnStoryContinue, UInkpotStory* Story);


// ********** End Delegate FOnStoryContinue ********************************************************

// ********** Begin Delegate FOnMakeChoice *********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_13_DELEGATE \
INKPOT_API void FOnMakeChoice_DelegateWrapper(const FMulticastScriptDelegate& OnMakeChoice, UInkpotStory* Story, UInkpotChoice* Choice);


// ********** End Delegate FOnMakeChoice ***********************************************************

// ********** Begin Delegate FOnChoosePath *********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_14_DELEGATE \
INKPOT_API void FOnChoosePath_DelegateWrapper(const FMulticastScriptDelegate& OnChoosePath, UInkpotStory* Story, const FString& Path);


// ********** End Delegate FOnChoosePath ***********************************************************

// ********** Begin Delegate FOnSwitchFlow *********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_15_DELEGATE \
INKPOT_API void FOnSwitchFlow_DelegateWrapper(const FMulticastScriptDelegate& OnSwitchFlow, UInkpotStory* Story, const FString& Flow);


// ********** End Delegate FOnSwitchFlow ***********************************************************

// ********** Begin Delegate FOnInkpotVariableChange ***********************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_16_DELEGATE \
INKPOT_API void FOnInkpotVariableChange_DelegateWrapper(const FScriptDelegate& OnInkpotVariableChange, UInkpotStory* Story, const FString& Variable, FInkpotValue const& NewValue);


// ********** End Delegate FOnInkpotVariableChange *************************************************

// ********** Begin Delegate FInkpotExternalFunction ***********************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_17_DELEGATE \
INKPOT_API FInkpotValue FInkpotExternalFunction_DelegateWrapper(const FScriptDelegate& InkpotExternalFunction, TArray<FInkpotValue> const& Values);


// ********** End Delegate FInkpotExternalFunction *************************************************

// ********** Begin Delegate FOnStoryLoadJSON ******************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_18_DELEGATE \
INKPOT_API void FOnStoryLoadJSON_DelegateWrapper(const FMulticastScriptDelegate& OnStoryLoadJSON, UInkpotStory* Story);


// ********** End Delegate FOnStoryLoadJSON ********************************************************

// ********** Begin Delegate FOnLineComplete *******************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_19_DELEGATE \
INKPOT_API void FOnLineComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLineComplete, UInkpotStory* Story, FName const& Context, bool bSuccess);


// ********** End Delegate FOnLineComplete *********************************************************

// ********** Begin Class UInkpotStory *************************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDumpContentAtKnot); \
	DECLARE_FUNCTION(execDumpContentAtPath); \
	DECLARE_FUNCTION(execDumpMainContent); \
	DECLARE_FUNCTION(execDumpDebug); \
	DECLARE_FUNCTION(execGatherAllStrings); \
	DECLARE_FUNCTION(execLoadJSON); \
	DECLARE_FUNCTION(execToJSON); \
	DECLARE_FUNCTION(execIsLineRendering); \
	DECLARE_FUNCTION(execNotifyLineRenderEnd); \
	DECLARE_FUNCTION(execNotifyLineRenderBegin); \
	DECLARE_FUNCTION(execEvalFunction); \
	DECLARE_FUNCTION(execEvaluateFunction); \
	DECLARE_FUNCTION(execUnbindExternalFunction); \
	DECLARE_FUNCTION(execBindExternalFunction); \
	DECLARE_FUNCTION(execGetNamedContentForPath); \
	DECLARE_FUNCTION(execGetNamedContentForKnot); \
	DECLARE_FUNCTION(execGetNamedContent); \
	DECLARE_FUNCTION(execClearAllVariableObserversGT); \
	DECLARE_FUNCTION(execClearAllVariableObservers); \
	DECLARE_FUNCTION(execClearVariableChangeGT); \
	DECLARE_FUNCTION(execClearVariableChange); \
	DECLARE_FUNCTION(execSetOnVariableChangeGT); \
	DECLARE_FUNCTION(execSetOnVariableChange); \
	DECLARE_FUNCTION(execIsVariableDefinedGT); \
	DECLARE_FUNCTION(execIsVariableDefined); \
	DECLARE_FUNCTION(execSetEmptyGT); \
	DECLARE_FUNCTION(execSetEmpty); \
	DECLARE_FUNCTION(execGetListGT); \
	DECLARE_FUNCTION(execGetList); \
	DECLARE_FUNCTION(execSetListGT); \
	DECLARE_FUNCTION(execSetList); \
	DECLARE_FUNCTION(execGetStringGT); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execSetStringGT); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execGetFloatGT); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execSetFloatGT); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execGetIntGT); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execSetIntGT); \
	DECLARE_FUNCTION(execSetInt); \
	DECLARE_FUNCTION(execGetBoolGT); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execSetBoolGT); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execGetValueGT); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetValueGT); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execVisitCountAtPathStringGT); \
	DECLARE_FUNCTION(execVisitCountAtPathString); \
	DECLARE_FUNCTION(execChoosePathStringGT); \
	DECLARE_FUNCTION(execChoosePathString); \
	DECLARE_FUNCTION(execChoosePathGT); \
	DECLARE_FUNCTION(execChoosePath); \
	DECLARE_FUNCTION(execTagsForContentAtPathGT); \
	DECLARE_FUNCTION(execTagsForContentAtPath); \
	DECLARE_FUNCTION(execGlobalTags); \
	DECLARE_FUNCTION(execGetCurrentTags); \
	DECLARE_FUNCTION(execGetAliveFlowCount); \
	DECLARE_FUNCTION(execGetAliveFlowNames); \
	DECLARE_FUNCTION(execIsFlowAlive); \
	DECLARE_FUNCTION(execSwitchToDefaultFlow); \
	DECLARE_FUNCTION(execGetCurrentFlowName); \
	DECLARE_FUNCTION(execRemoveFlow); \
	DECLARE_FUNCTION(execSwitchFlowToPathGT); \
	DECLARE_FUNCTION(execSwitchFlowToPath); \
	DECLARE_FUNCTION(execSwitchFlow); \
	DECLARE_FUNCTION(execChooseChoiceIndex); \
	DECLARE_FUNCTION(execChooseChoice); \
	DECLARE_FUNCTION(execGetCurrentChoices); \
	DECLARE_FUNCTION(execHasChoices); \
	DECLARE_FUNCTION(execGetCurrentLine); \
	DECLARE_FUNCTION(execGetCurrentText); \
	DECLARE_FUNCTION(execCanContinue); \
	DECLARE_FUNCTION(execContinueMaximallyAtPathGT); \
	DECLARE_FUNCTION(execContinueMaximallyAtPath); \
	DECLARE_FUNCTION(execContinueMaximally); \
	DECLARE_FUNCTION(execContinueIfYouCan); \
	DECLARE_FUNCTION(execContinue);


struct Z_Construct_UClass_UInkpotStory_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotStory(); \
	friend struct ::Z_Construct_UClass_UInkpotStory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpotStory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotStory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpotStory_NoRegister) \
	DECLARE_SERIALIZER(UInkpotStory)


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotStory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotStory(UInkpotStory&&) = delete; \
	UInkpotStory(const UInkpotStory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotStory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotStory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotStory) \
	NO_API virtual ~UInkpotStory();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_29_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_32_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotStory;

// ********** End Class UInkpotStory ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
