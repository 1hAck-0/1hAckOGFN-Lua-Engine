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

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.IsValidHeroSlot
struct UHeroLoadoutPerksDetailWidget_C_IsValidHeroSlot_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.GetWarningText
struct UHeroLoadoutPerksDetailWidget_C_GetWarningText_Params
{
	class UFortHero*                                   Hero;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.ShouldShowWarning
struct UHeroLoadoutPerksDetailWidget_C_ShouldShowWarning_Params
{
	class UFortHero*                                   SlottedHero;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateCommanderSlotPerkVisibility
struct UHeroLoadoutPerksDetailWidget_C_UpdateCommanderSlotPerkVisibility_Params
{
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateHeroLoadoutSlotWarning
struct UHeroLoadoutPerksDetailWidget_C_UpdateHeroLoadoutSlotWarning_Params
{
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateRootVisibility
struct UHeroLoadoutPerksDetailWidget_C_UpdateRootVisibility_Params
{
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.HandleDifferentLoadoutSlotContextSet
struct UHeroLoadoutPerksDetailWidget_C_HandleDifferentLoadoutSlotContextSet_Params
{
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.ClearLoadoutSlotContext
struct UHeroLoadoutPerksDetailWidget_C_ClearLoadoutSlotContext_Params
{
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.SetLoadoutSlotContext
struct UHeroLoadoutPerksDetailWidget_C_SetLoadoutSlotContext_Params
{
	class UFortCampaignHeroLoadoutItem*                HeroLoadout;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UHeroLoadoutPerksDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.Construct
struct UHeroLoadoutPerksDetailWidget_C_Construct_Params
{
};

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.ExecuteUbergraph_HeroLoadoutPerksDetailWidget
struct UHeroLoadoutPerksDetailWidget_C_ExecuteUbergraph_HeroLoadoutPerksDetailWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
