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

// BlueprintGeneratedClass CBGA_Blade_Athena.CBGA_Blade_Athena_C
// 0x0040 (0x0808 - 0x07C8)
class ACBGA_Blade_Athena_C : public ABuildingGameplayActorBlade
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_IBlade_Pull_SwordOnly;                                  // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Sword;                                                    // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientLooping;                                           // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             PickupBeam;                                               // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    BeamFX;                                                   // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CBGA_Blade_Athena.CBGA_Blade_Athena_C");
		return ptr;
	}


	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	void SetDrawDistance();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnPullStart();
	void OnPullAborted();
	void ExecuteUbergraph_CBGA_Blade_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
