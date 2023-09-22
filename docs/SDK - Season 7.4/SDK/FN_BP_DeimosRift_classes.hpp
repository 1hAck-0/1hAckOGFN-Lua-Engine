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

// BlueprintGeneratedClass BP_DeimosRift.BP_DeimosRift_C
// 0x03D0 (0x0BE0 - 0x0810)
class ABP_DeimosRift_C : public ABuildingRift
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Rift_IdleFog;                                           // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_CubeRunes;                                             // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Deimos_Spawner_Loop_Sound;                                // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FogMesh;                                                  // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NoBuildZone;                                              // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Deimos_Rift_Dying;                                      // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CosmeticBaseMesh;                                         // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Deimos_RiftSpawn_DamageState;                           // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CubeMesh;                                                 // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaskedMID;                                                // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OpaqueMID;                                                // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CubeMat;                                                  // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CubeMatLOD1;                                              // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BaseMaterial;                                             // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GE_Destroyed;                                             // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      CueParamsCreate;                                          // 0x0898(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayCueParameters                      CueParamsChargeUp;                                        // 0x0950(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayCueParameters                      CueParamsSpawnFiend;                                      // 0x0A08(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayCueParameters                      CueParamsRiftSpawn;                                       // 0x0AC0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DamageState;                                              // 0x0B78(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B7C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          BaseLODMaterial;                                          // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BaseMeshMat;                                              // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_StageOneExplode;                                    // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_StageTwoExplode;                                    // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_DeimosSpawnerLoop;                                  // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_StageThreeBuildup;                                  // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_DamagePerSpawn;                                        // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GE_DamageReduction;                                       // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoSpawnEffects;                                           // 0x0BC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BC1(0x0003) MISSED OFFSET
	float                                              SpawnAnimDuration;                                        // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                FiendSpawnFXGC;                                           // 0x0BC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                ChargeUpFXGC;                                             // 0x0BD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                SpawnFXGC;                                                // 0x0BD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeimosRift.BP_DeimosRift_C");
		return ptr;
	}


	void FlashCubeMaterial();
	void OnRep_DamageState();
	void UserConstructionScript();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void BP_Cosmetic_RampUp();
	void BP_Cosmetic_Intro();
	void BP_Cosmetic_Idle();
	void OnStartedEncounterSpawn(class AFortAIPawn* SpawnedAI);
	void ReceiveBeginPlay();
	void OnDamaged_Bind(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void BP_Cosmetic_ShouldDie();
	void OnBuildingRiftSpawnedAI_Bind();
	void TestDynamicRiftSpawn();
	void SpawnEffects();
	void ExecuteUbergraph_BP_DeimosRift(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
