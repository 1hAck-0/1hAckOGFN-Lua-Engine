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

// AnimBlueprintGeneratedClass Biplane_AnimBP_Dyn.Biplane_AnimBP_Dyn_C
// 0x1260 (0x1540 - 0x02E0)
class UBiplane_AnimBP_Dyn_C : public UFortVehicleDynAnimInstance_Ferret
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02E8(0x0020)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput;                                   // 0x0308(0x0048)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x0350(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x08A0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x08C0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D240CC1747987FA0AB3EFE892C7B5560;// 0x08E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x09E8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone02;                               // 0x0AF0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BA7BD86D47FD00A53D946DA1E168B6B8;// 0x0BF8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B77504334CFBA09330CBB9A987BFC61C;// 0x0D00(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C9514F4842336218A444548A2333F44F;// 0x0E08(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone03;                               // 0x0F10(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D0C05B4F470CB946A278B1B14F6DD2E0;// 0x1018(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FB1C2FDB4608EE482C8A70B190DD2543;// 0x1120(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone04;                               // 0x1228(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A25535BF447E63F9BEDBE7A37F1092E5;// 0x1330(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone05;                               // 0x1438(0x0108)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Biplane_AnimBP_Dyn.Biplane_AnimBP_Dyn_C");
		return ptr;
	}


	void ExecuteUbergraph_Biplane_AnimBP_Dyn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
