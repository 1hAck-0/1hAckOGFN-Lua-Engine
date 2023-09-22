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

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.HandleFeatureUnlockClosed
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFeatureUnlockAction_C::HandleFeatureUnlockClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.HandleFeatureUnlockClosed");

	ACheckFeatureUnlockAction_C_HandleFeatureUnlockClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFeatureUnlockRunning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRunning                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckFeatureUnlockAction_C::IsFeatureUnlockRunning(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFeatureUnlockRunning");

	ACheckFeatureUnlockAction_C_IsFeatureUnlockRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFrontendDailyRewardsRunning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRunning                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckFeatureUnlockAction_C::IsFrontendDailyRewardsRunning(bool* IsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFrontendDailyRewardsRunning");

	ACheckFeatureUnlockAction_C_IsFrontendDailyRewardsRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRunning != nullptr)
		*IsRunning = params.IsRunning;
}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.ShowFeatureUnlock
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFeatureUnlockAction_C::ShowFeatureUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.ShowFeatureUnlock");

	ACheckFeatureUnlockAction_C_ShowFeatureUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFeatureUnlockAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Feature_Unlock_Available       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckFeatureUnlockAction_C::IsFeatureUnlockAvailable(bool* Feature_Unlock_Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFeatureUnlockAvailable");

	ACheckFeatureUnlockAction_C_IsFeatureUnlockAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Feature_Unlock_Available != nullptr)
		*Feature_Unlock_Available = params.Feature_Unlock_Available;
}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFrontEndRewardsRunning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRunning                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckFeatureUnlockAction_C::IsFrontEndRewardsRunning(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFrontEndRewardsRunning");

	ACheckFeatureUnlockAction_C_IsFrontEndRewardsRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckFeatureUnlockAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.UserConstructionScript");

	ACheckFeatureUnlockAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckFeatureUnlockAction_C::Execute(struct FFortScriptedActionParams Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.Execute");

	ACheckFeatureUnlockAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.ExecuteUbergraph_CheckFeatureUnlockAction
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckFeatureUnlockAction_C::ExecuteUbergraph_CheckFeatureUnlockAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.ExecuteUbergraph_CheckFeatureUnlockAction");

	ACheckFeatureUnlockAction_C_ExecuteUbergraph_CheckFeatureUnlockAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
