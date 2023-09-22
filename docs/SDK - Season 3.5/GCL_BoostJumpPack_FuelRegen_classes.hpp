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

// 0x80 (0x4C0 - 0x440)
// BlueprintGeneratedClass GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C
class AGCL_BoostJumpPack_FuelRegen_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	float                                        FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1; // 0x448(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1; // 0x44C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FullBlinkTimeline;                                 // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpawnedParticleEmitter;                            // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFuelRechargeAudioEnabled;                         // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_C*                  PlayerPawn;                                        // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpwardThrustMax;                                   // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LateralThrustMax;                                  // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpwardAccelerationMax;                             // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LateralAccelerationMax;                            // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentUpwardVelocity;                             // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuelMax;                                           // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetFuelVolumeMultiplier;                        // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentFuelVolumeMultiplier;                       // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFuelRecharged;                              // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFuelChargeRamp;                             // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayedFuelRecharge;                               // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        JetpackActivatedTime;                              // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuelRechargeRampVolumeMultiplier;                  // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           FuelRechargeRampVolumeCurve;                       // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OnFuelRechargeRamp_Comp;                           // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_BoostJumpPack_FuelRegen_C");
		return Clss;
	}

	float GetFuel(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedJetpackFuel_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default);
	void SetFuelRechargeAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_GetFuelPercent_FuelPercent, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1);
	void GetFuelPercent(float* FuelPercent, float CallFunc_GetFuel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void CacheAttributes(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedJetpackMaxFuel_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default, float CallFunc_FMax_ReturnValue);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue);
	void UserConstructionScript();
	void FullBlinkTimeline__FinishedFunc();
	void FullBlinkTimeline__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void Audio_Tick();
	void ResetBlink();
	void Start_Fuel_Blink_FX();
	void ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_GetFuelPercent_FuelPercent, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, float CallFunc_GetFuelPercent_FuelPercent1, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue12, float CallFunc_GetFuelPercent_FuelPercent12, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
