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

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowDeadZoneTab
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::ShowDeadZoneTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowDeadZoneTab");

	UGamepadMappingInfo_v3_C_ShowDeadZoneTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideDeadZoneTab
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::HideDeadZoneTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideDeadZoneTab");

	UGamepadMappingInfo_v3_C_HideDeadZoneTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DoCustomNavigation_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UGamepadMappingInfo_v3_C::DoCustomNavigation_1(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DoCustomNavigation_1");

	UGamepadMappingInfo_v3_C_DoCustomNavigation_1_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::GamepadMappingInfoNavLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft");

	UGamepadMappingInfo_v3_C_GamepadMappingInfoNavLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::ShowEditModeTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab");

	UGamepadMappingInfo_v3_C_ShowEditModeTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::HideEditModeTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab");

	UGamepadMappingInfo_v3_C_HideEditModeTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGamepadMappingInfo_v3_C::On_Image_LightBox_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown_1");

	UGamepadMappingInfo_v3_C_On_Image_LightBox_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ActionName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   DescText                       (Parm, OutParm)

void UGamepadMappingInfo_v3_C::GetCustomButtonDataForKey(struct FKey Key, struct FName* ActionName, struct FText* DescText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey");

	UGamepadMappingInfo_v3_C_GetCustomButtonDataForKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
	if (DescText != nullptr)
		*DescText = params.DescText;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortInputActionGroup          Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::SetTextForMode(EFortInputActionGroup Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode");

	UGamepadMappingInfo_v3_C_SetTextForMode_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_v3_C::SetButtonTextLabelsFromTextArray(TArray<struct FText>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray");

	UGamepadMappingInfo_v3_C_SetButtonTextLabelsFromTextArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ButtonTextLabels               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonTextForSTW_BuilderProBuild(TArray<struct FText>* ButtonTextLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild");

	UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTW_BuilderProBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonTextLabels != nullptr)
		*ButtonTextLabels = params.ButtonTextLabels;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UGamepadMappingInfo_v3_C::GetControllerImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage");

	UGamepadMappingInfo_v3_C_GetControllerImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::ClearAllComboTextLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines");

	UGamepadMappingInfo_v3_C_ClearAllComboTextLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ButtonTextLabels               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonTextForSTWCombatProCombat(TArray<struct FText>* ButtonTextLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat");

	UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonTextLabels != nullptr)
		*ButtonTextLabels = params.ButtonTextLabels;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              TextWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGamepadMappingInfo_v3_C::SetTextFieldVisibilityForExtraLine(class UTextBlock* TextWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine");

	UGamepadMappingInfo_v3_C_SetTextFieldVisibilityForExtraLine_Params params;
	params.TextWidget = TextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              TextWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               DesiredSlateVisibility         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::GetDesiredSlateVisibilityForAbilityChordFromTextDisplay(class UTextBlock* TextWidget, ESlateVisibility* DesiredSlateVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay");

	UGamepadMappingInfo_v3_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params params;
	params.TextWidget = TextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredSlateVisibility != nullptr)
		*DesiredSlateVisibility = params.DesiredSlateVisibility;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ButtonTextLabels               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonTextForSTWCombatProBuild(TArray<struct FText>* ButtonTextLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild");

	UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonTextLabels != nullptr)
		*ButtonTextLabels = params.ButtonTextLabels;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonLabelTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets");

	UGamepadMappingInfo_v3_C_InitializeListOfButtonLabelTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines");

	UGamepadMappingInfo_v3_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::Handle_Config_Changed_STW_Combat_Mode(int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode");

	UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Combat_Mode_Params params;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::Handle_Config_Changed_STW_Build_Mode(int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode");

	UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Build_Mode_Params params;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortInputActionGroup          Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::HandleConfigChanged(EFortInputActionGroup Mode, int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged");

	UGamepadMappingInfo_v3_C_HandleConfigChanged_Params params;
	params.Mode = Mode;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortInputActionGroup          Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::HandleConfigChanged_Athena(EFortInputActionGroup Mode, int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena");

	UGamepadMappingInfo_v3_C_HandleConfigChanged_Athena_Params params;
	params.Mode = Mode;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortInputActionGroup          Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::OnConfigChanged(EFortInputActionGroup Mode, int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged");

	UGamepadMappingInfo_v3_C_OnConfigChanged_Params params;
	params.Mode = Mode;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortInputActionGroup          Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Configuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::Update_Displayed_Mapping(int Platform, EFortInputActionGroup Mode, int Configuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping");

	UGamepadMappingInfo_v3_C_Update_Displayed_Mapping_Params params;
	params.Platform = Platform;
	params.Mode = Mode;
	params.Configuration = Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::OnLoaded_CDBC1B27496027B96D10BC9A64224F3D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D");

	UGamepadMappingInfo_v3_C_OnLoaded_CDBC1B27496027B96D10BC9A64224F3D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGamepadMappingInfo_v3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct");

	UGamepadMappingInfo_v3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images
// (BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::Update_Controller_Images()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images");

	UGamepadMappingInfo_v3_C_Update_Controller_Images_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGamepadMappingInfo_v3_C::OnButtonClicked_Bind(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind");

	UGamepadMappingInfo_v3_C_OnButtonClicked_Bind_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons
// (BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::UpdateCustomButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons");

	UGamepadMappingInfo_v3_C_UpdateCustomButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabSelected
// (BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::DeadZoneTabSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabSelected");

	UGamepadMappingInfo_v3_C_DeadZoneTabSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabDeselected
// (BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::DeadZoneTabDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabDeselected");

	UGamepadMappingInfo_v3_C_DeadZoneTabDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneMoveResetButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGamepadMappingInfo_v3_C::DeadzoneMoveResetButtonClicked_Bind(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneMoveResetButtonClicked_Bind");

	UGamepadMappingInfo_v3_C_DeadzoneMoveResetButtonClicked_Bind_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneLookResetButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGamepadMappingInfo_v3_C::DeadzoneLookResetButtonClicked_Bind(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneLookResetButtonClicked_Bind");

	UGamepadMappingInfo_v3_C_DeadzoneLookResetButtonClicked_Bind_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_v3_C::ExecuteUbergraph_GamepadMappingInfo_v3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3");

	UGamepadMappingInfo_v3_C_ExecuteUbergraph_GamepadMappingInfo_v3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::CustomButtonNavLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature");

	UGamepadMappingInfo_v3_C_CustomButtonNavLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_v3_C::Image_LightboxClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature");

	UGamepadMappingInfo_v3_C_Image_LightboxClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UGamepadMappingInfo_v3_C::CustomKeySelected__DelegateSignature(struct FKey Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature");

	UGamepadMappingInfo_v3_C_CustomKeySelected__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
