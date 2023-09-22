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

// Function AthenaSeasonReward.AthenaSeasonReward_C.GetItem
struct UAthenaSeasonReward_C_GetItem_Params
{
	class UFortItem*                                   Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetupQuantity
struct UAthenaSeasonReward_C_SetupQuantity_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.ResetVariantToDefault
struct UAthenaSeasonReward_C_ResetVariantToDefault_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.GetTemporaryItems
struct UAthenaSeasonReward_C_GetTemporaryItems_Params
{
	TArray<struct FFortCosmeticVariantPreviewElement>  Cosmetics;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortItem*>                           Temporary_Items;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.CancelVariantTimer
struct UAthenaSeasonReward_C_CancelVariantTimer_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.StartVariantTimer
struct UAthenaSeasonReward_C_StartVariantTimer_Params
{
	float                                              OverrideTimer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.GetAthenaItemCharacterItemDefinition
struct UAthenaSeasonReward_C_GetAthenaItemCharacterItemDefinition_Params
{
	class UAthenaCharacterItemDefinition*              AsAthena_Character_Item_Definition;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.OnVaultItemsChanged
struct UAthenaSeasonReward_C_OnVaultItemsChanged_Params
{
	TArray<class UFortItem*>                           Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.ShowNextVariant
struct UAthenaSeasonReward_C_ShowNextVariant_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.StopCyclingVariants
struct UAthenaSeasonReward_C_StopCyclingVariants_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.BeginCyclingVariants
struct UAthenaSeasonReward_C_BeginCyclingVariants_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVaultByUser
struct UAthenaSeasonReward_C_ViewInVaultByUser_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVault
struct UAthenaSeasonReward_C_ViewInVault_Params
{
	TArray<class UFortItem*>                           Additional_Items;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetSecondaryItem
struct UAthenaSeasonReward_C_SetSecondaryItem_Params
{
	class UFortItem*                                   SecondaryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.EnableRarityFlare
struct UAthenaSeasonReward_C_EnableRarityFlare_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetViewOnHover
struct UAthenaSeasonReward_C_SetViewOnHover_Params
{
	bool                                               ShouldViewOnHover;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetState
struct UAthenaSeasonReward_C_SetState_Params
{
	bool                                               Claimed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelAchieved;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwned;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.Setup
struct UAthenaSeasonReward_C_Setup_Params
{
	class UFortItem*                                   InItemToRepresent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Claimed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelAchieved;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwned;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortItemCardSize                                  ItemCardSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnHovered
struct UAthenaSeasonReward_C_BP_OnHovered_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.PlayIntro
struct UAthenaSeasonReward_C_PlayIntro_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewItem
struct UAthenaSeasonReward_C_ViewItem_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnClicked
struct UAthenaSeasonReward_C_BP_OnClicked_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward
struct UAthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
