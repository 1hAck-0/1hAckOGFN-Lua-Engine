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

// BlueprintGeneratedClass B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C
// 0x00A8 (0x0840 - 0x0798)
class AB_Prj_Athena_SneakySnowman_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SK_Sneaky_Snowman_Throw;                                  // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Trail;                                                 // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                FortCollisionAudio;                                       // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_InAir;                                              // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Cue_HitPlayer;                                            // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    SnowmanItemDef;                                           // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitPlayer;                                                // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07D9(0x0007) MISSED OFFSET
	class UClass*                                      GE_ApplyEnemySnowman;                                     // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SnowmanSpawnFX;                                           // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ShouldSnowmanEnemies;                                     // 0x07F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  SoundOnExplo;                                             // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0818(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	class AActor*                                      HitActor;                                                 // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UFortItem*>                           SnowmanItemInstances;                                     // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C");
		return ptr;
	}


	void UpdateQuest(class AFortPlayerController* FortPC);
	bool ShouldApplySnowman_(class UObject* PlayerPawn);
	void Should_Bounce_(struct FVector Hit_Normal);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult Hit);
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult HitResult, bool bIsOverlap);
	void Explode();
	void ExecuteUbergraph_B_Prj_Athena_SneakySnowman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
