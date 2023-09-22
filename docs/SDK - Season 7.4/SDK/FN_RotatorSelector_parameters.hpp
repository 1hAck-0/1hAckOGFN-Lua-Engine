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

// Function RotatorSelector.RotatorSelector_C.Show Param Name
struct URotatorSelector_C_Show_Param_Name_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.Update Size
struct URotatorSelector_C_Update_Size_Params
{
};

// Function RotatorSelector.RotatorSelector_C.OnFocusReceived
struct URotatorSelector_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RotatorSelector.RotatorSelector_C.Update Options
struct URotatorSelector_C_Update_Options_Params
{
	TArray<struct FText>                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RotatorSelector.RotatorSelector_C.Center on Widget
struct URotatorSelector_C_Center_on_Widget_Params
{
};

// Function RotatorSelector.RotatorSelector_C.Initialize
struct URotatorSelector_C_Initialize_Params
{
	struct FText                                       Display_Text;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FText>                               Options;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Hover_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            Tab_Tooltip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.Update Row Selector
struct URotatorSelector_C_Update_Row_Selector_Params
{
	int                                                Currently_Selected;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.Construct
struct URotatorSelector_C_Construct_Params
{
};

// Function RotatorSelector.RotatorSelector_C.OnMouseLeave
struct URotatorSelector_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RotatorSelector.RotatorSelector_C.OnMouseEnter
struct URotatorSelector_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RotatorSelector.RotatorSelector_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent
struct URotatorSelector_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent
struct URotatorSelector_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent
struct URotatorSelector_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.PreConstruct
struct URotatorSelector_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.ExecuteUbergraph_RotatorSelector
struct URotatorSelector_C_ExecuteUbergraph_RotatorSelector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.Selection Changed__DelegateSignature
struct URotatorSelector_C_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
