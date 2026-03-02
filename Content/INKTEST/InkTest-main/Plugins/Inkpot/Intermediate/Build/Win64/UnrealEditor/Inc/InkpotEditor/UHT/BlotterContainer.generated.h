// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Outliner/BlotterContainer.h"

#ifdef INKPOTEDITOR_BlotterContainer_generated_h
#error "BlotterContainer.generated.h already included, missing '#pragma once' in BlotterContainer.h"
#endif
#define INKPOTEDITOR_BlotterContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlotterContainer;

// ********** Begin Class UBlotterContainer ********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetLevel);


struct Z_Construct_UClass_UBlotterContainer_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterContainer_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlotterContainer(); \
	friend struct ::Z_Construct_UClass_UBlotterContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UBlotterContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlotterContainer, UBlotterString, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UBlotterContainer_NoRegister) \
	DECLARE_SERIALIZER(UBlotterContainer)


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlotterContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlotterContainer(UBlotterContainer&&) = delete; \
	UBlotterContainer(const UBlotterContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlotterContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlotterContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlotterContainer) \
	NO_API virtual ~UBlotterContainer();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h_8_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h_11_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlotterContainer;

// ********** End Class UBlotterContainer **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Outliner_BlotterContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
