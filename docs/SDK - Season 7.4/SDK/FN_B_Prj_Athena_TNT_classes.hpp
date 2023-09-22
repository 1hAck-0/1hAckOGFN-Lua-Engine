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

// BlueprintGeneratedClass B_Prj_Athena_TNT.B_Prj_Athena_TNT_C
// 0x0060 (0x0888 - 0x0828)
class AB_Prj_Athena_TNT_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0828(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            InteractCollision;                                        // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TNTBundle;                                                // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxCookTime;                                              // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	struct FTimerHandle                                FuseTimer;                                                // 0x0850(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RemainingFuseTime;                                        // 0x0858(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Shockwave_Based_Explosion;                            // 0x085C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	float                                              Actual_Radius;                                            // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSimulationRunning;                                       // 0x0864(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0865(0x0003) MISSED OFFSET
	struct FRotator                                    TargetRotation;                                           // 0x0868(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpDuration;                                             // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	struct FTimerHandle                                LerpTimer;                                                // 0x0880(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_TNT.B_Prj_Athena_TNT_C");
		return ptr;
	}


	void OnRep_RemainingFuseTime();
	void MakeOrthogonalZ(struct FRotator InRotation, struct FVector Normal, struct FRotator* OutRotation);
	void Spline_Point_Locations(TArray<struct FVector> Array);
	void UserConstructionScript();
	void FuseEnded();
	void Event_StartFuse(float Time);
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void OnStop(struct FHitResult Hit);
	void ReceiveBeginPlay();
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent(struct FHitResult ImpactResult);
	void Event_BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void Event_OnVehicleDestroyed(class AActor* DestroyedActor);
	void Lerp();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_Prj_Athena_TNT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
