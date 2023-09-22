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

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetAccountToolTipWidget
struct UTopBarDetailsWidget_C_GetAccountToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.UpdateCommanderLevel
struct UTopBarDetailsWidget_C_UpdateCommanderLevel_Params
{
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleItemCountChanged
struct UTopBarDetailsWidget_C_HandleItemCountChanged_Params
{
	class UFortItemDefinition*                         Definition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleLocalAccountInfoChanged
struct UTopBarDetailsWidget_C_HandleLocalAccountInfoChanged_Params
{
	struct FFortPrivateAccountInfo                     NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetMissionRewardBadgeTooltipWidget
struct UTopBarDetailsWidget_C_GetMissionRewardBadgeTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Has Mission Reward Boost
struct UTopBarDetailsWidget_C_Has_Mission_Reward_Boost_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetFounderBadgetTooltipWidget
struct UTopBarDetailsWidget_C_GetFounderBadgetTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetMonthlyVIPBadgetTooltipWidget
struct UTopBarDetailsWidget_C_GetMonthlyVIPBadgetTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Has VIP Badge
struct UTopBarDetailsWidget_C_Has_VIP_Badge_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Has Founder Badge
struct UTopBarDetailsWidget_C_Has_Founder_Badge_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleRemotePlayerRemoved
struct UTopBarDetailsWidget_C_HandleRemotePlayerRemoved_Params
{
	int                                                RemovedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleOnTeamMemberStateChanged
struct UTopBarDetailsWidget_C_HandleOnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         NewMemberState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Unbind Party Delegates
struct UTopBarDetailsWidget_C_Unbind_Party_Delegates_Params
{
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Bind Party Delegates
struct UTopBarDetailsWidget_C_Bind_Party_Delegates_Params
{
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.BoostExperiencePercentOfLevel
struct UTopBarDetailsWidget_C_BoostExperiencePercentOfLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.RestExperencePercentOfLevel
struct UTopBarDetailsWidget_C_RestExperencePercentOfLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetBonusExperienceDescription
struct UTopBarDetailsWidget_C_GetBonusExperienceDescription_Params
{
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetSkillPointsTooltipWidget
struct UTopBarDetailsWidget_C_GetSkillPointsTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetBonusExperienceTooltipWidget
struct UTopBarDetailsWidget_C_GetBonusExperienceTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Update Boosts
struct UTopBarDetailsWidget_C_Update_Boosts_Params
{
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.UpdateAccountInfo
struct UTopBarDetailsWidget_C_UpdateAccountInfo_Params
{
	struct FFortPublicAccountInfo                      Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Construct
struct UTopBarDetailsWidget_C_Construct_Params
{
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Xp Boost Changed
struct UTopBarDetailsWidget_C_Xp_Boost_Changed_Params
{
	int                                                BoostAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.On Party Left
struct UTopBarDetailsWidget_C_On_Party_Left_Params
{
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.On Party Joined
struct UTopBarDetailsWidget_C_On_Party_Joined_Params
{
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Founder Changed
struct UTopBarDetailsWidget_C_Founder_Changed_Params
{
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Destruct
struct UTopBarDetailsWidget_C_Destruct_Params
{
};

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.ExecuteUbergraph_TopBarDetailsWidget
struct UTopBarDetailsWidget_C_ExecuteUbergraph_TopBarDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
