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

// BlueprintGeneratedClass PhysicsBall_Master.PhysicsBall_Master_C
// 0x00B0 (0x0878 - 0x07C8)
class APhysicsBall_Master_C : public AFortPhysicsBall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Ball;                                                     // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      RollingAudio;                                             // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                FortCollisionAudio;                                       // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              VelocityHitMagMultiplier;                                 // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitPitch;                                                 // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedToRotationRateRatio;                                 // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastVelocity;                                             // 0x07FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageHitMagMultiplier;                                   // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitMagMax;                                                // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BallHitSound;                                             // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OtherVelocity;                                            // 0x0818(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OtherLocation;                                            // 0x0824(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinAngularPower;                                          // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitOtherBall;                                             // 0x0834(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitOtherPawn;                                             // 0x0835(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ServerAuthoritative;                                      // 0x0836(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlotTrajectory;                                           // 0x0837(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Debug_LastPosition;                                       // 0x0838(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InitialSpawnPosition;                                     // 0x0844(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EverCameToRest;                                           // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0851(0x0003) MISSED OFFSET
	int                                                BounceCount;                                              // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    GenericImpactFX;                                          // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WaterImpactFX;                                            // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DustRadius;                                               // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DustSize;                                                 // 0x086C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PhysicsBall_Master.PhysicsBall_Master_C");
		return ptr;
	}


	void ImpactFX(class AActor* HitActor, struct FVector SpawnLocation, bool Overlap_);
	void MakeBallDormant();
	void SetBallVelocityAndStartTicking(struct FVector NewVelocity);
	void OnRep_PlotTrajectory();
	float GetHitScale(struct FVector HitLocation, struct FVector HitVelocity);
	void SetTickingEnabled(bool ShouldTick);
	void ApplyImpulseToBall(struct FVector HitLocation, struct FVector HitVelocity, float HitMagnitude);
	void UpdateDirectionAndRotationRate(float DeltaSeconds);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ProjectileStop(struct FHitResult ImpactResult);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit);
	void OnReplicatedVelocityStartOrStop(bool bStart);
	void DrawDebugTrajectory();
	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void OnPawnTouchedMe(class APawn* TouchingPawn);
	void ExecuteUbergraph_PhysicsBall_Master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
