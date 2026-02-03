// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotLine.h"

#ifdef INKPOT_InkpotLine_generated_h
#error "InkpotLine.generated.h already included, missing '#pragma once' in InkpotLine.h"
#endif
#define INKPOT_InkpotLine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotStory;

// ********** Begin Class UInkpotLine **************************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDirty); \
	DECLARE_FUNCTION(execIsDirty); \
	DECLARE_FUNCTION(execGetStory); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetString);


struct Z_Construct_UClass_UInkpotLine_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpotLine_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotLine(); \
	friend struct ::Z_Construct_UClass_UInkpotLine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpotLine_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotLine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpotLine_NoRegister) \
	DECLARE_SERIALIZER(UInkpotLine)


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotLine(UInkpotLine&&) = delete; \
	UInkpotLine(const UInkpotLine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotLine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInkpotLine) \
	NO_API virtual ~UInkpotLine();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_8_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_11_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotLine;

// ********** End Class UInkpotLine ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
