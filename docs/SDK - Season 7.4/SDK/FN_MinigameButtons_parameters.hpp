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

// Function MinigameButtons.MinigameButtons_C.UpdateButtonsFromButtonState
struct UMinigameButtons_C_UpdateButtonsFromButtonState_Params
{
};

// Function MinigameButtons.MinigameButtons_C.SetButtonState
struct UMinigameButtons_C_SetButtonState_Params
{
	TEnumAsByte<EMinigameButtonsState>                 Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.CenterOnCurrentButton
struct UMinigameButtons_C_CenterOnCurrentButton_Params
{
};

// Function MinigameButtons.MinigameButtons_C.UpdateButtons
struct UMinigameButtons_C_UpdateButtons_Params
{
	class AFortMinigameSettingsBuilding*               Machine;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent
struct UMinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton_K2Node_ComponentBoundEvent
struct UMinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.SetWidgetSwitcherIndex
struct UMinigameButtons_C_SetWidgetSwitcherIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent
struct UMinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent
struct UMinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.OnInitialized
struct UMinigameButtons_C_OnInitialized_Params
{
};

// Function MinigameButtons.MinigameButtons_C.ExecuteUbergraph_MinigameButtons
struct UMinigameButtons_C_ExecuteUbergraph_MinigameButtons_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.EndButtonUnhovered__DelegateSignature
struct UMinigameButtons_C_EndButtonUnhovered__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.StartButtonUnhovered__DelegateSignature
struct UMinigameButtons_C_StartButtonUnhovered__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.EndButtonHovered__DelegateSignature
struct UMinigameButtons_C_EndButtonHovered__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.StartButtonHovered__DelegateSignature
struct UMinigameButtons_C_StartButtonHovered__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinigameButtons.MinigameButtons_C.EndButtonClicked__DelegateSignature
struct UMinigameButtons_C_EndButtonClicked__DelegateSignature_Params
{
};

// Function MinigameButtons.MinigameButtons_C.StartButtonClicked__DelegateSignature
struct UMinigameButtons_C_StartButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
