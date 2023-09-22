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

// BlueprintGeneratedClass Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C
// 0x0070 (0x0CA0 - 0x0C30)
class AAthena_Enemy_Player_SneakySnowman_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_SneakySnowman;                                         // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Effects;                                                  // 0x0C40(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C41(0x0003) MISSED OFFSET
	struct FName                                       EnemySnowmanHolster;                                      // 0x0C44(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C4C(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0C5C(0x0004) MISSED OFFSET
	struct FScalableFloat                              MaxHealth;                                                // 0x0C60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SnowmanDuration;                                          // 0x0C80(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
