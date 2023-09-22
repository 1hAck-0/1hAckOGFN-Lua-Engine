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

// Function ChatWidget.ChatWidget_C.HandlePreShowConfirmationDialog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI* Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FFortDialogDescription_NUI DialogDescription              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChatWidget_C::HandlePreShowConfirmationDialog(class UFortUIManagerWidget_NUI* Source, struct FFortDialogDescription_NUI* DialogDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandlePreShowConfirmationDialog");

	UChatWidget_C_HandlePreShowConfirmationDialog_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DialogDescription != nullptr)
		*DialogDescription = params.DialogDescription;
}


// Function ChatWidget.ChatWidget_C.HandleControllerSendMessagePressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::HandleControllerSendMessagePressed(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleControllerSendMessagePressed");

	UChatWidget_C_HandleControllerSendMessagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function ChatWidget.ChatWidget_C.HandleRightTabPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::HandleRightTabPressed(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleRightTabPressed");

	UChatWidget_C_HandleRightTabPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function ChatWidget.ChatWidget_C.HandleLeftTabPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::HandleLeftTabPressed(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleLeftTabPressed");

	UChatWidget_C_HandleLeftTabPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function ChatWidget.ChatWidget_C.HandleExitPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::HandleExitPressed(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleExitPressed");

	UChatWidget_C_HandleExitPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function ChatWidget.ChatWidget_C.InitializeChat
// (Public, BlueprintCallable, BlueprintEvent)

void UChatWidget_C::InitializeChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.InitializeChat");

	UChatWidget_C_InitializeChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UChatWidget_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.BindDelegates");

	UChatWidget_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChatWidget_C::HandleCursorModeChanged(bool bEnabled, struct FName ActionName, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleCursorModeChanged");

	UChatWidget_C_HandleCursorModeChanged_Params params;
	params.bEnabled = bEnabled;
	params.ActionName = ActionName;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.HandleShowChatWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                 Feature                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureState            FeatureState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureStateReason      FeatureStateReason             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::HandleShowChatWindow(EFortUIFeature Feature, EFortUIFeatureState FeatureState, EFortUIFeatureStateReason FeatureStateReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleShowChatWindow");

	UChatWidget_C_HandleShowChatWindow_Params params;
	params.Feature = Feature;
	params.FeatureState = FeatureState;
	params.FeatureStateReason = FeatureStateReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.HandeChatEnteredEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnteringChat                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::HandeChatEnteredEvent(bool bEnteringChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandeChatEnteredEvent");

	UChatWidget_C_HandeChatEnteredEvent_Params params;
	params.bEnteringChat = bEnteringChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.UpdateChatUserListIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::UpdateChatUserListIcon(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.UpdateChatUserListIcon");

	UChatWidget_C_UpdateChatUserListIcon_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.Set Chat Shortcut Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               New_Visibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::Set_Chat_Shortcut_Visibility(ESlateVisibility New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.Set Chat Shortcut Visibility");

	UChatWidget_C_Set_Chat_Shortcut_Visibility_Params params;
	params.New_Visibility = New_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.Set Chat Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               New_Visibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::Set_Chat_Visibility(ESlateVisibility New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.Set Chat Visibility");

	UChatWidget_C_Set_Chat_Visibility_Params params;
	params.New_Visibility = New_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.Destruct");

	UChatWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.Construct");

	UChatWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           bOpen                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::BndEvt__FortChat_K2Node_ComponentBoundEvent(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent");

	UChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UChatWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.OnActivated");

	UChatWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UChatWidget_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.OnDeactivated");

	UChatWidget_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.HandleInputMethodChanged");

	UChatWidget_C_HandleInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::ExecuteUbergraph_ChatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget");

	UChatWidget_C_ExecuteUbergraph_ChatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatWidget.ChatWidget_C.OnEnteredChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnteredChat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget_C::OnEnteredChat__DelegateSignature(bool EnteredChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.OnEnteredChat__DelegateSignature");

	UChatWidget_C_OnEnteredChat__DelegateSignature_Params params;
	params.EnteredChat = EnteredChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
