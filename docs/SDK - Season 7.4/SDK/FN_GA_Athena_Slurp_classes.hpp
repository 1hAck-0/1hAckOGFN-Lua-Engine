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

// BlueprintGeneratedClass GA_Athena_Slurp.GA_Athena_Slurp_C
// 0x0030 (0x0968 - 0x0938)
class UGA_Athena_Slurp_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                IncreCheck;                                               // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTicks;                                                 // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0950(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TickRate;                                                 // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDuration;                                          // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                ShieldPotionGameplayCue;                                  // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Slurp.GA_Athena_Slurp_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ApplyHealthOrShield();
	void ExecuteUbergraph_GA_Athena_Slurp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
