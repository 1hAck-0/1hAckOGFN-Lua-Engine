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

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.PlayerCapsuleSizes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_Travel_C::PlayerCapsuleSizes(float* Radius, float* HalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.PlayerCapsuleSizes");

	UGA_SpookyMist_Travel_C_PlayerCapsuleSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
	if (HalfHeight != nullptr)
		*HalfHeight = params.HalfHeight;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.SetDashStartEndAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPoint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_Travel_C::SetDashStartEndAndDirection(struct FVector* StartPoint, struct FVector* EndPoint, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.SetDashStartEndAndDirection");

	UGA_SpookyMist_Travel_C_SetDashStartEndAndDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;
	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.HandlePawnDetachRC
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::HandlePawnDetachRC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.HandlePawnDetachRC");

	UGA_SpookyMist_Travel_C_HandlePawnDetachRC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.OnFinish
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::OnFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.OnFinish");

	UGA_SpookyMist_Travel_C_OnFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Completed_BA1318F5441CE862ADFAB5BA78450BAF
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_Travel_C::Completed_BA1318F5441CE862ADFAB5BA78450BAF(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Completed_BA1318F5441CE862ADFAB5BA78450BAF");

	UGA_SpookyMist_Travel_C_Completed_BA1318F5441CE862ADFAB5BA78450BAF_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Cancelled_BA1318F5441CE862ADFAB5BA78450BAF
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_Travel_C::Cancelled_BA1318F5441CE862ADFAB5BA78450BAF(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Cancelled_BA1318F5441CE862ADFAB5BA78450BAF");

	UGA_SpookyMist_Travel_C_Cancelled_BA1318F5441CE862ADFAB5BA78450BAF_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Triggered_BA1318F5441CE862ADFAB5BA78450BAF
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_Travel_C::Triggered_BA1318F5441CE862ADFAB5BA78450BAF(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Triggered_BA1318F5441CE862ADFAB5BA78450BAF");

	UGA_SpookyMist_Travel_C_Triggered_BA1318F5441CE862ADFAB5BA78450BAF_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.EventReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_Travel_C::EventReceived(struct FGameplayEventData Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.EventReceived");

	UGA_SpookyMist_Travel_C_EventReceived_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SpookyMist_Travel_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_ActivateAbilityFromEvent");

	UGA_SpookyMist_Travel_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_Travel_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_OnEndAbility");

	UGA_SpookyMist_Travel_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.CheckIfStillColliding
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::CheckIfStillColliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.CheckIfStillColliding");

	UGA_SpookyMist_Travel_C_CheckIfStillColliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.On DBNO
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::On_DBNO()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.On DBNO");

	UGA_SpookyMist_Travel_C_On_DBNO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.DestroyObjects
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::DestroyObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.DestroyObjects");

	UGA_SpookyMist_Travel_C_DestroyObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.ExecuteUbergraph_GA_SpookyMist_Travel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_Travel_C::ExecuteUbergraph_GA_SpookyMist_Travel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.ExecuteUbergraph_GA_SpookyMist_Travel");

	UGA_SpookyMist_Travel_C_ExecuteUbergraph_GA_SpookyMist_Travel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
