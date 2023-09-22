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

// BlueprintGeneratedClass GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C
// 0x0084 (0x09BC - 0x0938)
class UGA_Rift_Athena_Skydive_NoSound_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                FallingAnimation;                                         // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Hangtimee;                                                // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      VehicleSkelMesh;                                          // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              Hangtime;                                                 // 0x0958(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventTag;                                                 // 0x0978(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              KickFromVehicle_;                                         // 0x0980(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GameplayCueGE;                                            // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHolstered;                                               // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09B1(0x0003) MISSED OFFSET
	struct FName                                       RiftSkydiveHolster;                                       // 0x09B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C");
		return ptr;
	}


	void OnCancelled();
	void OnInterrupted();
	void OnBlendOut();
	void OnCompleted();
	void OnChange(TEnumAsByte<EMovementMode> NewMovementMode);
	void K2_ActivateAbility();
	void SetPlayerToSkydive();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
