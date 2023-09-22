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

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Init Back Action
struct UAthenaLeaderboardTab_C_Init_Back_Action_Params
{
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.HandleBackAction
struct UAthenaLeaderboardTab_C_HandleBackAction_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ToggleDisabledTabVisuals
struct UAthenaLeaderboardTab_C_ToggleDisabledTabVisuals_Params
{
	bool                                               bShouldBeDisabled;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnShowQueryThrobber
struct UAthenaLeaderboardTab_C_OnShowQueryThrobber_Params
{
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStateChanged
struct UAthenaLeaderboardTab_C_OnQueryStateChanged_Params
{
	bool                                               bQueryInProgress;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnFriendTypeChangeGamepad
struct UAthenaLeaderboardTab_C_OnFriendTypeChangeGamepad_Params
{
	bool                                               bCommitted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnPlaylistChangeGamepad
struct UAthenaLeaderboardTab_C_OnPlaylistChangeGamepad_Params
{
	bool                                               bCommitted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent
struct UAthenaLeaderboardTab_C_BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Construct
struct UAthenaLeaderboardTab_C_Construct_Params
{
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent
struct UAthenaLeaderboardTab_C_BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__MatchRotator_K2Node_ComponentBoundEvent
struct UAthenaLeaderboardTab_C_BndEvt__MatchRotator_K2Node_ComponentBoundEvent_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__FriendsRotator_K2Node_ComponentBoundEvent
struct UAthenaLeaderboardTab_C_BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent
struct UAthenaLeaderboardTab_C_BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateTabButtonText
struct UAthenaLeaderboardTab_C_OnUpdateTabButtonText_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAthenaPlaylistLeaderboardData              PlaylistTabData;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateLeaderboardListUI
struct UAthenaLeaderboardTab_C_OnUpdateLeaderboardListUI_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortLeaderboardRowProxyInstance*            LocalUserRow;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       QueryErrorStr;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateListHeader
struct UAthenaLeaderboardTab_C_OnUpdateListHeader_Params
{
	struct FAthenaPlaylistLeaderboardData              PlaylistTabData;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnDeactivated
struct UAthenaLeaderboardTab_C_OnDeactivated_Params
{
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryFinished
struct UAthenaLeaderboardTab_C_OnQueryFinished_Params
{
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStarted
struct UAthenaLeaderboardTab_C_OnQueryStarted_Params
{
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated
struct UAthenaLeaderboardTab_C_OnActivated_Params
{
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent
struct UAthenaLeaderboardTab_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent
struct UAthenaLeaderboardTab_C_BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnInputMethodChanged_Event_1
struct UAthenaLeaderboardTab_C_OnInputMethodChanged_Event_1_Params
{
	ECommonInputType                                   bNewInputType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab
struct UAthenaLeaderboardTab_C_ExecuteUbergraph_AthenaLeaderboardTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
