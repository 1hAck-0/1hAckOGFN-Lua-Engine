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

// Function OptionsMenuRotator.OptionsMenuRotator_C.GetListItemObject
struct UOptionsMenuRotator_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.Update Display Names
struct UOptionsMenuRotator_C_Update_Display_Names_Params
{
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.Hide Tooltip
struct UOptionsMenuRotator_C_Hide_Tooltip_Params
{
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.Show Tooltip
struct UOptionsMenuRotator_C_Show_Tooltip_Params
{
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.OnGetMenuContent
struct UOptionsMenuRotator_C_OnGetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.HandlePawnSet
struct UOptionsMenuRotator_C_HandlePawnSet_Params
{
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.UpdateSize
struct UOptionsMenuRotator_C_UpdateSize_Params
{
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.BP_OnEntryReleased
struct UOptionsMenuRotator_C_BP_OnEntryReleased_Params
{
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.BP_OnItemExpansionChanged
struct UOptionsMenuRotator_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.BP_OnItemSelectionChanged
struct UOptionsMenuRotator_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.Construct
struct UOptionsMenuRotator_C_Construct_Params
{
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.OnMouseLeave
struct UOptionsMenuRotator_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.OnMouseEnter
struct UOptionsMenuRotator_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent
struct UOptionsMenuRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.OnListItemObjectSet
struct UOptionsMenuRotator_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent
struct UOptionsMenuRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent
struct UOptionsMenuRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent
struct UOptionsMenuRotator_C_BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent
struct UOptionsMenuRotator_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.UpdateSetting
struct UOptionsMenuRotator_C_UpdateSetting_Params
{
	class UCommonTextBlock*                            TooltipTextBlock;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.CenterOnWidget
struct UOptionsMenuRotator_C_CenterOnWidget_Params
{
};

// Function OptionsMenuRotator.OptionsMenuRotator_C.ExecuteUbergraph_OptionsMenuRotator
struct UOptionsMenuRotator_C_ExecuteUbergraph_OptionsMenuRotator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
