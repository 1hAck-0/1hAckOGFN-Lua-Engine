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

// Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.UserConstructionScript
struct AB_Melee_Blade_Real_C_UserConstructionScript_Params
{
};

// Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.OnPlayImpactFX
struct AB_Melee_Blade_Real_C_OnPlayImpactFX_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      ImpactPhysicalSurface;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedPSC;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.ExecuteUbergraph_B_Melee_Blade_Real
struct AB_Melee_Blade_Real_C_ExecuteUbergraph_B_Melee_Blade_Real_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
