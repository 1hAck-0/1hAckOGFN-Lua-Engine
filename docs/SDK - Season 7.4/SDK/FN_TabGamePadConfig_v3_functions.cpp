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

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadInfoSelectorNavRight
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::GamepadInfoSelectorNavRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadInfoSelectorNavRight");

	UTabGamePadConfig_v3_C_GamepadInfoSelectorNavRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.AreWeOkayWithThisChange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsOkay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::AreWeOkayWithThisChange(struct FName ActionName, struct FKey Key, bool* IsOkay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.AreWeOkayWithThisChange");

	UTabGamePadConfig_v3_C_AreWeOkayWithThisChange_Params params;
	params.ActionName = ActionName;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOkay != nullptr)
		*IsOkay = params.IsOkay;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::HandleGamepadInfoSelectorFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorFocus");

	UTabGamePadConfig_v3_C_HandleGamepadInfoSelectorFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.NavigateToSelectedConfig
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::NavigateToSelectedConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.NavigateToSelectedConfig");

	UTabGamePadConfig_v3_C_NavigateToSelectedConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomClearVisibilityForInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::ChangeCustomClearVisibilityForInputType(ECommonInputType InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomClearVisibilityForInputType");

	UTabGamePadConfig_v3_C_ChangeCustomClearVisibilityForInputType_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomResetVisibilityForInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::ChangeCustomResetVisibilityForInputType(ECommonInputType InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomResetVisibilityForInputType");

	UTabGamePadConfig_v3_C_ChangeCustomResetVisibilityForInputType_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorApply
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::HandleGamepadInfoSelectorApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorApply");

	UTabGamePadConfig_v3_C_HandleGamepadInfoSelectorApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorBack
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::HandleGamepadInfoSelectorBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorBack");

	UTabGamePadConfig_v3_C_HandleGamepadInfoSelectorBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomTabListVisibilityForInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::ChangeCustomTabListVisibilityForInputType(ECommonInputType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomTabListVisibilityForInputType");

	UTabGamePadConfig_v3_C_ChangeCustomTabListVisibilityForInputType_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CreateCustomResetToDefaultList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FConfirmationDialogAction> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FConfirmationDialogAction> UTabGamePadConfig_v3_C::CreateCustomResetToDefaultList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CreateCustomResetToDefaultList");

	UTabGamePadConfig_v3_C_CreateCustomResetToDefaultList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CloseCustomActionsPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FocusLastButton                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::CloseCustomActionsPanel(bool FocusLastButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CloseCustomActionsPanel");

	UTabGamePadConfig_v3_C_CloseCustomActionsPanel_Params params;
	params.FocusLastButton = FocusLastButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SelectSameItemInActionsList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::SelectSameItemInActionsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SelectSameItemInActionsList");

	UTabGamePadConfig_v3_C_SelectSameItemInActionsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SetupDisplayObject
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UGamepadKeyTextButton_C* DisplayObject                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabGamePadConfig_v3_C::SetupDisplayObject(struct FName ActionName, struct FKey Key, class UGamepadKeyTextButton_C** DisplayObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SetupDisplayObject");

	UTabGamePadConfig_v3_C_SetupDisplayObject_Params params;
	params.ActionName = ActionName;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayObject != nullptr)
		*DisplayObject = params.DisplayObject;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsCustomConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PresetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTabGamePadConfig_v3_C::IsCustomConfig(int PresetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsCustomConfig");

	UTabGamePadConfig_v3_C_IsCustomConfig_Params params;
	params.PresetIndex = PresetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsConsole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTabGamePadConfig_v3_C::IsConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsConsole");

	UTabGamePadConfig_v3_C_IsConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadMappingInfoChange
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::HandleGamepadMappingInfoChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadMappingInfoChange");

	UTabGamePadConfig_v3_C_HandleGamepadMappingInfoChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GetCurrentPlatformIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PlatformIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::GetCurrentPlatformIndex(int* PlatformIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GetCurrentPlatformIndex");

	UTabGamePadConfig_v3_C_GetCurrentPlatformIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformIndex != nullptr)
		*PlatformIndex = params.PlatformIndex;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateData
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateData");

	UTabGamePadConfig_v3_C_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstructData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::PreConstructData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstructData");

	UTabGamePadConfig_v3_C_PreConstructData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.InitializeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::InitializeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.InitializeData");

	UTabGamePadConfig_v3_C_InitializeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult");

	UTabGamePadConfig_v3_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Gamepad Config Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::Gamepad_Config_Changed(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Gamepad Config Changed");

	UTabGamePadConfig_v3_C_Gamepad_Config_Changed_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadPlatformConfigChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::GamepadPlatformConfigChanged(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadPlatformConfigChanged");

	UTabGamePadConfig_v3_C_GamepadPlatformConfigChanged_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CenterOnTab");

	UTabGamePadConfig_v3_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateOptionsTab");

	UTabGamePadConfig_v3_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomDoResetToDefault
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::CustomDoResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomDoResetToDefault");

	UTabGamePadConfig_v3_C_CustomDoResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomKeySelected_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UTabGamePadConfig_v3_C::CustomKeySelected_Bind(struct FKey Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomKeySelected_Bind");

	UTabGamePadConfig_v3_C_CustomKeySelected_Bind_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomActionSelected_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::CustomActionSelected_Bind(int SelectedIndex, struct FName ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomActionSelected_Bind");

	UTabGamePadConfig_v3_C_CustomActionSelected_Bind_Params params;
	params.SelectedIndex = SelectedIndex;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClosedUsingBack_Bind
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::CustomClosedUsingBack_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClosedUsingBack_Bind");

	UTabGamePadConfig_v3_C_CustomClosedUsingBack_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClearButton_Bind
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::CustomClearButton_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClearButton_Bind");

	UTabGamePadConfig_v3_C_CustomClearButton_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ModesTabSelected_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::ModesTabSelected_Bind(struct FName TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ModesTabSelected_Bind");

	UTabGamePadConfig_v3_C_ModesTabSelected_Bind_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabGamePadConfig_v3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Construct");

	UTabGamePadConfig_v3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleUsingGamepadChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECommonInputType               NewInputType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::HandleUsingGamepadChanged(ECommonInputType NewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleUsingGamepadChanged");

	UTabGamePadConfig_v3_C_HandleUsingGamepadChanged_Params params;
	params.NewInputType = NewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabDeactivated_Bind
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::OnTabDeactivated_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabDeactivated_Bind");

	UTabGamePadConfig_v3_C_OnTabDeactivated_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabActivated_Bind
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::OnTabActivated_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabActivated_Bind");

	UTabGamePadConfig_v3_C_OnTabActivated_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneLookSettingValueChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::DeadZoneLookSettingValueChanged_Bind(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneLookSettingValueChanged_Bind");

	UTabGamePadConfig_v3_C_DeadZoneLookSettingValueChanged_Bind_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneMoveSettingValueChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::DeadZoneMoveSettingValueChanged_Bind(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneMoveSettingValueChanged_Bind");

	UTabGamePadConfig_v3_C_DeadZoneMoveSettingValueChanged_Bind_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstruct");

	UTabGamePadConfig_v3_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ExecuteUbergraph_TabGamePadConfig_v3
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_v3_C::ExecuteUbergraph_TabGamePadConfig_v3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ExecuteUbergraph_TabGamePadConfig_v3");

	UTabGamePadConfig_v3_C_ExecuteUbergraph_TabGamePadConfig_v3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadActionsThatNeedBinds__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ScreenLabels                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTabGamePadConfig_v3_C::TabGamePadActionsThatNeedBinds__DelegateSignature(TArray<struct FText>* ScreenLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadActionsThatNeedBinds__DelegateSignature");

	UTabGamePadConfig_v3_C_TabGamePadActionsThatNeedBinds__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenLabels != nullptr)
		*ScreenLabels = params.ScreenLabels;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::TabGamePadConfigApply__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigApply__DelegateSignature");

	UTabGamePadConfig_v3_C_TabGamePadConfigApply__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::TabGamePadConfigBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigBack__DelegateSignature");

	UTabGamePadConfig_v3_C_TabGamePadConfigBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadMappingInfoChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::GamepadMappingInfoChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadMappingInfoChanged__DelegateSignature");

	UTabGamePadConfig_v3_C_GamepadMappingInfoChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
