// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blotter/BlotterOption.h"

#ifdef INKPOTEDITOR_BlotterOption_generated_h
#error "BlotterOption.generated.h already included, missing '#pragma once' in BlotterOption.h"
#endif
#define INKPOTEDITOR_BlotterOption_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;

// ********** Begin Class UBlotterOption ***********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execIsSelected);


struct Z_Construct_UClass_UBlotterOption_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterOption_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlotterOption(); \
	friend struct ::Z_Construct_UClass_UBlotterOption_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UBlotterOption_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlotterOption, UBlotterString, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UBlotterOption_NoRegister) \
	DECLARE_SERIALIZER(UBlotterOption)


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlotterOption(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlotterOption(UBlotterOption&&) = delete; \
	UBlotterOption(const UBlotterOption&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlotterOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlotterOption); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlotterOption) \
	NO_API virtual ~UBlotterOption();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h_7_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h_10_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlotterOption;

// ********** End Class UBlotterOption *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterOption_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
