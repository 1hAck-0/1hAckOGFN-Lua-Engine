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

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleClear
struct UGamepadCustomActionSelectorPanel_v3_C_HandleClear_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CreateCustomListItem
struct UGamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortInputActionGroup                              InputActionGroup;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGamepadKeyTextButton_C*                     ReturnItem;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleBack
struct UGamepadCustomActionSelectorPanel_v3_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.Construct
struct UGamepadCustomActionSelectorPanel_v3_C_Construct_Params
{
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.UpdatePanel
struct UGamepadCustomActionSelectorPanel_v3_C_UpdatePanel_Params
{
	TArray<class UFortOptionsMenuInputData*>           InputData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnItemClicked_Bind
struct UGamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.OnActivated
struct UGamepadCustomActionSelectorPanel_v3_C_OnActivated_Params
{
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.OnDeactivated
struct UGamepadCustomActionSelectorPanel_v3_C_OnDeactivated_Params
{
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BndEvt__Button_Clear_K2Node_ComponentBoundEvent
struct UGamepadCustomActionSelectorPanel_v3_C_BndEvt__Button_Clear_K2Node_ComponentBoundEvent_Params
{
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3
struct UGamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClearButton__DelegateSignature
struct UGamepadCustomActionSelectorPanel_v3_C_CustomClearButton__DelegateSignature_Params
{
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClosedUsingBack__DelegateSignature
struct UGamepadCustomActionSelectorPanel_v3_C_CustomClosedUsingBack__DelegateSignature_Params
{
};

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomActionSelected__DelegateSignature
struct UGamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature_Params
{
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
