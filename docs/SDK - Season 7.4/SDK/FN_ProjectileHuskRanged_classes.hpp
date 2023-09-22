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

// BlueprintGeneratedClass ProjectileHuskRanged.ProjectileHuskRanged_C
// 0x0021 (0x07B9 - 0x0798)
class AProjectileHuskRanged_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Ranged_Projectile_Sound;                                  // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ProjectileParticleSystem;                                 // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      GoalActor;                                                // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Exploded;                                                 // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjectileHuskRanged.ProjectileHuskRanged_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit);
	void ReceiveBeginPlay();
	void ProjectileCheck();
	void StopHoming();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void OnStoppedOnServer();
	void ExecuteUbergraph_ProjectileHuskRanged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
