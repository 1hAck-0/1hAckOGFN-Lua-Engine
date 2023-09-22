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

// BlueprintGeneratedClass GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C
// 0x0028 (0x0A90 - 0x0A68)
class UGA_Ninja_SwordHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_RequiredTags;                                          // 0x0A70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C");
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_Ninja_SwordHitsHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
