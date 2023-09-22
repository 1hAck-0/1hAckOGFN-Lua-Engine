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

// BlueprintGeneratedClass B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C
// 0x0090 (0x0828 - 0x0798)
class AB_Prj_Athena_Grenade_Base_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortCollisionAudioComponent*                FortCollisionAudio;                                       // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Fuse_Particle;                                            // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             GrenadeFuse_AudioComponent;                               // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Distance;                                          // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_Explosion;                                              // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_DistantSound;                                         // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfBouncesTillExplode;                               // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentNumberOfBounces;                                   // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_GrenadeFuseSound;                                     // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BouncePawnAgainstPawnGravityScale;                        // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_Bounce;                                               // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionCameraShake;                                     // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuseTime;                                                 // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C");
		return ptr;
	}


	void FuseEnded();
	void UserConstructionScript();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void OnBounce(struct FHitResult Hit);
	void Stop_Rotation();
	void OnStop(struct FHitResult Hit);
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void OnResumeSimulation();
	void ExecuteUbergraph_B_Prj_Athena_Grenade_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
