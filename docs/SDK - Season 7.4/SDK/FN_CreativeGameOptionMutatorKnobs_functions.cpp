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

// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeGameOptionMutatorKnobs_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnFocusReceived");

	UCreativeGameOptionMutatorKnobs_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeGameOptionMutatorKnobs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.Construct");

	UCreativeGameOptionMutatorKnobs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCreativeGameOptionMutatorKnobs_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnActivated");

	UCreativeGameOptionMutatorKnobs_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGameOptionMutatorKnobs_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnInputModeChanged");

	UCreativeGameOptionMutatorKnobs_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.Close
// (BlueprintCallable, BlueprintEvent)

void UCreativeGameOptionMutatorKnobs_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.Close");

	UCreativeGameOptionMutatorKnobs_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeGameOptionMutatorKnobs_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent");

	UCreativeGameOptionMutatorKnobs_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.HandleCancelClicked
// (Event, Public, BlueprintEvent)

void UCreativeGameOptionMutatorKnobs_C::HandleCancelClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.HandleCancelClicked");

	UCreativeGameOptionMutatorKnobs_C_HandleCancelClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)

void UCreativeGameOptionMutatorKnobs_C::AnimateIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.AnimateIn");

	UCreativeGameOptionMutatorKnobs_C_AnimateIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGameOptionMutatorKnobs_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnAnimationFinished");

	UCreativeGameOptionMutatorKnobs_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.HandleNoOptionsLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCreativeGameOptionMutatorKnobs_C::HandleNoOptionsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.HandleNoOptionsLoaded");

	UCreativeGameOptionMutatorKnobs_C_HandleNoOptionsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.BndEvt__OptionsList_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGameOptionMutatorKnobs_C::BndEvt__OptionsList_K2Node_ComponentBoundEvent(class UObject* Item, bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.BndEvt__OptionsList_K2Node_ComponentBoundEvent");

	UCreativeGameOptionMutatorKnobs_C_BndEvt__OptionsList_K2Node_ComponentBoundEvent_Params params;
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.ExecuteUbergraph_CreativeGameOptionMutatorKnobs
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGameOptionMutatorKnobs_C::ExecuteUbergraph_CreativeGameOptionMutatorKnobs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.ExecuteUbergraph_CreativeGameOptionMutatorKnobs");

	UCreativeGameOptionMutatorKnobs_C_ExecuteUbergraph_CreativeGameOptionMutatorKnobs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativeGameOptionMutatorKnobs_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnCancel__DelegateSignature");

	UCreativeGameOptionMutatorKnobs_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnAccept__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativeGameOptionMutatorKnobs_C::OnAccept__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnAccept__DelegateSignature");

	UCreativeGameOptionMutatorKnobs_C_OnAccept__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
