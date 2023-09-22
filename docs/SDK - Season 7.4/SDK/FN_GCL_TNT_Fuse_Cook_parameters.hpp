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

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.WarningSetup
struct AGCL_TNT_Fuse_Cook_C_WarningSetup_Params
{
	float                                              Warning;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Spline Setup
struct AGCL_TNT_Fuse_Cook_C_Spline_Setup_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Spline_Location;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.UserConstructionScript
struct AGCL_TNT_Fuse_Cook_C_UserConstructionScript_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Movement__FinishedFunc
struct AGCL_TNT_Fuse_Cook_C_Fuse_Movement__FinishedFunc_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Movement__UpdateFunc
struct AGCL_TNT_Fuse_Cook_C_Fuse_Movement__UpdateFunc_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 1 Timeline__FinishedFunc
struct AGCL_TNT_Fuse_Cook_C_Fuse_Stage_1_Timeline__FinishedFunc_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 1 Timeline__UpdateFunc
struct AGCL_TNT_Fuse_Cook_C_Fuse_Stage_1_Timeline__UpdateFunc_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 2 Timeline__FinishedFunc
struct AGCL_TNT_Fuse_Cook_C_Fuse_Stage_2_Timeline__FinishedFunc_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 2 Timeline__UpdateFunc
struct AGCL_TNT_Fuse_Cook_C_Fuse_Stage_2_Timeline__UpdateFunc_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.OnLoopingStart
struct AGCL_TNT_Fuse_Cook_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.OnRemoval
struct AGCL_TNT_Fuse_Cook_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Control Stage 1 Fuse Particles
struct AGCL_TNT_Fuse_Cook_C_Control_Stage_1_Fuse_Particles_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Control Stage 2 Fuse Particles
struct AGCL_TNT_Fuse_Cook_C_Control_Stage_2_Fuse_Particles_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ExecuteUbergraph_GCL_TNT_Fuse_Cook
struct AGCL_TNT_Fuse_Cook_C_ExecuteUbergraph_GCL_TNT_Fuse_Cook_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
