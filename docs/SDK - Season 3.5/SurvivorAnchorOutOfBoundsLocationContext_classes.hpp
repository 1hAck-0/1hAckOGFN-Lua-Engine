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
// BlueprintGeneratedClass SurvivorAnchorOutOfBoundsLocationContext.SurvivorAnchorOutOfBoundsLocationContext_C
class USurvivorAnchorOutOfBoundsLocationContext_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SurvivorAnchorOutOfBoundsLocationContext_C");
		return Clss;
	}

	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation, float ZGridSnapSize, class ABP_SurvivorAnchor_C* SurvivorAnchor, bool Debug, float GeneratorZOffset, const struct FVector& Result, class ABP_SurvivorAnchor_C* K2Node_DynamicCast_AsBP_Survivor_Anchor, bool K2Node_DynamicCast_bSuccess, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue123, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1234, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue12345);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
