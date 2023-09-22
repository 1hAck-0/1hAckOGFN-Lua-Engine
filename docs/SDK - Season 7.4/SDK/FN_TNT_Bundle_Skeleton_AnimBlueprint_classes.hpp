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

// AnimBlueprintGeneratedClass TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C
// 0x0600 (0x0870 - 0x0270)
class UTNT_Bundle_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0020)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput;                                   // 0x0298(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BD65FF0045636DFF1FF3C7B74BBDF795;// 0x02E0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0300(0x0020)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x0320(0x0550)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
