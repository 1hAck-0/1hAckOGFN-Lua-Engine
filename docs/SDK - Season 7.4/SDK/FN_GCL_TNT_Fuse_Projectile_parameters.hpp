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

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Warning System Setup
struct AGCL_TNT_Fuse_Projectile_C_Warning_System_Setup_Params
{
	float                                              Warning;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Spline Setup
struct AGCL_TNT_Fuse_Projectile_C_Spline_Setup_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Spline_Location;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.UserConstructionScript
struct AGCL_TNT_Fuse_Projectile_C_UserConstructionScript_Params
{
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Fuse Movement__FinishedFunc
struct AGCL_TNT_Fuse_Projectile_C_Fuse_Movement__FinishedFunc_Params
{
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Fuse Movement__UpdateFunc
struct AGCL_TNT_Fuse_Projectile_C_Fuse_Movement__UpdateFunc_Params
{
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Stage 1 Fuse__FinishedFunc
struct AGCL_TNT_Fuse_Projectile_C_Stage_1_Fuse__FinishedFunc_Params
{
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Stage 1 Fuse__UpdateFunc
struct AGCL_TNT_Fuse_Projectile_C_Stage_1_Fuse__UpdateFunc_Params
{
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Stage 2 Fuse__FinishedFunc
struct AGCL_TNT_Fuse_Projectile_C_Stage_2_Fuse__FinishedFunc_Params
{
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Stage 2 Fuse__UpdateFunc
struct AGCL_TNT_Fuse_Projectile_C_Stage_2_Fuse__UpdateFunc_Params
{
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.OnLoopingStart
struct AGCL_TNT_Fuse_Projectile_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.OnRemoval
struct AGCL_TNT_Fuse_Projectile_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Control Stage 1 Fuse Particles
struct AGCL_TNT_Fuse_Projectile_C_Control_Stage_1_Fuse_Particles_Params
{
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.Control Stage 2 Fuse Particles
struct AGCL_TNT_Fuse_Projectile_C_Control_Stage_2_Fuse_Particles_Params
{
};

// Function GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C.ExecuteUbergraph_GCL_TNT_Fuse_Projectile
struct AGCL_TNT_Fuse_Projectile_C_ExecuteUbergraph_GCL_TNT_Fuse_Projectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
