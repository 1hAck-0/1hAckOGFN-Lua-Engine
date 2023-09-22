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

// Function PublishModal.PublishModal_C.OnMouseButtonDown_1
struct UPublishModal_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PublishModal.PublishModal_C.OnTextChanged_Event_1
struct UPublishModal_C_OnTextChanged_Event_1_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PublishModal.PublishModal_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent
struct UPublishModal_C_BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PublishModal.PublishModal_C.Construct
struct UPublishModal_C_Construct_Params
{
};

// Function PublishModal.PublishModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent
struct UPublishModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PublishModal.PublishModal_C.CustomEvent_1
struct UPublishModal_C_CustomEvent_1_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PublishModal.PublishModal_C.OnActivated
struct UPublishModal_C_OnActivated_Params
{
};

// Function PublishModal.PublishModal_C.OnValidCheckComplete
struct UPublishModal_C_OnValidCheckComplete_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PublishModal.PublishModal_C.OnPublishError
struct UPublishModal_C_OnPublishError_Params
{
};

// Function PublishModal.PublishModal_C.BndEvt__Button_Submit_K2Node_ComponentBoundEvent
struct UPublishModal_C_BndEvt__Button_Submit_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PublishModal.PublishModal_C.BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent
struct UPublishModal_C_BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PublishModal.PublishModal_C.OnPublishBegin
struct UPublishModal_C_OnPublishBegin_Params
{
};

// Function PublishModal.PublishModal_C.OnCodeConfirmation
struct UPublishModal_C_OnCodeConfirmation_Params
{
};

// Function PublishModal.PublishModal_C.ExecuteUbergraph_PublishModal
struct UPublishModal_C_ExecuteUbergraph_PublishModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
