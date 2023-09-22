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

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadInfoSelectorNavRight
struct UTabGamePadConfig_v3_C_GamepadInfoSelectorNavRight_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.AreWeOkayWithThisChange
struct UTabGamePadConfig_v3_C_AreWeOkayWithThisChange_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsOkay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorFocus
struct UTabGamePadConfig_v3_C_HandleGamepadInfoSelectorFocus_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.NavigateToSelectedConfig
struct UTabGamePadConfig_v3_C_NavigateToSelectedConfig_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomClearVisibilityForInputType
struct UTabGamePadConfig_v3_C_ChangeCustomClearVisibilityForInputType_Params
{
	ECommonInputType                                   InputType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomResetVisibilityForInputType
struct UTabGamePadConfig_v3_C_ChangeCustomResetVisibilityForInputType_Params
{
	ECommonInputType                                   InputType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorApply
struct UTabGamePadConfig_v3_C_HandleGamepadInfoSelectorApply_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorBack
struct UTabGamePadConfig_v3_C_HandleGamepadInfoSelectorBack_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomTabListVisibilityForInputType
struct UTabGamePadConfig_v3_C_ChangeCustomTabListVisibilityForInputType_Params
{
	ECommonInputType                                   Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CreateCustomResetToDefaultList
struct UTabGamePadConfig_v3_C_CreateCustomResetToDefaultList_Params
{
	TArray<struct FConfirmationDialogAction>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CloseCustomActionsPanel
struct UTabGamePadConfig_v3_C_CloseCustomActionsPanel_Params
{
	bool                                               FocusLastButton;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SelectSameItemInActionsList
struct UTabGamePadConfig_v3_C_SelectSameItemInActionsList_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SetupDisplayObject
struct UTabGamePadConfig_v3_C_SetupDisplayObject_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UGamepadKeyTextButton_C*                     DisplayObject;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsCustomConfig
struct UTabGamePadConfig_v3_C_IsCustomConfig_Params
{
	int                                                PresetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsConsole
struct UTabGamePadConfig_v3_C_IsConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadMappingInfoChange
struct UTabGamePadConfig_v3_C_HandleGamepadMappingInfoChange_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GetCurrentPlatformIndex
struct UTabGamePadConfig_v3_C_GetCurrentPlatformIndex_Params
{
	int                                                PlatformIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateData
struct UTabGamePadConfig_v3_C_UpdateData_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstructData
struct UTabGamePadConfig_v3_C_PreConstructData_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.InitializeData
struct UTabGamePadConfig_v3_C_InitializeData_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult
struct UTabGamePadConfig_v3_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Gamepad Config Changed
struct UTabGamePadConfig_v3_C_Gamepad_Config_Changed_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadPlatformConfigChanged
struct UTabGamePadConfig_v3_C_GamepadPlatformConfigChanged_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CenterOnTab
struct UTabGamePadConfig_v3_C_CenterOnTab_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateOptionsTab
struct UTabGamePadConfig_v3_C_UpdateOptionsTab_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomDoResetToDefault
struct UTabGamePadConfig_v3_C_CustomDoResetToDefault_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomKeySelected_Bind
struct UTabGamePadConfig_v3_C_CustomKeySelected_Bind_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomActionSelected_Bind
struct UTabGamePadConfig_v3_C_CustomActionSelected_Bind_Params
{
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClosedUsingBack_Bind
struct UTabGamePadConfig_v3_C_CustomClosedUsingBack_Bind_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClearButton_Bind
struct UTabGamePadConfig_v3_C_CustomClearButton_Bind_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ModesTabSelected_Bind
struct UTabGamePadConfig_v3_C_ModesTabSelected_Bind_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Construct
struct UTabGamePadConfig_v3_C_Construct_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleUsingGamepadChanged
struct UTabGamePadConfig_v3_C_HandleUsingGamepadChanged_Params
{
	ECommonInputType                                   NewInputType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabDeactivated_Bind
struct UTabGamePadConfig_v3_C_OnTabDeactivated_Bind_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabActivated_Bind
struct UTabGamePadConfig_v3_C_OnTabActivated_Bind_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneLookSettingValueChanged_Bind
struct UTabGamePadConfig_v3_C_DeadZoneLookSettingValueChanged_Bind_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneMoveSettingValueChanged_Bind
struct UTabGamePadConfig_v3_C_DeadZoneMoveSettingValueChanged_Bind_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstruct
struct UTabGamePadConfig_v3_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ExecuteUbergraph_TabGamePadConfig_v3
struct UTabGamePadConfig_v3_C_ExecuteUbergraph_TabGamePadConfig_v3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadActionsThatNeedBinds__DelegateSignature
struct UTabGamePadConfig_v3_C_TabGamePadActionsThatNeedBinds__DelegateSignature_Params
{
	TArray<struct FText>                               ScreenLabels;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigApply__DelegateSignature
struct UTabGamePadConfig_v3_C_TabGamePadConfigApply__DelegateSignature_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigBack__DelegateSignature
struct UTabGamePadConfig_v3_C_TabGamePadConfigBack__DelegateSignature_Params
{
};

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadMappingInfoChanged__DelegateSignature
struct UTabGamePadConfig_v3_C_GamepadMappingInfoChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
