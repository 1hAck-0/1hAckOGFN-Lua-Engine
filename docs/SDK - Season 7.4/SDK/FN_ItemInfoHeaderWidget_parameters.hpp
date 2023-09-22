#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.GetAlternateNameForItem
struct UItemInfoHeaderWidget_C_GetAlternateNameForItem_Params
{
	class UFortItemDefinition*                         ItemDef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.HasValidItemDefinition
struct UItemInfoHeaderWidget_C_HasValidItemDefinition_Params
{
	bool                                               HasValidDescription;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateColorRarity
struct UItemInfoHeaderWidget_C_UpdateColorRarity_Params
{
	struct FFortRarityItemData                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OverrideHeaderAndDiscription
struct UItemInfoHeaderWidget_C_OverrideHeaderAndDiscription_Params
{
	struct FText                                       Hearder;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Desciption;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bUseAlternateHeaderBG;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateDetailVisibility
struct UItemInfoHeaderWidget_C_UpdateDetailVisibility_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetScrollWidget
struct UItemInfoHeaderWidget_C_SetScrollWidget_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateLocked
struct UItemInfoHeaderWidget_C_UpdateLocked_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetLocked
struct UItemInfoHeaderWidget_C_SetLocked_Params
{
	bool                                               ShouldShowLocked;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LockReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetRemainingQuantity
struct UItemInfoHeaderWidget_C_SetRemainingQuantity_Params
{
	bool                                               ShouldShowRemainingQuantity;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewRemainingQuantity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateRemainingQuantity
struct UItemInfoHeaderWidget_C_UpdateRemainingQuantity_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateCard
struct UItemInfoHeaderWidget_C_UpdateCard_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Setup
struct UItemInfoHeaderWidget_C_Setup_Params
{
	bool                                               ShouldShowCard;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortItemCardSize                                  CardSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldShowDetails;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldShowDescription;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateNameText
struct UItemInfoHeaderWidget_C_UpdateNameText_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Update
struct UItemInfoHeaderWidget_C_Update_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OnItemDefinitionChanged
struct UItemInfoHeaderWidget_C_OnItemDefinitionChanged_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.ExecuteUbergraph_ItemInfoHeaderWidget
struct UItemInfoHeaderWidget_C_ExecuteUbergraph_ItemInfoHeaderWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
