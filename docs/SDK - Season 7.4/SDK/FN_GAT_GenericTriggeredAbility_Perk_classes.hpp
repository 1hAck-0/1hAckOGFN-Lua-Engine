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

// BlueprintGeneratedClass GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C
// 0x0066 (0x0A70 - 0x0A0A)
class UGAT_GenericTriggeredAbility_Perk_C : public UGAT_GenericTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0A0A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                StreakCount;                                              // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A1C(0x0004) MISSED OFFSET
	TMap<struct FGameplayTag, class UClass*>           MAP_DamageElement;                                        // 0x0A20(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C");
		return ptr;
	}


	void CalcStreakBreakerThreshold(float PROC_Chance__0_1_, int* Streak_Breaker_Threshold);
	void GrantRegenItemToOwner(class AFortPlayerPawn* FortPlayerPawn, class UFortWorldItemDefinition* ItemToGive, int NumberToGive, bool NotifyPlayer);
	void SetDamageElement(struct FGameplayTagContainer InstegatorTags, class UClass* DefaultEffect, class UClass** ElementEffectOut, bool* EffectWasChanged);
	void GetCorrectBalanceValue(struct FScalableFloat Lookup_Base, struct FScalableFloat Lookup_Commander, struct FGameplayTag Commander_Tag, float* Value);
	void GrantFragmentCharge(int Grant_Amount);
	void CheckStreak(int CountPerTrigger, int MaxStreak, int* StreakCount, bool* StreakMaxed);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
