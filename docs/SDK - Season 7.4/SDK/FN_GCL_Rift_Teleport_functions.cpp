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

// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_Rift_Teleport_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.WhileActive");

	AGCL_Rift_Teleport_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_Rift_Teleport_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnRemove");

	AGCL_Rift_Teleport_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnWhileActiveParticleSystemDeactivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent* WhileActiveParticleSysComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Rift_Teleport_C::OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnWhileActiveParticleSystemDeactivate");

	AGCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate_Params params;
	params.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent* SpawnedParticleSysComponent    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Rift_Teleport_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnStartParticleSystemSpawned");

	AGCL_Rift_Teleport_C_OnStartParticleSystemSpawned_Params params;
	params.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_Rift_Teleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.UserConstructionScript");

	AGCL_Rift_Teleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
