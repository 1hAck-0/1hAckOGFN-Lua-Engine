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

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Destroy Duplicate Character Meshes
struct AGC_Outlander_Phaseshift_AppliedFX_C_Destroy_Duplicate_Character_Meshes_Params
{
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Duplicate Character Meshes
struct AGC_Outlander_Phaseshift_AppliedFX_C_Duplicate_Character_Meshes_Params
{
	class AFortPlayerPawn*                             Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.UserConstructionScript
struct AGC_Outlander_Phaseshift_AppliedFX_C_UserConstructionScript_Params
{
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Phase Shift Activation Timeline__FinishedFunc
struct AGC_Outlander_Phaseshift_AppliedFX_C_Phase_Shift_Activation_Timeline__FinishedFunc_Params
{
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Phase Shift Activation Timeline__UpdateFunc
struct AGC_Outlander_Phaseshift_AppliedFX_C_Phase_Shift_Activation_Timeline__UpdateFunc_Params
{
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__FinishedFunc
struct AGC_Outlander_Phaseshift_AppliedFX_C_Teleport_PP_TL__FinishedFunc_Params
{
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__UpdateFunc
struct AGC_Outlander_Phaseshift_AppliedFX_C_Teleport_PP_TL__UpdateFunc_Params
{
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnApplication
struct AGC_Outlander_Phaseshift_AppliedFX_C_OnApplication_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnRemoval
struct AGC_Outlander_Phaseshift_AppliedFX_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnLoopingStart
struct AGC_Outlander_Phaseshift_AppliedFX_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Activate PP
struct AGC_Outlander_Phaseshift_AppliedFX_C_Activate_PP_Params
{
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Remove PP
struct AGC_Outlander_Phaseshift_AppliedFX_C_Remove_PP_Params
{
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Spawn Spline Actor
struct AGC_Outlander_Phaseshift_AppliedFX_C_Spawn_Spline_Actor_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Stop Splines if Valid
struct AGC_Outlander_Phaseshift_AppliedFX_C_Stop_Splines_if_Valid_Params
{
};

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX
struct AGC_Outlander_Phaseshift_AppliedFX_C_ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
