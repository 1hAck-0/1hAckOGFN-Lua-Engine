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

// AnimBlueprintGeneratedClass MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C
// 0x082C (0x4BAC - 0x4380)
class UMountedTurret_Gunner_AnimBP_C : public UFortPlayerAnimInstance_MountedTurret
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x4380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_EA99B7B8421846838D4B2EA9E3E1CF69;     // 0x4388(0x00F8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AB5E7EE04FD942996FFE84801A0C0FFF;// 0x4480(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x44A0(0x0020)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                      // 0x44C0(0x00F8)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x45B8(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x45D8(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x4620(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D906DC2D4CCAB5B10A19AAB7140D34C9;// 0x46D0(0x00C8)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_E6B2D7944E459199A162B78A736662D2;// 0x4798(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87;// 0x47B0(0x0188)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_E12A1B75416454F164AF9C8FFBC99FCD;// 0x4938(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FFEC5A2C451F8B6DE9C3D0BF63D47EDB;// 0x4950(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x49C8(0x00C8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D604CC9941458E8F6D56F5AC018805FB;// 0x4A90(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot02;                                     // 0x4AD8(0x0048)
	class AFortAthenaVehicle*                          Pawn;                                                     // 0x4B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalLeftOffset;                                          // 0x4B28(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WorldPosLeft;                                             // 0x4B34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LocalRotLeftOffset;                                       // 0x4B40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x4B4C(0x0004) MISSED OFFSET
	class AFortMountedTurret*                          MountedTurret;                                            // 0x4B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WorldRotLeft;                                             // 0x4B58(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalRightOffset;                                         // 0x4B64(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LocalRotRightOffset;                                      // 0x4B70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WorldRotRight;                                            // 0x4B7C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WorldPosRight;                                            // 0x4B88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x4B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isTurning;                                                // 0x4B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x4B99(0x0003) MISSED OFFSET
	float                                              TurnRate;                                                 // 0x4B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimingPitchLastTick;                                      // 0x4BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchRate;                                                // 0x4BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PedalScaler;                                              // 0x4BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_MountedTurret_Gunner_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_MountedTurret_Gunner_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
