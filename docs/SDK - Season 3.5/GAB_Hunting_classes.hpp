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

// 0x74 (0xB5C - 0xAE8)
// BlueprintGeneratedClass GAB_Hunting.GAB_Hunting_C
class UGAB_Hunting_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_3817[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	class UEnvQuery*                             EQS_Hunting_Query;                                 // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EQS_Grid_Half_Size;                                // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EQS_Density;                                       // 0xB04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HuntingMoveTaskName;                               // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIController*                     MyFortAIController;                                // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HuntingTarget;                                     // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastTimeStartedHunting;                            // 0xB20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HuntingRestartDelta;                               // 0xB24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_MoveAI*               MovementTask;                                      // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                GoalDistancesOnCompleteMove;                       // 0xB30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                       PawnPositionsOnCompletedMove;                      // 0xB40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ShouldAbortHunting;                                // 0xB50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3818[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinGoalDistChange;                                 // 0xB54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinPawnDistChange;                                 // 0xB58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_Hunting_C");
		return Clss;
	}

	void UpdatePositionData(TArray<struct FVector>& PosArray, const struct FVector& NewPosition, float* MaxDistance, bool* HasValidData, float MaxValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue12, bool CallFunc_Greater_IntInt_ReturnValue1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue1, const struct FVector& CallFunc_Array_Get_Item1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_FMax_ReturnValue);
	void UpdateDistanceData(TArray<float>& DistArray, float NewDistance, float* MinValue, float* MaxValue, bool* HasValidData, float MaxValueInArray, float MinValueInArray, int32 Temp_int_Array_Index_Variable, float CallFunc_Array_Get_Item, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue12, bool CallFunc_Greater_IntInt_ReturnValue1);
	void OnMoveFinished_9284CD4944DA1972DB7A98BE0A9A28C1(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_9284CD4944DA1972DB7A98BE0A9A28C1();
	void OnCancelled_9284CD4944DA1972DB7A98BE0A9A28C1();
	void OnInterrupted_9284CD4944DA1972DB7A98BE0A9A28C1();
	void OnComplete_9284CD4944DA1972DB7A98BE0A9A28C1();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnQueryFinishedEvent_Event_0(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void OnTargetPerceptionUpdated_Event_0(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void StartQuery();
	void Restart_Hunting();
	void StoreGoalDistance();
	void ExecuteUbergraph_GAB_Hunting(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class AActor* CallFunc_GetGoalActor_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, bool K2Node_Event_bWasCancelled, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, TArray<struct FVector>& CallFunc_GetResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetGoalActor_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, class AActor* K2Node_CustomEvent_Actor, const struct FAIStimulus& K2Node_CustomEvent_Stimulus, class AController* CallFunc_GetController_ReturnValue1, class AFortAIController* K2Node_DynamicCast_AsFort_AIController1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_UpdateDistanceData_MinValue, float CallFunc_UpdateDistanceData_MaxValue, bool CallFunc_UpdateDistanceData_HasValidData, float CallFunc_UpdatePositionData_MaxDistance, bool CallFunc_UpdatePositionData_HasValidData, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
