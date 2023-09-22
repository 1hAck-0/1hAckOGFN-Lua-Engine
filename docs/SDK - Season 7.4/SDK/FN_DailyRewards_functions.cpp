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

// Function DailyRewards.DailyRewards_C.IsCurrentlyRunning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyRewards_C::IsCurrentlyRunning(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.IsCurrentlyRunning");

	UDailyRewards_C_IsCurrentlyRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function DailyRewards.DailyRewards_C.Handle Collect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyRewards_C::Handle_Collect(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Handle Collect");

	UDailyRewards_C_Handle_Collect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function DailyRewards.DailyRewards_C.Handle Close
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyRewards_C::Handle_Close(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Handle Close");

	UDailyRewards_C_Handle_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function DailyRewards.DailyRewards_C.PopPanelWhileInGame
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyRewards_C::PopPanelWhileInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.PopPanelWhileInGame");

	UDailyRewards_C_PopPanelWhileInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.Setup Daily Rewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDailyRewards_C::Setup_Daily_Rewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Setup Daily Rewards");

	UDailyRewards_C_Setup_Daily_Rewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UDailyRewards_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.OnActivated");

	UDailyRewards_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyRewards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Construct");

	UDailyRewards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyRewards_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.PreConstruct");

	UDailyRewards_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UDailyRewards_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.OnDeactivated");

	UDailyRewards_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyRewards_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Destruct");

	UDailyRewards_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.BndEvt__Button_Collect_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDailyRewards_C::BndEvt__Button_Collect_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.BndEvt__Button_Collect_K2Node_ComponentBoundEvent");

	UDailyRewards_C_BndEvt__Button_Collect_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDailyRewards_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent");

	UDailyRewards_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.ExecuteUbergraph_DailyRewards
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyRewards_C::ExecuteUbergraph_DailyRewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.ExecuteUbergraph_DailyRewards");

	UDailyRewards_C_ExecuteUbergraph_DailyRewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.OnDailyRewardsComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDailyRewards_C::OnDailyRewardsComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.OnDailyRewardsComplete__DelegateSignature");

	UDailyRewards_C_OnDailyRewardsComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
