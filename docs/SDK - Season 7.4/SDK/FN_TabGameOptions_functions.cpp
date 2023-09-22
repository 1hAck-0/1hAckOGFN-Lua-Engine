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

// Function TabGameOptions.TabGameOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabGameOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptions.TabGameOptions_C.Construct");

	UTabGameOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptions.TabGameOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGameOptions_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptions.TabGameOptions_C.UpdateOptionsTab");

	UTabGameOptions_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptions.TabGameOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGameOptions_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptions.TabGameOptions_C.CenterOnTab");

	UTabGameOptions_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptions.TabGameOptions_C.Tab Settings Changed
// (BlueprintCallable, BlueprintEvent)

void UTabGameOptions_C::Tab_Settings_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptions.TabGameOptions_C.Tab Settings Changed");

	UTabGameOptions_C_Tab_Settings_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptions.TabGameOptions_C.BndEvt__CommonWidgetSwitcher
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGameOptions_C::BndEvt__CommonWidgetSwitcher(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptions.TabGameOptions_C.BndEvt__CommonWidgetSwitcher");

	UTabGameOptions_C_BndEvt__CommonWidgetSwitcher_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptions.TabGameOptions_C.BndEvt__GameTabs_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabGameOptions_C::BndEvt__GameTabs_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptions.TabGameOptions_C.BndEvt__GameTabs_K2Node_ComponentBoundEvent");

	UTabGameOptions_C_BndEvt__GameTabs_K2Node_ComponentBoundEvent_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptions.TabGameOptions_C.ExecuteUbergraph_TabGameOptions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGameOptions_C::ExecuteUbergraph_TabGameOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptions.TabGameOptions_C.ExecuteUbergraph_TabGameOptions");

	UTabGameOptions_C_ExecuteUbergraph_TabGameOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
