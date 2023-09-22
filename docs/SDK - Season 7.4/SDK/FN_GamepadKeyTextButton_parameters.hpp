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

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle
struct UGamepadKeyTextButton_C_SetNonInteractableStyle_Params
{
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment
struct UGamepadKeyTextButton_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment
struct UGamepadKeyTextButton_C_UpdateContentAlignment_Params
{
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet
struct UGamepadKeyTextButton_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetData
struct UGamepadKeyTextButton_C_SetData_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DescText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct
struct UGamepadKeyTextButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton
struct UGamepadKeyTextButton_C_SetDataAndUpdateButton_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DescText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton
struct UGamepadKeyTextButton_C_UpdateButton_Params
{
	class UGamepadKeyTextButton_C*                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo
struct UGamepadKeyTextButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton
struct UGamepadKeyTextButton_C_ExecuteUbergraph_GamepadKeyTextButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button__DelegateSignature
struct UGamepadKeyTextButton_C_ChangeTheBinding_Button__DelegateSignature_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
