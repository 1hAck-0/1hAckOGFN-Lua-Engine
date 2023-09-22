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

// Function TabAudioOptions.TabAudioOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabAudioOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabAudioOptions.TabAudioOptions_C.Construct");

	UTabAudioOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabAudioOptions.TabAudioOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabAudioOptions_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabAudioOptions.TabAudioOptions_C.UpdateOptionsTab");

	UTabAudioOptions_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabAudioOptions.TabAudioOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabAudioOptions_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabAudioOptions.TabAudioOptions_C.CenterOnTab");

	UTabAudioOptions_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabAudioOptions_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabAudioOptions.TabAudioOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent");

	UTabAudioOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabAudioOptions.TabAudioOptions_C.Setting Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabAudioOptions_C::Setting_Value_Changed(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabAudioOptions.TabAudioOptions_C.Setting Value Changed");

	UTabAudioOptions_C_Setting_Value_Changed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabAudioOptions.TabAudioOptions_C.ExecuteUbergraph_TabAudioOptions
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabAudioOptions_C::ExecuteUbergraph_TabAudioOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabAudioOptions.TabAudioOptions_C.ExecuteUbergraph_TabAudioOptions");

	UTabAudioOptions_C_ExecuteUbergraph_TabAudioOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
