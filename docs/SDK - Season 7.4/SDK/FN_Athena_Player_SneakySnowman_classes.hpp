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

// BlueprintGeneratedClass Athena_Player_SneakySnowman.Athena_Player_SneakySnowman_C
// 0x0050 (0x07D0 - 0x0780)
class AAthena_Player_SneakySnowman_C : public ABuildingGameplayActorBalloon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_SneakySnowman;                                         // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Effects;                                                  // 0x0790(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0791(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	class AB_Prj_Athena_SneakySnowman_C*               SneakySnowmanProj;                                        // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              MaxHealth;                                                // 0x07B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_Player_SneakySnowman.Athena_Player_SneakySnowman_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void ReceiveBeginPlay();
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void ExecuteUbergraph_Athena_Player_SneakySnowman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
