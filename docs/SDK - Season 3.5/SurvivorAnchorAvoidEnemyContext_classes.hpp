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

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass SurvivorAnchorAvoidEnemyContext.SurvivorAnchorAvoidEnemyContext_C
class USurvivorAnchorAvoidEnemyContext_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SurvivorAnchorAvoidEnemyContext_C");
		return Clss;
	}

	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation, const struct FVector& ClosestFortPlayerPawnLocation, bool ClosestFortPlayerPawnIsValid, float ZGridSnapSize, class ABP_SurvivorAnchor_C* SurvivorAnchor, bool Debug, float GeneratorZOffset, const struct FVector& Result, float Temp_float_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_SurvivorAnchor_C* K2Node_DynamicCast_AsBP_Survivor_Anchor, bool K2Node_DynamicCast_bSuccess, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess1, float Temp_float_Variable1, float Temp_float_Variable12, float Temp_float_Variable123, float Temp_float_Variable1234, float Temp_float_Variable12345, float Temp_float_Variable123456, float Temp_float_Variable1234567, float Temp_float_Variable12345678, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue123, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, enum class ESurvivorAnchorMaxZMove Temp_byte_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetClosestFortPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue12, bool CallFunc_IsValid_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, float K2Node_Select_Default, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess12, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess123, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue123, float CallFunc_BreakVector_X12, float CallFunc_BreakVector_Y12, float CallFunc_BreakVector_Z12, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X123, float CallFunc_BreakVector_Y123, float CallFunc_BreakVector_Z123, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, float CallFunc_BreakVector_X1234, float CallFunc_BreakVector_Y1234, float CallFunc_BreakVector_Z1234, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GridSnap_Float_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector_X12345, float CallFunc_BreakVector_Y12345, float CallFunc_BreakVector_Z12345, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue12, float CallFunc_SelectFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue12, float CallFunc_BreakVector_X123456, float CallFunc_BreakVector_Y123456, float CallFunc_BreakVector_Z123456, float CallFunc_Subtract_FloatFloat_ReturnValue123, float CallFunc_Subtract_FloatFloat_ReturnValue1234, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue123, float CallFunc_GridSnap_Float_ReturnValue12, float CallFunc_BreakVector_X1234567, float CallFunc_BreakVector_Y1234567, float CallFunc_BreakVector_Z1234567, float CallFunc_BreakVector_X12345678, float CallFunc_BreakVector_Y12345678, float CallFunc_BreakVector_Z12345678, float CallFunc_GridSnap_Float_ReturnValue123, float CallFunc_Subtract_FloatFloat_ReturnValue12345, float CallFunc_Add_FloatFloat_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue123456, float CallFunc_Add_FloatFloat_ReturnValue123, bool CallFunc_Greater_FloatFloat_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1234567, float CallFunc_Add_FloatFloat_ReturnValue1234, bool CallFunc_Greater_FloatFloat_ReturnValue123, bool CallFunc_Less_FloatFloat_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue123, float CallFunc_BreakVector_X123456789, float CallFunc_BreakVector_Y123456789, float CallFunc_BreakVector_Z123456789, bool CallFunc_BooleanAND_ReturnValue1234, float CallFunc_SelectFloat_ReturnValue123, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_SelectFloat_ReturnValue1234, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue12345);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
