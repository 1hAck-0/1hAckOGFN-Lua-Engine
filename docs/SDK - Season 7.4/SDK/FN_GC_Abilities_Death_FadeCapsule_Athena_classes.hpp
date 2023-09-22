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

// BlueprintGeneratedClass GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C
// 0x0030 (0x0588 - 0x0558)
class AGC_Abilities_Death_FadeCapsule_Athena_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3;// 0x0560(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3;// 0x0564(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CapsuleFadeTL;                                            // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Starting_Min_Capsule_Shadow_Vis;                          // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              SkeletalMesh;                                             // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C");
		return ptr;
	}


	void SkeletalMeshSetup(class AFortPlayerPawnAthena* FortPawn);
	void UserConstructionScript();
	void CapsuleFadeTL__FinishedFunc();
	void CapsuleFadeTL__UpdateFunc();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
