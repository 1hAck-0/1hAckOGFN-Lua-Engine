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

// 0xA4 (0xE9C - 0xDF8)
// BlueprintGeneratedClass BP_SurvivorAnchor.BP_SurvivorAnchor_C
class ABP_SurvivorAnchor_C : public ABuildingProp
{
public:
	uint8                                        Pad_28F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE00(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SurvivorAnchorBoxMesh;                             // 0xE08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       SurvivorPawnSpawnRotationArrow;                    // 0xE10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   SurvivorPawnSpawnIcon;                             // 0xE18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   SurvivorAnchorIcon;                                // 0xE20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         SurvivorAnchorBox;                                 // 0xE28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0xE30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ESurvivorAnchorHeightEnum         SurvivorAnchorHeightInBuildingTiles;               // 0xE31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESurvivorAnchorWidthEnum          SurvivorAnchorWidthInBuildingTiles;                // 0xE32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESurvivorAnchorMaxZMove           SurvivorAnchorMaxZMoveInTiles;                     // 0xE33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AnchorBoxCenter;                                   // 0xE34(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AnchorBoxBounds;                                   // 0xE40(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASurvivor_C*                           SurvivorAnchorPawn;                                // 0xE50(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SurvivorPawnLocation;                              // 0xE58(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SurvivorPawnRotationWidget;                        // 0xE64(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SurvivorPawnRotation;                              // 0xE70(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                SurvivorAnchorPawnClassToSpawn;                    // 0xE80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             SurvivorWeaponDataOverride;                        // 0xE88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeam                         SurvivorTeamOverride;                              // 0xE90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortressAIType                   SurvivorAITypeOverride;                            // 0xE91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnASurvivor;                                    // 0xE92(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28FC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnchorEQSGridSize;                                 // 0xE94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnchorEQSGridSpaceBetween;                         // 0xE98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SurvivorAnchor_C");
		return Clss;
	}

	struct FVector GetTetheredBoxBoundsCenter();
	float GetTetheredBoxBoundsEQSGridSize();
	float GetTetheredBoxBoundsEQSSpaceBetween();
	float GetTetheredBoxBoundsHeight(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z);
	float GetTetheredBoxBoundsWidth(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z);
	void IsActorInsideOfAnchorBounds(class AActor*& Actor, bool* InBounds, bool CallFunc_IsOverlappingActor_ReturnValue);
	void UserConstructionScript(float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable12, float Temp_float_Variable123, float Temp_float_Variable1234, float Temp_float_Variable12345, float Temp_float_Variable123456, float Temp_float_Variable1234567, float Temp_float_Variable12345678, float Temp_float_Variable123456789, enum class ESurvivorAnchorHeightEnum Temp_byte_Variable, float Temp_float_Variable12345678910, float Temp_float_Variable1234567891011, float Temp_float_Variable123456789101112, float Temp_float_Variable12345678910111213, float Temp_float_Variable1234567891011121314, float Temp_float_Variable123456789101112131415, float Temp_float_Variable12345678910111213141516, float Temp_float_Variable1234567891011121314151617, float Temp_float_Variable123456789101112131415161718, float Temp_float_Variable12345678910111213141516171819, enum class ESurvivorAnchorWidthEnum Temp_byte_Variable1, float Temp_float_Variable1234567891011121314151617181920, float Temp_float_Variable123456789101112131415161718192021, float Temp_float_Variable12345678910111213141516171819202122, float Temp_float_Variable1234567891011121314151617181920212223, float Temp_float_Variable123456789101112131415161718192021222324, float Temp_float_Variable12345678910111213141516171819202122232425, float Temp_float_Variable1234567891011121314151617181920212223242526, float Temp_float_Variable123456789101112131415161718192021222324252627, float Temp_float_Variable12345678910111213141516171819202122232425262728, float Temp_float_Variable1234567891011121314151617181920212223242526272829, enum class ESurvivorAnchorWidthEnum Temp_byte_Variable12, float Temp_float_Variable123456789101112131415161718192021222324252627282930, float Temp_float_Variable12345678910111213141516171819202122232425262728293031, float Temp_float_Variable1234567891011121314151617181920212223242526272829303132, float Temp_float_Variable123456789101112131415161718192021222324252627282930313233, float Temp_float_Variable12345678910111213141516171819202122232425262728293031323334, float Temp_float_Variable1234567891011121314151617181920212223242526272829303132333435, float Temp_float_Variable123456789101112131415161718192021222324252627282930313233343536, float Temp_float_Variable12345678910111213141516171819202122232425262728293031323334353637, float Temp_float_Variable1234567891011121314151617181920212223242526272829303132333435363738, float Temp_float_Variable123456789101112131415161718192021222324252627282930313233343536373839, enum class ESurvivorAnchorHeightEnum Temp_byte_Variable123, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_MakeVector_ReturnValue1, float K2Node_Select_Default, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, float K2Node_Select1_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select12_Default, const struct FVector& CallFunc_MakeVector_ReturnValue12, float K2Node_Select123_Default, const struct FVector& CallFunc_MakeVector_ReturnValue123, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult12);
	void ReceiveBeginPlay();
	void ShowAnchorBounds();
	void ExecuteUbergraph_BP_SurvivorAnchor(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class AController* CallFunc_GetController_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess1, class AFortWeapon* CallFunc_EquipWeaponDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue123, class ASurvivor_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
