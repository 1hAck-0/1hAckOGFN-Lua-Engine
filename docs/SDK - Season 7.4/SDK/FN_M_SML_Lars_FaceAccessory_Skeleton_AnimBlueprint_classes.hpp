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

// AnimBlueprintGeneratedClass M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint.M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C
// 0x2040 (0x2410 - 0x03D0)
class UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03D8(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x03F8(0x0138)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DA7F616742A73676682DFE962C7A9097;// 0x0530(0x0310)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0840(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F250A6D64C5D0DFA740D4AA5A241B6D7;// 0x0860(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x0880(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics02;                             // 0x0B90(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EFFE8AEA4DD194B52BCE94B3662DE607;// 0x0EA0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics03;                             // 0x11B0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A5E507C9415604E9DAE77683DBC92AE0;// 0x14C0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics04;                             // 0x17D0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics05;                             // 0x1AE0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B78997D142A0D1CF2837DF888BDB7B06;// 0x1DF0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A0C97E4A46266B7CFE56A7BC1B12FC7C;// 0x2100(0x0310)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint.M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
