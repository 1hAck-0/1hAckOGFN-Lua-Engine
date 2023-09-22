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

// Function AthenaNewsModal.AthenaNewsModal_C.ShouldShowSTWUpdates
struct UAthenaNewsModal_C_ShouldShowSTWUpdates_Params
{
	bool                                               ShouldShow;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaNewsModal.AthenaNewsModal_C.ShouldShowSTWUpsellInBR
struct UAthenaNewsModal_C_ShouldShowSTWUpsellInBR_Params
{
	bool                                               ShouldShow;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaNewsModal.AthenaNewsModal_C.OnMouseButtonDown_1
struct UAthenaNewsModal_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaNewsModal.AthenaNewsModal_C.DialogResult
struct UAthenaNewsModal_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaNewsModal.AthenaNewsModal_C.ForceNewsClosed
struct UAthenaNewsModal_C_ForceNewsClosed_Params
{
};

// Function AthenaNewsModal.AthenaNewsModal_C.OnActivated
struct UAthenaNewsModal_C_OnActivated_Params
{
};

// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__IconTextButton_C
struct UAthenaNewsModal_C_BndEvt__IconTextButton_C_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent
struct UAthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaNewsModal.AthenaNewsModal_C.Construct
struct UAthenaNewsModal_C_Construct_Params
{
};

// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent
struct UAthenaNewsModal_C_BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__AthenaNews_K2Node_ComponentBoundEvent
struct UAthenaNewsModal_C_BndEvt__AthenaNews_K2Node_ComponentBoundEvent_Params
{
	EAthenaNewsStyle                                   NewStyle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent
struct UAthenaNewsModal_C_BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent
struct UAthenaNewsModal_C_BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaNewsModal.AthenaNewsModal_C.ExecuteUbergraph_AthenaNewsModal
struct UAthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
