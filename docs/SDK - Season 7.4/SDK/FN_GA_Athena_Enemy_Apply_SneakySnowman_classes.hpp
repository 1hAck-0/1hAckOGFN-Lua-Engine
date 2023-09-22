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

// BlueprintGeneratedClass GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C
// 0x0060 (0x0998 - 0x0938)
class UGA_Athena_Enemy_Apply_SneakySnowman_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HolsterSnowman;                                           // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAthena_Enemy_Player_SneakySnowman_C*        EnemySnowman;                                             // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              SnowmanDuration;                                          // 0x0958(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                ExitAnimation;                                            // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                EndAbilityTimer;                                          // 0x0980(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                EndAbilitySequenceTimer;                                  // 0x0988(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                WeaponCheckTimer;                                         // 0x0990(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C");
		return ptr;
	}


	bool HasVehicleWeapon_();
	void Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void EventReceived(struct FGameplayEventData Payload);
	void K2_ActivateAbility();
	void EndAbility();
	void RestartAbility();
	void EndAbilitySequence();
	void K2_OnEndAbility(bool bWasCancelled);
	void VehicleWeaponCheck();
	void ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
