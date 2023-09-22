#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x692 (0xA0A - 0x378)
// AnimBlueprintGeneratedClass Shielder_AnimBP.Shielder_AnimBP_C
class UShielder_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_D3D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_7DE4D53242B2AD51D3E9A28151C05EA5; // 0x388(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1AF6CEA241B4EFABDE6DE1B3E79BC5DF; // 0x3D0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4B6E921C410F994AEBB3669AA7671278; // 0x440(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1A9D209E4F439331743621BA64CF3C22; // 0x4C0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8F7BAB22494C6652853C2DB4B78E5EB1; // 0x540(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3B6FD4AE49B229B269BF85A506CA51C4; // 0x5C0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_71667AB441930B4A5CBACC983713B3FD; // 0x640(0x88)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_C8B4D5C6407141DFC802F39076F63A71; // 0x6C8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_55A39E584D0D03C5C0ACD1B80017E348; // 0x710(0x88)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_E88305EF4EC8C13449A03DA51BE219BF; // 0x798(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DE306AB24FBA7EF1EEE74D848B32AE08; // 0x7E0(0x88)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_F76894F5439CEE20D16AB89210FA35F3; // 0x868(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7A492D5E4B91AF2B6783A98C61BC5C7C; // 0x8B0(0xE0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_548804C544150F086A2D7CB13B4443D1; // 0x990(0x70)()
	float                                        Speed;                                             // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpwardVelocity;                                    // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementStyle                MovementStyle;                                     // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Orphaned;                                          // 0xA09(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Shielder_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_8F7BAB22494C6652853C2DB4B78E5EB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_3B6FD4AE49B229B269BF85A506CA51C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_1A9D209E4F439331743621BA64CF3C22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_4B6E921C410F994AEBB3669AA7671278();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Shielder_AnimBP(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetVelocity_ReturnValue, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class EFortMovementStyle CallFunc_GetMovementStyle_ReturnValue, float CallFunc_VSize2D_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
