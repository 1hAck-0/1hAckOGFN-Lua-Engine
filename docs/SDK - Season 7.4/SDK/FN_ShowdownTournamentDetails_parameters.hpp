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

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Handle_Back
struct UShowdownTournamentDetails_C_Handle_Back_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshDetailsPanel
struct UShowdownTournamentDetails_C_RefreshDetailsPanel_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshOverviewPanel
struct UShowdownTournamentDetails_C_RefreshOverviewPanel_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshScoringRules
struct UShowdownTournamentDetails_C_RefreshScoringRules_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshEvents
struct UShowdownTournamentDetails_C_RefreshEvents_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Refresh
struct UShowdownTournamentDetails_C_Refresh_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshDataBP
struct UShowdownTournamentDetails_C_RefreshDataBP_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventShowWindowDetails
struct UShowdownTournamentDetails_C_EventShowWindowDetails_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.PreConstruct
struct UShowdownTournamentDetails_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.AnimTransition
struct UShowdownTournamentDetails_C_AnimTransition_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaySpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Construct
struct UShowdownTournamentDetails_C_Construct_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.CloseTournamentDetails
struct UShowdownTournamentDetails_C_CloseTournamentDetails_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.CloseEventWindowDetails
struct UShowdownTournamentDetails_C_CloseEventWindowDetails_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventDeselectWindows
struct UShowdownTournamentDetails_C_EventDeselectWindows_Params
{
	class UWidget*                                     SelectedWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventCenterEventWindow
struct UShowdownTournamentDetails_C_EventCenterEventWindow_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Tick
struct UShowdownTournamentDetails_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventStartCentering
struct UShowdownTournamentDetails_C_EventStartCentering_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventStopCentering
struct UShowdownTournamentDetails_C_EventStopCentering_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__BackButton2_K2Node_ComponentBoundEvent
struct UShowdownTournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent
struct UShowdownTournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent
struct UShowdownTournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent
struct UShowdownTournamentDetails_C_BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventViewFullLeaderboard
struct UShowdownTournamentDetails_C_EventViewFullLeaderboard_Params
{
	struct FString                                     TournamentId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventToggleFullScreenContent
struct UShowdownTournamentDetails_C_EventToggleFullScreenContent_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventCloseLeaderboard
struct UShowdownTournamentDetails_C_EventCloseLeaderboard_Params
{
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.ExecuteUbergraph_ShowdownTournamentDetails
struct UShowdownTournamentDetails_C_ExecuteUbergraph_ShowdownTournamentDetails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BackActionSelected__DelegateSignature
struct UShowdownTournamentDetails_C_BackActionSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
