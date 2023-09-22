#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.WhileActive
struct AGCL_PunchPack_Jump_Charge_C_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnRemove
struct AGCL_PunchPack_Jump_Charge_C_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnWhileActiveParticleSystemDeactivate
struct AGCL_PunchPack_Jump_Charge_C_OnWhileActiveParticleSystemDeactivate_Params
{
	class UParticleSystemComponent*                    WhileActiveParticleSysComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnStartParticleSystemSpawned
struct AGCL_PunchPack_Jump_Charge_C_OnStartParticleSystemSpawned_Params
{
	class UParticleSystemComponent*                    SpawnedParticleSysComponent;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.UserConstructionScript
struct AGCL_PunchPack_Jump_Charge_C_UserConstructionScript_Params
{
};

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ReceiveBeginPlay
struct AGCL_PunchPack_Jump_Charge_C_ReceiveBeginPlay_Params
{
};

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ReceiveEndPlay
struct AGCL_PunchPack_Jump_Charge_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ChargeDelay
struct AGCL_PunchPack_Jump_Charge_C_ChargeDelay_Params
{
	bool                                               Stop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ExecuteUbergraph_GCL_PunchPack_Jump_Charge
struct AGCL_PunchPack_Jump_Charge_C_ExecuteUbergraph_GCL_PunchPack_Jump_Charge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
