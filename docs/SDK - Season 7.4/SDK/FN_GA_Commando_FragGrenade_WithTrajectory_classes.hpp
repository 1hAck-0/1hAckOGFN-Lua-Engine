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

// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
// 0x03CE (0x0E00 - 0x0A32)
class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0A32(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A38(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x0A40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0A48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prj_Grenade;                                              // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeSpeedMin;                                          // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeSpeedMax;                                          // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	class USoundBase*                                  GrenadeSound;                                             // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ClusterBomb;                                           // 0x0A70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxClusterGrenades;                                       // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A94(0x0004) MISSED OFFSET
	class UClass*                                      Prj_Cluster;                                              // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterSpeedMax;                                          // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0AA4(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_BiggerIsBetter;                                        // 0x0AA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_GEContainer_Explosion;                                  // 0x0AC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_IncreasedRadius;                                       // 0x0AD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_ReturnedEffect;                                        // 0x0AD8(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExplosionRadius;                                          // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalThrowAngle;                                     // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterMinPitch;                                          // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterMaxPitch;                                          // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_ClusterExplosion;                                      // 0x0B68(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ClusterSpeedMin;                                          // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0B74(0x0004) MISSED OFFSET
	struct FFortFeedbackHandle                         GrenadeDialogFeedback;                                    // 0x0B78(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_KeepOut;                                               // 0x0B90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_KeepOut;                                               // 0x0BB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AOE_KeepOut;                                              // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BiggerIsBetter;                                           // 0x0BC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClusterBomb;                                              // 0x0BC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepOut;                                                  // 0x0BC2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0BC3(0x0005) MISSED OFFSET
	struct FGameplayTagContainer                       TC_GrenadeAmmo;                                           // 0x0BC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_GrenadeCost;                                           // 0x0BE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_GrenadeDamage;                                         // 0x0C08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               GrenadeAmmo;                                              // 0x0C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrenadeCost;                                              // 0x0C29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrenadeDamage;                                            // 0x0C2A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0C2B(0x0001) MISSED OFFSET
	int                                                GrenadeAmmoUpgrade;                                       // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GrenadeAmmoDefault;                                       // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxGrenadeAmmo;                                           // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionRadiusTooltip;                                   // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionRadiusDefault;                                   // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionRadiusUpgrade;                                   // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0C44(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_PlasmaGrenades;                                        // 0x0C48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlasmaGrenades;                                           // 0x0C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0C69(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Flashbang;                                             // 0x0C70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Flashbang;                                                // 0x0C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0C91(0x0003) MISSED OFFSET
	struct FVector                                     GrenadeTargetingOriginOffset;                             // 0x0C94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x0CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DummyShouldBounce;                                        // 0x0CA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0CA9(0x0003) MISSED OFFSET
	float                                              DummyBounciness;                                          // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyFriction;                                            // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrajectoryUpdateInterval;                                 // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x0CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x0CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InThrowWindup;                                            // 0x0CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0CC9(0x0007) MISSED OFFSET
	class ABP_ProjectileTrajectory_C*                  TrajectoryIndicator;                                      // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrajectoryIndicatorClass;                                 // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayAbilityMontageInfo             ThrowWindupMontage;                                       // 0x0CE0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AbilityKeyPressed;                                        // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0D39(0x0003) MISSED OFFSET
	float                                              MaxSpeedPitch;                                            // 0x0D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedPitch;                                            // 0x0D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTossPitch;                                             // 0x0D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrajectoryBounces;                                     // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0D4C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Tactical_Clusterbomb;                                  // 0x0D50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Tactical_Clusterbomb;                                     // 0x0D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0D71(0x0003) MISSED OFFSET
	struct FGameplayTag                                EC_ClusterExplosion_Tactical;                             // 0x0D74(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              F_FrameDelay;                                             // 0x0D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BiggerIsBetter_T01;                                       // 0x0D80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BiggerIsBetter_T02;                                       // 0x0D81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClusterBomb_T01;                                          // 0x0D82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClusterBomb_T02;                                          // 0x0D83(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                T_BiggerIsBetter_T01;                                     // 0x0D84(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_BiggerIsBetter_T02;                                     // 0x0D8C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_ClusterBomb_T01;                                        // 0x0D94(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_ClusterBomb_T02;                                        // 0x0D9C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0DA4(0x0004) MISSED OFFSET
	struct FScalableFloat                              SF_BiggerIsBetterRadius_T01;                              // 0x0DA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                ThrowMontage;                                             // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                T_Event_Activate;                                         // 0x0DD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Event_Deactivate;                                       // 0x0DD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SF_BiggerIsBetterRadius_T02;                              // 0x0DE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C");
		return ptr;
	}


	void ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);
	void SpawnFragGrenade(class UClass* ProjectileClass, struct FRotator InputPin, struct FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode, float InitialSpeed, float GravityScale, struct FVector* SpawnLocation);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed);
	void UpdateTrajectorySpline();
	void SetupDummyProjectile();
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale);
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45();
	void OnCancelled();
	void OnInterrupted();
	void OnBlendOut();
	void OnCompleted();
	void OnFinish();
	void Completed_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void TossGrenade();
	void ServerSpawnProjectile();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
