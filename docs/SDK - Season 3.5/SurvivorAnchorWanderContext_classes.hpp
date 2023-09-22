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

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass SurvivorAnchorWanderContext.SurvivorAnchorWanderContext_C
class USurvivorAnchorWanderContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	float                                        ZGridSnapSize;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SurvivorAnchorWanderContext_C");
		return Clss;
	}

	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet, const TArray<struct FVector>& FinalLocationSet, class ABP_SurvivorAnchor_C* SurvivorAnchor, bool Temp_bool_Variable, class ABP_SurvivorAnchor_C* K2Node_DynamicCast_AsBP_Survivor_Anchor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakVector_X12, float CallFunc_BreakVector_Y12, float CallFunc_BreakVector_Z12, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
