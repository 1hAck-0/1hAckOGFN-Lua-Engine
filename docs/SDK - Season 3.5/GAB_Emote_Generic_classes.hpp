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
// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_40CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_Emote_Generic_C");
		return Clss;
	}

	void GetBodyTypeAndGender(enum class EFortCustomBodyType* BodyType, enum class EFortCustomGender* Gender, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, enum class EFortCustomBodyType CallFunc_GetCharacterBodyType_ReturnValue, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Completed_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_Emote_Generic(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, enum class EFortGameplayAbilityMontageSectionToPlay Temp_byte_Variable, enum class EFortGameplayAbilityMontageSectionToPlay Temp_byte_Variable1, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, enum class EFortGameplayAbilityMontageSectionToPlay K2Node_Select_Default, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, enum class EFortCustomBodyType CallFunc_GetBodyTypeAndGender_BodyType, enum class EFortCustomGender CallFunc_GetBodyTypeAndGender_Gender, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, TSoftObjectPtr<class UAnimMontage> CallFunc_GetAnimation_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
