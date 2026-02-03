// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTags/InkpotTagUtility.h"

#ifdef INKPOTEDITOR_InkpotTagUtility_generated_h
#error "InkpotTagUtility.generated.h already included, missing '#pragma once' in InkpotTagUtility.h"
#endif
#define INKPOTEDITOR_InkpotTagUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInkpotTagUtility ********************************************************
struct Z_Construct_UClass_UInkpotTagUtility_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotTagUtility_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotTagUtility(); \
	friend struct ::Z_Construct_UClass_UInkpotTagUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UInkpotTagUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotTagUtility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UInkpotTagUtility_NoRegister) \
	DECLARE_SERIALIZER(UInkpotTagUtility)


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotTagUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotTagUtility(UInkpotTagUtility&&) = delete; \
	UInkpotTagUtility(const UInkpotTagUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotTagUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotTagUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotTagUtility) \
	NO_API virtual ~UInkpotTagUtility();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h_10_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotTagUtility;

// ********** End Class UInkpotTagUtility **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_GameplayTags_InkpotTagUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
