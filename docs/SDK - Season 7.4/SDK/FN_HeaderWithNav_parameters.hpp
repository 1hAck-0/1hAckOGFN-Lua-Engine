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

// Function HeaderWithNav.HeaderWithNav_C.SetArrowButtonState
struct UHeaderWithNav_C_SetArrowButtonState_Params
{
	bool                                               EnableLeftArrow;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableRightArrow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideInsteadOfEnable;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.IncludeDefenders
struct UHeaderWithNav_C_IncludeDefenders_Params
{
	bool                                               IncludeDefenders;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.UpdateIndex
struct UHeaderWithNav_C_UpdateIndex_Params
{
	bool                                               Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.SetIndex
struct UHeaderWithNav_C_SetIndex_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.SetTextAndUpdate
struct UHeaderWithNav_C_SetTextAndUpdate_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HeaderWithNav.HeaderWithNav_C.Update
struct UHeaderWithNav_C_Update_Params
{
	bool                                               IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.Construct
struct UHeaderWithNav_C_Construct_Params
{
};

// Function HeaderWithNav.HeaderWithNav_C.HandleInputMethodChanged
struct UHeaderWithNav_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent
struct UHeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.PreConstruct
struct UHeaderWithNav_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent
struct UHeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent
struct UHeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.ExecuteUbergraph_HeaderWithNav
struct UHeaderWithNav_C_ExecuteUbergraph_HeaderWithNav_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.CycleRightPressed__DelegateSignature
struct UHeaderWithNav_C_CycleRightPressed__DelegateSignature_Params
{
};

// Function HeaderWithNav.HeaderWithNav_C.CycleLeftPressed__DelegateSignature
struct UHeaderWithNav_C_CycleLeftPressed__DelegateSignature_Params
{
};

// Function HeaderWithNav.HeaderWithNav_C.ButtonPressed__DelegateSignature
struct UHeaderWithNav_C_ButtonPressed__DelegateSignature_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.BackButtonPressed__DelegateSignature
struct UHeaderWithNav_C_BackButtonPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
