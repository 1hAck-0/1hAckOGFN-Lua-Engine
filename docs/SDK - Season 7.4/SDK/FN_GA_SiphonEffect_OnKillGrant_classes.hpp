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

// BlueprintGeneratedClass GA_SiphonEffect_OnKillGrant.GA_SiphonEffect_OnKillGrant_C
// 0x00A8 (0x0A20 - 0x0978)
class UGA_SiphonEffect_OnKillGrant_C : public UGA_GM_OnDmgDealt_LifeSteal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      HealGE;                                                   // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShieldGE;                                                 // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            Target;                                                   // 0x0990(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             Eliminator;                                               // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Increment;                                                // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickRate;                                                 // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTicks;                                                 // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x09C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      TickHealGE;                                               // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TickShieldGE;                                             // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthToHeal;                                             // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthToShield;                                           // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmountToHeal;                                             // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WoodToGive;                                               // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StoneToGive;                                              // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MetalToGive;                                              // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldGrantMatsOnKill;                                    // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09F9(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       Blade_Wielder_Tag;                                        // 0x0A00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_SiphonEffect_OnKillGrant.GA_SiphonEffect_OnKillGrant_C");
		return ptr;
	}


	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_SiphonEffect_OnKillGrant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
