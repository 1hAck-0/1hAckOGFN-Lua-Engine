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

// BlueprintGeneratedClass JackalVehicle_Athena.JackalVehicle_Athena_C
// 0x0150 (0x0EA0 - 0x0D50)
class AJackalVehicle_Athena_C : public AFortAthenaJackalVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortVehicleAudioVoice*                      AudioWind;                                                // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioLand;                                                // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioBoost;                                               // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioMovement;                                            // 0x0D70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioJump;                                                // 0x0D78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Hoverboard_Lightbeams;                                 // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LoopingFX;                                                // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BoostFX;                                                  // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         BackLight;                                                // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         FrontLight;                                               // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                FortCollisionAudioImpacts;                                // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OverlapVolume;                                            // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             DriverPawn;                                               // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           DrivingPlayerController;                                  // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             LocalPlayerPawn;                                          // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta;                                                    // 0x0DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bJumpCharging;                                            // 0x0DD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DD5(0x0003) MISSED OFFSET
	class USoundBase*                                  MountSound;                                               // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    InWaterFX;                                                // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             InWaterLoop;                                              // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                CheckWaterTimer;                                          // 0x0DF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RumbleIntensity;                                          // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_NoCameraShake;                                      // 0x0DFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0DFD(0x0003) MISSED OFFSET
	class UCameraShake*                                DriverCameraShake;                                        // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineSoundMaxDistance;                                   // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jumped;                                                   // 0x0E0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0E0D(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BoostMeterMID;                                            // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostTImelineAlpha;                                       // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXBoostEnd_1;                                             // 0x0E1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DismountSound;                                            // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXFrontSpringOffset;                                      // 0x0E30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXRearSpringOffset;                                       // 0x0E3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FXSurfaceType;                                            // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SavedDamageValueForMID;                                   // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedToDestroy;                                        // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealthToDestroy;                                       // 0x0E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SavedHeadlightValueForMID;                                // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostTimeValueForMID;                                     // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      VehicleHitActor;                                          // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DestructionAngle;                                         // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingFXImpactThreshold;                                 // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LandingFX;                                                // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnDeathSound;                                             // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BumpForceAngle;                                           // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0E84(0x0004) MISSED OFFSET
	class UClass*                                      JumpCameraShake;                                          // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementVisualUpdate;                                     // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0E94(0x0004) MISSED OFFSET
	struct FTimerHandle                                MovementVisualTimer;                                      // 0x0E98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JackalVehicle_Athena.JackalVehicle_Athena_C");
		return ptr;
	}


	void GetMaxAudibleDistance(float* Max_Distance);
	void ShouldBump(struct FVector Hit_Normal, bool* Bump);
	bool ShouldDestroyProp_(struct FVector HitNormal);
	void DestroyBuildingPiece(class ABuildingActor* BuildingActor, float DestroyThreshold);
	void UpdateSurfaceType(TEnumAsByte<EPhysicalSurface> Surface, int* Output);
	void SendBoostTimeToMaterials(float ParameterValue);
	void SendHeadlightValueToMaterials(float ParameterValue);
	void SendDamageValueToMaterials(float ParameterValue);
	void HapticsOnHit(float HitMagnitude);
	void IsBoostCharging(bool* Is_Charging);
	void CurrentBoostCharge(float* Charge_Value);
	void DeactivateComponents();
	TArray<struct FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	void GetIconPlacement(class AActor* SelfActor, struct FVector* OutLocation, struct FVector* OutExtents);
	void UserConstructionScript();
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int SeatIdx);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName);
	void SetupCosmetics();
	void ReceiveBeginPlay();
	void OnBoostBegin();
	void OnBoostEnd();
	void OnJumpChargeBegin();
	void OnJumpChargeEnd(float Charge);
	void OnJumped(float Charge);
	void OnCollisionHitEffects(struct FVector HitLocation, struct FVector HitNormalImpulse, struct FVector HitFrictionImpulse, struct FVector HitNormal, class AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType);
	void OnEnteredWaterVolume(struct FVector WaterSurfacePoint);
	void OnExitedWaterVolume(struct FVector WaterSurfacePoint);
	void CheckWaterEvent();
	void StopDriverCameraShake();
	void StartDriverCameraShake();
	void OnIsSprintingChanged();
	void K2_ApplyCosmeticWrap(class UAthenaItemWrapDefinition* LoadedWrap);
	void ChangeOutMaterials();
	void OnStopTick();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void OnHoldExitStarted(class AFortPawn* ExitingPawn, float ExitDuration);
	void OnHoldExitStopped(class AFortPawn* ExitingPawn);
	void VisualIndicator();
	void HideQuickBarForSecondaryAbility(bool Hide);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_JackalVehicle_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
