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

// AnimBlueprintGeneratedClass F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C
// 0x1E78 (0x2248 - 0x03D0)
class UF_MED_Weaponsmith_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03D8(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x03F8(0x0138)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F0040B4B46F19203691A7AA9F956DB68;// 0x0530(0x0310)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0840(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0860(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x0880(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics02;                             // 0x0B90(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D2EBBAB845D230CA94B24681586E0D42;// 0x0EA0(0x0310)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x11B0(0x0550)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint;                                 // 0x1700(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1808(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone02;                               // 0x1910(0x0108)
	struct FFortAnimNode_Flap                          FortAnimGraphNode_Flap;                                   // 0x1A18(0x00F8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics03;                             // 0x1B10(0x0310)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint02;                               // 0x1E20(0x0108)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1F28(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AB5AFCB24DD6F4A804EFDDA3832A559A;// 0x1F30(0x0310)
	float                                              crouch_float;                                             // 0x2240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              dyn_alpha;                                                // 0x2244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_F_MED_Weaponsmith_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
