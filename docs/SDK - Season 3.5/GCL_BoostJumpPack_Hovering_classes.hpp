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

// 0xA8 (0x4E8 - 0x440)
// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C
class AGCL_BoostJumpPack_Hovering_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	float                                        Jetpack_Audio_Modulation_Fuel_4B6C9E744D4A38FAEE9F0F9F2E1AE53F; // 0x448(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Jetpack_Audio_Modulation__Direction_4B6C9E744D4A38FAEE9F0F9F2E1AE53F; // 0x44C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_412F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Jetpack_Audio_Modulation;                          // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpawnedParticleEmitter;                            // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bJetpackAudioEnabled;                              // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4130[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundOnStart;                                      // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnStop;                                       // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnIdle;                                   // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnAccel;                                  // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OnIdleAudio_Comp;                                  // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OnAccelAudio_Comp;                                 // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  PlayerPawn;                                        // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentUpwardVelocity;                             // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4131[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundLoopOnOutOfFuel;                              // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OnOutOfFuelAudio_Comp;                             // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetFuelVolumeMultiplier;                        // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentFuelVolumeMultiplier;                       // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFuelWarning;                                // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnOutOfFuel;                                  // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnThrust;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayedFuelWarning;                                // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsFirstJump;                                      // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4132[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        JetpackActivatedTime;                              // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              GroundInteract;                                    // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_BoostJumpPack_Hovering_C");
		return Clss;
	}

	float GetLateralThrust(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedJetpackLateralThrust_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default);
	float GetUpwardThrust(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedJetpackUpwardThrust_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default, float CallFunc_FMax_ReturnValue);
	float GetMaxFuel(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedJetpackMaxFuel_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default, float CallFunc_FMax_ReturnValue);
	float GetFuel(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedJetpackFuel_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default);
	void GetFuelPercent(float* FuelPercent, float CallFunc_GetMaxFuel_ReturnValue, float CallFunc_GetFuel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void CacheAttributes();
	void SetJetpackAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue12, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue123, bool Temp_bool_Variable1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1234, class USoundBase* K2Node_Select1_Default, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue12, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue12, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue123, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1234);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue1);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void UserConstructionScript();
	void Jetpack_Audio_Modulation__FinishedFunc();
	void Jetpack_Audio_Modulation__UpdateFunc();
	void Jetpack_Audio_Modulation__FuelWarning__EventFunc();
	void ReceiveTick(float DeltaSeconds);
	void Audio_Tick();
	void On_Pawn_Landed(struct FHitResult& Hit);
	void ResetFX();
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue1, float CallFunc_FInterpTo_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_GetFuelPercent_FuelPercent, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue12, float CallFunc_GetFuelPercent_FuelPercent1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue123, const struct FHitResult& K2Node_CustomEvent_Hit, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetFuelPercent_FuelPercent12, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class AActor*>& Temp_object_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue1234, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue123, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_GetUpwardThrust_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue12345, bool Temp_bool_IsClosed_Variable, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue123456);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
