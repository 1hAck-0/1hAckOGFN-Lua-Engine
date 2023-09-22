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

// BlueprintGeneratedClass GCNL_Creative_SpeedAdjust_Pawn.GCNL_Creative_SpeedAdjust_Pawn_C
// 0x0044 (0x08C4 - 0x0880)
class AGCNL_Creative_SpeedAdjust_Pawn_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UParticleSystemComponent*>            PSComponents;                                             // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   Decrease_Speed_Sound;                                     // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Increase_Speed_Sound;                                     // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Decrease_Stop_Sound;                                      // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Increase_Stop_Sound;                                      // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Speed_Index;                                              // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Creative_SpeedAdjust_Pawn.GCNL_Creative_SpeedAdjust_Pawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnApplication(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
