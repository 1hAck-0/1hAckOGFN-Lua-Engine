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
// BlueprintGeneratedClass GAB_InstantHeal.GAB_InstantHeal_C
class UGAB_InstantHeal_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_2BE1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_InstantHeal_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_InstantHeal(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
