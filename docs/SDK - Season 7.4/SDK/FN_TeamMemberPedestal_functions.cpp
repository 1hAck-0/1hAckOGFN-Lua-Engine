// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleHoverInputActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::HandleHoverInputActions(bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.HandleHoverInputActions");

	ATeamMemberPedestal_C_HandleHoverInputActions_Params params;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeInputActionRefs
// (Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::InitializeInputActionRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeInputActionRefs");

	ATeamMemberPedestal_C_InitializeInputActionRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPartyDataChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     MemberInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeamMemberPedestal_C::OnPartyDataChanged(struct FFortTeamMemberInfo* MemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnPartyDataChanged");

	ATeamMemberPedestal_C_OnPartyDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberInfo != nullptr)
		*MemberInfo = params.MemberInfo;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.CompletedQuestPrerequisites
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCompleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::CompletedQuestPrerequisites(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.CompletedQuestPrerequisites");

	ATeamMemberPedestal_C_CompletedQuestPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.IsInLobby
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInLobby                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::IsInLobby(bool* IsInLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.IsInLobby");

	ATeamMemberPedestal_C_IsInLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInLobby != nullptr)
		*IsInLobby = params.IsInLobby;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.PlayLobbyAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::PlayLobbyAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.PlayLobbyAnimation");

	ATeamMemberPedestal_C_PlayLobbyAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::RefreshWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshWidgets");

	ATeamMemberPedestal_C_RefreshWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ATeamMemberPedestal_C::OnTeamMemberStateChanged(struct FFortTeamMemberInfo TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberStateChanged");

	ATeamMemberPedestal_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnFrontEndCameraChanged");

	ATeamMemberPedestal_C_OnFrontEndCameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeContextEvents");

	ATeamMemberPedestal_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.UserConstructionScript");

	ATeamMemberPedestal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabSelected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeamMemberPedestal_C::HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabSelected");

	ATeamMemberPedestal_C_HandleClientEvent_StoreTabSelected_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnHovered
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnHovered");

	ATeamMemberPedestal_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabClosed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeamMemberPedestal_C::HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabClosed");

	ATeamMemberPedestal_C_HandleClientEvent_StoreTabClosed_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnUnhovered");

	ATeamMemberPedestal_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.ReceiveBeginPlay");

	ATeamMemberPedestal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnConnectedToCampaignLobby
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnConnectedToCampaignLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnConnectedToCampaignLobby");

	ATeamMemberPedestal_C_OnConnectedToCampaignLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshBattlePassOwnerVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bOwnsBattlePass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::RefreshBattlePassOwnerVisuals(bool bOwnsBattlePass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshBattlePassOwnerVisuals");

	ATeamMemberPedestal_C_RefreshBattlePassOwnerVisuals_Params params;
	params.bOwnsBattlePass = bOwnsBattlePass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnIsCurrentlyInMatchChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsInMatch                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::OnIsCurrentlyInMatchChanged(bool bIsInMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnIsCurrentlyInMatchChanged");

	ATeamMemberPedestal_C_OnIsCurrentlyInMatchChanged_Params params;
	params.bIsInMatch = bIsInMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPedestalIsPopulatedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsPopulated                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::OnPedestalIsPopulatedChanged(bool bIsPopulated)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnPedestalIsPopulatedChanged");

	ATeamMemberPedestal_C_OnPedestalIsPopulatedChanged_Params params;
	params.bIsPopulated = bIsPopulated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnItemClicked
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnItemClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnItemClicked");

	ATeamMemberPedestal_C_OnItemClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.ExecuteUbergraph_TeamMemberPedestal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::ExecuteUbergraph_TeamMemberPedestal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.ExecuteUbergraph_TeamMemberPedestal");

	ATeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::Debug_OnFriendLFGRequest__DelegateSignature(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest__DelegateSignature");

	ATeamMemberPedestal_C_Debug_OnFriendLFGRequest__DelegateSignature_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
