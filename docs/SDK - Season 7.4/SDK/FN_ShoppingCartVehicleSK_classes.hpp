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

// BlueprintGeneratedClass ShoppingCartVehicleSK.ShoppingCartVehicleSK_C
// 0x0358 (0x1018 - 0x0CC0)
class AShoppingCartVehicleSK_C : public AFortAthenaSKPushVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               BulletCollision;                                          // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PawnStepUpCollision_Bottom;                               // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OverlapTrigger;                                           // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PawnStepUpCollision;                                      // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioWind;                                                // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Shopping_Cart_Vehicle_WheelDust;                        // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                FortCollisionAudio;                                       // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioScrape;                                              // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioInAir;                                               // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioSkid;                                                // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioCoast;                                               // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioMovement;                                            // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  OnDeathSound;                                             // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PassengerPawn;                                            // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ImpulsePower;                                             // 0x0D38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RearVectorThreshold;                                      // 0x0D58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ImpulseVector;                                            // 0x0D78(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0D84(0x0004) MISSED OFFSET
	TArray<class AFortPickup*>                         AttachedPickups;                                          // 0x0D88(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPickup*                                 FortPickup;                                               // 0x0D98(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPickups;                                               // 0x0DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPickups;                                           // 0x0DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ObjectReference;                                          // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           DrivingPlayerController;                                  // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningAmount;                                            // 0x0DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DBC(0x0004) MISSED OFFSET
	class UCameraShake*                                CameraShake;                                              // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AB_RocketLauncher_Generic_Athena_C*          BoundRocket;                                              // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             DriverPawn;                                               // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CorrectiveImpulse;                                        // 0x0DD8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0DE4(0x0004) MISSED OFFSET
	class UCameraShake*                                CoastingCameraShake;                                      // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalizedSpeed;                                          // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeFrequencyMin;                                  // 0x0DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeFrequencyMax;                                  // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeYawFrequencyMultipier;                         // 0x0DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmplitudeMin;                                             // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmplitudeMax;                                             // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InAirSmoothed;                                            // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShakeSpeedCurvePow;                                 // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothedSpringCompression;                                // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0E14(0x0004) MISSED OFFSET
	struct FScalableFloat                              ScreenShakeMult;                                          // 0x0E18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RumbleMultipier;                                          // 0x0E38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RumbleMulti;                                              // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SparksRumbleMulti;                                        // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCoastingCameraShake;                                     // 0x0E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E61(0x0003) MISSED OFFSET
	float                                              SprintAmplitude;                                          // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             LastDriver;                                               // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ZImpulseMultiplier;                                       // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityToLaunch;                                      // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLaunchVelocity;                                        // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchAngle;                                              // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       LastHitPlayer;                                            // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchMultiplier;                                         // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0E8C(0x0004) MISSED OFFSET
	struct FScalableFloat                              Hit_ZImpulseMultiplier;                                   // 0x0E90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hit_LateralImpulseMultiplier;                             // 0x0EB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hit_MaxImpulseVelocity;                                   // 0x0ED0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HealthToDestroyProp;                                      // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreHitLastDriver;                                      // 0x0EF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PassengerIsInstigator;                                    // 0x0EF5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0EF6(0x0002) MISSED OFFSET
	class UStaticMeshComponent*                        DoorMesh;                                                 // 0x0EF8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              CanLaunchPlayer;                                          // 0x0F00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PassengerCameraShakeMultiplier;                           // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0F24(0x0004) MISSED OFFSET
	class UCameraShake*                                PassengerCameraShake;                                     // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           PassengerPlayerController;                                // 0x0F30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestItem;                                                // 0x0F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ObjBackendName;                                           // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ObjStat;                                                  // 0x0F48(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    InWaterFX;                                                // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters                      GCParamsEmpty;                                            // 0x0F60(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShoppingCartVehicleSK.ShoppingCartVehicleSK_C");
		return ptr;
	}


	struct FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn);
	TArray<struct FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	void UpdateDynamicCameraShake();
	void IsLocalPlayerRiding(bool* Result);
	void OnRep_CorrectiveImpulse();
	void PlayHapticsOnHit(float HitMagnitude);
	void AttachWeaponToCart(int Selection);
	void OnRep_ImpulseVector();
	void UserConstructionScript();
	void OnCollisionHitEffects(struct FVector HitLocation, struct FVector HitNormalImpulse, struct FVector HitFrictionImpulse, struct FVector HitNormal, class AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType);
	void ApplyImpulse();
	void BndEvt__Box_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void AttachToCart();
	void DropItems();
	void UpdateMovementCosmeticParameters();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void ReceiveTick(float DeltaSeconds);
	void PedalForceFeedback();
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int SeatIdx);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void RocketSpawned();
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName);
	void OnDamaged(float Damage, struct FGameplayTagContainer DamageTags, struct FGameplayEffectContextHandle EffectContext, class AController* EventInstigator, class AActor* DamageCauser);
	void Update_Damage_State(float Damage);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnSpringCompression();
	void OnEnteredWaterVolume(struct FVector WaterSurfacePoint);
	void OnExitedWaterVolume(struct FVector WaterSurfacePoint);
	void CheckWater();
	void PawnHitByVehicle(class AFortPawn* Pawn, struct FVector ImpactPoint, struct FVector ImpactNormal, struct FVector LaunchVector);
	void OnStopTick();
	void OnIsCoastingChanged();
	void OnIsSprintingChanged();
	void StopDriverRumble();
	void StartDriverRumble();
	void StartDriverCameraShake();
	void StopCoastCameraShake();
	void StopDriverCameraShake();
	void CanHitLastDriver();
	void ExecuteUbergraph_ShoppingCartVehicleSK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
