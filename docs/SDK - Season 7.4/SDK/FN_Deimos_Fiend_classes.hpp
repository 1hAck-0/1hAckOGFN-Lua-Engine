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

// BlueprintGeneratedClass Deimos_Fiend.Deimos_Fiend_C
// 0x025C (0x2790 - 0x2534)
class ADeimos_Fiend_C : public AEnemyPawn_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x2534(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                HitCount;                                                 // 0x2540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastTakeHitTime;                                          // 0x2544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_HitReactionAdditiveSingleOneShot;                      // 0x2548(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionAdditiveLoop;                               // 0x2568(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionFullBody;                                   // 0x2588(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionBlockAll;                                   // 0x25A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionBlockMelee;                                 // 0x25C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionBlockRanged;                                // 0x25E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HitReactForMelee;                                         // 0x2608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2609(0x0007) MISSED OFFSET
	class UParticleSystem*                             ImpactParticles_Default;                                  // 0x2610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_HumanFlesh;                               // 0x2618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Wood;                                     // 0x2620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Stone;                                    // 0x2628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Metal;                                    // 0x2630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeImpact_UseSocketTransforms;                          // 0x2638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2639(0x0003) MISSED OFFSET
	struct FName                                       Impact_MeleeSocket;                                       // 0x263C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadshot_HideHead;                                      // 0x2644(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2645(0x0003) MISSED OFFSET
	float                                              PreviousLargestDeathRadius;                               // 0x2648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x264C(0x0004) MISSED OFFSET
	class USoundBase*                                  Death_Normal_Sound;                                       // 0x2650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Death_RedLaser_Sound;                                     // 0x2658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Spawn_Dust_Particles;                                     // 0x2660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafetyTimerDuration;                                      // 0x2668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_HQ;                                               // 0x266C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x266D(0x0003) MISSED OFFSET
	class UTexture*                                    Diffuse_Texture;                                          // 0x2670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeimosKnockBackValue;                                     // 0x2678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MonsterType;                                              // 0x267C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      CueParamsSpawnFiend;                                      // 0x2680(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstance*                           MaskedDeathMaterial;                                      // 0x2738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_MaskedDeathMaterial;                                  // 0x2740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_MonsterMaterial;                                      // 0x2748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x2750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_DeimosShieldOnFiendKill;                               // 0x2760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScalableFloat                              FreezeDuration;                                           // 0x2768(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                SpawnFXGC;                                                // 0x2788(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deimos_Fiend.Deimos_Fiend_C");
		return ptr;
	}


	void GetEnemyColor(struct FLinearColor* Color);
	void Temp_FindClosestBone(struct FVector HitLocation, struct FName* ClosestBone);
	void SetupMIDs();
	void OnRep_HasBackPack();
	void UserConstructionScript();
	void MantleStart(struct FVector StartPos, struct FVector MidPos, struct FVector EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
	void MantleEnd();
	void HuskEvadeStart();
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void BeginTakerSwoopAttack();
	void EndTakerSwoopAttack();
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, struct FVector DesiredMoveLocation, bool Debug);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerAttackFSM(bool SuccessfulHit);
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerSoulSuckSoundEnd();
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList);
	void PortalClear();
	void TakerSoulSuckInterrupted();
	void PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList, class AActor* BT);
	void PortalFX();
	void PortalCollision(bool Collide_);
	void GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ReceiveBeginPlay();
	void OnStartedEncounterSpawn();
	void AnimateDeathMaterial();
	void CustomOnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void GameplayCue_Athena_IceDeimos(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void RemoveChillerMaterial();
	void ExecuteUbergraph_Deimos_Fiend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
