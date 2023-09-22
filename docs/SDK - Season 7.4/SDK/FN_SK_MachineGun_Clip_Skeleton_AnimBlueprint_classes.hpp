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

// AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
// 0x0088 (0x02F8 - 0x0270)
class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0298(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x02E0(0x0018)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
