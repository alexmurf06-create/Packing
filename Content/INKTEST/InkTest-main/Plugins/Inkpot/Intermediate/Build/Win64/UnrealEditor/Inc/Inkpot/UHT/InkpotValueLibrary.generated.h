// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotValueLibrary.h"

#ifdef INKPOT_InkpotValueLibrary_generated_h
#error "InkpotValueLibrary.generated.h already included, missing '#pragma once' in InkpotValueLibrary.h"
#endif
#define INKPOT_InkpotValueLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInkpotList;
struct FInkpotValue;

// ********** Begin Class UInkpotValueLibrary ******************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInkpotArrayValueAsList); \
	DECLARE_FUNCTION(execIsInkpotArrayValueList); \
	DECLARE_FUNCTION(execInkpotValueAsList); \
	DECLARE_FUNCTION(execIsInkpotValueList); \
	DECLARE_FUNCTION(execInkpotArrayValueAsString); \
	DECLARE_FUNCTION(execIsInkpotArrayValueString); \
	DECLARE_FUNCTION(execInkpotValueAsString); \
	DECLARE_FUNCTION(execIsInkpotValueString); \
	DECLARE_FUNCTION(execMakeStringInkpotValue); \
	DECLARE_FUNCTION(execInkpotArrayValueAsFloat); \
	DECLARE_FUNCTION(execIsInkpotArrayValueFloat); \
	DECLARE_FUNCTION(execInkpotValueAsFloat); \
	DECLARE_FUNCTION(execIsInkpotValueFloat); \
	DECLARE_FUNCTION(execMakeFloatInkpotValue); \
	DECLARE_FUNCTION(execInkpotArrayValueAsInt); \
	DECLARE_FUNCTION(execIsInkpotArrayValueInt); \
	DECLARE_FUNCTION(execInkpotValueAsInt); \
	DECLARE_FUNCTION(execIsInkpotValueInt); \
	DECLARE_FUNCTION(execMakeIntInkpotValue); \
	DECLARE_FUNCTION(execInkpotArrayValueAsBool); \
	DECLARE_FUNCTION(execIsInkpotArrayValueBool); \
	DECLARE_FUNCTION(execInkpotValueAsBool); \
	DECLARE_FUNCTION(execIsInkpotValueBool); \
	DECLARE_FUNCTION(execMakeBoolInkpotValue); \
	DECLARE_FUNCTION(execDefaultInkpotValue);


struct Z_Construct_UClass_UInkpotValueLibrary_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpotValueLibrary_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotValueLibrary(); \
	friend struct ::Z_Construct_UClass_UInkpotValueLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpotValueLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotValueLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpotValueLibrary_NoRegister) \
	DECLARE_SERIALIZER(UInkpotValueLibrary)


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INKPOT_API UInkpotValueLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotValueLibrary(UInkpotValueLibrary&&) = delete; \
	UInkpotValueLibrary(const UInkpotValueLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INKPOT_API, UInkpotValueLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotValueLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotValueLibrary) \
	INKPOT_API virtual ~UInkpotValueLibrary();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_10_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotValueLibrary;

// ********** End Class UInkpotValueLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
