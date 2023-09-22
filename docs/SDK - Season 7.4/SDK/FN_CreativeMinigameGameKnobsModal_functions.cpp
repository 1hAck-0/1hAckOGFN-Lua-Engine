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

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.EndGame
// (Public, BlueprintCallable, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.EndGame");

	UCreativeMinigameGameKnobsModal_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Player in Read Only Volume?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bInReadOnlyVolume              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeMinigameGameKnobsModal_C::Player_in_Read_Only_Volume_(bool* bInReadOnlyVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Player in Read Only Volume?");

	UCreativeMinigameGameKnobsModal_C_Player_in_Read_Only_Volume__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInReadOnlyVolume != nullptr)
		*bInReadOnlyVolume = params.bInReadOnlyVolume;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeMinigameGameKnobsModal_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnFocusReceived");

	UCreativeMinigameGameKnobsModal_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeMinigameGameKnobsModal_C::OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnTouchStarted");

	UCreativeMinigameGameKnobsModal_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnActivated");

	UCreativeMinigameGameKnobsModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeMinigameGameKnobsModal_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnInputModeChanged");

	UCreativeMinigameGameKnobsModal_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Close
// (BlueprintCallable, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Close");

	UCreativeMinigameGameKnobsModal_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeMinigameGameKnobsModal_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent");

	UCreativeMinigameGameKnobsModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.HandleCancelClicked
// (Event, Public, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::HandleCancelClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.HandleCancelClicked");

	UCreativeMinigameGameKnobsModal_C_HandleCancelClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnMinigameSettingsMachineSet
// (BlueprintCallable, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::OnMinigameSettingsMachineSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnMinigameSettingsMachineSet");

	UCreativeMinigameGameKnobsModal_C_OnMinigameSettingsMachineSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__IconTextButton_C
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeMinigameGameKnobsModal_C::BndEvt__IconTextButton_C(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__IconTextButton_C");

	UCreativeMinigameGameKnobsModal_C_BndEvt__IconTextButton_C_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Construct");

	UCreativeMinigameGameKnobsModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::AnimateIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.AnimateIn");

	UCreativeMinigameGameKnobsModal_C_AnimateIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnInit
// (BlueprintCallable, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnInit");

	UCreativeMinigameGameKnobsModal_C_OnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnMinigameStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortMinigameState             MinigameState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeMinigameGameKnobsModal_C::OnMinigameStateChanged(EFortMinigameState MinigameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnMinigameStateChanged");

	UCreativeMinigameGameKnobsModal_C_OnMinigameStateChanged_Params params;
	params.MinigameState = MinigameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::BndEvt__MinigameButtons_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent");

	UCreativeMinigameGameKnobsModal_C_BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.UpdateStartEndButtons
// (BlueprintCallable, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::UpdateStartEndButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.UpdateStartEndButtons");

	UCreativeMinigameGameKnobsModal_C_UpdateStartEndButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.HandleNoOptionsLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::HandleNoOptionsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.HandleNoOptionsLoaded");

	UCreativeMinigameGameKnobsModal_C_HandleNoOptionsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.ExecuteUbergraph_CreativeMinigameGameKnobsModal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeMinigameGameKnobsModal_C::ExecuteUbergraph_CreativeMinigameGameKnobsModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.ExecuteUbergraph_CreativeMinigameGameKnobsModal");

	UCreativeMinigameGameKnobsModal_C_ExecuteUbergraph_CreativeMinigameGameKnobsModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativeMinigameGameKnobsModal_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnClose__DelegateSignature");

	UCreativeMinigameGameKnobsModal_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
