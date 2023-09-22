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

// Function CreativeMyIslandModal.CreativeMyIslandModal_C.PassInputModeToActivePanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeMyIslandModal_C::PassInputModeToActivePanel(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.PassInputModeToActivePanel");

	UCreativeMyIslandModal_C_PassInputModeToActivePanel_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.Player in Read Only Volume?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bInReadOnlyVolume              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeMyIslandModal_C::Player_in_Read_Only_Volume_(bool* bInReadOnlyVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.Player in Read Only Volume?");

	UCreativeMyIslandModal_C_Player_in_Read_Only_Volume__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInReadOnlyVolume != nullptr)
		*bInReadOnlyVolume = params.bInReadOnlyVolume;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.HandleClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeMyIslandModal_C::HandleClose(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.HandleClose");

	UCreativeMyIslandModal_C_HandleClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__IconTextButton_C
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeMyIslandModal_C::BndEvt__IconTextButton_C(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__IconTextButton_C");

	UCreativeMyIslandModal_C_BndEvt__IconTextButton_C_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeMyIslandModal_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent");

	UCreativeMyIslandModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCreativeMyIslandModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.OnActivated");

	UCreativeMyIslandModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.Close
// (BlueprintCallable, BlueprintEvent)

void UCreativeMyIslandModal_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.Close");

	UCreativeMyIslandModal_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.CycleLeft
// (BlueprintCallable, BlueprintEvent)

void UCreativeMyIslandModal_C::CycleLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.CycleLeft");

	UCreativeMyIslandModal_C_CycleLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.CycleRight
// (BlueprintCallable, BlueprintEvent)

void UCreativeMyIslandModal_C::CycleRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.CycleRight");

	UCreativeMyIslandModal_C_CycleRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__Button
// (BlueprintEvent)

void UCreativeMyIslandModal_C::BndEvt__Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__Button");

	UCreativeMyIslandModal_C_BndEvt__Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeMyIslandModal_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.OnInputModeChanged");

	UCreativeMyIslandModal_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__UserActionMenuInputButton
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeMyIslandModal_C::BndEvt__UserActionMenuInputButton(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__UserActionMenuInputButton");

	UCreativeMyIslandModal_C_BndEvt__UserActionMenuInputButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeMyIslandModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.Construct");

	UCreativeMyIslandModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.Setup Tabs
// (BlueprintCallable, BlueprintEvent)

void UCreativeMyIslandModal_C::Setup_Tabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.Setup Tabs");

	UCreativeMyIslandModal_C_Setup_Tabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__Permissions_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeMyIslandModal_C::BndEvt__Permissions_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__Permissions_K2Node_ComponentBoundEvent");

	UCreativeMyIslandModal_C_BndEvt__Permissions_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__Description_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeMyIslandModal_C::BndEvt__Description_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.BndEvt__Description_K2Node_ComponentBoundEvent");

	UCreativeMyIslandModal_C_BndEvt__Description_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.SetUpOnClosedDelegates
// (BlueprintCallable, BlueprintEvent)

void UCreativeMyIslandModal_C::SetUpOnClosedDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.SetUpOnClosedDelegates");

	UCreativeMyIslandModal_C_SetUpOnClosedDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeMyIslandModal.CreativeMyIslandModal_C.ExecuteUbergraph_CreativeMyIslandModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeMyIslandModal_C::ExecuteUbergraph_CreativeMyIslandModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeMyIslandModal.CreativeMyIslandModal_C.ExecuteUbergraph_CreativeMyIslandModal");

	UCreativeMyIslandModal_C_ExecuteUbergraph_CreativeMyIslandModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
