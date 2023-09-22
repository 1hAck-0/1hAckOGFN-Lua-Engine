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

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass SurvivorAnchorLocationsToAvoidContext.SurvivorAnchorLocationsToAvoidContext_C
class USurvivorAnchorLocationsToAvoidContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	bool                                         Debug;                                             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3125[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnchorPaddingDistanceToIncludeAdditionalAvoidanceObjects; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SurvivorAnchorLocationsToAvoidContext_C");
		return Clss;
	}

	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet, class AActor* Querier, const TArray<class AActor*>& ActorsToTest, const TArray<struct FVector>& LocationSet, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item1, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_BreakVector_X12, float CallFunc_BreakVector_Y12, float CallFunc_BreakVector_Z12, class AFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue12, class AFortAreaOfEffectCloud* K2Node_DynamicCast_AsFort_Area_Of_Effect_Cloud, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_BooleanAND_ReturnValue, class ABuildingGameplayActor* K2Node_DynamicCast_AsBuilding_Gameplay_Actor, bool K2Node_DynamicCast_bSuccess123, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue123, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue1234, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class AFortProjectileBase*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABuildingGameplayActor*>& CallFunc_GetAllActorsOfClass_OutActors1, TArray<class AFortAreaOfEffectCloud*>& CallFunc_GetAllActorsOfClass_OutActors12, int32 CallFunc_Array_Add_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
