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

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.Start
struct UModalTutorialOverlay_C_Start_Params
{
};

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.SetIndex
struct UModalTutorialOverlay_C_SetIndex_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.SetPosition
struct UModalTutorialOverlay_C_SetPosition_Params
{
	TEnumAsByte<EScreenPositionEnum>                   InPosition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.SetupData
struct UModalTutorialOverlay_C_SetupData_Params
{
	TArray<struct FText>                               InTitle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FText>                               InDescription;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.UpdatePosition
struct UModalTutorialOverlay_C_UpdatePosition_Params
{
	TEnumAsByte<EScreenPositionEnum>                   InPosition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.ShowNext
struct UModalTutorialOverlay_C_ShowNext_Params
{
};

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent
struct UModalTutorialOverlay_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.Construct
struct UModalTutorialOverlay_C_Construct_Params
{
};

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.OnActivated
struct UModalTutorialOverlay_C_OnActivated_Params
{
};

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.ExecuteUbergraph_ModalTutorialOverlay
struct UModalTutorialOverlay_C_ExecuteUbergraph_ModalTutorialOverlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
