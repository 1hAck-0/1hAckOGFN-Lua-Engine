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

// Function AthenaChallengesTab.AthenaChallengesTab_C.GetAthenaEventTime
struct UAthenaChallengesTab_C_GetAthenaEventTime_Params
{
	struct FTimespan                                   Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.ConstructTimespanSource
struct UAthenaChallengesTab_C_ConstructTimespanSource_Params
{
	class UFortTimerTimespanDataSource*                NewObject;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupChallengeBundleInfo
struct UAthenaChallengesTab_C_SetupChallengeBundleInfo_Params
{
	class UChallengeBundlePage_C*                      InChallengeBundlePageWidget;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupFrontendInfo
struct UAthenaChallengesTab_C_SetupFrontendInfo_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.InitializeInput
struct UAthenaChallengesTab_C_InitializeInput_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnBack
struct UAthenaChallengesTab_C_OnBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.SetBackground
struct UAthenaChallengesTab_C_SetBackground_Params
{
	bool                                               isInGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.SelectFirstBundle
struct UAthenaChallengesTab_C_SelectFirstBundle_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.TreeViewGetChildrenForCategory
struct UAthenaChallengesTab_C_TreeViewGetChildrenForCategory_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupViewedItemData
struct UAthenaChallengesTab_C_SetupViewedItemData_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.UpdateChallengeViews
struct UAthenaChallengesTab_C_UpdateChallengeViews_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.HandleChallengesChanged
struct UAthenaChallengesTab_C_HandleChallengesChanged_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent
struct UAthenaChallengesTab_C_BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.Construct
struct UAthenaChallengesTab_C_Construct_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnActivated
struct UAthenaChallengesTab_C_OnActivated_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnDeactivated
struct UAthenaChallengesTab_C_OnDeactivated_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnChallengesChanged
struct UAthenaChallengesTab_C_OnChallengesChanged_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnRefreshNavigation
struct UAthenaChallengesTab_C_OnRefreshNavigation_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.PreConstruct
struct UAthenaChallengesTab_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnInitialized
struct UAthenaChallengesTab_C_OnInitialized_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent
struct UAthenaChallengesTab_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.ExecuteUbergraph_AthenaChallengesTab
struct UAthenaChallengesTab_C_ExecuteUbergraph_AthenaChallengesTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
