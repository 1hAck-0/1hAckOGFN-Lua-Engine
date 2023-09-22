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

// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// 0x0250 (0x09E8 - 0x0798)
class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Fuse_Particle;                                            // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             GrenadeFuse_AudioComponent;                               // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Distance;                                          // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_Explosion;                                              // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_DistantSound;                                         // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x07E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfBouncesTillExplode;                               // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentNumberOfBounces;                                   // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	class USoundBase*                                  Cue_GrenadeFuseSound;                                     // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BouncePawnAgainstPawnGravityScale;                        // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxClusterGrenades;                                       // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_ClusterExplosion;                                      // 0x0814(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasCluster;                                              // 0x081C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x081D(0x0003) MISSED OFFSET
	class UClass*                                      Prj_Cluster;                                              // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            ClusterContainerSpec;                                     // 0x0828(0x0080) (Edit, BlueprintVisible)
	bool                                               bHasKeepOut;                                              // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08A9(0x0007) MISSED OFFSET
	struct FFortGameplayEffectContainerSpec            KeepOutContainerSpec;                                     // 0x08B0(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AOE_KeepOut;                                              // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasClusterTactical;                                      // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0939(0x0007) MISSED OFFSET
	struct FFortGameplayEffectContainerSpec            Cluster_Tactical_Container_Spec;                          // 0x0940(0x0080) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       TC_ActorTagsThatShouldExplodeOnOverlap;                   // 0x09C0(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTag                                T_Event_GrenadeExploded;                                  // 0x09E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C");
		return ptr;
	}


	void SpawnKeepOut();
	void SpawnClusters();
	float CalcGrenadeSpeed(float Angle);
	void OnRep_StoredHit();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnBounce(struct FHitResult Hit);
	void On_Destroy_Grenade(class AActor* DestroyedActor);
	void Bind_Destroy_Grenade();
	void Force_On_Exploded_Effects();
	void Unbind_Destroy_Grenade();
	void TriggerDoExplsoion();
	void ReceiveDestroyed();
	void CheckKeepOutAndCluster();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void SendExplodedEvent();
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
