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
// BlueprintGeneratedClass GAB_HuskFrustration.GAB_HuskFrustration_C
class UGAB_HuskFrustration_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_3682[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_HuskFrustration_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_HuskFrustration(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
