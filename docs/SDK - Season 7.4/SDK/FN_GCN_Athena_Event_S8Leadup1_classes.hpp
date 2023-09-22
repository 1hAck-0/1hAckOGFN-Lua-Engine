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

// BlueprintGeneratedClass GCN_Athena_Event_S8Leadup1.GCN_Athena_Event_S8Leadup1_C
// 0x002C (0x01CC - 0x01A0)
class UGCN_Athena_Event_S8Leadup1_C : public UFortGameplayCueNotify_Burst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      Target;                                                   // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AudioIntensityCurve_LPF;                                  // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AudioIntensityCurve_Volume;                               // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Epicenter;                                                // 0x01C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_Event_S8Leadup1.GCN_Athena_Event_S8Leadup1_C");
		return ptr;
	}


	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void SpawnParticles(bool Indoors, struct FVector Location);
	void ExecuteUbergraph_GCN_Athena_Event_S8Leadup1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
