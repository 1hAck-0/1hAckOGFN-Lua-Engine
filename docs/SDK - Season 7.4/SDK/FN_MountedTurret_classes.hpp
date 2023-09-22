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

// BlueprintGeneratedClass MountedTurret.MountedTurret_C
// 0x0138 (0x0F58 - 0x0E20)
class AMountedTurret_C : public AFortMountedTurret
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           PawnCollision;                                            // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      ServoAudio;                                               // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    OverHeatScreen_R;                                         // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    OverHeatScreen_L;                                         // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioOnOverheat;                                          // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioOverheat;                                            // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    OverheatSmoke;                                            // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MagazineGlowR;                                            // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MagazineGlowL;                                            // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BarrelGlowL;                                              // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BarrelGlowR;                                              // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OverlapVolume;                                            // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  OnDeathSound;                                             // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_BlockWeaponFire;                                       // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GE_GrantWeapon;                                           // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             DriverPawn;                                               // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        DoorMesh;                                                 // 0x0EA8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    InWaterFX;                                                // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             InWaterLoop;                                              // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             HonkAudioComp;                                            // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GE_EnterTurret;                                           // 0x0EC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                PlayerEnterAnimation;                                     // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TurretEnterAnimation;                                     // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TurretFireAnimation;                                      // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PlayerFireAnimation;                                      // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortWeapon*                                 PlayerWeapon;                                             // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_MountedTurretAthena_C*                    TurretWeapon;                                             // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                GetWeaponTimer;                                           // 0x0F00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                OverheatCostmeticTimer;                                   // 0x0F08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                TurretFireLeftAnimation;                                  // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TurretFireRightAnimation;                                 // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 OverheatAudioCurve;                                       // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurretRotation;                                           // 0x0F28(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F34(0x0004) MISSED OFFSET
	class UAnimMontage*                                TurretStartAnimation;                                     // 0x0F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TurretExitAnimation;                                      // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZeroIfOverheating;                                        // 0x0F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanInteract;                                             // 0x0F4C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F4D(0x0003) MISSED OFFSET
	float                                              fInteractionDelay;                                        // 0x0F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fInteractionDelayOffset;                                  // 0x0F54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MountedTurret.MountedTurret_C");
		return ptr;
	}


	void OnGetExitSocketTransform(struct FName ExitSocket, int SocketIndex, struct FTransform InTransform, bool* bOutOverriderExitSocket, struct FTransform* OutOverrideTransform);
	bool BP_CanInteract(class AFortPlayerController* FortPC);
	struct FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn);
	float CurrentOverheatScalar();
	void GetIconPlacement(class AActor* SelfActor, struct FVector* OutLocation, struct FVector* OutExtents);
	TArray<struct FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	void UserConstructionScript();
	void OnNotifyEnd(struct FName NotifyName);
	void OnNotifyBegin(struct FName NotifyName);
	void OnInterrupted(struct FName NotifyName);
	void OnBlendOut(struct FName NotifyName);
	void OnCompleted(struct FName NotifyName);
	void OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName);
	void OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName);
	void OnInterrupted_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName);
	void OnBlendOut_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName);
	void OnCompleted_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName);
	void OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName);
	void OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName);
	void OnInterrupted_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName);
	void OnBlendOut_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName);
	void OnCompleted_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName);
	void OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName);
	void OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName);
	void OnInterrupted_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName);
	void OnBlendOut_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName);
	void OnCompleted_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int SeatIdx);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void Get_Turret_Weapon();
	void Event_On_Weapon_Fired(EDualWeaponHand Hand, bool bPersistantFire);
	void HideQuickBarForAbility(bool Hide);
	void UpdateOverheatCosmetics();
	void Clear_FX_And_AudioTimer();
	void Handle_Rotation_Audio();
	void Start_FX_And_Audio_Timer();
	void ExecuteUbergraph_MountedTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
