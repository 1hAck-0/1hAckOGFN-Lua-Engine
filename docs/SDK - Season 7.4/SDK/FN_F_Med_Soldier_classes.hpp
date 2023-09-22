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

// AnimBlueprintGeneratedClass F_Med_Soldier.F_Med_Soldier
// 0x07D8 (0x0BA8 - 0x03D0)
class UF_Med_Soldier : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x03E0(0x0310)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D20022EC456996650C5FAABD9F94D5EE;// 0x06F0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0710(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451;// 0x0730(0x0138)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0868(0x0020)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0888(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics02;                             // 0x0890(0x0310)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_Med_Soldier.F_Med_Soldier");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_Med_Soldier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
