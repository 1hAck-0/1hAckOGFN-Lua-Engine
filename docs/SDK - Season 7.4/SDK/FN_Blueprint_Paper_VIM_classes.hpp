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

// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
// 0x04F8 (0x0808 - 0x0310)
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone;                                 // 0x0318(0x0128)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone02;                               // 0x0440(0x0128)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone03;                               // 0x0568(0x0128)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_D9C2507C414C01F7CECC0291267407DC;// 0x0690(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x07B8(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root_EAD8434D41BA827A02AADFB11592B5F7;      // 0x07D8(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x07F8(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C");
		return ptr;
	}


	void ExecuteUbergraph_Blueprint_Paper_VIM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
