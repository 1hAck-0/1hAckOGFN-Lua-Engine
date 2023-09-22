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

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication
struct UGAB_SurfaceChange_C_HotfixableGEApplication_Params
{
	struct FScalableFloat                              Input;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                      GameplayEffectAppliedOnTrue;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GameplayEffectAppliedOnFalse;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.RemoveGameplayEffects
struct UGAB_SurfaceChange_C_RemoveGameplayEffects_Params
{
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent
struct UGAB_SurfaceChange_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange
struct UGAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
