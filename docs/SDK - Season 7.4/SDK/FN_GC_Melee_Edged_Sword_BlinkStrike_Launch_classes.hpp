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

// BlueprintGeneratedClass GC_Melee_Edged_Sword_BlinkStrike_Launch.GC_Melee_Edged_Sword_BlinkStrike_Launch_C
// 0x0020 (0x08A0 - 0x0880)
class AGC_Melee_Edged_Sword_BlinkStrike_Launch_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               Dust_Emitters;                                            // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_SplineVolumeTrail_v1b_C*                 Teleport_Spline;                                          // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Melee_Edged_Sword_BlinkStrike_Launch.GC_Melee_Edged_Sword_BlinkStrike_Launch_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GC_Melee_Edged_Sword_BlinkStrike_Launch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
