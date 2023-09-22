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

// BlueprintGeneratedClass GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C
// 0x0040 (0x0978 - 0x0938)
class UGAB_PlayerDBNOResurrect_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EC_AppliedEffect;                                         // 0x0940(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackMagnitude;                                       // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0954(0x0004) MISSED OFFSET
	TArray<class AActor*>                              HitActors;                                                // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      KnockbackStunGE;                                          // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BP_VictoryDrone;                                          // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C");
		return ptr;
	}


	void Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Targeted(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_PlayerDBNOResurrect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
