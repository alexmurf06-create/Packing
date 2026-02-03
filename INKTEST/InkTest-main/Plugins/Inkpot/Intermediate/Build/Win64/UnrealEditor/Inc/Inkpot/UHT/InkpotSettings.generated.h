// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/InkpotSettings.h"

#ifdef INKPOT_InkpotSettings_generated_h
#error "InkpotSettings.generated.h already included, missing '#pragma once' in InkpotSettings.h"
#endif
#define INKPOT_InkpotSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInkpotSettings **********************************************************
struct Z_Construct_UClass_UInkpotSettings_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpotSettings_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotSettings(); \
	friend struct ::Z_Construct_UClass_UInkpotSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpotSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpotSettings_NoRegister) \
	DECLARE_SERIALIZER(UInkpotSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Inkpot");} \



#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotSettings(UInkpotSettings&&) = delete; \
	UInkpotSettings(const UInkpotSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotSettings) \
	NO_API virtual ~UInkpotSettings();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_8_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotSettings;

// ********** End Class UInkpotSettings ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
