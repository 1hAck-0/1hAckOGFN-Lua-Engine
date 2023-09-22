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

// BlueprintGeneratedClass GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C
// 0x00E1 (0x0A19 - 0x0938)
class UGA_SpookyMist_PassiveSetup_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerPawn_Athena_C*                        PlayerPawn;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 LoopingGC;                                                // 0x0948(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GC_TrailFX;                                               // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GC_Looping;                                               // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 MoveSpeedBuff;                                            // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              AbilityDuration;                                          // 0x0968(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DamageShouldEndAbility;                                   // 0x0988(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_MoveSpeed;                                             // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ExitRecovery;                                             // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       AllowInteractTags;                                        // 0x09B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       NoInteractTags;                                           // 0x09D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ShouldAllowInteract;                                      // 0x09F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ForcedExit;                                               // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C");
		return ptr;
	}


	void UnBlockAbilityTags();
	void SetBlockAbilityTags();
	void EventReceived(struct FGameplayEventData Payload);
	void K2_ActivateAbility();
	void WhenDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void On_DBNO();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_SpookyMist_PassiveSetup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
