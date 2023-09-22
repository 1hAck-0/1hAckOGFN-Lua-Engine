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

// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.UnBlockAbilityTags
struct UGA_SpookyMist_PassiveSetup_C_UnBlockAbilityTags_Params
{
};

// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.SetBlockAbilityTags
struct UGA_SpookyMist_PassiveSetup_C_SetBlockAbilityTags_Params
{
};

// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.EventReceived
struct UGA_SpookyMist_PassiveSetup_C_EventReceived_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.K2_ActivateAbility
struct UGA_SpookyMist_PassiveSetup_C_K2_ActivateAbility_Params
{
};

// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.WhenDamaged
struct UGA_SpookyMist_PassiveSetup_C_WhenDamaged_Params
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

// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.On DBNO
struct UGA_SpookyMist_PassiveSetup_C_On_DBNO_Params
{
};

// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.K2_OnEndAbility
struct UGA_SpookyMist_PassiveSetup_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.ExecuteUbergraph_GA_SpookyMist_PassiveSetup
struct UGA_SpookyMist_PassiveSetup_C_ExecuteUbergraph_GA_SpookyMist_PassiveSetup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
