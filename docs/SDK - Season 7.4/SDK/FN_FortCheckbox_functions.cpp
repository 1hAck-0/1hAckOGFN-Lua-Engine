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

// Function FortCheckbox.FortCheckbox_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UFortCheckbox_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortCheckbox.FortCheckbox_C.Refresh");

	UFortCheckbox_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCheckbox.FortCheckbox_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheckbox_C::SetSelected(bool NewSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortCheckbox.FortCheckbox_C.SetSelected");

	UFortCheckbox_C_SetSelected_Params params;
	params.NewSelected = NewSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCheckbox.FortCheckbox_C.ToggleCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UFortCheckbox_C::ToggleCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortCheckbox.FortCheckbox_C.ToggleCheckbox");

	UFortCheckbox_C_ToggleCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCheckbox.FortCheckbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortCheckbox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortCheckbox.FortCheckbox_C.Construct");

	UFortCheckbox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCheckbox.FortCheckbox_C.BndEvt__CheckButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UFortCheckbox_C::BndEvt__CheckButton_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortCheckbox.FortCheckbox_C.BndEvt__CheckButton_K2Node_ComponentBoundEvent");

	UFortCheckbox_C_BndEvt__CheckButton_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCheckbox.FortCheckbox_C.ExecuteUbergraph_FortCheckbox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheckbox_C::ExecuteUbergraph_FortCheckbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortCheckbox.FortCheckbox_C.ExecuteUbergraph_FortCheckbox");

	UFortCheckbox_C_ExecuteUbergraph_FortCheckbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCheckbox.FortCheckbox_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFortCheckbox_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortCheckbox.FortCheckbox_C.OnClicked__DelegateSignature");

	UFortCheckbox_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
