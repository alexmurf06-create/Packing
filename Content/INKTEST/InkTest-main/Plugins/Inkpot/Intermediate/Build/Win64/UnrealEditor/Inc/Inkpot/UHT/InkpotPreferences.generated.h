// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/InkpotPreferences.h"

#ifdef INKPOT_InkpotPreferences_generated_h
#error "InkpotPreferences.generated.h already included, missing '#pragma once' in InkpotPreferences.h"
#endif
#define INKPOT_InkpotPreferences_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInkpotPreferences *******************************************************
struct Z_Construct_UClass_UInkpotPreferences_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpotPreferences_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotPreferences(); \
	friend struct ::Z_Construct_UClass_UInkpotPreferences_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpotPreferences_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotPreferences, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpotPreferences_NoRegister) \
	DECLARE_SERIALIZER(UInkpotPreferences) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotPreferences(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotPreferences(UInkpotPreferences&&) = delete; \
	UInkpotPreferences(const UInkpotPreferences&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotPreferences); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotPreferences); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotPreferences) \
	NO_API virtual ~UInkpotPreferences();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h_8_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h_11_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotPreferences;

// ********** End Class UInkpotPreferences *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotPreferences_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
