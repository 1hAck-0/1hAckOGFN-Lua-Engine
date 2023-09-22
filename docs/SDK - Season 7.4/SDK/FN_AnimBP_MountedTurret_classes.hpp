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

// AnimBlueprintGeneratedClass AnimBP_MountedTurret.AnimBP_MountedTurret_C
// 0x0904 (0x0D14 - 0x0410)
class UAnimBP_MountedTurret_C : public UFortMountedTurretAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0418(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FBC9569F415B8820359FAEB09F24D80F;// 0x0488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A4EE52B948CDE0EF89D51AA76588D69D;// 0x04B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EDE70BF0434D91B2C8480A99671EA778;// 0x04D8(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x0500(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D94ECD2C41A5AB1FED74B8843A08644B;// 0x0548(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0568(0x0078)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x05E0(0x0188)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0768(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D345B9844363B30E70F975B9E4B35039;// 0x0788(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer02;                           // 0x0828(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer03;                           // 0x08A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A512F23E43F386E05611C69D81196D6B;// 0x0918(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E612B7AE474934A47EDB1D83F12F5734;// 0x0938(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult02;                              // 0x09B0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C5BBF77047D064FED31B39A483603DF4;// 0x09D0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EA2CB1FD4C421275BE1B9BBE406DC5FA;// 0x0A80(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BAFB44F345DE291ADC0647A09C264EB3;// 0x0AA0(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CEA9764C4AF01012B13A4E8199A0F81D;// 0x0BA8(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root_D95E62D3414430DE043E568859F3759C;      // 0x0BC8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D5DA01C140CEEA9FBB32C1BBF5745EE7;// 0x0BE8(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x0C30(0x00C8)
	bool                                               isTurning;                                                // 0x0CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CF9(0x0003) MISSED OFFSET
	struct FFortAnimInput_MountedTurret                MountedTurretInput;                                       // 0x0CFC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AimingYawLastFrame;                                       // 0x0D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnRate;                                                 // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_MountedTurret.AnimBP_MountedTurret_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_ModifyBone_BAFB44F345DE291ADC0647A09C264EB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_RotationOffsetBlendSpace();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_MountedTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
