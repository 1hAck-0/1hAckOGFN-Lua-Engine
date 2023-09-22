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

// 0x10 (0xB00 - 0xAF0)
// BlueprintGeneratedClass GAB_SurvivorLand.GAB_SurvivorLand_C
class UGAB_SurvivorLand_C : public UFortGameplayAbility_Land
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	class FName                                  SectionName;                                       // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SurvivorLand_C");
		return Clss;
	}

	void OnCancelled_7174BD024E3A05F4D5E859B97A1D076C();
	void OnInterrupted_7174BD024E3A05F4D5E859B97A1D076C();
	void OnBlendOut_7174BD024E3A05F4D5E859B97A1D076C();
	void OnCompleted_7174BD024E3A05F4D5E859B97A1D076C();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SurvivorLand(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool CallFunc_K2_CommitAbility_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
