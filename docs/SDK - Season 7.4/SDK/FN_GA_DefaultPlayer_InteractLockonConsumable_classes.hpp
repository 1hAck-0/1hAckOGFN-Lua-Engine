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

// BlueprintGeneratedClass GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C
// 0x0104 (0x0A3C - 0x0938)
class UGA_DefaultPlayer_InteractLockonConsumable_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveTimerLength;                                          // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // 0x094C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpAlpha;                                                // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpSpeedMult;                                            // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerForPawnAndControllerLerp;                            // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bFirstUpdate;                                             // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0969(0x0003) MISSED OFFSET
	float                                              StartingYaw;                                              // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevYawDiffRemaining;                                     // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class AFortPlayerController*                       FortPlayerController;                                     // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInitialized;                                           // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	class ACBGA_Blade_Athena_C*                        TargetBladeActor;                                         // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayAbilityMontageInfo             MontagePullInfo;                                          // 0x0990(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DesiredDistanceFromInteractiveItem;                       // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentPosition;                                          // 0x09EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DestinationPosition;                                      // 0x09F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetYaw;                                                // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawDiffRemaining;                                         // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	class UCameraShake*                                CameraShake;                                              // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GE_PullGCL;                                               // 0x0A18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ScaleForVFXToHideRotationPop;                             // 0x0A20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeedToUnHolster;                                         // 0x0A2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A2D(0x0003) MISSED OFFSET
	struct FGameplayTag                                DisableCrouch;                                            // 0x0A30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              StartSwordPullTime;                                       // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C");
		return ptr;
	}


	void StopCameraShakes();
	void InitializePawnAndControllerRot(class AFortPlayerPawn* PawnAthena, bool* bInitialized);
	void StartPullAnimation();
	void EndInteractSearch();
	void StartInteractSearch();
	void K2_OnEndAbility(bool bWasCancelled);
	void Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void InterpolateToPosition();
	void StartCameraTransition();
	void TimeoutAndDie();
	void K2_ActivateAbility();
	void ForceNetUpdate();
	void ExecuteUbergraph_GA_DefaultPlayer_InteractLockonConsumable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
