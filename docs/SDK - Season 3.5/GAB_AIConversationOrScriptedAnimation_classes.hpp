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
// BlueprintGeneratedClass GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C
class UGAB_AIConversationOrScriptedAnimation_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_31A8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_AIConversationOrScriptedAnimation_C");
		return Clss;
	}

	void Completed_0DEF95174D4614F4567B4E8B836FDE6F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0DEF95174D4614F4567B4E8B836FDE6F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0DEF95174D4614F4567B4E8B836FDE6F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
