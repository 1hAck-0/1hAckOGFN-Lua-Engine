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

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_PunchPack_Jump_Charge_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.WhileActive");

	AGCL_PunchPack_Jump_Charge_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_PunchPack_Jump_Charge_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnRemove");

	AGCL_PunchPack_Jump_Charge_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnWhileActiveParticleSystemDeactivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent* WhileActiveParticleSysComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_PunchPack_Jump_Charge_C::OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnWhileActiveParticleSystemDeactivate");

	AGCL_PunchPack_Jump_Charge_C_OnWhileActiveParticleSystemDeactivate_Params params;
	params.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent* SpawnedParticleSysComponent    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_PunchPack_Jump_Charge_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnStartParticleSystemSpawned");

	AGCL_PunchPack_Jump_Charge_C_OnStartParticleSystemSpawned_Params params;
	params.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_PunchPack_Jump_Charge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.UserConstructionScript");

	AGCL_PunchPack_Jump_Charge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_PunchPack_Jump_Charge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ReceiveBeginPlay");

	AGCL_PunchPack_Jump_Charge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_PunchPack_Jump_Charge_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ReceiveEndPlay");

	AGCL_PunchPack_Jump_Charge_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ChargeDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_PunchPack_Jump_Charge_C::ChargeDelay(bool Stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ChargeDelay");

	AGCL_PunchPack_Jump_Charge_C_ChargeDelay_Params params;
	params.Stop = Stop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ExecuteUbergraph_GCL_PunchPack_Jump_Charge
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_PunchPack_Jump_Charge_C::ExecuteUbergraph_GCL_PunchPack_Jump_Charge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ExecuteUbergraph_GCL_PunchPack_Jump_Charge");

	AGCL_PunchPack_Jump_Charge_C_ExecuteUbergraph_GCL_PunchPack_Jump_Charge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
