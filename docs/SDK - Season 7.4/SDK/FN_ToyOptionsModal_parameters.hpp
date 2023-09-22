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

// Function ToyOptionsModal.ToyOptionsModal_C.SetItemInfo
struct UToyOptionsModal_C_SetItemInfo_Params
{
	struct FText                                       ItemName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ItemDescription;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ToyOptionsModal.ToyOptionsModal_C.OnActivated
struct UToyOptionsModal_C_OnActivated_Params
{
};

// Function ToyOptionsModal.ToyOptionsModal_C.OnInputModeChanged
struct UToyOptionsModal_C_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToyOptionsModal.ToyOptionsModal_C.Close
struct UToyOptionsModal_C_Close_Params
{
};

// Function ToyOptionsModal.ToyOptionsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
struct UToyOptionsModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToyOptionsModal.ToyOptionsModal_C.HandleCancelClicked
struct UToyOptionsModal_C_HandleCancelClicked_Params
{
};

// Function ToyOptionsModal.ToyOptionsModal_C.InitForOptionsComponent
struct UToyOptionsModal_C_InitForOptionsComponent_Params
{
	class UFortActorOptionsComponent*                  OptionsComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToyOptionsModal.ToyOptionsModal_C.OnDeactivated
struct UToyOptionsModal_C_OnDeactivated_Params
{
};

// Function ToyOptionsModal.ToyOptionsModal_C.ExecuteUbergraph_ToyOptionsModal
struct UToyOptionsModal_C_ExecuteUbergraph_ToyOptionsModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
