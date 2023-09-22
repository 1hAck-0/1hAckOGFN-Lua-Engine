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

// BlueprintGeneratedClass GA_SpookyMist_Travel.GA_SpookyMist_Travel_C
// 0x00FD (0x0A35 - 0x0938)
class UGA_SpookyMist_Travel_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPawn*                                   Target;                                                   // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // 0x0950(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TravelToLocation;                                         // 0x095C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TravelTime;                                               // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RestoreGrav;                                              // 0x0970(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MovementStrength;                                         // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	class UAnimMontage*                                DashAnimation;                                            // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DashSoundCue;                                             // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	class UClass*                                      GC_Burst;                                                 // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              DashCooldown;                                             // 0x09B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DashStrength;                                             // 0x09D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DashDuration;                                             // 0x09F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                CheckIfColliding;                                         // 0x0A10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsOnCooldown;                                             // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0A19(0x0007) MISSED OFFSET
	class AActor*                                      OverlappingActor;                                         // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                OverlappingActors;                                        // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GC_Wobble;                                                // 0x0A2C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Traveling_;                                               // 0x0A34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_SpookyMist_Travel.GA_SpookyMist_Travel_C");
		return ptr;
	}


	void PlayerCapsuleSizes(float* Radius, float* HalfHeight);
	void SetDashStartEndAndDirection(struct FVector* StartPoint, struct FVector* EndPoint, struct FVector* Direction);
	void HandlePawnDetachRC();
	void OnFinish();
	void Completed_BA1318F5441CE862ADFAB5BA78450BAF(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled_BA1318F5441CE862ADFAB5BA78450BAF(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered_BA1318F5441CE862ADFAB5BA78450BAF(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void EventReceived(struct FGameplayEventData Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void CheckIfStillColliding();
	void On_DBNO();
	void DestroyObjects();
	void ExecuteUbergraph_GA_SpookyMist_Travel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
