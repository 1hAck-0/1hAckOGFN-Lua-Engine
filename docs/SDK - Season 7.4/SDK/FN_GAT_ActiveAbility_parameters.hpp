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

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SendHeroAbilityActivationEvent
struct UGAT_ActiveAbility_C_SendHeroAbilityActivationEvent_Params
{
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetHolsterWeaponWithName
struct UGAT_ActiveAbility_C_SetHolsterWeaponWithName_Params
{
	class AFortPawn*                                   Target_Fort_Pawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldHolster;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayEquipAnim;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugPrintName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeaponHolstered;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OperationSuccessful;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ShouldAbilityRespondToEvent
struct UGAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ActiveAbilitySetup
struct UGAT_ActiveAbility_C_ActiveAbilitySetup_Params
{
	class UAbilitySystemComponent*                     AbilitySystemIn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystemOut;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity
struct UGAT_ActiveAbility_C_SetKnockbackImmunity_Params
{
	bool                                               ImmunityOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision
struct UGAT_ActiveAbility_C_SetPawnCollision_Params
{
	class AFortPawn*                                   FortPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CollisionOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
struct UGAT_ActiveAbility_C_K2_ActivateAbility_Params
{
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
struct UGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
