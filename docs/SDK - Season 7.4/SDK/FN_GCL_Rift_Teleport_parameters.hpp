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

// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.WhileActive
struct AGCL_Rift_Teleport_C_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnRemove
struct AGCL_Rift_Teleport_C_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnWhileActiveParticleSystemDeactivate
struct AGCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate_Params
{
	class UParticleSystemComponent*                    WhileActiveParticleSysComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnStartParticleSystemSpawned
struct AGCL_Rift_Teleport_C_OnStartParticleSystemSpawned_Params
{
	class UParticleSystemComponent*                    SpawnedParticleSysComponent;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.UserConstructionScript
struct AGCL_Rift_Teleport_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
