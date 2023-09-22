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

// BlueprintGeneratedClass GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C
// 0x0038 (0x08B8 - 0x0880)
class AGCNL_EnvCampFire_Doused_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Fade_Doused_Smoke_Fade;                                   // 0x0888(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fade_Doused_Smoke__Direction;                             // 0x088C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fade_Doused_Smoke;                                        // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              Row_Duration;                                             // 0x0898(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C");
		return ptr;
	}


	void UserConstructionScript();
	void Fade_Doused_Smoke__FinishedFunc();
	void Fade_Doused_Smoke__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_EnvCampFire_Doused(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
