// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Test/InkFunctionTests.h"

#ifdef INKPOTEDITOR_InkFunctionTests_generated_h
#error "InkFunctionTests.generated.h already included, missing '#pragma once' in InkFunctionTests.h"
#endif
#define INKPOTEDITOR_InkFunctionTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInkpotValue;

// ********** Begin Class UInkFunctionTests ********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBoolTrue); \
	DECLARE_FUNCTION(execTimes); \
	DECLARE_FUNCTION(execMultiply); \
	DECLARE_FUNCTION(execMessage);


struct Z_Construct_UClass_UInkFunctionTests_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkFunctionTests_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkFunctionTests(); \
	friend struct ::Z_Construct_UClass_UInkFunctionTests_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UInkFunctionTests_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkFunctionTests, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UInkFunctionTests_NoRegister) \
	DECLARE_SERIALIZER(UInkFunctionTests)


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkFunctionTests(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkFunctionTests(UInkFunctionTests&&) = delete; \
	UInkFunctionTests(const UInkFunctionTests&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkFunctionTests); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkFunctionTests); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkFunctionTests) \
	NO_API virtual ~UInkFunctionTests();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_8_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_11_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkFunctionTests;

// ********** End Class UInkFunctionTests **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
