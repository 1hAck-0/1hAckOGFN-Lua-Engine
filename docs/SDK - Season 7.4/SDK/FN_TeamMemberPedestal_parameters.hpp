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

// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleHoverInputActions
struct ATeamMemberPedestal_C_HandleHoverInputActions_Params
{
	bool                                               bIsHovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeInputActionRefs
struct ATeamMemberPedestal_C_InitializeInputActionRefs_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPartyDataChanged
struct ATeamMemberPedestal_C_OnPartyDataChanged_Params
{
	struct FFortTeamMemberInfo                         MemberInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.CompletedQuestPrerequisites
struct ATeamMemberPedestal_C_CompletedQuestPrerequisites_Params
{
	bool                                               bCompleted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.IsInLobby
struct ATeamMemberPedestal_C_IsInLobby_Params
{
	bool                                               IsInLobby;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.PlayLobbyAnimation
struct ATeamMemberPedestal_C_PlayLobbyAnimation_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshWidgets
struct ATeamMemberPedestal_C_RefreshWidgets_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberStateChanged
struct ATeamMemberPedestal_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnFrontEndCameraChanged
struct ATeamMemberPedestal_C_OnFrontEndCameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeContextEvents
struct ATeamMemberPedestal_C_InitializeContextEvents_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.UserConstructionScript
struct ATeamMemberPedestal_C_UserConstructionScript_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabSelected
struct ATeamMemberPedestal_C_HandleClientEvent_StoreTabSelected_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnHovered
struct ATeamMemberPedestal_C_OnHovered_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabClosed
struct ATeamMemberPedestal_C_HandleClientEvent_StoreTabClosed_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnUnhovered
struct ATeamMemberPedestal_C_OnUnhovered_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.ReceiveBeginPlay
struct ATeamMemberPedestal_C_ReceiveBeginPlay_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnConnectedToCampaignLobby
struct ATeamMemberPedestal_C_OnConnectedToCampaignLobby_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshBattlePassOwnerVisuals
struct ATeamMemberPedestal_C_RefreshBattlePassOwnerVisuals_Params
{
	bool                                               bOwnsBattlePass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnIsCurrentlyInMatchChanged
struct ATeamMemberPedestal_C_OnIsCurrentlyInMatchChanged_Params
{
	bool                                               bIsInMatch;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPedestalIsPopulatedChanged
struct ATeamMemberPedestal_C_OnPedestalIsPopulatedChanged_Params
{
	bool                                               bIsPopulated;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnItemClicked
struct ATeamMemberPedestal_C_OnItemClicked_Params
{
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.ExecuteUbergraph_TeamMemberPedestal
struct ATeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest__DelegateSignature
struct ATeamMemberPedestal_C_Debug_OnFriendLFGRequest__DelegateSignature_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
