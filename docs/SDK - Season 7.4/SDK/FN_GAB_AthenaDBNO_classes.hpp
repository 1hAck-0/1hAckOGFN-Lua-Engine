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

// BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C
// 0x0100 (0x0A38 - 0x0938)
class UGAB_AthenaDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                DeathMontage;                                             // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DeathHitDirection;                                        // 0x0948(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  DeathHitResult;                                           // 0x0954(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       DamageTags;                                               // 0x09E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayStatusAfflicted;                                  // 0x0A00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                DeathMontageSkydive;                                      // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 DBNOBleedGEHandle;                                        // 0x0A28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       HolsterId;                                                // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C");
		return ptr;
	}


	void GetInitialHealAmount(float* Health);
	void InitializeDeathHitDirection(struct FGameplayEventData EventHitData);
	void OnCancelled_F0F6785443BD2E74F5591884CB19F35F();
	void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F();
	void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F();
	void OnCompleted_F0F6785443BD2E74F5591884CB19F35F();
	void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6();
	void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6();
	void OnFinish();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAB_AthenaDBNO(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
