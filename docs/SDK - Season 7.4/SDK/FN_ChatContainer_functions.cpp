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

// Function ChatContainer.ChatContainer_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UChatContainer_C::OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.OnKeyDown");

	UChatContainer_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChatContainer.ChatContainer_C.HandleChatOpenChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bChatShouldBeOpen              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatContainer_C::HandleChatOpenChanged(bool bChatShouldBeOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.HandleChatOpenChanged");

	UChatContainer_C_HandleChatOpenChanged_Params params;
	params.bChatShouldBeOpen = bChatShouldBeOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatContainer.ChatContainer_C.OnSizeAnimationComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UChatContainer_C::OnSizeAnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.OnSizeAnimationComplete");

	UChatContainer_C_OnSizeAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatContainer.ChatContainer_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChatContainer_C::HandleCursorModeChanged(bool bEnabled, struct FName ActionName, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.HandleCursorModeChanged");

	UChatContainer_C_HandleCursorModeChanged_Params params;
	params.bEnabled = bEnabled;
	params.ActionName = ActionName;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatContainer.ChatContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.Construct");

	UChatContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatContainer.ChatContainer_C.OnChatOpenChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bShouldBeOpen                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatContainer_C::OnChatOpenChanged(bool bShouldBeOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.OnChatOpenChanged");

	UChatContainer_C_OnChatOpenChanged_Params params;
	params.bShouldBeOpen = bShouldBeOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatContainer.ChatContainer_C.OnSendButtonDisplayChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bShowSendButton                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatContainer_C::OnSendButtonDisplayChanged(bool bShowSendButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.OnSendButtonDisplayChanged");

	UChatContainer_C_OnSendButtonDisplayChanged_Params params;
	params.bShowSendButton = bShowSendButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatContainer.ChatContainer_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChatContainer_C::BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent");

	UChatContainer_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatContainer.ChatContainer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatContainer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.Destruct");

	UChatContainer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatContainer.ChatContainer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatContainer_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.Tick");

	UChatContainer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatContainer.ChatContainer_C.ExecuteUbergraph_ChatContainer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatContainer_C::ExecuteUbergraph_ChatContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatContainer.ChatContainer_C.ExecuteUbergraph_ChatContainer");

	UChatContainer_C_ExecuteUbergraph_ChatContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
