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

// Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonUp
struct UEventsSimpleButton_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonDown
struct UEventsSimpleButton_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EventsSimpleButton.EventsSimpleButton_C.Construct
struct UEventsSimpleButton_C_Construct_Params
{
};

// Function EventsSimpleButton.EventsSimpleButton_C.BP_OnHovered
struct UEventsSimpleButton_C_BP_OnHovered_Params
{
};

// Function EventsSimpleButton.EventsSimpleButton_C.BP_OnUnhovered
struct UEventsSimpleButton_C_BP_OnUnhovered_Params
{
};

// Function EventsSimpleButton.EventsSimpleButton_C.BP_OnClicked
struct UEventsSimpleButton_C_BP_OnClicked_Params
{
};

// Function EventsSimpleButton.EventsSimpleButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent
struct UEventsSimpleButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventsSimpleButton.EventsSimpleButton_C.PreConstruct
struct UEventsSimpleButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventsSimpleButton.EventsSimpleButton_C.InputTypeChanged
struct UEventsSimpleButton_C_InputTypeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventsSimpleButton.EventsSimpleButton_C.ExecuteUbergraph_EventsSimpleButton
struct UEventsSimpleButton_C_ExecuteUbergraph_EventsSimpleButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
