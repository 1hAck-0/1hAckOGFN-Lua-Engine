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

// Function MTXButton.MTXButton_C.UpdateState
struct UMTXButton_C_UpdateState_Params
{
};

// Function MTXButton.MTXButton_C.Get_Button_ToolTipWidget_1
struct UMTXButton_C_Get_Button_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function MTXButton.MTXButton_C.UpdateAmount
struct UMTXButton_C_UpdateAmount_Params
{
	struct FFortPrivateAccountInfo                     FortPrivateAccountInfo;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MTXButton.MTXButton_C.Construct
struct UMTXButton_C_Construct_Params
{
};

// Function MTXButton.MTXButton_C.HandleLocalAccountInfoChanged
struct UMTXButton_C_HandleLocalAccountInfoChanged_Params
{
	struct FFortPrivateAccountInfo                     NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MTXButton.MTXButton_C.BndEvt__VBucksButton_K2Node_ComponentBoundEvent
struct UMTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MTXButton.MTXButton_C.HandleInputActionChnaged
struct UMTXButton_C_HandleInputActionChnaged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MTXButton.MTXButton_C.Destruct
struct UMTXButton_C_Destruct_Params
{
};

// Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
struct UMTXButton_C_ExecuteUbergraph_MTXButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
