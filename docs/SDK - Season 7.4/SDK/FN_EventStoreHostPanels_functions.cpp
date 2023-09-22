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

// Function EventStoreHostPanels.EventStoreHostPanels_C.Setup Details Panels
// (Public, BlueprintCallable, BlueprintEvent)

void UEventStoreHostPanels_C::Setup_Details_Panels()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventStoreHostPanels.EventStoreHostPanels_C.Setup Details Panels");

	UEventStoreHostPanels_C_Setup_Details_Panels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventStoreHostPanels_C::BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent");

	UEventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UEventStoreHostPanels_C::HandleDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventStoreHostPanels.EventStoreHostPanels_C.HandleDifferentItemToDetailSet");

	UEventStoreHostPanels_C_HandleDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventStoreHostPanels_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventStoreHostPanels.EventStoreHostPanels_C.Construct");

	UEventStoreHostPanels_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEventStoreHostPanels_C::BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent");

	UEventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.ExecuteUbergraph_EventStoreHostPanels
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventStoreHostPanels_C::ExecuteUbergraph_EventStoreHostPanels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventStoreHostPanels.EventStoreHostPanels_C.ExecuteUbergraph_EventStoreHostPanels");

	UEventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
