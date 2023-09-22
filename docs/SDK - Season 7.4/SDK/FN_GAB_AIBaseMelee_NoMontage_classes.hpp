#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_AIBaseMelee_NoMontage.GAB_AIBaseMelee_NoMontage_C
// 0x0010 (0x0948 - 0x0938)
class UGAB_AIBaseMelee_NoMontage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseMoveForwardAction;                                     // 0x0941(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MoveGate;                                                 // 0x0942(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotationRateModification;                              // 0x0943(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeleeRotationRate;                                        // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_AIBaseMelee_NoMontage.GAB_AIBaseMelee_NoMontage_C");
		return ptr;
	}


	void Completed_DB3662934464473995AE9DABED04B860(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled_DB3662934464473995AE9DABED04B860(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered_DB3662934464473995AE9DABED04B860(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Completed_B887396E419FF2C0364C58B63D973822(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled_B887396E419FF2C0364C58B63D973822(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered_B887396E419FF2C0364C58B63D973822(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_AIBaseMelee_NoMontage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
