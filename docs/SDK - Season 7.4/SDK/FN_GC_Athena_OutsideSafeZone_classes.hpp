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

// BlueprintGeneratedClass GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C
// 0x0034 (0x08B4 - 0x0880)
class AGC_Athena_OutsideSafeZone_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Storm_ScreenEffect;                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline;                                                 // 0x0890(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline02;                                               // 0x0894(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline03;                                               // 0x08A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline04;                                               // 0x08A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StormOpacity;                                             // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C");
		return ptr;
	}


	void RemoveStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena);
	void AddStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void Timeline();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnApplication(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
