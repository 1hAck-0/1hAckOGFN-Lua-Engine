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

// Function SimplePipButton.SimplePipButton_C.UpdateInputActionLayout
struct USimplePipButton_C_UpdateInputActionLayout_Params
{
};

// Function SimplePipButton.SimplePipButton_C.UpdateStyle
struct USimplePipButton_C_UpdateStyle_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimplePipButton.SimplePipButton_C.InitializeButton
struct USimplePipButton_C_InitializeButton_Params
{
};

// Function SimplePipButton.SimplePipButton_C.UpdateTextAndStyle
struct USimplePipButton_C_UpdateTextAndStyle_Params
{
};

// Function SimplePipButton.SimplePipButton_C.PreConstruct
struct USimplePipButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimplePipButton.SimplePipButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent
struct USimplePipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimplePipButton.SimplePipButton_C.OnTriggeredInputActionChanged
struct USimplePipButton_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle                         NewTriggeredAction;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SimplePipButton.SimplePipButton_C.OnActionProgress
struct USimplePipButton_C_OnActionProgress_Params
{
	float                                              HeldPercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimplePipButton.SimplePipButton_C.OnActionComplete
struct USimplePipButton_C_OnActionComplete_Params
{
};

// Function SimplePipButton.SimplePipButton_C.Construct
struct USimplePipButton_C_Construct_Params
{
};

// Function SimplePipButton.SimplePipButton_C.BP_OnHovered
struct USimplePipButton_C_BP_OnHovered_Params
{
};

// Function SimplePipButton.SimplePipButton_C.BP_OnUnhovered
struct USimplePipButton_C_BP_OnUnhovered_Params
{
};

// Function SimplePipButton.SimplePipButton_C.ExecuteUbergraph_SimplePipButton
struct USimplePipButton_C_ExecuteUbergraph_SimplePipButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
