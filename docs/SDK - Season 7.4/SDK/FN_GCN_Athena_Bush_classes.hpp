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

// BlueprintGeneratedClass GCN_Athena_Bush.GCN_Athena_Bush_C
// 0x0090 (0x0910 - 0x0880)
class AGCN_Athena_Bush_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        OwningPlayer_BushMesh;                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow2;                                                   // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BushMesh;                                                 // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Trail_Leaves;                                             // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437;// 0x08B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437;  // 0x08BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OpacityFade;                                              // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      PlayerPawn;                                               // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Bush;                                                 // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08D9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_OwningClientBush;                                     // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCurveTableRowHandle                        ClientBushOpacity;                                        // 0x08E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TargetOpacity;                                            // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	class UParticleSystem*                             BushDestructionVFX;                                       // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BushDestructionSFX;                                       // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_Bush.GCN_Athena_Bush_C");
		return ptr;
	}


	void UserConstructionScript();
	void OpacityFade__FinishedFunc();
	void OpacityFade__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void On_Player_Step();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCN_Athena_Bush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
