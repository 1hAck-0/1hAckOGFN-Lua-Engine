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

// Function Deimos_Fiend.Deimos_Fiend_C.GetEnemyColor
struct ADeimos_Fiend_C_GetEnemyColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.Temp_FindClosestBone
struct ADeimos_Fiend_C_Temp_FindClosestBone_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClosestBone;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.SetupMIDs
struct ADeimos_Fiend_C_SetupMIDs_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.OnRep_HasBackPack
struct ADeimos_Fiend_C_OnRep_HasBackPack_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.UserConstructionScript
struct ADeimos_Fiend_C_UserConstructionScript_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.MantleStart
struct ADeimos_Fiend_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LowWall;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MidWall;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullWall;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WindowWall;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.MantleEnd
struct ADeimos_Fiend_C_MantleEnd_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.HuskEvadeStart
struct ADeimos_Fiend_C_HuskEvadeStart_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.VerifyTakerAttack
struct ADeimos_Fiend_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Swoop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Soul_Suck;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.ResetTakerSpecialAttackTimer
struct ADeimos_Fiend_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.BeginTakerSwoopAttack
struct ADeimos_Fiend_C_BeginTakerSwoopAttack_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.EndTakerSwoopAttack
struct ADeimos_Fiend_C_EndTakerSwoopAttack_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.TakerWallPortalBehavior
struct ADeimos_Fiend_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.IsTakerWallPortalAvailable
struct ADeimos_Fiend_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.TakerAttackFSM
struct ADeimos_Fiend_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.TakerSoulSuckSoundBegin
struct ADeimos_Fiend_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.TakerSoulSuckSoundEnd
struct ADeimos_Fiend_C_TakerSoulSuckSoundEnd_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.PortalAdd
struct ADeimos_Fiend_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Deimos_Fiend.Deimos_Fiend_C.PortalClear
struct ADeimos_Fiend_C_PortalClear_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.TakerSoulSuckInterrupted
struct ADeimos_Fiend_C_TakerSoulSuckInterrupted_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.PortalGet
struct ADeimos_Fiend_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BT;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.PortalFX
struct ADeimos_Fiend_C_PortalFX_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.PortalCollision
struct ADeimos_Fiend_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.GameplayCue.Impact.Physical.Creature
struct ADeimos_Fiend_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Deimos_Fiend.Deimos_Fiend_C.ReceiveBeginPlay
struct ADeimos_Fiend_C_ReceiveBeginPlay_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.OnStartedEncounterSpawn
struct ADeimos_Fiend_C_OnStartedEncounterSpawn_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.AnimateDeathMaterial
struct ADeimos_Fiend_C_AnimateDeathMaterial_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.CustomOnDied
struct ADeimos_Fiend_C_CustomOnDied_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deimos_Fiend.Deimos_Fiend_C.GameplayCue.Athena.IceDeimos
struct ADeimos_Fiend_C_GameplayCue_Athena_IceDeimos_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Deimos_Fiend.Deimos_Fiend_C.RemoveChillerMaterial
struct ADeimos_Fiend_C_RemoveChillerMaterial_Params
{
};

// Function Deimos_Fiend.Deimos_Fiend_C.ExecuteUbergraph_Deimos_Fiend
struct ADeimos_Fiend_C_ExecuteUbergraph_Deimos_Fiend_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
