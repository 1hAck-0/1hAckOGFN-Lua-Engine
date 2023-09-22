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

// BlueprintGeneratedClass GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C
// 0x0023 (0x0C54 - 0x0C31)
class UGA_Athena_Grenade_Rethrow_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C31(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortProjectileBase*                         Projectile;                                               // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TossDelay;                                                // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HolsterId;                                                // 0x0C4C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C");
		return ptr;
	}


	void DetachProjectile();
	void AttachProjectile();
	void Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void OnFinish_B295E6694DBD8B2B2478A38EA60F5624();
	void K2_ActivateAbility();
	void TossGrenade();
	void Server_SpawnProjectile(struct FVector Location, struct FRotator Direction);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
