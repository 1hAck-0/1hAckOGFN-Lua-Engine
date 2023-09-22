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

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Init Back Action
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLeaderboardTab_C::Init_Back_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Init Back Action");

	UAthenaLeaderboardTab_C_Init_Back_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.HandleBackAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::HandleBackAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.HandleBackAction");

	UAthenaLeaderboardTab_C_HandleBackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ToggleDisabledTabVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldBeDisabled              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::ToggleDisabledTabVisuals(bool bShouldBeDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ToggleDisabledTabVisuals");

	UAthenaLeaderboardTab_C_ToggleDisabledTabVisuals_Params params;
	params.bShouldBeDisabled = bShouldBeDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnShowQueryThrobber
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLeaderboardTab_C::OnShowQueryThrobber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnShowQueryThrobber");

	UAthenaLeaderboardTab_C_OnShowQueryThrobber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bQueryInProgress               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::OnQueryStateChanged(bool bQueryInProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStateChanged");

	UAthenaLeaderboardTab_C_OnQueryStateChanged_Params params;
	params.bQueryInProgress = bQueryInProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnFriendTypeChangeGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommitted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::OnFriendTypeChangeGamepad(bool* bCommitted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnFriendTypeChangeGamepad");

	UAthenaLeaderboardTab_C_OnFriendTypeChangeGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommitted != nullptr)
		*bCommitted = params.bCommitted;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnPlaylistChangeGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommitted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::OnPlaylistChangeGamepad(bool* bCommitted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnPlaylistChangeGamepad");

	UAthenaLeaderboardTab_C_OnPlaylistChangeGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommitted != nullptr)
		*bCommitted = params.bCommitted;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent");

	UAthenaLeaderboardTab_C_BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLeaderboardTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Construct");

	UAthenaLeaderboardTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent");

	UAthenaLeaderboardTab_C_BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__MatchRotator_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__MatchRotator_K2Node_ComponentBoundEvent(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__MatchRotator_K2Node_ComponentBoundEvent");

	UAthenaLeaderboardTab_C_BndEvt__MatchRotator_K2Node_ComponentBoundEvent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__FriendsRotator_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__FriendsRotator_K2Node_ComponentBoundEvent(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__FriendsRotator_K2Node_ComponentBoundEvent");

	UAthenaLeaderboardTab_C_BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent");

	UAthenaLeaderboardTab_C_BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateTabButtonText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAthenaPlaylistLeaderboardData PlaylistTabData                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateTabButtonText(class UCommonButton* Button, struct FAthenaPlaylistLeaderboardData PlaylistTabData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateTabButtonText");

	UAthenaLeaderboardTab_C_OnUpdateTabButtonText_Params params;
	params.Button = Button;
	params.PlaylistTabData = PlaylistTabData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateLeaderboardListUI
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortLeaderboardRowProxyInstance* LocalUserRow                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   QueryErrorStr                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow, struct FText QueryErrorStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateLeaderboardListUI");

	UAthenaLeaderboardTab_C_OnUpdateLeaderboardListUI_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.LocalUserRow = LocalUserRow;
	params.QueryErrorStr = QueryErrorStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateListHeader
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAthenaPlaylistLeaderboardData PlaylistTabData                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData PlaylistTabData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateListHeader");

	UAthenaLeaderboardTab_C_OnUpdateListHeader_Params params;
	params.PlaylistTabData = PlaylistTabData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaLeaderboardTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnDeactivated");

	UAthenaLeaderboardTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryFinished
// (Event, Protected, BlueprintEvent)

void UAthenaLeaderboardTab_C::OnQueryFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryFinished");

	UAthenaLeaderboardTab_C_OnQueryFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStarted
// (Event, Protected, BlueprintEvent)

void UAthenaLeaderboardTab_C::OnQueryStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStarted");

	UAthenaLeaderboardTab_C_OnQueryStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaLeaderboardTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated");

	UAthenaLeaderboardTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent");

	UAthenaLeaderboardTab_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent");

	UAthenaLeaderboardTab_C_BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnInputMethodChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               bNewInputType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::OnInputMethodChanged_Event_1(ECommonInputType bNewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnInputMethodChanged_Event_1");

	UAthenaLeaderboardTab_C_OnInputMethodChanged_Event_1_Params params;
	params.bNewInputType = bNewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTab_C::ExecuteUbergraph_AthenaLeaderboardTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab");

	UAthenaLeaderboardTab_C_ExecuteUbergraph_AthenaLeaderboardTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
