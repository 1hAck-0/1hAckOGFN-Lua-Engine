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

// BlueprintGeneratedClass GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C
// 0x0038 (0x0970 - 0x0938)
class UGAB_GenericApplyFullBodyHit_NoMontage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      GE_TransferFullBodyHit;                                   // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_FullBodyHitActiveEffect;                               // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_RestoreControlResistance;                              // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveImpactImmunity;                                     // 0x0958(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_ImpactImmunity;                                        // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveFullBodyHit;                                        // 0x0968(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnCancelled_A0357285499905489D05F7AAD5DC6FEC();
	void OnInterrupted_A0357285499905489D05F7AAD5DC6FEC();
	void OnBlendOut_A0357285499905489D05F7AAD5DC6FEC();
	void OnCompleted_A0357285499905489D05F7AAD5DC6FEC();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAB_GenericApplyFullBodyHit_NoMontage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
