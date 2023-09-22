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

// 0x28 (0xB10 - 0xAE8)
// BlueprintGeneratedClass GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C
class UGA_ContainmentUnit_Trigger_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_F55[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	class UAbilitySystemComponent*               OriginalDamageInstigator;                          // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               OriginalDamageTarget;                              // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RequestReflectionTag;                              // 0xB08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_ContainmentUnit_Trigger_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_ContainmentUnit_Trigger(int32 EntryPoint, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
