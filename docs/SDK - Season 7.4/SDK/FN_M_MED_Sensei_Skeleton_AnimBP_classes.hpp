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

// AnimBlueprintGeneratedClass M_MED_Sensei_Skeleton_AnimBP.M_MED_Sensei_Skeleton_AnimBP_C
// 0x06F0 (0x0960 - 0x0270)
class UM_MED_Sensei_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_E3FD8AF948BEB1EAD305D2A116E07CA1;// 0x0298(0x0138)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x03D0(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CD383559480255357BB3A2A3FF5B5D11;// 0x0920(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BF12781348363226E1060A876B332CB5;// 0x0940(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_Sensei_Skeleton_AnimBP.M_MED_Sensei_Skeleton_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_M_MED_Sensei_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
