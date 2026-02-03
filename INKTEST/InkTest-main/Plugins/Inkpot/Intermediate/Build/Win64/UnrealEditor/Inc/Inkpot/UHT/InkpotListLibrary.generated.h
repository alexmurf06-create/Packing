// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotListLibrary.h"

#ifdef INKPOT_InkpotListLibrary_generated_h
#error "InkpotListLibrary.generated.h already included, missing '#pragma once' in InkpotListLibrary.h"
#endif
#define INKPOT_InkpotListLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotStory;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FInkpotList;

// ********** Begin Class UInkpotListLibrary *******************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execAll); \
	DECLARE_FUNCTION(execInverse); \
	DECLARE_FUNCTION(execMaxItem); \
	DECLARE_FUNCTION(execMinItem); \
	DECLARE_FUNCTION(execEquals); \
	DECLARE_FUNCTION(execLessThanOrEquals); \
	DECLARE_FUNCTION(execLessThan); \
	DECLARE_FUNCTION(execGreaterThanOrEquals); \
	DECLARE_FUNCTION(execGreaterThan); \
	DECLARE_FUNCTION(execContainsItemGT); \
	DECLARE_FUNCTION(execContainsItem); \
	DECLARE_FUNCTION(execContainsList); \
	DECLARE_FUNCTION(execWithout); \
	DECLARE_FUNCTION(execHasIntersection); \
	DECLARE_FUNCTION(execIntersect); \
	DECLARE_FUNCTION(execUnion); \
	DECLARE_FUNCTION(execAddItemGT); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execToStringArray); \
	DECLARE_FUNCTION(execToGameplayTags); \
	DECLARE_FUNCTION(execMakeInkpotListFromGameplayTags); \
	DECLARE_FUNCTION(execToGameplayTag); \
	DECLARE_FUNCTION(execMakeInkpotListFromGameplayTag); \
	DECLARE_FUNCTION(execMakeInkpotListFromStringArray); \
	DECLARE_FUNCTION(execMakeInkpotList); \
	DECLARE_FUNCTION(execToString);


struct Z_Construct_UClass_UInkpotListLibrary_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpotListLibrary_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotListLibrary(); \
	friend struct ::Z_Construct_UClass_UInkpotListLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpotListLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotListLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpotListLibrary_NoRegister) \
	DECLARE_SERIALIZER(UInkpotListLibrary)


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INKPOT_API UInkpotListLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotListLibrary(UInkpotListLibrary&&) = delete; \
	UInkpotListLibrary(const UInkpotListLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INKPOT_API, UInkpotListLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotListLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotListLibrary) \
	INKPOT_API virtual ~UInkpotListLibrary();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_11_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotListLibrary;

// ********** End Class UInkpotListLibrary *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
