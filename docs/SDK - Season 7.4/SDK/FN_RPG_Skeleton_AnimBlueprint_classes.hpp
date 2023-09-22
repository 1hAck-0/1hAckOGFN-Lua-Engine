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

// AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C
// 0x0088 (0x02F8 - 0x0270)
class URPG_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F7E820434538DD4C6AD2A1B5BCE33A39;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0298(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x02E0(0x0018)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
