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

// Function LeaveButton.LeaveButton_C.Change Main Menu Music State
struct ULeaveButton_C_Change_Main_Menu_Music_State_Params
{
	bool                                               Set_Lobby_Music_State;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.GetDescriptionText
struct ULeaveButton_C_GetDescriptionText_Params
{
	struct FText                                       DescriptionText;                                          // (Parm, OutParm)
};

// Function LeaveButton.LeaveButton_C.IsInNeighborhood
struct ULeaveButton_C_IsInNeighborhood_Params
{
	bool                                               bIsInNeighborhood;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.Update Style State
struct ULeaveButton_C_Update_Style_State_Params
{
};

// Function LeaveButton.LeaveButton_C.SetText
struct ULeaveButton_C_SetText_Params
{
	struct FText                                       TextOverride;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LeaveButton.LeaveButton_C.GetButton
struct ULeaveButton_C_GetButton_Params
{
	class UIconTextButton_C*                           Leave;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.HasUnsavedQuestProgress
struct ULeaveButton_C_HasUnsavedQuestProgress_Params
{
	bool                                               HasUnsavedQuestProgress;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.LeaveParty
struct ULeaveButton_C_LeaveParty_Params
{
};

// Function LeaveButton.LeaveButton_C.UpdateState
struct ULeaveButton_C_UpdateState_Params
{
};

// Function LeaveButton.LeaveButton_C.IsConsideredInGame
struct ULeaveButton_C_IsConsideredInGame_Params
{
	bool                                               InGame;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.GetLeaveActionText
struct ULeaveButton_C_GetLeaveActionText_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LeaveButton.LeaveButton_C.DialogResult
struct ULeaveButton_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.DialogResult_F5AF58094777CFEEC0BF28BEA620800C
struct ULeaveButton_C_DialogResult_F5AF58094777CFEEC0BF28BEA620800C_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.DialogResult_A0D25F7F4E82D325BF226E811F1D79AF
struct ULeaveButton_C_DialogResult_A0D25F7F4E82D325BF226E811F1D79AF_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved
struct ULeaveButton_C_HandleTeamMemberRemoved_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded
struct ULeaveButton_C_HandleTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         NewTeamMemberInfo;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LeaveButton.LeaveButton_C.HandleLobbyEvents
struct ULeaveButton_C_HandleLobbyEvents_Params
{
};

// Function LeaveButton.LeaveButton_C.Construct
struct ULeaveButton_C_Construct_Params
{
};

// Function LeaveButton.LeaveButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent
struct ULeaveButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.Destruct
struct ULeaveButton_C_Destruct_Params
{
};

// Function LeaveButton.LeaveButton_C.PreConstruct
struct ULeaveButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.HandlePlayerStateChanged
struct ULeaveButton_C_HandlePlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton
struct ULeaveButton_C_ExecuteUbergraph_LeaveButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.Update Visibility__DelegateSignature
struct ULeaveButton_C_Update_Visibility__DelegateSignature_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature
struct ULeaveButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
