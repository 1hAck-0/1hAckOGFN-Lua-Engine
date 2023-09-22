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

// Function MinigameButtons.MinigameButtons_C.UpdateButtonsFromButtonState
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMinigameButtons_C::UpdateButtonsFromButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.UpdateButtonsFromButtonState");

	UMinigameButtons_C_UpdateButtonsFromButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.SetButtonState
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMinigameButtonsState> Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinigameButtons_C::SetButtonState(TEnumAsByte<EMinigameButtonsState> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.SetButtonState");

	UMinigameButtons_C_SetButtonState_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.CenterOnCurrentButton
// (Public, BlueprintCallable, BlueprintEvent)

void UMinigameButtons_C::CenterOnCurrentButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.CenterOnCurrentButton");

	UMinigameButtons_C_CenterOnCurrentButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.UpdateButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigameSettingsBuilding* Machine                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinigameButtons_C::UpdateButtons(class AFortMinigameSettingsBuilding* Machine)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.UpdateButtons");

	UMinigameButtons_C_UpdateButtons_Params params;
	params.Machine = Machine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMinigameButtons_C::BndEvt__StartGameButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent");

	UMinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMinigameButtons_C::BndEvt__EndGameButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton_K2Node_ComponentBoundEvent");

	UMinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.SetWidgetSwitcherIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinigameButtons_C::SetWidgetSwitcherIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.SetWidgetSwitcherIndex");

	UMinigameButtons_C_SetWidgetSwitcherIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMinigameButtons_C::BndEvt__EndGameButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent");

	UMinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMinigameButtons_C::BndEvt__StartGameButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent");

	UMinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMinigameButtons_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.OnInitialized");

	UMinigameButtons_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.ExecuteUbergraph_MinigameButtons
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinigameButtons_C::ExecuteUbergraph_MinigameButtons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.ExecuteUbergraph_MinigameButtons");

	UMinigameButtons_C_ExecuteUbergraph_MinigameButtons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.EndButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMinigameButtons_C::EndButtonUnhovered__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.EndButtonUnhovered__DelegateSignature");

	UMinigameButtons_C_EndButtonUnhovered__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.StartButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMinigameButtons_C::StartButtonUnhovered__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.StartButtonUnhovered__DelegateSignature");

	UMinigameButtons_C_StartButtonUnhovered__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.EndButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMinigameButtons_C::EndButtonHovered__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.EndButtonHovered__DelegateSignature");

	UMinigameButtons_C_EndButtonHovered__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.StartButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMinigameButtons_C::StartButtonHovered__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.StartButtonHovered__DelegateSignature");

	UMinigameButtons_C_StartButtonHovered__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.EndButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMinigameButtons_C::EndButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.EndButtonClicked__DelegateSignature");

	UMinigameButtons_C_EndButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameButtons.MinigameButtons_C.StartButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMinigameButtons_C::StartButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameButtons.MinigameButtons_C.StartButtonClicked__DelegateSignature");

	UMinigameButtons_C_StartButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
