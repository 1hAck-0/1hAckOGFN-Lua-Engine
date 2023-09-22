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

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.EndGame
struct UCreativeMinigameGameKnobsModal_C_EndGame_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Player in Read Only Volume?
struct UCreativeMinigameGameKnobsModal_C_Player_in_Read_Only_Volume__Params
{
	bool                                               bInReadOnlyVolume;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnFocusReceived
struct UCreativeMinigameGameKnobsModal_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnTouchStarted
struct UCreativeMinigameGameKnobsModal_C_OnTouchStarted_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnActivated
struct UCreativeMinigameGameKnobsModal_C_OnActivated_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnInputModeChanged
struct UCreativeMinigameGameKnobsModal_C_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Close
struct UCreativeMinigameGameKnobsModal_C_Close_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
struct UCreativeMinigameGameKnobsModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.HandleCancelClicked
struct UCreativeMinigameGameKnobsModal_C_HandleCancelClicked_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnMinigameSettingsMachineSet
struct UCreativeMinigameGameKnobsModal_C_OnMinigameSettingsMachineSet_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__IconTextButton_C
struct UCreativeMinigameGameKnobsModal_C_BndEvt__IconTextButton_C_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.Construct
struct UCreativeMinigameGameKnobsModal_C_Construct_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.AnimateIn
struct UCreativeMinigameGameKnobsModal_C_AnimateIn_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnInit
struct UCreativeMinigameGameKnobsModal_C_OnInit_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnMinigameStateChanged
struct UCreativeMinigameGameKnobsModal_C_OnMinigameStateChanged_Params
{
	EFortMinigameState                                 MinigameState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent
struct UCreativeMinigameGameKnobsModal_C_BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.UpdateStartEndButtons
struct UCreativeMinigameGameKnobsModal_C_UpdateStartEndButtons_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.HandleNoOptionsLoaded
struct UCreativeMinigameGameKnobsModal_C_HandleNoOptionsLoaded_Params
{
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.ExecuteUbergraph_CreativeMinigameGameKnobsModal
struct UCreativeMinigameGameKnobsModal_C_ExecuteUbergraph_CreativeMinigameGameKnobsModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeMinigameGameKnobsModal.CreativeMinigameGameKnobsModal_C.OnClose__DelegateSignature
struct UCreativeMinigameGameKnobsModal_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
