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

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowDeadZoneTab
struct UGamepadMappingInfo_v3_C_ShowDeadZoneTab_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideDeadZoneTab
struct UGamepadMappingInfo_v3_C_HideDeadZoneTab_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DoCustomNavigation_1
struct UGamepadMappingInfo_v3_C_DoCustomNavigation_1_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft
struct UGamepadMappingInfo_v3_C_GamepadMappingInfoNavLeft_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab
struct UGamepadMappingInfo_v3_C_ShowEditModeTab_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab
struct UGamepadMappingInfo_v3_C_HideEditModeTab_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown_1
struct UGamepadMappingInfo_v3_C_On_Image_LightBox_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey
struct UGamepadMappingInfo_v3_C_GetCustomButtonDataForKey_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ActionName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DescText;                                                 // (Parm, OutParm)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode
struct UGamepadMappingInfo_v3_C_SetTextForMode_Params
{
	EFortInputActionGroup                              Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray
struct UGamepadMappingInfo_v3_C_SetButtonTextLabelsFromTextArray_Params
{
	TArray<struct FText>                               Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTW_BuilderProBuild_Params
{
	TArray<struct FText>                               ButtonTextLabels;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage
struct UGamepadMappingInfo_v3_C_GetControllerImage_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines
struct UGamepadMappingInfo_v3_C_ClearAllComboTextLines_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProCombat_Params
{
	TArray<struct FText>                               ButtonTextLabels;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine
struct UGamepadMappingInfo_v3_C_SetTextFieldVisibilityForExtraLine_Params
{
	class UTextBlock*                                  TextWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
struct UGamepadMappingInfo_v3_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params
{
	class UTextBlock*                                  TextWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   DesiredSlateVisibility;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProBuild_Params
{
	TArray<struct FText>                               ButtonTextLabels;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonLabelTextWidgets_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Combat_Mode_Params
{
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Build_Mode_Params
{
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged
struct UGamepadMappingInfo_v3_C_HandleConfigChanged_Params
{
	EFortInputActionGroup                              Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena
struct UGamepadMappingInfo_v3_C_HandleConfigChanged_Athena_Params
{
	EFortInputActionGroup                              Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged
struct UGamepadMappingInfo_v3_C_OnConfigChanged_Params
{
	EFortInputActionGroup                              Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping
struct UGamepadMappingInfo_v3_C_Update_Displayed_Mapping_Params
{
	int                                                Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortInputActionGroup                              Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Configuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D
struct UGamepadMappingInfo_v3_C_OnLoaded_CDBC1B27496027B96D10BC9A64224F3D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct
struct UGamepadMappingInfo_v3_C_Construct_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images
struct UGamepadMappingInfo_v3_C_Update_Controller_Images_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_OnButtonClicked_Bind_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons
struct UGamepadMappingInfo_v3_C_UpdateCustomButtons_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabSelected
struct UGamepadMappingInfo_v3_C_DeadZoneTabSelected_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabDeselected
struct UGamepadMappingInfo_v3_C_DeadZoneTabDeselected_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneMoveResetButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_DeadzoneMoveResetButtonClicked_Bind_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneLookResetButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_DeadzoneLookResetButtonClicked_Bind_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3
struct UGamepadMappingInfo_v3_C_ExecuteUbergraph_GamepadMappingInfo_v3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature
struct UGamepadMappingInfo_v3_C_CustomButtonNavLeft__DelegateSignature_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature
struct UGamepadMappingInfo_v3_C_Image_LightboxClicked__DelegateSignature_Params
{
};

// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature
struct UGamepadMappingInfo_v3_C_CustomKeySelected__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
