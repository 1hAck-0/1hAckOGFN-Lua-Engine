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

// BlueprintGeneratedClass B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C
// 0x0044 (0x07DC - 0x0798)
class AB_Prj_Commando_FragGrenade_Cluster_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  BounceSound;                                              // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_Explosion;                                              // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExplosionSound;                                           // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExplosionLocation;                                        // 0x07C8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinExplosionDelay;                                        // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExplosionDelay;                                        // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStop(struct FHitResult Hit);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
