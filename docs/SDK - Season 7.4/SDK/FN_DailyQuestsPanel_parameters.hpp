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

// Function DailyQuestsPanel.DailyQuestsPanel_C.NotifyQuestsDirty
struct UDailyQuestsPanel_C_NotifyQuestsDirty_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.Reset Button Anim
struct UDailyQuestsPanel_C_Reset_Button_Anim_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.CreateMultiQuestWidget
struct UDailyQuestsPanel_C_CreateMultiQuestWidget_Params
{
	TArray<class UFortQuestItem*>                      Quests;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVerticalBox*                                QuestList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.SetInputActionHandlers
struct UDailyQuestsPanel_C_SetInputActionHandlers_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.ProcessQuestUpdate
struct UDailyQuestsPanel_C_ProcessQuestUpdate_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortQuestItem*>                      QuestArray;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVerticalBox*                                QuestList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               QuestIsCompleted;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.ShowModalQuests
struct UDailyQuestsPanel_C_ShowModalQuests_Params
{
	bool                                               bCommitted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.ClaimNextQuestReward
struct UDailyQuestsPanel_C_ClaimNextQuestReward_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.OnNoQuestRewardsToClaim
struct UDailyQuestsPanel_C_OnNoQuestRewardsToClaim_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestRewardClaimed
struct UDailyQuestsPanel_C_OnQuestRewardClaimed_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsGranted
struct UDailyQuestsPanel_C_OnQuestsGranted_Params
{
	TArray<class UFortQuestItem*>                      NewQuests;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.CreateQuestWidget
struct UDailyQuestsPanel_C_CreateQuestWidget_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                QuestList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsUpdated
struct UDailyQuestsPanel_C_OnQuestsUpdated_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.BindEventListeners
struct UDailyQuestsPanel_C_BindEventListeners_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.Construct
struct UDailyQuestsPanel_C_Construct_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
struct UDailyQuestsPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.PreConstruct
struct UDailyQuestsPanel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.Tick
struct UDailyQuestsPanel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.WidgetAnimationEvt_ClaimReward_K2Node_WidgetAnimationEvent_1
struct UDailyQuestsPanel_C_WidgetAnimationEvt_ClaimReward_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.ExecuteUbergraph_DailyQuestsPanel
struct UDailyQuestsPanel_C_ExecuteUbergraph_DailyQuestsPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
