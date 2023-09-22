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

// Function OptionsMenu.OptionsMenu_C.NotifyTabsOfActivationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortOptionsTab*         ActivatedTab                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::NotifyTabsOfActivationState(class UFortOptionsTab* ActivatedTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.NotifyTabsOfActivationState");

	UOptionsMenu_C_NotifyTabsOfActivationState_Params params;
	params.ActivatedTab = ActivatedTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleInputResetToDefault
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleInputResetToDefault(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleInputResetToDefault");

	UOptionsMenu_C_HandleInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.HandleResetAvailableActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleResetAvailableActionHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleResetAvailableActionHandlerStates");

	UOptionsMenu_C_HandleResetAvailableActionHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Update Header Text by Tab ID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Update_Header_Text_by_Tab_ID(struct FName TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Update Header Text by Tab ID");

	UOptionsMenu_C_Update_Header_Text_by_Tab_ID_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DoResetKBMToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Preset_To_Set                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::DoResetKBMToDefault(int Preset_To_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DoResetKBMToDefault");

	UOptionsMenu_C_DoResetKBMToDefault_Params params;
	params.Preset_To_Set = Preset_To_Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleResetCustomGamepadToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleResetCustomGamepadToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleResetCustomGamepadToDefault");

	UOptionsMenu_C_HandleResetCustomGamepadToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.UpdateAllOptionsTabs
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::UpdateAllOptionsTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.UpdateAllOptionsTabs");

	UOptionsMenu_C_UpdateAllOptionsTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ResetActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisableBack                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::ResetActionHandlerStates(bool DisableBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ResetActionHandlerStates");

	UOptionsMenu_C_ResetActionHandlerStates_Params params;
	params.DisableBack = DisableBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.UpdateBasedOnActiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldCenterOnTab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.UpdateBasedOnActiveWidget");

	UOptionsMenu_C_UpdateBasedOnActiveWidget_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ShouldCenterOnTab = ShouldCenterOnTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ApplySettings
// (Private, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ApplySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ApplySettings");

	UOptionsMenu_C_ApplySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DoResetHUDOptionsToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::DoResetHUDOptionsToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DoResetHUDOptionsToDefault");

	UOptionsMenu_C_DoResetHUDOptionsToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DoResetGameOptionsToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortOptionsTab*         Tab_To_Reset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::DoResetGameOptionsToDefault(class UFortOptionsTab* Tab_To_Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DoResetGameOptionsToDefault");

	UOptionsMenu_C_DoResetGameOptionsToDefault_Params params;
	params.Tab_To_Reset = Tab_To_Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleTabGamepadConfigActionHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates");

	UOptionsMenu_C_HandleTabGamepadConfigActionHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleResetUnavailableActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShowApply                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleResetUnavailableActionHandlerStates(bool ShouldShowApply)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleResetUnavailableActionHandlerStates");

	UOptionsMenu_C_HandleResetUnavailableActionHandlerStates_Params params;
	params.ShouldShowApply = ShouldShowApply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabInputOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTabInputOptions_C*      TabInputOptionsActor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabInputOptionsActionHandlerStates");

	UOptionsMenu_C_HandleTabInputOptionsActionHandlerStates_Params params;
	params.TabInputOptionsActor = TabInputOptionsActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Active_Widget_Index            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleTabGameOptionsActionHandlerStates(int Active_Widget_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsActionHandlerStates");

	UOptionsMenu_C_HandleTabGameOptionsActionHandlerStates_Params params;
	params.Active_Widget_Index = Active_Widget_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::CenterOnActiveTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab");

	UOptionsMenu_C_CenterOnActiveTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.SetBackground
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::SetBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.SetBackground");

	UOptionsMenu_C_SetBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.AddTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   NameId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// ESettingTab                    Tab_Type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::AddTab(class UClass* WidgetClass, struct FText DisplayName, struct FName NameId, struct FSlateBrush Icon, ESettingTab Tab_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.AddTab");

	UOptionsMenu_C_AddTab_Params params;
	params.WidgetClass = WidgetClass;
	params.DisplayName = DisplayName;
	params.NameId = NameId;
	params.Icon = Icon;
	params.Tab_Type = Tab_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleCursorModeChanging(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging");

	UOptionsMenu_C_HandleCursorModeChanging_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Handle_Toggle_Mode(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode");

	UOptionsMenu_C_Handle_Toggle_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Set_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers");

	UOptionsMenu_C_Set_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleBack");

	UOptionsMenu_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.Handle Reset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Handle_Reset(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Reset");

	UOptionsMenu_C_Handle_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.HandleResetToDefault
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleResetToDefault(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleResetToDefault");

	UOptionsMenu_C_HandleResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.Handle Apply
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Handle_Apply(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Apply");

	UOptionsMenu_C_Handle_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsMenu_C::OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown");

	UOptionsMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenu.OptionsMenu_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsMenu_C::OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnMouseWheel");

	UOptionsMenu_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsMenu_C::OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown");

	UOptionsMenu_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenu.OptionsMenu_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Initialize");

	UOptionsMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426");

	UOptionsMenu_C_OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded");

	UOptionsMenu_C_OnLoaded_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD");

	UOptionsMenu_C_OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_EF0A182C49925D83A3E55080FA222F7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded_EF0A182C49925D83A3E55080FA222F7D(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded_EF0A182C49925D83A3E55080FA222F7D");

	UOptionsMenu_C_OnLoaded_EF0A182C49925D83A3E55080FA222F7D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1");

	UOptionsMenu_C_DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DialogResult");

	UOptionsMenu_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A");

	UOptionsMenu_C_DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DialogResult_B31FF5BD4C0772716F27509EA83B418E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::DialogResult_B31FF5BD4C0772716F27509EA83B418E(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DialogResult_B31FF5BD4C0772716F27509EA83B418E");

	UOptionsMenu_C_DialogResult_B31FF5BD4C0772716F27509EA83B418E_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Enable Overlay Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Overlay_Text                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMenu_C::Enable_Overlay_Input(bool Accept_Input, struct FText Overlay_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Enable Overlay Input");

	UOptionsMenu_C_Enable_Overlay_Input_Params params;
	params.Accept_Input = Accept_Input;
	params.Overlay_Text = Overlay_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Enable Overlay Video
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Enable_Overlay_Video(bool Accept_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Enable Overlay Video");

	UOptionsMenu_C_Enable_Overlay_Video_Params params;
	params.Accept_Input = Accept_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Disable Overlay
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Disable_Overlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Disable Overlay");

	UOptionsMenu_C_Disable_Overlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent");

	UOptionsMenu_C_BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent");

	UOptionsMenu_C_BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Destruct");

	UOptionsMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Tab Setting Changed
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Tab_Setting_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Tab Setting Changed");

	UOptionsMenu_C_Tab_Setting_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnActivated");

	UOptionsMenu_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Disable Overlay Input
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Disable_Overlay_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Disable Overlay Input");

	UOptionsMenu_C_Disable_Overlay_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Gamepad Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad_Enabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Gamepad_Changed(bool Gamepad_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Gamepad Changed");

	UOptionsMenu_C_Gamepad_Changed_Params params;
	params.Gamepad_Enabled = Gamepad_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__SettingsTabs_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent");

	UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::HandleBenchmarkComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete");

	UOptionsMenu_C_HandleBenchmarkComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__LanguageOk_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent");

	UOptionsMenu_C_BndEvt__LanguageOk_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::HandleSettingsErrorMessageClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed");

	UOptionsMenu_C_HandleSettingsErrorMessageClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnHandleBack
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::OnHandleBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnHandleBack");

	UOptionsMenu_C_OnHandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent");

	UOptionsMenu_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Construct");

	UOptionsMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.TabGameOptions_OnActiveWidgetChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.TabGameOptions_OnActiveWidgetChanged_Bind");

	UOptionsMenu_C_TabGameOptions_OnActiveWidgetChanged_Bind_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleSettingsSaveComplete
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::HandleSettingsSaveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleSettingsSaveComplete");

	UOptionsMenu_C_HandleSettingsSaveComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnDeactivated");

	UOptionsMenu_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.LoadTabClasses
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::LoadTabClasses()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.LoadTabClasses");

	UOptionsMenu_C_LoadTabClasses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ResetVideoOptionsTimerDelegate
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ResetVideoOptionsTimerDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ResetVideoOptionsTimerDelegate");

	UOptionsMenu_C_ResetVideoOptionsTimerDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ShowResetDefaultConfirmation
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ShowResetDefaultConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ShowResetDefaultConfirmation");

	UOptionsMenu_C_ShowResetDefaultConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ShowLangaugeConfirmation
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ShowLangaugeConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ShowLangaugeConfirmation");

	UOptionsMenu_C_ShowLangaugeConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ShowInputReset DefaultConfirmation
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ShowInputReset_DefaultConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ShowInputReset DefaultConfirmation");

	UOptionsMenu_C_ShowInputReset_DefaultConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnHandleApply
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::OnHandleApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnHandleApply");

	UOptionsMenu_C_OnHandleApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabGamePadActionsNeedBinds
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ScreenLabels                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOptionsMenu_C::HandleTabGamePadActionsNeedBinds(TArray<struct FText>* ScreenLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabGamePadActionsNeedBinds");

	UOptionsMenu_C_HandleTabGamePadActionsNeedBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenLabels != nullptr)
		*ScreenLabels = params.ScreenLabels;
}


// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu");

	UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnSettingsApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::OnSettingsApplied__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnSettingsApplied__DelegateSignature");

	UOptionsMenu_C_OnSettingsApplied__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
