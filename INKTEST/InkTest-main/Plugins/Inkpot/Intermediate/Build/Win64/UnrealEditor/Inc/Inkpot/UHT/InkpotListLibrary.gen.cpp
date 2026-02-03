// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/InkpotListLibrary.h"
#include "GameplayTagContainer.h"
#include "Inkpot/InkpotList.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInkpotListLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
INKPOT_API UClass* Z_Construct_UClass_UInkpotListLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotListLibrary_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotList();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInkpotListLibrary Function AddItem **************************************
struct Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics
{
	struct InkpotListLibrary_eventAddItem_Parms
	{
		FInkpotList A;
		FString Item;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * AddItem\n\x09 * Adds an item to the passed in List.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - String\n\x09 * @returns reference to A.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "AddItem" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AddItem\nAdds an item to the passed in List.\n\n@param A - InkpotList.\n@param B - String\n@returns reference to A." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItem constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItem constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItem Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAddItem_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAddItem_Parms, Item), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAddItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::PropPointers) < 2048);
// ********** End Function AddItem Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "AddItem", 	Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::InkpotListLibrary_eventAddItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::InkpotListLibrary_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execAddItem)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_PROPERTY(FStrProperty,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::AddItem(Z_Param_Out_A,Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function AddItem ****************************************

// ********** Begin Class UInkpotListLibrary Function AddItemGT ************************************
struct Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics
{
	struct InkpotListLibrary_eventAddItemGT_Parms
	{
		FInkpotList A;
		FGameplayTag Item;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * AddItemGT \n\x09 * ( GameplayTag version of AddItem )\n\x09 * Adds an item to the passed in List.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - Gameplay Tag \n\x09 * @returns reference to A.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "AddItemGT" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AddItemGT\n( GameplayTag version of AddItem )\nAdds an item to the passed in List.\n\n@param A - InkpotList.\n@param B - Gameplay Tag\n@returns reference to A." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Categories", "Ink.Origin" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItemGT constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItemGT constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItemGT Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAddItemGT_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAddItemGT_Parms, Item), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAddItemGT_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::PropPointers) < 2048);
// ********** End Function AddItemGT Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "AddItemGT", 	Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::InkpotListLibrary_eventAddItemGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::InkpotListLibrary_eventAddItemGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_AddItemGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_AddItemGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execAddItemGT)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT(FGameplayTag,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::AddItemGT(Z_Param_Out_A,Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function AddItemGT **************************************

// ********** Begin Class UInkpotListLibrary Function All ******************************************
struct Z_Construct_UFunction_UInkpotListLibrary_All_Statics
{
	struct InkpotListLibrary_eventAll_Parms
	{
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * All\n\x09 * Returns a list containing the all of the items as defined by the list origin.\n\x09 * Equivalent of calling LIST_ALL( A ) in ink \n\x09 * ( List will need a validated origin )\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A new inkpot list that cotains all the items defined in the origin.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "all" },
		{ "DisplayName", "All" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All\nReturns a list containing the all of the items as defined by the list origin.\nEquivalent of calling LIST_ALL( A ) in ink\n( List will need a validated origin )\n\n@param A - InkpotList.\n@returns A new inkpot list that cotains all the items defined in the origin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function All constinit property declarations ***********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function All constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function All Property Definitions **********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_All_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAll_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_All_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAll_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_All_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_All_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_All_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::PropPointers) < 2048);
// ********** End Function All Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_All_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "All", 	Z_Construct_UFunction_UInkpotListLibrary_All_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::InkpotListLibrary_eventAll_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_All_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::InkpotListLibrary_eventAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_All()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_All_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execAll)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::All(Z_Param_Out_A);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function All ********************************************

// ********** Begin Class UInkpotListLibrary Function ContainsItem *********************************
struct Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics
{
	struct InkpotListLibrary_eventContainsItem_Parms
	{
		FInkpotList Source;
		FString ItemName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContainsItem\n\x09 * Returns true if the list contains an item matching the given name.\n\x09 *\n\x09 * @param Source - InkpotList to test.\n\x09 * @param ItemName - String, item name.\n\x09 * @returns true if Source contains ItemName, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "?" },
		{ "DisplayName", "Contains Item" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContainsItem\nReturns true if the list contains an item matching the given name.\n\n@param Source - InkpotList to test.\n@param ItemName - String, item name.\n@returns true if Source contains ItemName, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ContainsItem constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ContainsItem constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ContainsItem Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsItem_Parms, Source), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1132618465
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsItem_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
void Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventContainsItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventContainsItem_Parms), &Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::PropPointers) < 2048);
// ********** End Function ContainsItem Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ContainsItem", 	Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::InkpotListLibrary_eventContainsItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::InkpotListLibrary_eventContainsItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ContainsItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execContainsItem)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Source);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::ContainsItem(Z_Param_Out_Source,Z_Param_ItemName);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function ContainsItem ***********************************

// ********** Begin Class UInkpotListLibrary Function ContainsItemGT *******************************
struct Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics
{
	struct InkpotListLibrary_eventContainsItemGT_Parms
	{
		FInkpotList Source;
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContainsTag\n\x09 * Returns true if the list contains an item matching the given Gameplay Tag.\n\x09 *\n\x09 * @param Source - InkpotList to test.\n\x09 * @param Tag - GammeplayTag, item name.\n\x09 * @returns true if Source contains Tag, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "?" },
		{ "DisplayName", "Contains Item GT" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContainsTag\nReturns true if the list contains an item matching the given Gameplay Tag.\n\n@param Source - InkpotList to test.\n@param Tag - GammeplayTag, item name.\n@returns true if Source contains Tag, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Categories", "Ink.Origin" },
	};
#endif // WITH_METADATA

// ********** Begin Function ContainsItemGT constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ContainsItemGT constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ContainsItemGT Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsItemGT_Parms, Source), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsItemGT_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 517357616
void Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventContainsItemGT_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventContainsItemGT_Parms), &Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::PropPointers) < 2048);
// ********** End Function ContainsItemGT Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ContainsItemGT", 	Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::InkpotListLibrary_eventContainsItemGT_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::InkpotListLibrary_eventContainsItemGT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execContainsItemGT)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::ContainsItemGT(Z_Param_Out_Source,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function ContainsItemGT *********************************

// ********** Begin Class UInkpotListLibrary Function ContainsList *********************************
struct Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics
{
	struct InkpotListLibrary_eventContainsList_Parms
	{
		FInkpotList Source;
		FInkpotList Querant;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContainsList\n\x09 * Returns true if the the first list contains all the items that are in the second list. \n\x09 * Equivalent to calling (A ? B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns true if A contains B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "?" },
		{ "DisplayName", "Contains List" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContainsList\nReturns true if the the first list contains all the items that are in the second list.\nEquivalent to calling (A ? B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns true if A contains B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Querant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ContainsList constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Querant;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ContainsList constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ContainsList Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsList_Parms, Source), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_Querant = { "Querant", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsList_Parms, Querant), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Querant_MetaData), NewProp_Querant_MetaData) }; // 1132618465
void Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventContainsList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventContainsList_Parms), &Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_Querant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::PropPointers) < 2048);
// ********** End Function ContainsList Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ContainsList", 	Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::InkpotListLibrary_eventContainsList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::InkpotListLibrary_eventContainsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ContainsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execContainsList)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Source);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Querant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::ContainsList(Z_Param_Out_Source,Z_Param_Out_Querant);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function ContainsList ***********************************

// ********** Begin Class UInkpotListLibrary Function Equals ***************************************
struct Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics
{
	struct InkpotListLibrary_eventEquals_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Equals\n\x09 * Returns true if the both lists contain the same items, false otherwise.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A == B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equals" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equals\nReturns true if the both lists contain the same items, false otherwise.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A == B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Equals constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Equals constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Equals Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventEquals_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventEquals_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1132618465
void Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventEquals_Parms), &Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::PropPointers) < 2048);
// ********** End Function Equals Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Equals", 	Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::InkpotListLibrary_eventEquals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::InkpotListLibrary_eventEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execEquals)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::Equals(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function Equals *****************************************

// ********** Begin Class UInkpotListLibrary Function GreaterThan **********************************
struct Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics
{
	struct InkpotListLibrary_eventGreaterThan_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GreaterThan\n\x09 * Returns true if all the item values in the first list are greater than all the item values in the second list. \n\x09 * Equivalent to calling (A > B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A > B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", ">" },
		{ "DisplayName", "Greater Than" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GreaterThan\nReturns true if all the item values in the first list are greater than all the item values in the second list.\nEquivalent to calling (A > B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A > B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GreaterThan constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GreaterThan constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GreaterThan Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventGreaterThan_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventGreaterThan_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1132618465
void Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventGreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventGreaterThan_Parms), &Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::PropPointers) < 2048);
// ********** End Function GreaterThan Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "GreaterThan", 	Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::InkpotListLibrary_eventGreaterThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::InkpotListLibrary_eventGreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execGreaterThan)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::GreaterThan(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function GreaterThan ************************************

// ********** Begin Class UInkpotListLibrary Function GreaterThanOrEquals **************************
struct Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics
{
	struct InkpotListLibrary_eventGreaterThanOrEquals_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GreaterThanOrEquals\n\x09 * Returns true if the item values in the first list overlap or are all greater than the item values in the second list. \n\x09 * None of the item values in the current list must fall below the item values in the passed in list. \n\x09 * Equivalent to (A >= B) in ink, or LIST_MIN(A) >= LIST_MIN(B) && LIST_MAX(A) >= LIST_MAX(B).\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A >= B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", ">=" },
		{ "DisplayName", "Greater than or equals" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GreaterThanOrEquals\nReturns true if the item values in the first list overlap or are all greater than the item values in the second list.\nNone of the item values in the current list must fall below the item values in the passed in list.\nEquivalent to (A >= B) in ink, or LIST_MIN(A) >= LIST_MIN(B) && LIST_MAX(A) >= LIST_MAX(B).\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A >= B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GreaterThanOrEquals constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GreaterThanOrEquals constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GreaterThanOrEquals Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventGreaterThanOrEquals_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventGreaterThanOrEquals_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1132618465
void Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventGreaterThanOrEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventGreaterThanOrEquals_Parms), &Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::PropPointers) < 2048);
// ********** End Function GreaterThanOrEquals Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "GreaterThanOrEquals", 	Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::InkpotListLibrary_eventGreaterThanOrEquals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::InkpotListLibrary_eventGreaterThanOrEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execGreaterThanOrEquals)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::GreaterThanOrEquals(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function GreaterThanOrEquals ****************************

// ********** Begin Class UInkpotListLibrary Function HasIntersection ******************************
struct Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics
{
	struct InkpotListLibrary_eventHasIntersection_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * HasIntersection\n\x09 * Returns true if there is an intersection of both lists passed in \n\x09 * - i.e. both lists share some items\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if there is an intersection, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "(^)" },
		{ "DisplayName", "Has Intersection" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HasIntersection\nReturns true if there is an intersection of both lists passed in\n- i.e. both lists share some items\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if there is an intersection, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasIntersection constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasIntersection constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasIntersection Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventHasIntersection_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventHasIntersection_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1132618465
void Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventHasIntersection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventHasIntersection_Parms), &Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::PropPointers) < 2048);
// ********** End Function HasIntersection Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "HasIntersection", 	Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::InkpotListLibrary_eventHasIntersection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::InkpotListLibrary_eventHasIntersection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_HasIntersection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execHasIntersection)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::HasIntersection(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function HasIntersection ********************************

// ********** Begin Class UInkpotListLibrary Function Intersect ************************************
struct Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics
{
	struct InkpotListLibrary_eventIntersect_Parms
	{
		FInkpotList A;
		FInkpotList B;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Intersect\n\x09 * Returns a new list that is the intersection of both lists passed in \n\x09 * - i.e. a list of the items that are shared between the two lists. \n\x09 * Equivalent to calling (A ^ B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns A new Inkpotlist.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "^" },
		{ "DisplayName", "Intersect" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intersect\nReturns a new list that is the intersection of both lists passed in\n- i.e. a list of the items that are shared between the two lists.\nEquivalent to calling (A ^ B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns A new Inkpotlist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Intersect constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Intersect constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Intersect Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventIntersect_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventIntersect_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventIntersect_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::PropPointers) < 2048);
// ********** End Function Intersect Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Intersect", 	Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::InkpotListLibrary_eventIntersect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::InkpotListLibrary_eventIntersect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Intersect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execIntersect)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Intersect(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function Intersect **************************************

// ********** Begin Class UInkpotListLibrary Function Inverse **************************************
struct Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics
{
	struct InkpotListLibrary_eventInverse_Parms
	{
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Inverse\n\x09 * Returns a list containing the inverse of the list passed in with respect to the origin.\n\x09 * Equivalent of calling LIST_INVERT( A ) in ink \n\x09 * ( List will need a validated origin )\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A new inkpot list that is the inverse of the passed in list.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "~" },
		{ "DisplayName", "Inverse" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inverse\nReturns a list containing the inverse of the list passed in with respect to the origin.\nEquivalent of calling LIST_INVERT( A ) in ink\n( List will need a validated origin )\n\n@param A - InkpotList.\n@returns A new inkpot list that is the inverse of the passed in list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Inverse constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Inverse constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Inverse Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventInverse_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventInverse_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::PropPointers) < 2048);
// ********** End Function Inverse Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Inverse", 	Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::InkpotListLibrary_eventInverse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::InkpotListLibrary_eventInverse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Inverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execInverse)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Inverse(Z_Param_Out_A);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function Inverse ****************************************

// ********** Begin Class UInkpotListLibrary Function LessThan *************************************
struct Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics
{
	struct InkpotListLibrary_eventLessThan_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * LessThan\n\x09 * Returns true if all the item values first list are less than all the item values in the second list. \n\x09 * Equivalent to calling (A < B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A < B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "<" },
		{ "DisplayName", "Less than" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LessThan\nReturns true if all the item values first list are less than all the item values in the second list.\nEquivalent to calling (A < B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A < B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LessThan constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LessThan constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LessThan Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventLessThan_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventLessThan_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1132618465
void Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventLessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventLessThan_Parms), &Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::PropPointers) < 2048);
// ********** End Function LessThan Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "LessThan", 	Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::InkpotListLibrary_eventLessThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::InkpotListLibrary_eventLessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execLessThan)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::LessThan(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function LessThan ***************************************

// ********** Begin Class UInkpotListLibrary Function LessThanOrEquals *****************************
struct Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics
{
	struct InkpotListLibrary_eventLessThanOrEquals_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * LessThanOrEquals\n\x09 * Returns true if the item values in the first list overlap or are all less than the item values in the second list. \n\x09 * None of the item values in the current list must go above the item values in the passed in list. \n\x09 * Equivalent to (A <= B) in ink, or LIST_MAX(A) <= LIST_MAX(B) && LIST_MIN(A) <= LIST_MIN(B).\n\x09 * \n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A <= B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "<=" },
		{ "DisplayName", "Less than or equals" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LessThanOrEquals\nReturns true if the item values in the first list overlap or are all less than the item values in the second list.\nNone of the item values in the current list must go above the item values in the passed in list.\nEquivalent to (A <= B) in ink, or LIST_MAX(A) <= LIST_MAX(B) && LIST_MIN(A) <= LIST_MIN(B).\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A <= B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LessThanOrEquals constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LessThanOrEquals constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LessThanOrEquals Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventLessThanOrEquals_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventLessThanOrEquals_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1132618465
void Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventLessThanOrEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventLessThanOrEquals_Parms), &Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::PropPointers) < 2048);
// ********** End Function LessThanOrEquals Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "LessThanOrEquals", 	Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::InkpotListLibrary_eventLessThanOrEquals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::InkpotListLibrary_eventLessThanOrEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execLessThanOrEquals)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::LessThanOrEquals(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function LessThanOrEquals *******************************

// ********** Begin Class UInkpotListLibrary Function MakeInkpotList *******************************
struct Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics
{
	struct InkpotListLibrary_eventMakeInkpotList_Parms
	{
		UInkpotStory* Story;
		FString Origin;
		FString Value;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeInkpotList \n\x09 * Creates an Inkpot List from the origin name and a comma delimeted string of item names.\n\x09 * \n\x09 * Note: \n\x09 * If all items are dot prefixed with the origin name, origin can be left empty.\n\x09 *\n\x09 * @param Story - The story in which the origin is defined.\n\x09 * @param Origin - The origin, this will be the name of the list in the Ink script. May be empty if all items specify origin.\n\x09 * @param Value - A comma delimeted list of item names. Item names may have a dot delimeted origin name prefix from other origins.  \n\x09 * @returns An Inkpotlist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeInkpotList\nCreates an Inkpot List from the origin name and a comma delimeted string of item names.\n\nNote:\nIf all items are dot prefixed with the origin name, origin can be left empty.\n\n@param Story - The story in which the origin is defined.\n@param Origin - The origin, this will be the name of the list in the Ink script. May be empty if all items specify origin.\n@param Value - A comma delimeted list of item names. Item names may have a dot delimeted origin name prefix from other origins.\n@returns An Inkpotlist." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MakeInkpotList constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeInkpotList constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeInkpotList Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotList_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotList_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotList_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::PropPointers) < 2048);
// ********** End Function MakeInkpotList Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MakeInkpotList", 	Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::InkpotListLibrary_eventMakeInkpotList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::InkpotListLibrary_eventMakeInkpotList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMakeInkpotList)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_PROPERTY(FStrProperty,Z_Param_Origin);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MakeInkpotList(Z_Param_Story,Z_Param_Origin,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function MakeInkpotList *********************************

// ********** Begin Class UInkpotListLibrary Function MakeInkpotListFromGameplayTag ****************
struct Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics
{
	struct InkpotListLibrary_eventMakeInkpotListFromGameplayTag_Parms
	{
		UInkpotStory* Story;
		FGameplayTag Tag;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeInkpotListFromGameplayTag\n\x09 * Creates an Inkpot List from a gameplay tag.\n\x09 * \n\x09 * @param Story - The story in which the origin is defined.\n\x09 * @param Tag - A single gameplay tag, tags need to be generated and added to the project.  \n\x09 * @returns A new Inkpotlist. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeInkpotListFromGameplayTag\nCreates an Inkpot List from a gameplay tag.\n\n@param Story - The story in which the origin is defined.\n@param Tag - A single gameplay tag, tags need to be generated and added to the project.\n@returns A new Inkpotlist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Categories", "Ink.Origin" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeInkpotListFromGameplayTag constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeInkpotListFromGameplayTag constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeInkpotListFromGameplayTag Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromGameplayTag_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromGameplayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::PropPointers) < 2048);
// ********** End Function MakeInkpotListFromGameplayTag Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MakeInkpotListFromGameplayTag", 	Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::InkpotListLibrary_eventMakeInkpotListFromGameplayTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::InkpotListLibrary_eventMakeInkpotListFromGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMakeInkpotListFromGameplayTag)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MakeInkpotListFromGameplayTag(Z_Param_Story,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function MakeInkpotListFromGameplayTag ******************

// ********** Begin Class UInkpotListLibrary Function MakeInkpotListFromGameplayTags ***************
struct Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics
{
	struct InkpotListLibrary_eventMakeInkpotListFromGameplayTags_Parms
	{
		UInkpotStory* Story;
		FGameplayTagContainer Tags;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeInkpotListFromGameplayTags\n\x09 * Creates an Inkpot List from a gameplay tag collection.\n\x09 * \n\x09 * @param Story - The story in which the origin is defined.\n\x09 * @param Tags - A gameplay tag container, tags need to be generated and added to the project.  \n\x09 * @returns A new Inkpotlist. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeInkpotListFromGameplayTags\nCreates an Inkpot List from a gameplay tag collection.\n\n@param Story - The story in which the origin is defined.\n@param Tags - A gameplay tag container, tags need to be generated and added to the project.\n@returns A new Inkpotlist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Categories", "Ink.Origin" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeInkpotListFromGameplayTags constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeInkpotListFromGameplayTags constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeInkpotListFromGameplayTags Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromGameplayTags_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromGameplayTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromGameplayTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::PropPointers) < 2048);
// ********** End Function MakeInkpotListFromGameplayTags Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MakeInkpotListFromGameplayTags", 	Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::InkpotListLibrary_eventMakeInkpotListFromGameplayTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::InkpotListLibrary_eventMakeInkpotListFromGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMakeInkpotListFromGameplayTags)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MakeInkpotListFromGameplayTags(Z_Param_Story,Z_Param_Tags);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function MakeInkpotListFromGameplayTags *****************

// ********** Begin Class UInkpotListLibrary Function MakeInkpotListFromStringArray ****************
struct Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics
{
	struct InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms
	{
		UInkpotStory* Story;
		FString Origin;
		TArray<FString> Values;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeInkpotListFromStringArray\n\x09 * Creates an Inkpot List from the origin name and an array of item names.\n\x09 * \n\x09 * Note: \n\x09 * If all items are dot prefixed with the origin name, origin can be left empty.\n\x09 * \n\x09 * @param Story - The story in which the origin is defined.\n\x09 * @param Origin - The origin, this will be the name of the list in the Ink script. May be empty if all items specify origin.\n\x09 * @param Values - An array of strings for the item names. Item names may have a dot delimeted origin name prefix from other origins.  \n\x09 * @returns A new Inkpotlist. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeInkpotListFromStringArray\nCreates an Inkpot List from the origin name and an array of item names.\n\nNote:\nIf all items are dot prefixed with the origin name, origin can be left empty.\n\n@param Story - The story in which the origin is defined.\n@param Origin - The origin, this will be the name of the list in the Ink script. May be empty if all items specify origin.\n@param Values - An array of strings for the item names. Item names may have a dot delimeted origin name prefix from other origins.\n@returns A new Inkpotlist." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MakeInkpotListFromStringArray constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeInkpotListFromStringArray constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeInkpotListFromStringArray Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::PropPointers) < 2048);
// ********** End Function MakeInkpotListFromStringArray Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MakeInkpotListFromStringArray", 	Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMakeInkpotListFromStringArray)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_PROPERTY(FStrProperty,Z_Param_Origin);
	P_GET_TARRAY(FString,Z_Param_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MakeInkpotListFromStringArray(Z_Param_Story,Z_Param_Origin,Z_Param_Values);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function MakeInkpotListFromStringArray ******************

// ********** Begin Class UInkpotListLibrary Function MaxItem **************************************
struct Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics
{
	struct InkpotListLibrary_eventMaxItem_Parms
	{
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MaxItem\n\x09 * Returns a list containing the max item from the passed in list.\n\x09 * Equivalent of calling ( LIST_MAX( A ) ) in ink \n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A new inkpot list with the max item.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "max" },
		{ "DisplayName", "MaxItem" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxItem\nReturns a list containing the max item from the passed in list.\nEquivalent of calling ( LIST_MAX( A ) ) in ink\n\n@param A - InkpotList.\n@returns A new inkpot list with the max item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MaxItem constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MaxItem constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MaxItem Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMaxItem_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMaxItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::PropPointers) < 2048);
// ********** End Function MaxItem Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MaxItem", 	Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::InkpotListLibrary_eventMaxItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::InkpotListLibrary_eventMaxItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MaxItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMaxItem)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MaxItem(Z_Param_Out_A);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function MaxItem ****************************************

// ********** Begin Class UInkpotListLibrary Function MinItem **************************************
struct Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics
{
	struct InkpotListLibrary_eventMinItem_Parms
	{
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MinItem\n\x09 * Returns a list containing the min item from the passed in list.\n\x09 * Equivalent of calling ( LIST_MIN( A ) ) in ink \n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A new inkpot list with the min item.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "min" },
		{ "DisplayName", "MinItem" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MinItem\nReturns a list containing the min item from the passed in list.\nEquivalent of calling ( LIST_MIN( A ) ) in ink\n\n@param A - InkpotList.\n@returns A new inkpot list with the min item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MinItem constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MinItem constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MinItem Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMinItem_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMinItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::PropPointers) < 2048);
// ********** End Function MinItem Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MinItem", 	Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::InkpotListLibrary_eventMinItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::InkpotListLibrary_eventMinItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MinItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMinItem)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MinItem(Z_Param_Out_A);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function MinItem ****************************************

// ********** Begin Class UInkpotListLibrary Function ToGameplayTag ********************************
struct Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics
{
	struct InkpotListLibrary_eventToGameplayTag_Parms
	{
		FInkpotList Value;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ToGameplayTag\n\x09 * Creates a gameplay tag from an inkpot list.\n\x09 * \n\x09 * @param Value - The list to convert.\n\x09 * @param ReturnValue - A single gameplay tag, tags need to be generated and added to the project.  \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ToGameplayTag\nCreates a gameplay tag from an inkpot list.\n\n@param Value - The list to convert.\n@param ReturnValue - A single gameplay tag, tags need to be generated and added to the project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToGameplayTag constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToGameplayTag constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToGameplayTag Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToGameplayTag_Parms, Value), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToGameplayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::PropPointers) < 2048);
// ********** End Function ToGameplayTag Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ToGameplayTag", 	Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::InkpotListLibrary_eventToGameplayTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::InkpotListLibrary_eventToGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execToGameplayTag)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Value);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotListLibrary::ToGameplayTag(Z_Param_Out_Value,Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function ToGameplayTag **********************************

// ********** Begin Class UInkpotListLibrary Function ToGameplayTags *******************************
struct Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics
{
	struct InkpotListLibrary_eventToGameplayTags_Parms
	{
		FInkpotList Value;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ToGameplayTag\n\x09 * Creates a gameplay tag from an inkpot list.\n\x09 * \n\x09 * @param Value - The list to convert.\n\x09 * @param ReturnValue - A gameplay tag container, tags need to be generated and added to the project.  \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ToGameplayTag\nCreates a gameplay tag from an inkpot list.\n\n@param Value - The list to convert.\n@param ReturnValue - A gameplay tag container, tags need to be generated and added to the project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToGameplayTags constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToGameplayTags constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToGameplayTags Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToGameplayTags_Parms, Value), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToGameplayTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::PropPointers) < 2048);
// ********** End Function ToGameplayTags Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ToGameplayTags", 	Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::InkpotListLibrary_eventToGameplayTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::InkpotListLibrary_eventToGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execToGameplayTags)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Value);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotListLibrary::ToGameplayTags(Z_Param_Out_Value,Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function ToGameplayTags *********************************

// ********** Begin Class UInkpotListLibrary Function ToString *************************************
struct Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics
{
	struct InkpotListLibrary_eventToString_Parms
	{
		FInkpotList Value;
		FString ReturnValue;
		bool bUseOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ToString ( Inkpot List )\n\x09 * prints the contents of the list to a comma delimeted string.\n\x09 *\n\x09 * @param Value - The list to convert.\n\x09 * @param ReturnValue - The list as a comma delimeted string of item names.\n\x09 * @param bUseOrigin - Should the item names have their origin as a dot delimeted prefix.\n\x09 */" },
#endif
		{ "CPP_Default_bUseOrigin", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ToString ( Inkpot List )\nprints the contents of the list to a comma delimeted string.\n\n@param Value - The list to convert.\n@param ReturnValue - The list as a comma delimeted string of item names.\n@param bUseOrigin - Should the item names have their origin as a dot delimeted prefix." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToString constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static void NewProp_bUseOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToString constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToString Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToString_Parms, Value), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1132618465
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_bUseOrigin_SetBit(void* Obj)
{
	((InkpotListLibrary_eventToString_Parms*)Obj)->bUseOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_bUseOrigin = { "bUseOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventToString_Parms), &Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_bUseOrigin_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_bUseOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::PropPointers) < 2048);
// ********** End Function ToString Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ToString", 	Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::InkpotListLibrary_eventToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::InkpotListLibrary_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execToString)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ReturnValue);
	P_GET_UBOOL(Z_Param_bUseOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotListLibrary::ToString(Z_Param_Out_Value,Z_Param_Out_ReturnValue,Z_Param_bUseOrigin);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function ToString ***************************************

// ********** Begin Class UInkpotListLibrary Function ToStringArray ********************************
struct Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics
{
	struct InkpotListLibrary_eventToStringArray_Parms
	{
		FInkpotList Value;
		TArray<FString> ReturnValue;
		bool bUseOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ToStringArray ( Inkpot List )\n\x09 * Converts an inkpot list to an array of strings.\n\x09 *\n\x09 * @param Value - List to convert.\n\x09 * @param ReturnValue - The list as a string array of item names.\n\x09 * @param bUseOrigin - Should the item names have their origin as a dot delimeted prefix.\n\x09 */" },
#endif
		{ "CPP_Default_bUseOrigin", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ToStringArray ( Inkpot List )\nConverts an inkpot list to an array of strings.\n\n@param Value - List to convert.\n@param ReturnValue - The list as a string array of item names.\n@param bUseOrigin - Should the item names have their origin as a dot delimeted prefix." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToStringArray constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static void NewProp_bUseOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToStringArray constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToStringArray Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToStringArray_Parms, Value), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1132618465
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToStringArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_bUseOrigin_SetBit(void* Obj)
{
	((InkpotListLibrary_eventToStringArray_Parms*)Obj)->bUseOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_bUseOrigin = { "bUseOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventToStringArray_Parms), &Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_bUseOrigin_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_bUseOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::PropPointers) < 2048);
// ********** End Function ToStringArray Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ToStringArray", 	Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::InkpotListLibrary_eventToStringArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::InkpotListLibrary_eventToStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ToStringArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execToStringArray)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Value);
	P_GET_TARRAY_REF(FString,Z_Param_Out_ReturnValue);
	P_GET_UBOOL(Z_Param_bUseOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotListLibrary::ToStringArray(Z_Param_Out_Value,Z_Param_Out_ReturnValue,Z_Param_bUseOrigin);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function ToStringArray **********************************

// ********** Begin Class UInkpotListLibrary Function Union ****************************************
struct Z_Construct_UFunction_UInkpotListLibrary_Union_Statics
{
	struct InkpotListLibrary_eventUnion_Parms
	{
		FInkpotList A;
		FInkpotList B;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Union\n\x09 * Returns a new list that is the combination of both lists passed in. \n\x09 * Equivalent to calling (A + B) in ink..\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns A new Inkpotlist.\n\x09 */" },
#endif
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "Union" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Union\nReturns a new list that is the combination of both lists passed in.\nEquivalent to calling (A + B) in ink..\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns A new Inkpotlist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Union constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Union constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Union Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventUnion_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventUnion_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventUnion_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::PropPointers) < 2048);
// ********** End Function Union Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Union", 	Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::InkpotListLibrary_eventUnion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::InkpotListLibrary_eventUnion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Union()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execUnion)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Union(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function Union ******************************************

// ********** Begin Class UInkpotListLibrary Function Validate *************************************
struct Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics
{
	struct InkpotListLibrary_eventValidate_Parms
	{
		UInkpotStory* Story;
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Validate\n\x09 * Validates the lists origin againt a story.\n\x09 * This makes sure that the list is valid in the context of the passed in story.\n\x09 * ie checks that the origin name of the list matches a list declaration in the ink story. \n\x09 * \n\x09 * Only required for lists that were created with no story context for certain operations (inverse, all).\n\x09 * List validation will happen automatically when a list value is passed to the Ink runtime story. \n\x09 * Lists passed to Blueprint from Ink will not need validation. \n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A reference to the list passed in.\n\x09 */" },
#endif
		{ "DisplayName", "Validate" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate\nValidates the lists origin againt a story.\nThis makes sure that the list is valid in the context of the passed in story.\nie checks that the origin name of the list matches a list declaration in the ink story.\n\nOnly required for lists that were created with no story context for certain operations (inverse, all).\nList validation will happen automatically when a list value is passed to the Ink runtime story.\nLists passed to Blueprint from Ink will not need validation.\n\n@param A - InkpotList.\n@returns A reference to the list passed in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Validate constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Validate constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Validate Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventValidate_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventValidate_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventValidate_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::PropPointers) < 2048);
// ********** End Function Validate Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Validate", 	Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::InkpotListLibrary_eventValidate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::InkpotListLibrary_eventValidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Validate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execValidate)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Validate(Z_Param_Story,Z_Param_Out_A);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function Validate ***************************************

// ********** Begin Class UInkpotListLibrary Function Without **************************************
struct Z_Construct_UFunction_UInkpotListLibrary_Without_Statics
{
	struct InkpotListLibrary_eventWithout_Parms
	{
		FInkpotList A;
		FInkpotList B;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Without\n\x09 * Returns a new list that is the first list with items in the second list removed. \n\x09 * Equivalent to calling (A - B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns A new Inkpotlist.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "Without" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Without\nReturns a new list that is the first list with items in the second list removed.\nEquivalent to calling (A - B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns A new Inkpotlist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Without constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Without constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Without Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventWithout_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventWithout_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1132618465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventWithout_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 1132618465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::PropPointers) < 2048);
// ********** End Function Without Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Without", 	Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::InkpotListLibrary_eventWithout_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::InkpotListLibrary_eventWithout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Without()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execWithout)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Without(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UInkpotListLibrary Function Without ****************************************

// ********** Begin Class UInkpotListLibrary *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInkpotListLibrary;
UClass* UInkpotListLibrary::GetPrivateStaticClass()
{
	using TClass = UInkpotListLibrary;
	if (!Z_Registration_Info_UClass_UInkpotListLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InkpotListLibrary"),
			Z_Registration_Info_UClass_UInkpotListLibrary.InnerSingleton,
			StaticRegisterNativesUInkpotListLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInkpotListLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UInkpotListLibrary_NoRegister()
{
	return UInkpotListLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInkpotListLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Inkpot/InkpotListLibrary.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
		{ "ScriptName", "InkpotListLibrary" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInkpotListLibrary constinit property declarations ***********************
// ********** End Class UInkpotListLibrary constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddItem"), .Pointer = &UInkpotListLibrary::execAddItem },
		{ .NameUTF8 = UTF8TEXT("AddItemGT"), .Pointer = &UInkpotListLibrary::execAddItemGT },
		{ .NameUTF8 = UTF8TEXT("All"), .Pointer = &UInkpotListLibrary::execAll },
		{ .NameUTF8 = UTF8TEXT("ContainsItem"), .Pointer = &UInkpotListLibrary::execContainsItem },
		{ .NameUTF8 = UTF8TEXT("ContainsItemGT"), .Pointer = &UInkpotListLibrary::execContainsItemGT },
		{ .NameUTF8 = UTF8TEXT("ContainsList"), .Pointer = &UInkpotListLibrary::execContainsList },
		{ .NameUTF8 = UTF8TEXT("Equals"), .Pointer = &UInkpotListLibrary::execEquals },
		{ .NameUTF8 = UTF8TEXT("GreaterThan"), .Pointer = &UInkpotListLibrary::execGreaterThan },
		{ .NameUTF8 = UTF8TEXT("GreaterThanOrEquals"), .Pointer = &UInkpotListLibrary::execGreaterThanOrEquals },
		{ .NameUTF8 = UTF8TEXT("HasIntersection"), .Pointer = &UInkpotListLibrary::execHasIntersection },
		{ .NameUTF8 = UTF8TEXT("Intersect"), .Pointer = &UInkpotListLibrary::execIntersect },
		{ .NameUTF8 = UTF8TEXT("Inverse"), .Pointer = &UInkpotListLibrary::execInverse },
		{ .NameUTF8 = UTF8TEXT("LessThan"), .Pointer = &UInkpotListLibrary::execLessThan },
		{ .NameUTF8 = UTF8TEXT("LessThanOrEquals"), .Pointer = &UInkpotListLibrary::execLessThanOrEquals },
		{ .NameUTF8 = UTF8TEXT("MakeInkpotList"), .Pointer = &UInkpotListLibrary::execMakeInkpotList },
		{ .NameUTF8 = UTF8TEXT("MakeInkpotListFromGameplayTag"), .Pointer = &UInkpotListLibrary::execMakeInkpotListFromGameplayTag },
		{ .NameUTF8 = UTF8TEXT("MakeInkpotListFromGameplayTags"), .Pointer = &UInkpotListLibrary::execMakeInkpotListFromGameplayTags },
		{ .NameUTF8 = UTF8TEXT("MakeInkpotListFromStringArray"), .Pointer = &UInkpotListLibrary::execMakeInkpotListFromStringArray },
		{ .NameUTF8 = UTF8TEXT("MaxItem"), .Pointer = &UInkpotListLibrary::execMaxItem },
		{ .NameUTF8 = UTF8TEXT("MinItem"), .Pointer = &UInkpotListLibrary::execMinItem },
		{ .NameUTF8 = UTF8TEXT("ToGameplayTag"), .Pointer = &UInkpotListLibrary::execToGameplayTag },
		{ .NameUTF8 = UTF8TEXT("ToGameplayTags"), .Pointer = &UInkpotListLibrary::execToGameplayTags },
		{ .NameUTF8 = UTF8TEXT("ToString"), .Pointer = &UInkpotListLibrary::execToString },
		{ .NameUTF8 = UTF8TEXT("ToStringArray"), .Pointer = &UInkpotListLibrary::execToStringArray },
		{ .NameUTF8 = UTF8TEXT("Union"), .Pointer = &UInkpotListLibrary::execUnion },
		{ .NameUTF8 = UTF8TEXT("Validate"), .Pointer = &UInkpotListLibrary::execValidate },
		{ .NameUTF8 = UTF8TEXT("Without"), .Pointer = &UInkpotListLibrary::execWithout },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotListLibrary_AddItem, "AddItem" }, // 309148790
		{ &Z_Construct_UFunction_UInkpotListLibrary_AddItemGT, "AddItemGT" }, // 1238766147
		{ &Z_Construct_UFunction_UInkpotListLibrary_All, "All" }, // 2833359488
		{ &Z_Construct_UFunction_UInkpotListLibrary_ContainsItem, "ContainsItem" }, // 1458758735
		{ &Z_Construct_UFunction_UInkpotListLibrary_ContainsItemGT, "ContainsItemGT" }, // 937616608
		{ &Z_Construct_UFunction_UInkpotListLibrary_ContainsList, "ContainsList" }, // 669155385
		{ &Z_Construct_UFunction_UInkpotListLibrary_Equals, "Equals" }, // 3835776874
		{ &Z_Construct_UFunction_UInkpotListLibrary_GreaterThan, "GreaterThan" }, // 211772691
		{ &Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals, "GreaterThanOrEquals" }, // 3555302064
		{ &Z_Construct_UFunction_UInkpotListLibrary_HasIntersection, "HasIntersection" }, // 2402812557
		{ &Z_Construct_UFunction_UInkpotListLibrary_Intersect, "Intersect" }, // 1900544102
		{ &Z_Construct_UFunction_UInkpotListLibrary_Inverse, "Inverse" }, // 2039487431
		{ &Z_Construct_UFunction_UInkpotListLibrary_LessThan, "LessThan" }, // 4236369161
		{ &Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals, "LessThanOrEquals" }, // 12987581
		{ &Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList, "MakeInkpotList" }, // 1086914819
		{ &Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTag, "MakeInkpotListFromGameplayTag" }, // 2576148409
		{ &Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromGameplayTags, "MakeInkpotListFromGameplayTags" }, // 3763419234
		{ &Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray, "MakeInkpotListFromStringArray" }, // 911547518
		{ &Z_Construct_UFunction_UInkpotListLibrary_MaxItem, "MaxItem" }, // 4102669787
		{ &Z_Construct_UFunction_UInkpotListLibrary_MinItem, "MinItem" }, // 4068584176
		{ &Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTag, "ToGameplayTag" }, // 270694460
		{ &Z_Construct_UFunction_UInkpotListLibrary_ToGameplayTags, "ToGameplayTags" }, // 1647863411
		{ &Z_Construct_UFunction_UInkpotListLibrary_ToString, "ToString" }, // 4028300504
		{ &Z_Construct_UFunction_UInkpotListLibrary_ToStringArray, "ToStringArray" }, // 167147552
		{ &Z_Construct_UFunction_UInkpotListLibrary_Union, "Union" }, // 3713516977
		{ &Z_Construct_UFunction_UInkpotListLibrary_Validate, "Validate" }, // 2944702132
		{ &Z_Construct_UFunction_UInkpotListLibrary_Without, "Without" }, // 3619304699
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotListLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInkpotListLibrary_Statics
UObject* (*const Z_Construct_UClass_UInkpotListLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotListLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotListLibrary_Statics::ClassParams = {
	&UInkpotListLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotListLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotListLibrary_Statics::Class_MetaDataParams)
};
void UInkpotListLibrary::StaticRegisterNativesUInkpotListLibrary()
{
	UClass* Class = UInkpotListLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInkpotListLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInkpotListLibrary()
{
	if (!Z_Registration_Info_UClass_UInkpotListLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotListLibrary.OuterSingleton, Z_Construct_UClass_UInkpotListLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotListLibrary.OuterSingleton;
}
UInkpotListLibrary::UInkpotListLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInkpotListLibrary);
UInkpotListLibrary::~UInkpotListLibrary() {}
// ********** End Class UInkpotListLibrary *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h__Script_Inkpot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotListLibrary, UInkpotListLibrary::StaticClass, TEXT("UInkpotListLibrary"), &Z_Registration_Info_UClass_UInkpotListLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotListLibrary), 4255921739U) },
	};
}; // Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h__Script_Inkpot_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h__Script_Inkpot_1470991071{
	TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h__Script_Inkpot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InkTest_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h__Script_Inkpot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
