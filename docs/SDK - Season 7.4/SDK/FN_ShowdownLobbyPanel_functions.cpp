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

// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.InputTypeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownLobbyPanel_C::InputTypeChanged(bool isGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.InputTypeChanged");

	UShowdownLobbyPanel_C_InputTypeChanged_Params params;
	params.isGamepad = isGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.HandleCrossplayChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UShowdownLobbyPanel_C::HandleCrossplayChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.HandleCrossplayChanged");

	UShowdownLobbyPanel_C_HandleCrossplayChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UShowdownLobbyPanel_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.UpdateColors");

	UShowdownLobbyPanel_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShowdownLobbyPanel_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.Refresh");

	UShowdownLobbyPanel_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownLobbyPanel_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.RefreshDataBP");

	UShowdownLobbyPanel_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownLobbyPanel_C::BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent");

	UShowdownLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownLobbyPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.Construct");

	UShowdownLobbyPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.EventColorize
// (BlueprintCallable, BlueprintEvent)

void UShowdownLobbyPanel_C::EventColorize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.EventColorize");

	UShowdownLobbyPanel_C_EventColorize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.EventSwitchUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownLobbyPanel_C::EventSwitchUI(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.EventSwitchUI");

	UShowdownLobbyPanel_C_EventSwitchUI_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.ExecuteUbergraph_ShowdownLobbyPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownLobbyPanel_C::ExecuteUbergraph_ShowdownLobbyPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.ExecuteUbergraph_ShowdownLobbyPanel");

	UShowdownLobbyPanel_C_ExecuteUbergraph_ShowdownLobbyPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
