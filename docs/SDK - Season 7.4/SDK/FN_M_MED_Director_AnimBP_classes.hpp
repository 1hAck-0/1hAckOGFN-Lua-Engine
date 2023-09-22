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

// AnimBlueprintGeneratedClass M_MED_Director_AnimBP.M_MED_Director_AnimBP_C
// 0x05B8 (0x0828 - 0x0270)
class UM_MED_Director_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_C2677E6A4F172F2B65E2A9B7724D6A32;// 0x0278(0x0138)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03B0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x03D0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x03F0(0x0310)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0700(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0720(0x0108)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_Director_AnimBP.M_MED_Director_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_M_MED_Director_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
