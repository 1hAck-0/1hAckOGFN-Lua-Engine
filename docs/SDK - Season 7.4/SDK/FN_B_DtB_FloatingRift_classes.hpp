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

// BlueprintGeneratedClass B_DtB_FloatingRift.B_DtB_FloatingRift_C
// 0x0108 (0x0870 - 0x0768)
class AB_DtB_FloatingRift_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Electricity_Spark_Zaps_Audio_Component;                   // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        dtb_rift_ground;                                          // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        dtb_rift_ground02;                                        // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        dtb_rift_ground03;                                        // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        dtb_rift_ground04;                                        // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DispatcherCallOutVolume;                                  // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal_Ground;                                             // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_DtB_GroundFog;                                         // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_DtB_GroundTendril;                                     // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        dtb_rift_orb;                                             // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        dtb_rift_floating_pieces;                                 // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        dtb_rift_center;                                          // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_StormFog;                                               // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientClose_small;                                       // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientLoopingSound_large;                                // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           KillVolume;                                               // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            StaminaVolume;                                            // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DamageVolume;                                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Rift_Arcs;                                              // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               RiftArcTriggerVolume;                                     // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CampSlime;                                                // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            PostProcessVolume;                                        // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_DtBRiftCoreFloating;                                    // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsRiftArcsActive_;                                       // 0x0840(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0841(0x0007) MISSED OFFSET
	class UFortAbilitySystemComponent*                 AIPawnAbilitySystemComponent;                             // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0850(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty B_DtB_FloatingRift.B_DtB_FloatingRift_C.RiftLocated
	unsigned char                                      UnknownData02[0x10];                                      // 0x0860(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty B_DtB_FloatingRift.B_DtB_FloatingRift_C.CallOutVolumeOverlap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_DtB_FloatingRift.B_DtB_FloatingRift_C");
		return ptr;
	}


	void OnRep_bIsRiftArcsActive_();
	void UserConstructionScript();
	void BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void ReceiveBeginPlay();
	void BndEvt__KillVolume_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void HandleMissionEvent_NewPlayer(struct FGuid InMissionGuid, struct FGameplayTagContainer ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, struct FText GenericText, struct FGameplayTagContainer GameplayTags, struct FFortMissionEvent MissionEvent);
	void BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent(struct FName EventName, float EmitterTime, int ParticleCount);
	void ExecuteUbergraph_B_DtB_FloatingRift(int EntryPoint);
	void CallOutVolumeOverlap__DelegateSignature(class AFortPlayerPawn* FortPlayerPawn);
	void RiftLocated__DelegateSignature(class AFortPlayerPawn* FortPlayPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
