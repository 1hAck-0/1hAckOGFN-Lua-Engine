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

// BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C
// 0x008C (0x05E4 - 0x0558)
class AGC_Generic_AdrenalineRush_DirectHeal_Latent_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HealthSweep_SafetyOpacity_AEAC519D4817261537105281CD9192C7;// 0x0560(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealthSweep_Sweep_AEAC519D4817261537105281CD9192C7;       // 0x0564(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HealthSweep__Direction_AEAC519D4817261537105281CD9192C7;  // 0x0568(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	class UTimelineComponent*                          HealthSweep;                                              // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             My_Target;                                                // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Duplicate_MIDs;                                           // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      Duplicate_Head;                                           // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Body;                                           // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Hat;                                            // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Backpack;                                       // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Charm;                                          // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Face;                                           // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Adrenaline_Rush_Color_Outer_Direct;                       // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Adrenaline_Rush_Color_Inner_Direct;                       // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Adrenaline_Rush_WPO_Offset;                               // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C");
		return ptr;
	}


	void Destroy_Meshes();
	void Duplicate_Meshes(class AFortPlayerPawn* Player_Pawn);
	void Set_Adrenaline_Rush_Visibility(bool Visible, class AFortPlayerPawn* Player_Pawn);
	void UserConstructionScript();
	void HealthSweep__FinishedFunc();
	void HealthSweep__UpdateFunc();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
