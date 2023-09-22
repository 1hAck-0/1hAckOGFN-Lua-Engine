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

// 0x60 (0xB48 - 0xAE8)
// BlueprintGeneratedClass GAB_SurvivorWander.GAB_SurvivorWander_C
class UGAB_SurvivorWander_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_2C16[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0xAF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AbilityEnding;                                     // 0xAF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C17[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             EQS_AnchorWander;                                  // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivor_C*                           SurvivorPawn;                                      // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WanderLocation;                                    // 0xB10(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitTimeAfterWanderMin;                            // 0xB1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitTimeAfterWanderMax;                            // 0xB20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       EQSResults;                                        // 0xB28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         SetFocalPointToAbilityTargetWhileMoving;           // 0xB38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsSurvivorInsideOfAnchorBounds;                    // 0xB39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C19[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_MoveAI*               WanderMove;                                        // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SurvivorWander_C");
		return Clss;
	}

	void OnFinish_46520BF64782D787A829259B1AEBC2F9();
	void OnMoveFinished_823C4D1641576DFB48835EA7477D7A9D(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_823C4D1641576DFB48835EA7477D7A9D();
	void OnCancelled_823C4D1641576DFB48835EA7477D7A9D();
	void OnInterrupted_823C4D1641576DFB48835EA7477D7A9D();
	void OnComplete_823C4D1641576DFB48835EA7477D7A9D();
	void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SurvivorWander(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, enum class EEnvQueryStatus Temp_byte_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, bool Temp_bool_Variable1234, bool Temp_bool_Variable12345, bool Temp_bool_Variable123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsActorInsideOfAnchorBounds_InBounds, bool CallFunc_K2_CommitAbility_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue12, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, class AFortAIDirector* CallFunc_GetAIDirector_ReturnValue, bool CallFunc_IsAnyActiveEncounterRelevantToDefender_ReturnValue, class UClass* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue12, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class AFortAIDirector* CallFunc_GetAIDirector_ReturnValue1, bool CallFunc_IsAnyActiveEncounterRelevantToDefender_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue123, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue1, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, bool K2Node_Event_bWasCancelled, TArray<struct FVector>& CallFunc_GetResultsAsLocations_ReturnValue, bool K2Node_Select1_Default, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue12, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
