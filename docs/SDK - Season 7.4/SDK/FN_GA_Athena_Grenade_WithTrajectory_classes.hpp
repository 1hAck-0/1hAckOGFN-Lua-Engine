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

// BlueprintGeneratedClass GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C
// 0x02F9 (0x0C31 - 0x0938)
class UGA_Athena_Grenade_WithTrajectory_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x0940(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0948(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prj_Grenade;                                              // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeedMin;                                          // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeSpeedMax;                                          // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class USoundBase*                                  GrenadeSound;                                             // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_DefaultExplosion;                                      // 0x0970(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_ReturnedEffect;                                        // 0x0978(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_AdditionalReturnedEffect;                              // 0x09F8(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExplosionRadius;                                          // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalThrowAngle;                                     // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortFeedbackHandle                         GrenadeDialogFeedback;                                    // 0x0A80(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               GrenadeAmmo;                                              // 0x0A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlasmaGrenades;                                           // 0x0A99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Flashbang;                                                // 0x0A9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0A9B(0x0001) MISSED OFFSET
	struct FVector                                     GrenadeTargetingOriginOffset;                             // 0x0A9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DummyShouldBounce;                                        // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AB1(0x0003) MISSED OFFSET
	float                                              DummyBounciness;                                          // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyFriction;                                            // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrajectoryUpdateInterval;                                 // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrenadeTargetingOriginOffset_Crouched;                    // 0x0AD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InThrowWindup;                                            // 0x0ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0ADD(0x0003) MISSED OFFSET
	class ABP_ProjectileTrajectory_C*                  TrajectoryIndicator;                                      // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrajectoryIndicatorClass;                                 // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayAbilityMontageInfo             ThrowWindupMontage;                                       // 0x0AF0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AbilityKeyPressed;                                        // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B49(0x0003) MISSED OFFSET
	float                                              MaxSpeedPitch;                                            // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedPitch;                                            // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B54(0x0004) MISSED OFFSET
	struct FGameplayEventData                          Event_Data;                                               // 0x0B58(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTossPitch;                                             // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrajectoryBounces;                                     // 0x0C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostThrowCancelDelay;                                     // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostThrowEndDelay;                                        // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         ProjectileReference;                                      // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromInstigatorCheck;                              // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	struct FTimerHandle                                UpdateTrajectoryTimerHandle;                              // 0x0C28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Spawned_On_Equip;                                         // 0x0C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C");
		return ptr;
	}


	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	class UClass* GetProjectileTrajectoryActor();
	void UpdateTrajectorySpline();
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed);
	void SetupDummyProjectile();
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale, struct FFortGameplayEffectContainerSpec* Additional_Explosion_Gameplay_Spec);
	void Destroyed(struct FProjectileEventData ProjectileData);
	void Exploded(struct FProjectileEventData ProjectileData);
	void Stopped(struct FProjectileEventData ProjectileData);
	void Bounced(struct FProjectileEventData ProjectileData);
	void Touched(struct FProjectileEventData ProjectileData);
	void Created(struct FProjectileEventData ProjectileData);
	void Completed_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void OnFinish_E8F8DC5A465F19B633AF0E8888171F5A();
	void OnFinish();
	void OnCancelled();
	void OnInterrupted();
	void OnBlendOut();
	void OnCompleted();
	void OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C();
	void K2_ActivateAbility();
	void Server_SpawnProjectile(struct FVector Location, struct FRotator Direction);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void TossGrenade();
	void InitTrajectoryVariables();
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void CleanupTrajectoryIndicatorOnUnequip();
	void Cleanup_Trajectory_Display_On_End();
	void UpdateTrajectory();
	void ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
