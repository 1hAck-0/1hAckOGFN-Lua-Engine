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

// Function ChallengeBundlePage.ChallengeBundlePage_C.ConstructTimespanSource
struct UChallengeBundlePage_C_ConstructTimespanSource_Params
{
	class UFortTimerTimespanDataSource*                NewObject;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.GetAthenaEventTime
struct UChallengeBundlePage_C_GetAthenaEventTime_Params
{
	struct FTimespan                                   Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.SetBackground
struct UChallengeBundlePage_C_SetBackground_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateQuestList
struct UChallengeBundlePage_C_UpdateQuestList_Params
{
	EChallengeBundleQuestVisualStyle                   Visual_Style;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPanelWidget*                                Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPanelWidget*                                Container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HasClaimableQuests;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.Initial Reset
struct UChallengeBundlePage_C_Initial_Reset_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.Play Intro
struct UChallengeBundlePage_C_Play_Intro_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.HandleBack
struct UChallengeBundlePage_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.CreateQuestWidget
struct UChallengeBundlePage_C_CreateQuestWidget_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestDefinition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPanelWidget*                                Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.RegisterEventListeners
struct UChallengeBundlePage_C_RegisterEventListeners_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.ClaimNextQuestReward
struct UChallengeBundlePage_C_ClaimNextQuestReward_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateQuests
struct UChallengeBundlePage_C_UpdateQuests_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateBundle
struct UChallengeBundlePage_C_UpdateBundle_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent
struct UChallengeBundlePage_C_BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PageNextButton_K2Node_ComponentBoundEvent
struct UChallengeBundlePage_C_BndEvt__PageNextButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent
struct UChallengeBundlePage_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.OnBundleUpdated
struct UChallengeBundlePage_C_OnBundleUpdated_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent
struct UChallengeBundlePage_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.OnActivated
struct UChallengeBundlePage_C_OnActivated_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.Construct
struct UChallengeBundlePage_C_Construct_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.OnInitialized
struct UChallengeBundlePage_C_OnInitialized_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.OnDeactivated
struct UChallengeBundlePage_C_OnDeactivated_Params
{
};

// Function ChallengeBundlePage.ChallengeBundlePage_C.ExecuteUbergraph_ChallengeBundlePage
struct UChallengeBundlePage_C_ExecuteUbergraph_ChallengeBundlePage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
