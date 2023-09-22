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

// 0x370 (0x7A0 - 0x430)
// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode_0E491F3A4C933A03AAE42DA602295362; // 0x438(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_C9D648834AA29F5B677902BB5A9DC15C; // 0x500(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_94E41D364E86D3FFC2D042845913D0EE; // 0x548(0x88)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_9AC0772D481A4B85CE045AA17CE0F79E; // 0x5D0(0xE8)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B0BAEC37412A3BDE897683AA32FAE4E1; // 0x6B8(0xE0)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fortnite_Base_Head_Export_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_9AC0772D481A4B85CE045AA17CE0F79E();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
