// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotStoryHistory.h"

#ifdef INKPOT_InkpotStoryHistory_generated_h
#error "InkpotStoryHistory.generated.h already included, missing '#pragma once' in InkpotStoryHistory.h"
#endif
#define INKPOT_InkpotStoryHistory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotChoice;
class UInkpotStory;

// ********** Begin ScriptStruct FInkpotStoryHistoryEvent ******************************************
struct Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics;
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics; \
	INKPOT_API static class UScriptStruct* StaticStruct();


struct FInkpotStoryHistoryEvent;
// ********** End ScriptStruct FInkpotStoryHistoryEvent ********************************************

// ********** Begin Class UInkpotStoryHistory ******************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnStoryChoosePath); \
	DECLARE_FUNCTION(execOnStorySwitchFlow); \
	DECLARE_FUNCTION(execOnStoryChoice); \
	DECLARE_FUNCTION(execOnStoryContinue);


struct Z_Construct_UClass_UInkpotStoryHistory_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryHistory_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotStoryHistory(); \
	friend struct ::Z_Construct_UClass_UInkpotStoryHistory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpotStoryHistory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotStoryHistory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpotStoryHistory_NoRegister) \
	DECLARE_SERIALIZER(UInkpotStoryHistory)


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotStoryHistory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotStoryHistory(UInkpotStoryHistory&&) = delete; \
	UInkpotStoryHistory(const UInkpotStoryHistory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotStoryHistory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotStoryHistory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotStoryHistory) \
	NO_API virtual ~UInkpotStoryHistory();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_38_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_41_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotStoryHistory;

// ********** End Class UInkpotStoryHistory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h

// ********** Begin Enum EInkpotStoryEventType *****************************************************
#define FOREACH_ENUM_EINKPOTSTORYEVENTTYPE(op) \
	op(EInkpotStoryEventType::None) \
	op(EInkpotStoryEventType::Continue) \
	op(EInkpotStoryEventType::Choice) \
	op(EInkpotStoryEventType::SwitchFlow) \
	op(EInkpotStoryEventType::ChoosePath) 

enum class EInkpotStoryEventType : uint8;
template<> struct TIsUEnumClass<EInkpotStoryEventType> { enum { Value = true }; };
template<> INKPOT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInkpotStoryEventType>();
// ********** End Enum EInkpotStoryEventType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
