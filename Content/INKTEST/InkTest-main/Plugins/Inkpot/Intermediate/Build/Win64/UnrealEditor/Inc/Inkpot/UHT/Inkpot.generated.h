// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/Inkpot.h"

#ifdef INKPOT_Inkpot_generated_h
#error "Inkpot.generated.h already included, missing '#pragma once' in Inkpot.h"
#endif
#define INKPOT_Inkpot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotStory;
class UInkpotStoryAsset;

// ********** Begin Delegate FOnStoryBegin *********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_10_DELEGATE \
INKPOT_API void FOnStoryBegin_DelegateWrapper(const FMulticastScriptDelegate& OnStoryBegin, UInkpotStory* Story);


// ********** End Delegate FOnStoryBegin ***********************************************************

// ********** Begin Delegate FOnStoryEnd ***********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_11_DELEGATE \
INKPOT_API void FOnStoryEnd_DelegateWrapper(const FMulticastScriptDelegate& OnStoryEnd, UInkpotStory* Story);


// ********** End Delegate FOnStoryEnd *************************************************************

// ********** Begin Class UInkpot ******************************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndStory); \
	DECLARE_FUNCTION(execGetStoryAsset); \
	DECLARE_FUNCTION(execGetStory); \
	DECLARE_FUNCTION(execBeginStory);


struct Z_Construct_UClass_UInkpot_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpot_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpot(); \
	friend struct ::Z_Construct_UClass_UInkpot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpot_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpot, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpot_NoRegister) \
	DECLARE_SERIALIZER(UInkpot)


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpot(UInkpot&&) = delete; \
	UInkpot(const UInkpot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInkpot) \
	NO_API virtual ~UInkpot();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_13_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_16_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpot;

// ********** End Class UInkpot ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
