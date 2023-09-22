#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C
// 0x00A8 (0x0B18 - 0x0A70)
class UGA_Perk_H_FrozenCastle_FreezeOnHit_C : public UGAT_GenericTriggeredAbility_Perk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      GE_Freeze;                                                // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_FrozenCastle_Cooldown_Tag;                             // 0x0A80(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_Fire_NPC;                                              // 0x0AA0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_Lightning_NPC;                                         // 0x0AA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FreezeDurationModifier;                                   // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeVulnerabilityModifier;                              // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              FreezeDurationDefault;                                    // 0x0AB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              FreezeVulnerabilityDefault;                               // 0x0AD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_Melee_Tag;                                             // 0x0AF8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C");
		return ptr;
	}


	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
