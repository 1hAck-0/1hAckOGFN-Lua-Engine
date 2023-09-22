// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectCycleWidget_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent");

	UItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectCycleWidget_C::BndEvt__RightButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent");

	UItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.OnItemCycled
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*               OldItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OffsetFromPreviousItem         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectCycleWidget_C::OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int OffsetFromPreviousItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.OnItemCycled");

	UItemInspectCycleWidget_C_OnItemCycled_Params params;
	params.OldItem = OldItem;
	params.NewItem = NewItem;
	params.OffsetFromPreviousItem = OffsetFromPreviousItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.ExecuteUbergraph_ItemInspectCycleWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectCycleWidget_C::ExecuteUbergraph_ItemInspectCycleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.ExecuteUbergraph_ItemInspectCycleWidget");

	UItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
