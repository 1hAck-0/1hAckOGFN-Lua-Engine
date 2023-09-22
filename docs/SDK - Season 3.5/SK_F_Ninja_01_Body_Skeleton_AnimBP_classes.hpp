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

// 0x140 (0x570 - 0x430)
// AnimBlueprintGeneratedClass SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C
class USK_F_Ninja_01_Body_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_1205956746F4C2F910A7F697B79629BF; // 0x438(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C; // 0x480(0xE8)(ContainsInstancedReference)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_F_Ninja_01_Body_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
