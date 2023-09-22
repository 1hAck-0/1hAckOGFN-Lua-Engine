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

// 0x1858 (0x1C88 - 0x430)
// AnimBlueprintGeneratedClass SK_F_Outlander_02_Skeleton_Anim_Blueprint.SK_F_Outlander_02_Skeleton_Anim_Blueprint_C
class USK_F_Outlander_02_Skeleton_Anim_Blueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_A231BBBF42868E7DAF03CEB4C5774CAD; // 0x438(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_A1F2F506414045AFAEBE3AAA3AEA4BA7; // 0x480(0xE8)(ContainsInstancedReference)
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_6B75393649E9879CCA97C2A0F14635BC; // 0x568(0x168)()
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_BE5837EF4C2F5C9C0A8F1CB8D726840C; // 0x6D0(0x168)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_42C1F1544D48F099739C33B2398D29B6; // 0x838(0x48)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_10AE448948DFDAC48D633A9115DE9546; // 0x880(0x360)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C2C423994AF0E2ACB767DBB2F2A9F807; // 0xBE0(0x48)()
	uint8                                        Pad_4BFD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_CD200A494CE2706612624D82C982B3A9; // 0xC30(0x360)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_EC6023534626A7FAFE689C8E45E86E07; // 0xF90(0x360)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_EA3B9A5B407C0B0134CDBEBE3E9A5A96; // 0x12F0(0x360)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_FEDD4DD14777B86ABE0537A59A5135CD; // 0x1650(0x360)()
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_C5D99D0F44097D61E3DBD9A455D468EA; // 0x19B0(0x168)()
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_1D18CAEC448657ED9FCA44951F18E351; // 0x1B18(0x168)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1C80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_F_Outlander_02_Skeleton_Anim_Blueprint_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_AnimDynamics_EC6023534626A7FAFE689C8E45E86E07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_CopyPoseFromMesh_A1F2F506414045AFAEBE3AAA3AEA4BA7();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
