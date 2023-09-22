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
// BlueprintGeneratedClass GAB_NotIdling.GAB_NotIdling_C
class UGAB_NotIdling_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_33A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_NotIdling_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_NotIdling(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
