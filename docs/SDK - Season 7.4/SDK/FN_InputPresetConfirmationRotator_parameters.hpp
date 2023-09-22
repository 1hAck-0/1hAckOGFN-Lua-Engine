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

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Show Param Name
struct UInputPresetConfirmationRotator_C_Show_Param_Name_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Update Size
struct UInputPresetConfirmationRotator_C_Update_Size_Params
{
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.OnFocusReceived
struct UInputPresetConfirmationRotator_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Update Options
struct UInputPresetConfirmationRotator_C_Update_Options_Params
{
	TArray<struct FText>                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Center on Widget
struct UInputPresetConfirmationRotator_C_Center_on_Widget_Params
{
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Initialize
struct UInputPresetConfirmationRotator_C_Initialize_Params
{
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Update Row Selector
struct UInputPresetConfirmationRotator_C_Update_Row_Selector_Params
{
	int                                                Currently_Selected;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Construct
struct UInputPresetConfirmationRotator_C_Construct_Params
{
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent
struct UInputPresetConfirmationRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent
struct UInputPresetConfirmationRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent
struct UInputPresetConfirmationRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.PreConstruct
struct UInputPresetConfirmationRotator_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.ExecuteUbergraph_InputPresetConfirmationRotator
struct UInputPresetConfirmationRotator_C_ExecuteUbergraph_InputPresetConfirmationRotator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
