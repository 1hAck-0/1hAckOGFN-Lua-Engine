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

// BlueprintGeneratedClass GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C
// 0x0058 (0x08D8 - 0x0880)
class AGC_Perk_Assassination_Active_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      GE_Assassination_T01;                                     // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_Assassination_T02;                                     // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stacks_T01;                                               // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stacks_T02;                                               // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasT02;                                                   // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Assassination_T02;                                     // 0x08A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Large_FXActive_Lvl;                                       // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    LoopingParticle;                                          // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C");
		return ptr;
	}


	void HandleFX(class AActor* Target, class UParticleSystemComponent* ParticleSystem);
	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnApplication(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GC_Perk_Assassination_Active(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
