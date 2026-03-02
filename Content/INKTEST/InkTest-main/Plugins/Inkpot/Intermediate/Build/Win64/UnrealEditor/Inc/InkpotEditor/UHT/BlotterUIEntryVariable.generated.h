// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blotter/BlotterUIEntryVariable.h"

#ifdef INKPOTEDITOR_BlotterUIEntryVariable_generated_h
#error "BlotterUIEntryVariable.generated.h already included, missing '#pragma once' in BlotterUIEntryVariable.h"
#endif
#define INKPOTEDITOR_BlotterUIEntryVariable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlotterUIEntryVariable **************************************************
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefresh); \
	DECLARE_FUNCTION(execSetVariableFromText);


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UBlotterUIEntryVariable_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryVariable_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlotterUIEntryVariable(); \
	friend struct ::Z_Construct_UClass_UBlotterUIEntryVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UBlotterUIEntryVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlotterUIEntryVariable, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UBlotterUIEntryVariable_NoRegister) \
	DECLARE_SERIALIZER(UBlotterUIEntryVariable) \
	virtual UObject* _getUObject() const override { return const_cast<UBlotterUIEntryVariable*>(this); }


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlotterUIEntryVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlotterUIEntryVariable(UBlotterUIEntryVariable&&) = delete; \
	UBlotterUIEntryVariable(const UBlotterUIEntryVariable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlotterUIEntryVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlotterUIEntryVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlotterUIEntryVariable) \
	NO_API virtual ~UBlotterUIEntryVariable();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_9_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_12_CALLBACK_WRAPPERS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_12_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlotterUIEntryVariable;

// ********** End Class UBlotterUIEntryVariable ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
