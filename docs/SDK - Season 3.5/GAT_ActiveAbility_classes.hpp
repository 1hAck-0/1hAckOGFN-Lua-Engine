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

// 0x18 (0xB00 - 0xAE8)
// BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C
class UGAT_ActiveAbility_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_3472[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          TC_AbilitiesGenericActiveAbilityActivate;          // 0xAF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_ActiveAbility_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
