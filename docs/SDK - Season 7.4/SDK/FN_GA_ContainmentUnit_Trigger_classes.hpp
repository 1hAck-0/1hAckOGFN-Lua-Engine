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

// BlueprintGeneratedClass GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C
// 0x0020 (0x0958 - 0x0938)
class UGA_ContainmentUnit_Trigger_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAbilitySystemComponent*                     OriginalDamageInstigator;                                 // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAbilitySystemComponent*                     OriginalDamageTarget;                                     // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                RequestReflectionTag;                                     // 0x0950(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_ContainmentUnit_Trigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
