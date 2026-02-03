// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blotter/BlotterVariable.h"

#ifdef INKPOTEDITOR_BlotterVariable_generated_h
#error "BlotterVariable.generated.h already included, missing '#pragma once' in BlotterVariable.h"
#endif
#define INKPOTEDITOR_BlotterVariable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlotterOption;
enum class EBlotterVariableType : uint8;

// ********** Begin Class UBlotterVariable *********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPinned); \
	DECLARE_FUNCTION(execSetPinned); \
	DECLARE_FUNCTION(execIsOptionsOpen); \
	DECLARE_FUNCTION(execSetOptionsOpen); \
	DECLARE_FUNCTION(execGetListOptions); \
	DECLARE_FUNCTION(execIsReadOnly); \
	DECLARE_FUNCTION(execIsIndexEven); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execIsType); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetTypeName); \
	DECLARE_FUNCTION(execGetDisplayValue); \
	DECLARE_FUNCTION(execSetDisplayValue); \
	DECLARE_FUNCTION(execGetName);


struct Z_Construct_UClass_UBlotterVariable_Statics;
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterVariable_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlotterVariable(); \
	friend struct ::Z_Construct_UClass_UBlotterVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOTEDITOR_API UClass* ::Z_Construct_UClass_UBlotterVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlotterVariable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InkpotEditor"), Z_Construct_UClass_UBlotterVariable_NoRegister) \
	DECLARE_SERIALIZER(UBlotterVariable)


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlotterVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlotterVariable(UBlotterVariable&&) = delete; \
	UBlotterVariable(const UBlotterVariable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlotterVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlotterVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlotterVariable) \
	NO_API virtual ~UBlotterVariable();


#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_40_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_43_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlotterVariable;

// ********** End Class UBlotterVariable ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h

// ********** Begin Enum EBlotterVariableType ******************************************************
#define FOREACH_ENUM_EBLOTTERVARIABLETYPE(op) \
	op(EBlotterVariableType::None) \
	op(EBlotterVariableType::ChoicePoint) \
	op(EBlotterVariableType::Container) \
	op(EBlotterVariableType::ControlCommand) \
	op(EBlotterVariableType::Divert) \
	op(EBlotterVariableType::Glue) \
	op(EBlotterVariableType::NativeFunctionCall) \
	op(EBlotterVariableType::Tag) \
	op(EBlotterVariableType::ValueBool) \
	op(EBlotterVariableType::ValueDivertTarget) \
	op(EBlotterVariableType::ValueFloat) \
	op(EBlotterVariableType::ValueInt) \
	op(EBlotterVariableType::ValueList) \
	op(EBlotterVariableType::ValueString) \
	op(EBlotterVariableType::ValueVariablePointer) \
	op(EBlotterVariableType::Value) \
	op(EBlotterVariableType::VariableAssignment) \
	op(EBlotterVariableType::VariableReference) \
	op(EBlotterVariableType::Void) \
	op(EBlotterVariableType::Object) \
	op(EBlotterVariableType::ListOrigin) 

enum class EBlotterVariableType : uint8;
template<> struct TIsUEnumClass<EBlotterVariableType> { enum { Value = true }; };
template<> INKPOTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlotterVariableType>();
// ********** End Enum EBlotterVariableType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
