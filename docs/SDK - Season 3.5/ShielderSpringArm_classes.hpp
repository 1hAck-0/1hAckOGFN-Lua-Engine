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

// 0x80 (0x398 - 0x318)
// BlueprintGeneratedClass ShielderSpringArm.ShielderSpringArm_C
class AShielderSpringArm_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(Transient, DuplicateTransient)
	class UArrowComponent*                       ShielderAttachArrow;                               // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_ShielderSphere;                                  // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SphereOffset;                                      // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SpringArmProbeSizeDebugSphere;                     // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       SpringArmRotationArrow;                            // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShielderInterpSpeedToNewSpringArmLocation;         // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             AttachPawn;                                        // 0x360(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               ShieldScaleFactor;                                 // 0x368(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShielderPawn_C*                       Shielder;                                          // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ShieldMID;                                         // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Super_Shielder;                                 // 0x388(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2FC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              Beam_Emitter;                                      // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShielderSpringArm_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void HitFlashFX();
	void ReceiveDestroyed();
	void Beam_Removal();
	void Beam_Spawn(class AActor* Origin);
	void ExecuteUbergraph_ShielderSpringArm(int32 EntryPoint, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue12, const struct FVector& CallFunc_GetSocketLocation_ReturnValue123, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1234, bool CallFunc_IsValid_ReturnValue12, float K2Node_Event_DeltaSeconds, class AActor* K2Node_CustomEvent_Origin, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn1, bool K2Node_DynamicCast_bSuccess1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
