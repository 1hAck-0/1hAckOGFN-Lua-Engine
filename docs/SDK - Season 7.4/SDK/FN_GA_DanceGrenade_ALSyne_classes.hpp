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

// BlueprintGeneratedClass GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C
// 0x0024 (0x095C - 0x0938)
class UGA_DanceGrenade_ALSyne_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle                 EffectHandle;                                             // 0x0940(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                AnimMontage;                                              // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseSharedAnim;                                      // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	struct FName                                       DanceGrenadeHolsterId;                                    // 0x0954(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C");
		return ptr;
	}


	void InvalidHandle_B5171FC24972C9187F9F1CA732D2527C(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo);
	void OnRemoved_B5171FC24972C9187F9F1CA732D2527C(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_DanceGrenade_ALSyne(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
