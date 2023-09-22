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

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.IsInCustomMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsCustom                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::IsInCustomMode(bool* IsCustom)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.IsInCustomMode");

	UHUDLayoutToolFireModePanel_C_IsInCustomMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCustom != nullptr)
		*IsCustom = params.IsCustom;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomFireMode
// (Public, BlueprintCallable, BlueprintEvent)

void UHUDLayoutToolFireModePanel_C::SetCustomFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomFireMode");

	UHUDLayoutToolFireModePanel_C_SetCustomFireMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomModeVisibilities
// (Public, BlueprintCallable, BlueprintEvent)

void UHUDLayoutToolFireModePanel_C::SetCustomModeVisibilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomModeVisibilities");

	UHUDLayoutToolFireModePanel_C_SetCustomModeVisibilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UHUDLayoutToolFireModePanel_C::OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnMouseButtonDown_1");

	UHUDLayoutToolFireModePanel_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitButtonBindings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UHUDLayoutToolFireModeButton*> ArrayOfFireModeButtons         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHUDLayoutToolFireModePanel_C::InitButtonBindings(TArray<class UHUDLayoutToolFireModeButton*>* ArrayOfFireModeButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitButtonBindings");

	UHUDLayoutToolFireModePanel_C_InitButtonBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayOfFireModeButtons != nullptr)
		*ArrayOfFireModeButtons = params.ArrayOfFireModeButtons;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleCurSelectedTile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*   Tile                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::HandleCurSelectedTile(class UFireModeSelectTile_C* Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleCurSelectedTile");

	UHUDLayoutToolFireModePanel_C_HandleCurSelectedTile_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitializeSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UHUDLayoutToolFireModePanel_C::InitializeSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitializeSelection");

	UHUDLayoutToolFireModePanel_C_InitializeSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.PlayCurFocusedTileMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*   CurFocusedTile                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::PlayCurFocusedTileMovie(class UFireModeSelectTile_C* CurFocusedTile)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.PlayCurFocusedTileMovie");

	UHUDLayoutToolFireModePanel_C_PlayCurFocusedTileMovie_Params params;
	params.CurFocusedTile = CurFocusedTile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleTileButtonFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*   Tile                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::HandleTileButtonFocused(class UFireModeSelectTile_C* Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleTileButtonFocused");

	UHUDLayoutToolFireModePanel_C_HandleTileButtonFocused_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.NewTileSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*   Tile                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::NewTileSelected(class UFireModeSelectTile_C* Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.NewTileSelected");

	UHUDLayoutToolFireModePanel_C_NewTileSelected_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetOpenState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewOpenState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::SetOpenState(bool bNewOpenState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetOpenState");

	UHUDLayoutToolFireModePanel_C_SetOpenState_Params params;
	params.bNewOpenState = bNewOpenState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent");

	UHUDLayoutToolFireModePanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDLayoutToolFireModePanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.Construct");

	UHUDLayoutToolFireModePanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent");

	UHUDLayoutToolFireModePanel_C_BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__CustomButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::BndEvt__CustomButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__CustomButton_K2Node_ComponentBoundEvent");

	UHUDLayoutToolFireModePanel_C_BndEvt__CustomButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__PresetsButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::BndEvt__PresetsButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__PresetsButton_K2Node_ComponentBoundEvent");

	UHUDLayoutToolFireModePanel_C_BndEvt__PresetsButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnFire Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFireModeType                  NewFireMode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::OnFire_Mode_Changed(EFireModeType NewFireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnFire Mode Changed");

	UHUDLayoutToolFireModePanel_C_OnFire_Mode_Changed_Params params;
	params.NewFireMode = NewFireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.ExecuteUbergraph_HUDLayoutToolFireModePanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolFireModePanel_C::ExecuteUbergraph_HUDLayoutToolFireModePanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.ExecuteUbergraph_HUDLayoutToolFireModePanel");

	UHUDLayoutToolFireModePanel_C_ExecuteUbergraph_HUDLayoutToolFireModePanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
