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

// BlueprintGeneratedClass GA_GenericConsume.GA_GenericConsume_C
// 0x0020 (0x0958 - 0x0938)
class UGA_GenericConsume_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                MontageToPlay;                                            // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   GESpecToApply;                                            // 0x0948(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_GenericConsume.GA_GenericConsume_C");
		return ptr;
	}


	void OnGenericNotifyFromAnimation(struct FGameplayTag NotifyTag);
	void Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_GenericConsume(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
