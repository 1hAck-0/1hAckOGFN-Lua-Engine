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

// Function ChatMessageEntry.ChatMessageEntry_C.HandleSelectionStatusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatMessageEntry_C::HandleSelectionStatusChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessageEntry.ChatMessageEntry_C.HandleSelectionStatusChanged");

	UChatMessageEntry_C_HandleSelectionStatusChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatMessageEntry.ChatMessageEntry_C.OnEntryUpdated_2
// (BlueprintCallable, BlueprintEvent)

void UChatMessageEntry_C::OnEntryUpdated_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessageEntry.ChatMessageEntry_C.OnEntryUpdated_2");

	UChatMessageEntry_C_OnEntryUpdated_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatMessageEntry.ChatMessageEntry_C.BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UChatMessageEntry_C::BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessageEntry.ChatMessageEntry_C.BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent");

	UChatMessageEntry_C_BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatMessageEntry.ChatMessageEntry_C.OnFocusedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsFocused                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatMessageEntry_C::OnFocusedChanged(bool bIsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessageEntry.ChatMessageEntry_C.OnFocusedChanged");

	UChatMessageEntry_C_OnFocusedChanged_Params params;
	params.bIsFocused = bIsFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatMessageEntry.ChatMessageEntry_C.ExecuteUbergraph_ChatMessageEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatMessageEntry_C::ExecuteUbergraph_ChatMessageEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessageEntry.ChatMessageEntry_C.ExecuteUbergraph_ChatMessageEntry");

	UChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
