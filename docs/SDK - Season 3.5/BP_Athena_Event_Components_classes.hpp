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

// 0x140 (0x458 - 0x318)
// BlueprintGeneratedClass BP_Athena_Event_Components.BP_Athena_Event_Components_C
class ABP_Athena_Event_Components_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       Ambient_SkyboxLoop_Cue;                            // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Rainbow;                                           // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Athena_Event_Comet;                              // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        CometMovementTest_NewTrack_0_7D4A6AB748589EBEEA4C0FA6F3912457; // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CometMovementTest__Direction_7D4A6AB748589EBEEA4C0FA6F3912457; // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CometMovementTest;                                 // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CometStartTransform;                               // 0x350(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                            CometMidTransform;                                 // 0x380(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                            CometEndTransform;                                 // 0x3B0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                        CometPosition;                                     // 0x3E0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRainbow;                                       // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D1C[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RainbowWorldTransform;                             // 0x3F0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                         EnableRiverTint;                                   // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          RiverTintStPatrick_s;                              // 0x424(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CometScaleCurve;                                   // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       ShootingStarSpawns;                                // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                         PreviewShootingStars;                              // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnLocation;                                     // 0x454(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Athena_Event_Components_C");
		return Clss;
	}

	void RandomizeSpawnLocation(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void OnRep_CometPosition();
	void SetupRiverTint(bool EnableTint, const struct FLinearColor& TintColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void SetupComet(float CallFunc_GetFloatValue_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void CometMovementTest__FinishedFunc();
	void CometMovementTest__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateComet();
	void SpawnShootingStars();
	void SpawnMeteor();
	void ExecuteUbergraph_BP_Athena_Event_Components(int32 EntryPoint, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult1, float CallFunc_EvaluateCurveTableRow_OutXY1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, const struct FDateTime& CallFunc_UtcNow_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, int32 Temp_int_Variable, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult12, float CallFunc_EvaluateCurveTableRow_OutXY12, bool CallFunc_EqualEqual_FloatFloat_ReturnValue12, bool K2Node_SwitchEnum12_CmpSuccess, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue1, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult123, float CallFunc_EvaluateCurveTableRow_OutXY123, float CallFunc_RandomFloatInRange_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue12, float CallFunc_Multiply_FloatFloat_ReturnValue12, bool K2Node_SwitchEnum123_CmpSuccess, float CallFunc_RandomFloatInRange_ReturnValue123, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Array_Get_Item1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
