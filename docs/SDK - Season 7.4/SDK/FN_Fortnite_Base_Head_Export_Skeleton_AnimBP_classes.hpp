#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
// 0x0DA9 (0x1189 - 0x03E0)
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UHeadPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode;                              // 0x03E8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_C9D648834AA29F5B677902BB5A9DC15C;      // 0x0470(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0490(0x0078)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x0508(0x0138)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B0BAEC37412A3BDE897683AA32FAE4E1;// 0x0640(0x00B8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x06F8(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D687C7FB4A07645ECE24DBB182B71823;// 0x07C0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x0878(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C898D19D46B0E9723DD75AA4710C2707;// 0x08A0(0x0028)
	struct FAnimNode_LiveLinkPose                      AnimGraphNode_LiveLinkPose;                               // 0x08C8(0x0038)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E8FB05504628ECA52ADD038CBD818957;// 0x0900(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x09B8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose02;                            // 0x0A70(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_BF175D4149F235AF8059B38CB3517406;// 0x0A98(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose03;                            // 0x0B60(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0B88(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x0BD0(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C50053764A5016625E742C8401AAD202;// 0x0C88(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose04;                            // 0x0D40(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose05;                            // 0x0D68(0x0028)
	struct FAnimNode_LiveLinkPose                      AnimGraphNode_LiveLinkPose02;                             // 0x0D90(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x0DC8(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C5BEAB564689BE7F396B479553755894;// 0x0E90(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F7D256644C446D0E0E7A1FAE450C7158;// 0x0F98(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E876E3114CDEF692F73DBF884F9BD650;// 0x0FB8(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose02;                           // 0x0FD8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose06;                            // 0x1090(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C68E6B0E407D0454643482B1A7183F5B;// 0x10B8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EDDAFEAC483866651C7E3FAC553065FD;// 0x1158(0x0028)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x1180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               GetPlayerListUsesCustomCharacterParts;                    // 0x1188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
