#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OptionsMenu.OptionsMenu_C.NotifyTabsOfActivationState
struct UOptionsMenu_C_NotifyTabsOfActivationState_Params
{
	class UFortOptionsTab*                             ActivatedTab;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleInputResetToDefault
struct UOptionsMenu_C_HandleInputResetToDefault_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleResetAvailableActionHandlerStates
struct UOptionsMenu_C_HandleResetAvailableActionHandlerStates_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Update Header Text by Tab ID
struct UOptionsMenu_C_Update_Header_Text_by_Tab_ID_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.DoResetKBMToDefault
struct UOptionsMenu_C_DoResetKBMToDefault_Params
{
	int                                                Preset_To_Set;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleResetCustomGamepadToDefault
struct UOptionsMenu_C_HandleResetCustomGamepadToDefault_Params
{
};

// Function OptionsMenu.OptionsMenu_C.UpdateAllOptionsTabs
struct UOptionsMenu_C_UpdateAllOptionsTabs_Params
{
};

// Function OptionsMenu.OptionsMenu_C.ResetActionHandlerStates
struct UOptionsMenu_C_ResetActionHandlerStates_Params
{
	bool                                               DisableBack;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.UpdateBasedOnActiveWidget
struct UOptionsMenu_C_UpdateBasedOnActiveWidget_Params
{
	class UObject*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldCenterOnTab;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.ApplySettings
struct UOptionsMenu_C_ApplySettings_Params
{
};

// Function OptionsMenu.OptionsMenu_C.DoResetHUDOptionsToDefault
struct UOptionsMenu_C_DoResetHUDOptionsToDefault_Params
{
};

// Function OptionsMenu.OptionsMenu_C.DoResetGameOptionsToDefault
struct UOptionsMenu_C_DoResetGameOptionsToDefault_Params
{
	class UFortOptionsTab*                             Tab_To_Reset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates
struct UOptionsMenu_C_HandleTabGamepadConfigActionHandlerStates_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleResetUnavailableActionHandlerStates
struct UOptionsMenu_C_HandleResetUnavailableActionHandlerStates_Params
{
	bool                                               ShouldShowApply;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleTabInputOptionsActionHandlerStates
struct UOptionsMenu_C_HandleTabInputOptionsActionHandlerStates_Params
{
	class UTabInputOptions_C*                          TabInputOptionsActor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsActionHandlerStates
struct UOptionsMenu_C_HandleTabGameOptionsActionHandlerStates_Params
{
	int                                                Active_Widget_Index;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab
struct UOptionsMenu_C_CenterOnActiveTab_Params
{
};

// Function OptionsMenu.OptionsMenu_C.SetBackground
struct UOptionsMenu_C_SetBackground_Params
{
};

// Function OptionsMenu.OptionsMenu_C.AddTab
struct UOptionsMenu_C_AddTab_Params
{
	class UClass*                                      WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       NameId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	ESettingTab                                        Tab_Type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging
struct UOptionsMenu_C_HandleCursorModeChanging_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode
struct UOptionsMenu_C_Handle_Toggle_Mode_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers
struct UOptionsMenu_C_Set_Input_Action_Handlers_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleBack
struct UOptionsMenu_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Reset
struct UOptionsMenu_C_Handle_Reset_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleResetToDefault
struct UOptionsMenu_C_HandleResetToDefault_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Apply
struct UOptionsMenu_C_Handle_Apply_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown
struct UOptionsMenu_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenu.OptionsMenu_C.OnMouseWheel
struct UOptionsMenu_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown
struct UOptionsMenu_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenu.OptionsMenu_C.Initialize
struct UOptionsMenu_C_Initialize_Params
{
};

// Function OptionsMenu.OptionsMenu_C.OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426
struct UOptionsMenu_C_OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.OnLoaded
struct UOptionsMenu_C_OnLoaded_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD
struct UOptionsMenu_C_OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.OnLoaded_EF0A182C49925D83A3E55080FA222F7D
struct UOptionsMenu_C_OnLoaded_EF0A182C49925D83A3E55080FA222F7D_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1
struct UOptionsMenu_C_DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.DialogResult
struct UOptionsMenu_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A
struct UOptionsMenu_C_DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.DialogResult_B31FF5BD4C0772716F27509EA83B418E
struct UOptionsMenu_C_DialogResult_B31FF5BD4C0772716F27509EA83B418E_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Enable Overlay Input
struct UOptionsMenu_C_Enable_Overlay_Input_Params
{
	bool                                               Accept_Input;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Overlay_Text;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsMenu.OptionsMenu_C.Enable Overlay Video
struct UOptionsMenu_C_Enable_Overlay_Video_Params
{
	bool                                               Accept_Input;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Disable Overlay
struct UOptionsMenu_C_Disable_Overlay_Params
{
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent
struct UOptionsMenu_C_BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent
struct UOptionsMenu_C_BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Destruct
struct UOptionsMenu_C_Destruct_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Tab Setting Changed
struct UOptionsMenu_C_Tab_Setting_Changed_Params
{
};

// Function OptionsMenu.OptionsMenu_C.OnActivated
struct UOptionsMenu_C_OnActivated_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Disable Overlay Input
struct UOptionsMenu_C_Disable_Overlay_Input_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Gamepad Changed
struct UOptionsMenu_C_Gamepad_Changed_Params
{
	bool                                               Gamepad_Enabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent
struct UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete
struct UOptionsMenu_C_HandleBenchmarkComplete_Params
{
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent
struct UOptionsMenu_C_BndEvt__LanguageOk_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed
struct UOptionsMenu_C_HandleSettingsErrorMessageClosed_Params
{
};

// Function OptionsMenu.OptionsMenu_C.OnHandleBack
struct UOptionsMenu_C_OnHandleBack_Params
{
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent
struct UOptionsMenu_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Construct
struct UOptionsMenu_C_Construct_Params
{
};

// Function OptionsMenu.OptionsMenu_C.TabGameOptions_OnActiveWidgetChanged_Bind
struct UOptionsMenu_C_TabGameOptions_OnActiveWidgetChanged_Bind_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleSettingsSaveComplete
struct UOptionsMenu_C_HandleSettingsSaveComplete_Params
{
};

// Function OptionsMenu.OptionsMenu_C.OnDeactivated
struct UOptionsMenu_C_OnDeactivated_Params
{
};

// Function OptionsMenu.OptionsMenu_C.LoadTabClasses
struct UOptionsMenu_C_LoadTabClasses_Params
{
};

// Function OptionsMenu.OptionsMenu_C.ResetVideoOptionsTimerDelegate
struct UOptionsMenu_C_ResetVideoOptionsTimerDelegate_Params
{
};

// Function OptionsMenu.OptionsMenu_C.ShowResetDefaultConfirmation
struct UOptionsMenu_C_ShowResetDefaultConfirmation_Params
{
};

// Function OptionsMenu.OptionsMenu_C.ShowLangaugeConfirmation
struct UOptionsMenu_C_ShowLangaugeConfirmation_Params
{
};

// Function OptionsMenu.OptionsMenu_C.ShowInputReset DefaultConfirmation
struct UOptionsMenu_C_ShowInputReset_DefaultConfirmation_Params
{
};

// Function OptionsMenu.OptionsMenu_C.OnHandleApply
struct UOptionsMenu_C_OnHandleApply_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleTabGamePadActionsNeedBinds
struct UOptionsMenu_C_HandleTabGamePadActionsNeedBinds_Params
{
	TArray<struct FText>                               ScreenLabels;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.OnSettingsApplied__DelegateSignature
struct UOptionsMenu_C_OnSettingsApplied__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
