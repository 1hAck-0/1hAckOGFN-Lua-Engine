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

// 0x20 (0xB08 - 0xAE8)
// BlueprintGeneratedClass GAB_BaseDespawn.GAB_BaseDespawn_C
class UGAB_BaseDespawn_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_382A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          TC_GameplayEffectInstantDeathDespawn;              // 0xAF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeKill;                                   // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        RiftRandom;                                        // 0xB04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_BaseDespawn_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_BaseDespawn(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
