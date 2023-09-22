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

// BlueprintGeneratedClass Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C
// 0x00C8 (0x0CF8 - 0x0C30)
class AAthena_Prop_SneakySnowman_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           OverlapCheck;                                             // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovementComponent;                              // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSimulationRunning;                                       // 0x0C48(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C49(0x0007) MISSED OFFSET
	class UClass*                                      GE_ApplyEnemySnowman;                                     // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ShouldSnowmanEnemies;                                     // 0x0C58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPickupAthena*                           PickupAthena;                                             // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              Ignored_Actors;                                           // 0x0C80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<TEnumAsByte<EObjectTypeQuery>>              LineTraceObjects;                                         // 0x0C90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DestroyAfterHit;                                          // 0x0CA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CA1(0x0003) MISSED OFFSET
	struct FVector                                     LandedLocation;                                           // 0x0CA4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialGravityScale;                                      // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GamestateLoaded;                                          // 0x0CB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0CB5(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0CB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     StopLocation;                                             // 0x0CC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0CD4(0x0004) MISSED OFFSET
	struct FScalableFloat                              FallHeightToDestroy;                                      // 0x0CD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C");
		return ptr;
	}


	void TraceStartAndEnd(struct FVector* Start, struct FVector* End);
	void ForceSetLocationOnLanding();
	void OnRep_LandedLocation();
	void OnRep_bSimulationRunning();
	void ResetSimulatedComponents();
	void UserConstructionScript();
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent(struct FHitResult ImpactResult);
	void BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void RestartSimulating();
	void ReceiveBeginPlay();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void BndEvt__OverlapCheck_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void PreFinishSpawning(class AFortVolume* VolumeSpawnedWithin);
	void PlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer PlaylistContextTags);
	void WobbleAnims();
	void WorldPropSupportDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void ResetDistanceCheck();
	void ExecuteUbergraph_Athena_Prop_SneakySnowman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
