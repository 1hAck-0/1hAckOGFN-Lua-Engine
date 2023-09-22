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

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.SetHolsterWeaponWithName
struct UGAT_TriggeredAbility_C_SetHolsterWeaponWithName_Params
{
	class AFortPawn*                                   Target_Fort_Pawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldHolster;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayEquipAnim;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugPrintName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeaponHolstered;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OperationSuccessful;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.TriggeredAbilitySetup
struct UGAT_TriggeredAbility_C_TriggeredAbilitySetup_Params
{
	class UAbilitySystemComponent*                     AbilitySystemIn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystemOut;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
struct UGAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
