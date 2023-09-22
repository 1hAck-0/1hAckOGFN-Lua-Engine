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

// BlueprintGeneratedClass GCN_MiniBoss.GCN_MiniBoss_C
// 0x0160 (0x0588 - 0x0428)
class AGCN_MiniBoss_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortMiniMapComponent*                       MiniMapCrosshair;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       TC_NPCCharacterTypeMiniBoss1P;                            // 0x0438(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCCharacterTypeMiniBoss4P;                            // 0x0458(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                _4P_Color;                                                // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                _1P_Color;                                                // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FLinearColor>            VectorParameters;                                         // 0x0498(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, float>                          ScalarParameters;                                         // 0x04E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UParticleSystem*>       ElementalParticlesMap;                                    // 0x0538(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_MiniBoss.GCN_MiniBoss_C");
		return ptr;
	}


	void SetMiniBossVisibility(bool Visible);
	void OverwriteElementalParticles(class AEnemyPawn_Parent_C* Enemy_Pawn_Parent);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void SetMiniBossGCNColors();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCN_MiniBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
