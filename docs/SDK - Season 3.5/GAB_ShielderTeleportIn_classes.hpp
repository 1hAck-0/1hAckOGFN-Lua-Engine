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

// 0x10 (0xAF8 - 0xAE8)
// BlueprintGeneratedClass GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C
class UGAB_ShielderTeleportIn_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_368E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_ShielderTeleportIn_C");
		return Clss;
	}

	void Completed_B576F3AF456E16FEAB9BCCB307590576(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B576F3AF456E16FEAB9BCCB307590576(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B576F3AF456E16FEAB9BCCB307590576(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_ShielderTeleportIn(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
