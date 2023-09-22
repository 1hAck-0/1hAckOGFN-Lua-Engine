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

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.GetListItemObject
struct UOptionsMenuRowSelector_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Hide Tooltip
struct UOptionsMenuRowSelector_C_Hide_Tooltip_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Set Selection Required
struct UOptionsMenuRowSelector_C_Set_Selection_Required_Params
{
	bool                                               Selection_Required;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.On Get Menu Content
struct UOptionsMenuRowSelector_C_On_Get_Menu_Content_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Show Tooltip
struct UOptionsMenuRowSelector_C_Show_Tooltip_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.DisableOption
struct UOptionsMenuRowSelector_C_DisableOption_Params
{
	int                                                OptionIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered
struct UOptionsMenuRowSelector_C_Button_Hovered_Params
{
	class UCommonButton*                               Button_Hovered;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows
struct UOptionsMenuRowSelector_C_Deselect_All_Rows_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector
struct UOptionsMenuRowSelector_C_Update_Row_Selector_Params
{
	int                                                Tab_Number;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector
struct UOptionsMenuRowSelector_C_Initialize_Row_Selector_Params
{
	struct FText                                       Row_Text;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FText>                               Buttons;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FText>                               Hover_Texts;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Require_Selection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonTextBlock*                            Tab_Tooltip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BP_OnEntryReleased
struct UOptionsMenuRowSelector_C_BP_OnEntryReleased_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BP_OnItemExpansionChanged
struct UOptionsMenuRowSelector_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BP_OnItemSelectionChanged
struct UOptionsMenuRowSelector_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct
struct UOptionsMenuRowSelector_C_Construct_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave
struct UOptionsMenuRowSelector_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct
struct UOptionsMenuRowSelector_C_Destruct_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct
struct UOptionsMenuRowSelector_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnListItemObjectSet
struct UOptionsMenuRowSelector_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseEnter
struct UOptionsMenuRowSelector_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.UpdateSetting
struct UOptionsMenuRowSelector_C_UpdateSetting_Params
{
	class UCommonTextBlock*                            TooltipTextBlock;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.CenterOnWidget
struct UOptionsMenuRowSelector_C_CenterOnWidget_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_1
struct UOptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_1_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent
struct UOptionsMenuRowSelector_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector
struct UOptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature
struct UOptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature_Params
{
	int                                                Tab_Id;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
