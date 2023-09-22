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

// BlueprintGeneratedClass GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C
// 0x00A0 (0x09D8 - 0x0938)
class UGA_Athena_EnvCampFire_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimeBetweenHeals;                                         // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	struct FTimerHandle                                Timer_ApplyHeal;                                          // 0x0948(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxHeals;                                                 // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentHeals;                                             // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0958(0x0008) MISSED OFFSET
	struct FTransform                                  CustomTargeting;                                          // 0x0960(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetingHeightOffset;                                    // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	struct FScalableFloat                              Row_MaxHeals;                                             // 0x0998(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_TimeBetweenHeals;                                     // 0x09B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C");
		return ptr;
	}


	void SetBalanceValues();
	void SetCustomTargetingTrans();
	struct FTransform GetCustomAbilitySourceTransform();
	void Cancelled_EDAB937443020D47385625B06E892DF0(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Targeted_EDAB937443020D47385625B06E892DF0(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void ApplyHeal();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_Athena_EnvCampFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
