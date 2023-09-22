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

// Function OptionsMenuHeader.OptionsMenuHeader_C.GetListItemObject
struct UOptionsMenuHeader_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.HandlePawnSet
struct UOptionsMenuHeader_C_HandlePawnSet_Params
{
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.UpdateSize
struct UOptionsMenuHeader_C_UpdateSize_Params
{
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.Center on Widget
struct UOptionsMenuHeader_C_Center_on_Widget_Params
{
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemExpansionChanged
struct UOptionsMenuHeader_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemSelectionChanged
struct UOptionsMenuHeader_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.Construct
struct UOptionsMenuHeader_C_Construct_Params
{
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseLeave
struct UOptionsMenuHeader_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseEnter
struct UOptionsMenuHeader_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.OnListItemObjectSet
struct UOptionsMenuHeader_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnEntryReleased
struct UOptionsMenuHeader_C_BP_OnEntryReleased_Params
{
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.CenterOnWidget
struct UOptionsMenuHeader_C_CenterOnWidget_Params
{
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.ExecuteUbergraph_OptionsMenuHeader
struct UOptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
