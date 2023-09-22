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

// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.EventReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Ferret_ExitHoldEvent_C::EventReceived(struct FGameplayEventData Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.EventReceived");

	UGA_Ferret_ExitHoldEvent_C_EventReceived_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Ferret_ExitHoldEvent_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.K2_ActivateAbility");

	UGA_Ferret_ExitHoldEvent_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Ferret_ExitHoldEvent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.K2_OnEndAbility");

	UGA_Ferret_ExitHoldEvent_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.ExecuteUbergraph_GA_Ferret_ExitHoldEvent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Ferret_ExitHoldEvent_C::ExecuteUbergraph_GA_Ferret_ExitHoldEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.ExecuteUbergraph_GA_Ferret_ExitHoldEvent");

	UGA_Ferret_ExitHoldEvent_C_ExecuteUbergraph_GA_Ferret_ExitHoldEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
