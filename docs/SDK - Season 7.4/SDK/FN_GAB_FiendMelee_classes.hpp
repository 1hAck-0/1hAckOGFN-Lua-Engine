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

// BlueprintGeneratedClass GAB_FiendMelee.GAB_FiendMelee_C
// 0x0028 (0x0970 - 0x0948)
class UGAB_FiendMelee_C : public UGAB_AIBaseMelee_NoMontage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0948(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortAbilityTask_MoveAI*                     FiendMove;                                                // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              HitActors;                                                // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      GE_AIBaseMeleeFrustration_Reset;                          // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_FiendMelee.GAB_FiendMelee_C");
		return ptr;
	}


	void Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void OnMoveFinished(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed();
	void OnCancelled();
	void OnInterrupted();
	void OnComplete();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ContinuousMoveTowardsTarget();
	void GameplayEffectContainerApplied(struct FGameplayAbilityTargetDataHandle Target_Data);
	void ExecuteUbergraph_GAB_FiendMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
