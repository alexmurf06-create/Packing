// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotWatch.h"

#ifdef INKPOT_InkpotWatch_generated_h
#error "InkpotWatch.generated.h already included, missing '#pragma once' in InkpotWatch.h"
#endif
#define INKPOT_InkpotWatch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotStory;
struct FInkpotValue;

// ********** Begin Delegate FOnVariableChangeMulti ************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_11_DELEGATE \
INKPOT_API void FOnVariableChangeMulti_DelegateWrapper(const FMulticastScriptDelegate& OnVariableChangeMulti, UInkpotStory* Story, const FString& Variable, FInkpotValue const& NewValue);


// ********** End Delegate FOnVariableChangeMulti **************************************************

// ********** Begin Class UInkpotWatch *************************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnVariableChange); \
	DECLARE_FUNCTION(execOnBeginStory);


struct Z_Construct_UClass_UInkpotWatch_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpotWatch_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotWatch(); \
	friend struct ::Z_Construct_UClass_UInkpotWatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpotWatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotWatch, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpotWatch_NoRegister) \
	DECLARE_SERIALIZER(UInkpotWatch)


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotWatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotWatch(UInkpotWatch&&) = delete; \
	UInkpotWatch(const UInkpotWatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotWatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotWatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotWatch) \
	NO_API virtual ~UInkpotWatch();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_13_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_16_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotWatch;

// ********** End Class UInkpotWatch ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
