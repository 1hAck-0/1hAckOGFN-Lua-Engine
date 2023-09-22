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
// BlueprintGeneratedClass GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C
class UGA_DefaultPlayer_BuildingCreated_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_3DA1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DefaultPlayer_BuildingCreated_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
