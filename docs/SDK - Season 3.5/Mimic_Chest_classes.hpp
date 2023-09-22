#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xE10 - 0xDA8)
// BlueprintGeneratedClass Mimic_Chest.Mimic_Chest_C
class AMimic_Chest_C : public ABuildingSMActor
{
public:
	uint8                                        Pad_2A2C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDB0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  S_Chest_SmokeSheet;                                // 0xDB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0xDC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0xDC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 FortMiniMap;                                       // 0xDD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ChestAudio;                                        // 0xDD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Twitch_Scale_CE105FFA4C580F811CE19C91346CC37D;     // 0xDE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Twitch__Direction_CE105FFA4C580F811CE19C91346CC37D; // 0xDE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TWITCH;                                            // 0xDE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       InteractingPawn;                                   // 0xDF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBlockedByStairs_;                                 // 0xDF8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2A2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Mimic_Chest_Shake_Sound;                           // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Mimic_Chest_Break_Sound;                           // 0xE08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mimic_Chest_C");
		return Clss;
	}

	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, class FText InteractionDisplayText);
	void OnRep_bBlockedByStairs_();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void Twitch__FinishedFunc();
	void Twitch__UpdateFunc();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BlueprintOnBeginInteract();
	void ReceiveBeginPlay();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_Mimic_Chest(int32 EntryPoint, const struct FVector& CallFunc_VLerp_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABuildingRoof* K2Node_DynamicCast_AsBuilding_Roof, bool K2Node_DynamicCast_bSuccess1, class ABuildingStairs* K2Node_DynamicCast_AsBuilding_Stairs, bool K2Node_DynamicCast_bSuccess12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
