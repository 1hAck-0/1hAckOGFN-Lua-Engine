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

// Function OptionsMenuSetting.OptionsMenuSetting_C.GetListItemObject
struct UOptionsMenuSetting_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateVisuals
struct UOptionsMenuSetting_C_UpdateVisuals_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSettingsValueToSliderValue
struct UOptionsMenuSetting_C_ConvertSettingsValueToSliderValue_Params
{
	float                                              SettingsValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSliderTexture
struct UOptionsMenuSetting_C_UpdateSliderTexture_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSliderValueToSettingsValue
struct UOptionsMenuSetting_C_ConvertSliderValueToSettingsValue_Params
{
	float                                              SliderValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SettingsValue;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.SetDarkTabStyle
struct UOptionsMenuSetting_C_SetDarkTabStyle_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.SetSliderTextRenderScale
struct UOptionsMenuSetting_C_SetSliderTextRenderScale_Params
{
	float                                              Scale_Normalized;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Hide Tooltip
struct UOptionsMenuSetting_C_Hide_Tooltip_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Show Tooltip
struct UOptionsMenuSetting_C_Show_Tooltip_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnGetMenuContent
struct UOptionsMenuSetting_C_OnGetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.HandlePawnSet
struct UOptionsMenuSetting_C_HandlePawnSet_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSize
struct UOptionsMenuSetting_C_UpdateSize_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnEntryReleased
struct UOptionsMenuSetting_C_BP_OnEntryReleased_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemExpansionChanged
struct UOptionsMenuSetting_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemSelectionChanged
struct UOptionsMenuSetting_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Construct
struct UOptionsMenuSetting_C_Construct_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseLeave
struct UOptionsMenuSetting_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseEnter
struct UOptionsMenuSetting_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent
struct UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnListItemObjectSet
struct UOptionsMenuSetting_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent
struct UOptionsMenuSetting_C_BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent
struct UOptionsMenuSetting_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSetting
struct UOptionsMenuSetting_C_UpdateSetting_Params
{
	class UCommonTextBlock*                            TooltipTextBlock;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.CenterOnWidget
struct UOptionsMenuSetting_C_CenterOnWidget_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Refresh
struct UOptionsMenuSetting_C_Refresh_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.ExecuteUbergraph_OptionsMenuSetting
struct UOptionsMenuSetting_C_ExecuteUbergraph_OptionsMenuSetting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
