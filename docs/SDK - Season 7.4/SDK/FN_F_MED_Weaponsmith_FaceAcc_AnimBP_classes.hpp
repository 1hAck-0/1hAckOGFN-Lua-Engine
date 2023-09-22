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

// AnimBlueprintGeneratedClass F_MED_Weaponsmith_FaceAcc_AnimBP.F_MED_Weaponsmith_FaceAcc_AnimBP_C
// 0x06F0 (0x0AC0 - 0x03D0)
class UF_MED_Weaponsmith_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03D8(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_B668EC764724C9E704DB9882F844B344;// 0x03F8(0x0138)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x0530(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0A80(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0AA0(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_Weaponsmith_FaceAcc_AnimBP.F_MED_Weaponsmith_FaceAcc_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_F_MED_Weaponsmith_FaceAcc_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
