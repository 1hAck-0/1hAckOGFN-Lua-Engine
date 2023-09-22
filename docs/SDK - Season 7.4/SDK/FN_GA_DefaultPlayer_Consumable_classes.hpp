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

// BlueprintGeneratedClass GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C
// 0x0010 (0x0948 - 0x0938)
class UGA_DefaultPlayer_Consumable_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                EatMontage;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C");
		return ptr;
	}


	void Completed_A3A081314405D22C4EED5CB989DC8CB1(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled_A3A081314405D22C4EED5CB989DC8CB1(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered_A3A081314405D22C4EED5CB989DC8CB1(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_DefaultPlayer_Consumable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
