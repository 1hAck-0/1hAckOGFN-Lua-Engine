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

// Function AthenaStatsTab.AthenaStatsTab_C.Init Back Action
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaStatsTab_C::Init_Back_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.Init Back Action");

	UAthenaStatsTab_C_Init_Back_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.HandleBack");

	UAthenaStatsTab_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaStatsTab.AthenaStatsTab_C.CanShowStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanShowStats                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::CanShowStats(bool* bCanShowStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.CanShowStats");

	UAthenaStatsTab_C_CanShowStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanShowStats != nullptr)
		*bCanShowStats = params.bCanShowStats;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaStatsTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnActivated");

	UAthenaStatsTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::OnQueryFinished(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished");

	UAthenaStatsTab_C_OnQueryFinished_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::BndEvt__StatsTabList_K2Node_ComponentBoundEvent(struct FName TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent");

	UAthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted
// (Event, Public, BlueprintEvent)

void UAthenaStatsTab_C::OnQueryStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted");

	UAthenaStatsTab_C_OnQueryStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaStatsTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated");

	UAthenaStatsTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaStatsTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.Construct");

	UAthenaStatsTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaStatsTab_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent");

	UAthenaStatsTab_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaStatsTab_C::BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent");

	UAthenaStatsTab_C_BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaStatsTab_C::BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent");

	UAthenaStatsTab_C_BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnInputMethodChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               bNewInputType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::OnInputMethodChanged_Event_1(ECommonInputType bNewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnInputMethodChanged_Event_1");

	UAthenaStatsTab_C_OnInputMethodChanged_Event_1_Params params;
	params.bNewInputType = bNewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::ExecuteUbergraph_AthenaStatsTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab");

	UAthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
