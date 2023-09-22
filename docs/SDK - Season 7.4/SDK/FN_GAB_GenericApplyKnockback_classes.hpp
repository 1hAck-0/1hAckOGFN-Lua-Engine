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

// BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
// 0x00E8 (0x0A20 - 0x0938)
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      GE_TransferKnockback;                                     // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_KnockbackActive;                                       // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackPropagationThreshold;                            // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0954(0x0004) MISSED OFFSET
	class UAnimMontage*                                KnockbackUpMontage;                                       // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackUpMontageSection;                                // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnockbackDownMontage;                                     // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackDownMontageSection;                              // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnockbackLandMontage;                                     // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackLandMontageSection;                              // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnockbackLandToIdleMontage;                               // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackLandToIdleMontageSection;                        // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnockbackLandToStunMontage;                               // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackLandToStunMontageSection;                        // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDraw;                                                // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugNumbers;                                             // 0x09A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugForceKnockbackValues;                                // 0x09AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOrientToImpulse;                                         // 0x09AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveKnockback;                                          // 0x09AC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     OrientDirection;                                          // 0x09B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x09C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpulseDirectionVelocityOrRotation;                       // 0x09CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DebugLastLocation;                                        // 0x09D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_NPCStatusLockedInPlace;                                // 0x09E4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LockedInPlaceKnockbackAngle;                              // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LockedInPlaceKnockbackMagnitude;                          // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	class UClass*                                      GE_RestoreControlResistance;                              // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_ImpactImmunity;                                        // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveImpactImmunity;                                     // 0x0A08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasImpactImmunity;                                       // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A11(0x0003) MISSED OFFSET
	float                                              F_OneFrameDelay;                                          // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Event_Triggered_Knockback;                                // 0x0A18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C");
		return ptr;
	}


	void DoesUseInstagorInsteadOfImpulseDirection(struct FGameplayEffectContextHandle EffectContext, class UObject* OptionalObject, bool* Value);
	void GetPawnFromInstigator(class AActor* InActor, class AFortPlayerPawn** OutPawn);
	struct FVector CalculateImpulseDirection(class AFortPlayerPawn* InPawn);
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF();
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF();
	void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF();
	void OnCompleted_D744890E4C485F1C80B3E7864AE506FF();
	void OnCancelled();
	void OnInterrupted();
	void OnBlendOut();
	void OnCompleted();
	void OnCancelled_BA9188C34C234A4C47306FA73AAF0583();
	void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583();
	void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583();
	void OnCompleted_BA9188C34C234A4C47306FA73AAF0583();
	void OnReachedJumpApex();
	void SetupMontageSectionsAndOrientDirection();
	void OnPawnLanded(struct FHitResult Hit);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void DebugLine();
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
