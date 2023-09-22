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

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent
struct UItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent
struct UItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.OnItemCycled
struct UItemInspectCycleWidget_C_OnItemCycled_Params
{
	class UFortItem*                                   OldItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OffsetFromPreviousItem;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.ExecuteUbergraph_ItemInspectCycleWidget
struct UItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
