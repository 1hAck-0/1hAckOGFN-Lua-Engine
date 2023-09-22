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

// BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C
// 0x005E (0x0A68 - 0x0A0A)
class UGA_Ninja_Tactical_MeleeHitsHeal_C : public UGAT_GenericTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0A0A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x0A18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0A20(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_Ninja_Tactical_MeleeHitsHeal;                          // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Melee;                                                 // 0x0A30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MeleeCount;                                               // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastHitSwingTime;                                         // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseHealValue;                                            // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalHealValue;                                           // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DataRowName;                                              // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C");
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
