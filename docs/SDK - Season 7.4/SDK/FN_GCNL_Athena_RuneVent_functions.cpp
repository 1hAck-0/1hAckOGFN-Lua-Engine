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

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Athena_RuneVent_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.OnRemove");

	AGCNL_Athena_RuneVent_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.Activated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_RuneVent_C::Activated(class AActor* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.Activated");

	AGCNL_Athena_RuneVent_C_Activated_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Athena_RuneVent_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.WhileActive");

	AGCNL_Athena_RuneVent_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.UserConstructionScript");

	AGCNL_Athena_RuneVent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCNL_Athena_RuneVent_C::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.K2_HandleGameplayCue");

	AGCNL_Athena_RuneVent_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_RuneVent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ReceiveTick");

	AGCNL_Athena_RuneVent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ReceiveBeginPlay");

	AGCNL_Athena_RuneVent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::ExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ExpireTell");

	AGCNL_Athena_RuneVent_C_ExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::ClearExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ClearExpireTell");

	AGCNL_Athena_RuneVent_C_ClearExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.PlayExpirationSound
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::PlayExpirationSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.PlayExpirationSound");

	AGCNL_Athena_RuneVent_C_PlayExpirationSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ExecuteUbergraph_GCNL_Athena_RuneVent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_RuneVent_C::ExecuteUbergraph_GCNL_Athena_RuneVent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ExecuteUbergraph_GCNL_Athena_RuneVent");

	AGCNL_Athena_RuneVent_C_ExecuteUbergraph_GCNL_Athena_RuneVent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
