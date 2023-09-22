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

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.Set Adrenaline Rush Visibility
struct AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_Set_Adrenaline_Rush_Visibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             Player_Pawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.Destroy Meshes
struct AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_Destroy_Meshes_Params
{
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.Duplicate Meshes
struct AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_Duplicate_Meshes_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.HealthCheck
struct AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_HealthCheck_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Check_Return;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.UserConstructionScript
struct AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_UserConstructionScript_Params
{
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.HealthSweep__FinishedFunc
struct AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_HealthSweep__FinishedFunc_Params
{
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.HealthSweep__UpdateFunc
struct AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_HealthSweep__UpdateFunc_Params
{
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.K2_HandleGameplayCue
struct AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Latent
struct AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Latent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
