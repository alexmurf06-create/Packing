// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Asset/InkpotStoryAsset.h"

#ifdef INKPOT_InkpotStoryAsset_generated_h
#error "InkpotStoryAsset.generated.h already included, missing '#pragma once' in InkpotStoryAsset.h"
#endif
#define INKPOT_InkpotStoryAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAssetUserData;
class UClass;

// ********** Begin Class UInkpotStoryAsset ********************************************************
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssetUserDataOfClass); \
	DECLARE_FUNCTION(execAddAssetUserData); \
	DECLARE_FUNCTION(execGetCompiledJSON); \
	DECLARE_FUNCTION(execSetCompiledJSON); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execSetSource);


#if WITH_EDITORONLY_DATA
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UInkpotStoryAsset, NO_API)
#else // WITH_EDITORONLY_DATA
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UInkpotStoryAsset_Statics;
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister();

#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotStoryAsset(); \
	friend struct ::Z_Construct_UClass_UInkpotStoryAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INKPOT_API UClass* ::Z_Construct_UClass_UInkpotStoryAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UInkpotStoryAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), Z_Construct_UClass_UInkpotStoryAsset_NoRegister) \
	DECLARE_SERIALIZER(UInkpotStoryAsset) \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UInkpotStoryAsset*>(this); }


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInkpotStoryAsset(UInkpotStoryAsset&&) = delete; \
	UInkpotStoryAsset(const UInkpotStoryAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotStoryAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotStoryAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInkpotStoryAsset) \
	NO_API virtual ~UInkpotStoryAsset();


#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_9_PROLOG
#define FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_INCLASS_NO_PURE_DECLS \
	FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInkpotStoryAsset;

// ********** End Class UInkpotStoryAsset **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
