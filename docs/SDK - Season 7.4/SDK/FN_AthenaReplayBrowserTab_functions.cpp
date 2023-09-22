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

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnBackActionExecuted
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnBackActionExecuted(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnBackActionExecuted");

	UAthenaReplayBrowserTab_C_OnBackActionExecuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRenameActionExecuted
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnRenameActionExecuted(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRenameActionExecuted");

	UAthenaReplayBrowserTab_C_OnRenameActionExecuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnDeleteActionExecuted
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnDeleteActionExecuted(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnDeleteActionExecuted");

	UAthenaReplayBrowserTab_C_OnDeleteActionExecuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnPlayActionExecuted
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnPlayActionExecuted(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnPlayActionExecuted");

	UAthenaReplayBrowserTab_C_OnPlayActionExecuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.StartAthenaLobbyMusic
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::StartAthenaLobbyMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.StartAthenaLobbyMusic");

	UAthenaReplayBrowserTab_C_StartAthenaLobbyMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.RefreshReplayFolderState
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::RefreshReplayFolderState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.RefreshReplayFolderState");

	UAthenaReplayBrowserTab_C_RefreshReplayFolderState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DoesSupportReplayFolder
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSupported                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DoesSupportReplayFolder(bool* IsSupported)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DoesSupportReplayFolder");

	UAthenaReplayBrowserTab_C_DoesSupportReplayFolder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSupported != nullptr)
		*IsSupported = params.IsSupported;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnShowLoadingThrobber
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnShowLoadingThrobber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnShowLoadingThrobber");

	UAthenaReplayBrowserTab_C_OnShowLoadingThrobber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionStateChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ActionInProgress               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnActionStateChanged(bool ActionInProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionStateChanged");

	UAthenaReplayBrowserTab_C_OnActionStateChanged_Params params;
	params.ActionInProgress = ActionInProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SetupInputActionHandlers
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::SetupInputActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SetupInputActionHandlers");

	UAthenaReplayBrowserTab_C_SetupInputActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.CloseRenameDialog
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::CloseRenameDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.CloseRenameDialog");

	UAthenaReplayBrowserTab_C_CloseRenameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnConfirmRename
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewName                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaReplayBrowserTab_C::OnConfirmRename(struct FText NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnConfirmRename");

	UAthenaReplayBrowserTab_C_OnConfirmRename_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.HideInputActions
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::HideInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.HideInputActions");

	UAthenaReplayBrowserTab_C_HideInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.FocusList
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::FocusList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.FocusList");

	UAthenaReplayBrowserTab_C_FocusList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SelectReplay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ReplayInfoObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::SelectReplay(class UObject* ReplayInfoObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SelectReplay");

	UAthenaReplayBrowserTab_C_SelectReplay_Params params;
	params.ReplayInfoObject = ReplayInfoObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult");

	UAthenaReplayBrowserTab_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_E89869AF460753E34CA097BC86722E95
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult_E89869AF460753E34CA097BC86722E95(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_E89869AF460753E34CA097BC86722E95");

	UAthenaReplayBrowserTab_C_DialogResult_E89869AF460753E34CA097BC86722E95_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_F681A46A43F230E95DCC3F994D03E83C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult_F681A46A43F230E95DCC3F994D03E83C(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_F681A46A43F230E95DCC3F994D03E83C");

	UAthenaReplayBrowserTab_C_DialogResult_F681A46A43F230E95DCC3F994D03E83C_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRowsUpdated
// (Event, Protected, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnRowsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRowsUpdated");

	UAthenaReplayBrowserTab_C_OnRowsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActivated");

	UAthenaReplayBrowserTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DeleteReplay
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaReplayBrowserRowProxyInstance* RowProxy                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DeleteReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DeleteReplay");

	UAthenaReplayBrowserTab_C_DeleteReplay_Params params;
	params.RowProxy = RowProxy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__CommonListView
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::BndEvt__CommonListView(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__CommonListView");

	UAthenaReplayBrowserTab_C_BndEvt__CommonListView_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaReplayBrowserTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.Construct");

	UAthenaReplayBrowserTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.PlayReplay
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaReplayBrowserRowProxyInstance* RowProxy                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::PlayReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.PlayReplay");

	UAthenaReplayBrowserTab_C_PlayReplay_Params params;
	params.RowProxy = RowProxy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputModeChanged");

	UAthenaReplayBrowserTab_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__ReplayListView_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::BndEvt__ReplayListView_K2Node_ComponentBoundEvent(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__ReplayListView_K2Node_ComponentBoundEvent");

	UAthenaReplayBrowserTab_C_BndEvt__ReplayListView_K2Node_ComponentBoundEvent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnDeleteFailed
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnDeleteFailed(struct FText Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnDeleteFailed");

	UAthenaReplayBrowserTab_C_OnDeleteFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRenameFailed
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnRenameFailed(struct FText Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRenameFailed");

	UAthenaReplayBrowserTab_C_OnRenameFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnSaveFailed
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnSaveFailed(struct FText Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnSaveFailed");

	UAthenaReplayBrowserTab_C_OnSaveFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnPlayFailed
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnPlayFailed(struct FText Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnPlayFailed");

	UAthenaReplayBrowserTab_C_OnPlayFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaReplayBrowserTab_C::BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent");

	UAthenaReplayBrowserTab_C_BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionStarted
// (Event, Protected, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnActionStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionStarted");

	UAthenaReplayBrowserTab_C_OnActionStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionFinished
// (Event, Protected, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnActionFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionFinished");

	UAthenaReplayBrowserTab_C_OnActionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ShowDeleteInvalidDialog
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   MESSAGE                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::ShowDeleteInvalidDialog(struct FText Title, struct FText MESSAGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ShowDeleteInvalidDialog");

	UAthenaReplayBrowserTab_C_ShowDeleteInvalidDialog_Params params;
	params.Title = Title;
	params.MESSAGE = MESSAGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ExecuteUbergraph_AthenaReplayBrowserTab
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::ExecuteUbergraph_AthenaReplayBrowserTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ExecuteUbergraph_AthenaReplayBrowserTab");

	UAthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
