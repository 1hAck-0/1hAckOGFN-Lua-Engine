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

// BlueprintGeneratedClass WeakSpot.WeakSpot_C
// 0x0098 (0x0410 - 0x0378)
class AWeakSpot_C : public ABuildingWeakSpot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ConnectTheDotsComponent;                                  // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComponent;                                        // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleDownParticleTL_ScaleDown;                            // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleDownParticleTL__Direction;                           // 0x039C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleDownParticleTL;                                      // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SpawnSound;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Particle_Location;                                        // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<class USoundBase*>                          Crack_sounds;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ConnectTheDotsWidth;                                      // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsDuration;                                   // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsTimeoutFromPreviousHit;                     // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsDurationScale;                              // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsMaxDuration;                                // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsTileScale;                                  // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsMinLength;                                  // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsMaxLength;                                  // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DamageTemplate;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             IdleTemplate;                                             // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ConnectMID;                                               // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HideMeshTimer;                                            // 0x0408(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeakSpot.WeakSpot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ScaleDownParticleTL__FinishedFunc();
	void ScaleDownParticleTL__UpdateFunc();
	void OnHit();
	void HideMesh();
	void OnFadeOut();
	void OnStartDirectionEffect();
	void ExecuteUbergraph_WeakSpot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
