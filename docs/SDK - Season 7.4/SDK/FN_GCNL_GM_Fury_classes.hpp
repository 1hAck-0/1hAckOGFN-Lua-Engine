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

// BlueprintGeneratedClass GCNL_GM_Fury.GCNL_GM_Fury_C
// 0x00B0 (0x04D8 - 0x0428)
class AGCNL_GM_Fury_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    FuryPS;                                                   // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<struct FName, struct FLinearColor>            VectorParameters;                                         // 0x0438(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, float>                          ScalarParameters;                                         // 0x0488(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_GM_Fury.GCNL_GM_Fury_C");
		return ptr;
	}


	void DisableFuryPS();
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void BindOnDied(class AEnemyPawn_Parent_C* EnemyPawnParentReference);
	void OnEnemyDeath(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, struct FVector HitLocation, class AActor* DamageCauser);
	void ExecuteUbergraph_GCNL_GM_Fury(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
