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

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.RemoveStormAudio
struct AGC_Athena_OutsideSafeZone_Stage02_C_RemoveStormAudio_Params
{
	class APlayerPawn_Athena_C*                        PlayerPawnAthena;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.AddStormAudio
struct AGC_Athena_OutsideSafeZone_Stage02_C_AddStormAudio_Params
{
	class APlayerPawn_Athena_C*                        PlayerPawnAthena;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.ZapFX
struct AGC_Athena_OutsideSafeZone_Stage02_C_ZapFX_Params
{
	int                                                ZapCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerPawn_Athena_C*                        PlayerPawnAthena;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.OnExecute
struct AGC_Athena_OutsideSafeZone_Stage02_C_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.UserConstructionScript
struct AGC_Athena_OutsideSafeZone_Stage02_C_UserConstructionScript_Params
{
};

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.Timeline
struct AGC_Athena_OutsideSafeZone_Stage02_C_Timeline_Params
{
};

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.OnLoopingStart
struct AGC_Athena_OutsideSafeZone_Stage02_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.OnRemoval
struct AGC_Athena_OutsideSafeZone_Stage02_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.OnApplication
struct AGC_Athena_OutsideSafeZone_Stage02_C_OnApplication_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage02
struct AGC_Athena_OutsideSafeZone_Stage02_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage02_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
