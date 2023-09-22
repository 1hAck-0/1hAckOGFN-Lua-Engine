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

// AnimBlueprintGeneratedClass MenuScreen_Constructor.MenuScreen_Constructor_C
// 0x04A8 (0x07A8 - 0x0300)
class UMenuScreen_Constructor_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0308(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0328(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root_F64C467C442A6D34A1666EA1BF342A2B;      // 0x0348(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D9B684254003641AE72DD489B091046B;      // 0x0368(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x03B0(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x0428(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE38F79D451A9AF748C98B81F3662628;// 0x04D8(0x0078)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                      // 0x0550(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C5561120498D2F0E23E19DB15CEF0EF7;// 0x0648(0x0108)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0750(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty MenuScreen_Constructor.MenuScreen_Constructor_C.MenuScreenDispatcher
	struct FVector                                     Offset;                                                   // 0x0760(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetRotate;                                             // 0x076C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMesh*>                       FrontendNPCMeshes;                                        // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              IKAlpha;                                                  // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	class APlayerPawn_Generic_C*                       PawnOwnerGeneric;                                         // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        NPCMontageList;                                           // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MenuScreen_Constructor.MenuScreen_Constructor_C");
		return ptr;
	}


	void AnimNotify_playFacialAnim();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_MenuScreen_Constructor(int EntryPoint);
	void MenuScreenDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
