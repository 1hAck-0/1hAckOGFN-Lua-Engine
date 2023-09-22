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

// BlueprintGeneratedClass GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C
// 0x0030 (0x0970 - 0x0940)
class UGA_GM_OnDmgDealt_SelfHeal_C : public UGA_GM_OnDmgDealtBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      HealGEClass;                                              // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HealMagnitudeName;                                        // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealMaxHealthMultiplier;                                  // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinHealAmt;                                               // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealDmgDealtMultiplier;                                   // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealStdHealthMultiplier;                                  // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealAmountCalc;                                           // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlatHealAmount;                                           // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C");
		return ptr;
	}


	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload);
	void CalculateHealMagnitude(float BaseMagnitude, class UAbilitySystemComponent* AbilitySystem, float PawnLevel, float* FinalMagnitude);
	void DoOnDmgDealtBehavior(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
