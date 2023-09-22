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
// BlueprintGeneratedClass GAB_FlingerRoar.GAB_FlingerRoar_C
class UGAB_FlingerRoar_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_29E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_FlingerRoar_C");
		return Clss;
	}

	void OnCancelled_AD410E224F398036F9E428A39B02B87C();
	void OnInterrupted_AD410E224F398036F9E428A39B02B87C();
	void OnBlendOut_AD410E224F398036F9E428A39B02B87C();
	void OnCompleted_AD410E224F398036F9E428A39B02B87C();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_FlingerRoar(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
