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

// BlueprintGeneratedClass FerretVehicle.FerretVehicle_C
// 0x0480 (0x16F0 - 0x1270)
class AFerretVehicle_C : public AFortAthenaFerretVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AudioSpark;                                               // 0x1278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BoostMeter;                                               // 0x1280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioTaxi;                                                // 0x1288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioDive;                                                // 0x1290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioWind1P;                                              // 0x1298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioMovementDistant;                                     // 0x12A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioMovementClose;                                       // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plane_Boost_FX;                                         // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plane_SpeedFX;                                          // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PropellerBlur;                                            // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WingTrail_BR;                                           // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WingTrail_UR;                                           // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WingTrail_BL;                                           // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WingTrail_UL;                                           // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_CollisionBodies;                                       // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Reticle;                                                  // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                FortCollisionAudioSuspension;                             // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OverlapVolume;                                            // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                FortCollisionAudioImpacts;                                // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline;                                                 // 0x1310(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline02;                                               // 0x1314(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline03;                                               // 0x1318(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1319(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BoostTimeline_Backwards_CB6F0329482DC4F10358FA906489BBA6; // 0x1328(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoostTimeline_Rumble_CB6F0329482DC4F10358FA906489BBA6;    // 0x132C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoostTimeline_Track1_CB6F0329482DC4F10358FA906489BBA6;    // 0x1330(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BoostTimeline__Direction_CB6F0329482DC4F10358FA906489BBA6;// 0x1334(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1335(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BoostTimeline;                                            // 0x1338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  OnDeathSound;                                             // 0x1340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PassengerPawn;                                            // 0x1348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ImpulsePower;                                             // 0x1350(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RearVectorThreshold;                                      // 0x1370(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ImpulseVector;                                            // 0x1390(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x139C(0x0004) MISSED OFFSET
	TArray<class AFortPickup*>                         AttachedPickups;                                          // 0x13A0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPickup*                                 FortPickup;                                               // 0x13B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPickups;                                               // 0x13B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPickups;                                           // 0x13BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ObjectReference;                                          // 0x13C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           DrivingPlayerController;                                  // 0x13C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningAmount;                                            // 0x13D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x13D4(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             DriverPawn;                                               // 0x13D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CorrectiveImpulse;                                        // 0x13E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x13EC(0x0004) MISSED OFFSET
	struct FScalableFloat                              RumbleMultipier;                                          // 0x13F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             LastDriver;                                               // 0x1410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityToLaunch;                                      // 0x1418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLaunchVelocity;                                        // 0x141C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchAngle;                                              // 0x1420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1424(0x0004) MISSED OFFSET
	class AFortPlayerPawnAthena*                       LastHitPlayer;                                            // 0x1428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchMultiplier;                                         // 0x1430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x1434(0x0004) MISSED OFFSET
	struct FScalableFloat                              Hit_ZImpulseMultiplier;                                   // 0x1438(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hit_LateralImpulseMultiplier;                             // 0x1458(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hit_MaxImpulseVelocity;                                   // 0x1478(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HealthToDestroyProp;                                      // 0x1498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreHitLastDriver;                                      // 0x149C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PassengerIsInstigator;                                    // 0x149D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x149E(0x0002) MISSED OFFSET
	class UStaticMeshComponent*                        DoorMesh;                                                 // 0x14A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              CanLaunchPlayer;                                          // 0x14A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerController*                           PassengerPlayerController;                                // 0x14C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LaunchCharacterExtraVelocity;                             // 0x14D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchCharacterVelocityScalar;                            // 0x14DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             BounceOverlapPawn;                                        // 0x14E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       BounceOverlapController;                                  // 0x14E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalBounceJumpHeight;                                    // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceHeight;                                             // 0x14F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_PlayerLaunched;                                        // 0x14F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        LaunchForceFeedback;                                      // 0x1500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortPlayerPawn*>                     Passengers;                                               // 0x1508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AFortPlayerPawn*>                     BounceIgnoreList;                                         // 0x1518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Debug_NoCameraShake;                                      // 0x1528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1529(0x0003) MISSED OFFSET
	float                                              BoostCameraOffsetLerpStart;                               // 0x152C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Boost;                                                    // 0x1530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostRumbleValue;                                         // 0x1534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetBoostFX;                                             // 0x1538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1539(0x0003) MISSED OFFSET
	float                                              DestructionAngle;                                         // 0x153C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropDamageAmount;                                         // 0x1540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1544(0x0004) MISSED OFFSET
	class USoundBase*                                  OnBoostSound;                                             // 0x1548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ColorKickBoostScale;                                      // 0x1550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BounceVector;                                             // 0x1554(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x1560(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x156C(0x0004) MISSED OFFSET
	class AActor*                                      ActorToDestroy;                                           // 0x1570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrailsActive;                                             // 0x1578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x1579(0x0007) MISSED OFFSET
	class AActor*                                      VehicleHitActor;                                          // 0x1580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             BoostIncreaseAudioComp;                                   // 0x1588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    InWaterFX;                                                // 0x1590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              UnobstructedBounceVelocity;                               // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ObstructedBounceVelocity;                                 // 0x159C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             InWaterLoop;                                              // 0x15A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             HonkAudioComp;                                            // 0x15A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GE_EnterTurret;                                           // 0x15B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_GrantWeapon;                                           // 0x15B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_BlockWeaponFire;                                       // 0x15C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrailsOn;                                                 // 0x15C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x15C9(0x0007) MISSED OFFSET
	struct FTransform                                  ReticleRelativeTransform;                                 // 0x15D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BoostMeterMID;                                            // 0x1600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakingCameraForwardDistance;                             // 0x1608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakingCameraFOV;                                         // 0x160C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostingCameraFOV;                                        // 0x1610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostingCameraForwardDistance;                            // 0x1614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostReversePlayRate;                                     // 0x1618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShakeSpeedCurvePow;                                 // 0x161C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalizedSpeed;                                          // 0x1620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeAmount;                                              // 0x1624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmplitudeMin;                                             // 0x1628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmplitudeMax;                                             // 0x162C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeFrequencyMin;                                  // 0x1630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeFrequencyMax;                                  // 0x1634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeFrequency;                                           // 0x1638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamerShakeAmplitude;                                      // 0x163C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeYawFrequencyMultipier;                         // 0x1640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostScreenshakeBias;                                     // 0x1644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostTImelineAlpha;                                       // 0x1648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostLerpFromDistance;                                    // 0x164C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostLerpFromFOV;                                         // 0x1650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x1654(0x0004) MISSED OFFSET
	class AB_FerretWeapon_C*                           PlaneWeapon;                                              // 0x1658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnOverheat;                                          // 0x1660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnSmashSound;                                             // 0x1668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    DamagedEffect;                                            // 0x1670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              SavedHeadlightValueForMID;                                // 0x1678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SavedDamageValueForMID;                                   // 0x167C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostTimeValueForMID;                                     // 0x1680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x1684(0x0004) MISSED OFFSET
	class UFortQuestItemDefinition*                    QuestDefinition;                                          // 0x1688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       questObjBackendName;                                      // 0x1690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         questObjStat;                                             // 0x1698(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInterface*                          Biplane_Material_Index1;                                  // 0x16A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Biplane_Material_Index0;                                  // 0x16B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestructionFX;                                            // 0x16B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       PlayerWhoDamagedStormwing;                                // 0x16C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                DamagerTimer;                                             // 0x16C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       BiplaneTag;                                               // 0x16D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FerretVehicle.FerretVehicle_C");
		return ptr;
	}


	void QuestUpdate(class AFortPlayerPawn* FortPlayerPawn);
	void SendBoostTimeToMaterials(float BoostTimeValueForMID);
	void SendDamageValueToMaterials(float SavedDamageValueForMID);
	void SendHeadlightValueToMaterials(float SavedHeadlightValueForMID);
	void GetIconPlacement(class AActor* SelfActor, struct FVector* OutLocation, struct FVector* OutExtents);
	void DestroyOrDamageBuildingPiece(class ABuildingActor* BuildingActor, bool CheckForHealth, class UClass* GameplayEffectClass, float DestroyThreshold);
	struct FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn);
	void OnRep_ImpactLocation();
	TArray<struct FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	void OnRep_CorrectiveImpulse();
	void PlayHapticsOnHit(float HitMagnitude, bool Grind);
	void AttachWeaponToCart(int Selection);
	void OnRep_ImpulseVector();
	void UserConstructionScript();
	void Timeline();
	void BoostTimeline__FinishedFunc();
	void BoostTimeline__UpdateFunc();
	void BoostRumbleEnd();
	void BoostCameraReverse();
	void LocalPassengerADS(bool IsADS);
	void BoostEnd();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit);
	void UpdateBoostRumble();
	void DestroyCooldown();
	void BoostBegin();
	void ReverseBoostTimeline();
	void StartBoostRumble();
	void Handle_Spring_Compression_Audio();
	void OnEnteredWaterVolume(struct FVector WaterSurfacePoint);
	void OnExitedWaterVolume(struct FVector WaterSurfacePoint);
	void CheckWater();
	void OnSpringCompression_2();
	void EBrakeBegin_2();
	void EBrakeEnd_2();
	void PowerSlideBegin_2();
	void PowerSlideEnd_2();
	void ReceiveBeginPlay();
	void OnStopTick();
	void OnEngineStop();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BrakeCameraReverse();
	void OnEngineStart();
	void OnLanding();
	void StopDriverCameraShake();
	void StartDriverCameraShake();
	void Update_Damage_State(float Damage);
	void Start_Stop_Engine_Audio(bool Starting);
	void SmashedThroughBuildingPiece(struct FVector ImpactPoint, struct FVector ImpactNormal);
	void WeaponFired(EDualWeaponHand Hand, bool bPersistantFire);
	void OnDamaged(float Damage, struct FGameplayTagContainer DamageTags, struct FGameplayEffectContextHandle EffectContext, class AController* EventInstigator, class AActor* DamageCauser);
	void PawnHitByVehicle(class AFortPawn* Pawn, struct FVector ImpactPoint, struct FVector ImpactNormal, struct FVector LaunchVector);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnHoldExitStarted(class AFortPawn* ExitingPawn, float ExitDuration);
	void OnHoldExitStopped(class AFortPawn* ExitingPawn);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int SeatIdx);
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void K2_ApplyCosmeticWrap(class UAthenaItemWrapDefinition* LoadedWrap);
	void ChangeOutMaterials();
	void GunOverheat();
	void ReceiveDestroyed();
	void PedalForceFeedback();
	void DamageEventTimedOut();
	void OnCollisionHitEffects(struct FVector HitLocation, struct FVector HitNormalImpulse, struct FVector HitFrictionImpulse, struct FVector HitNormal, class AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType);
	void CanHitLastDriver();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void HideQuickBarForAbility(bool Hide);
	void SetHeadlightState(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation);
	void LightningSpark(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity);
	void ExecuteUbergraph_FerretVehicle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
