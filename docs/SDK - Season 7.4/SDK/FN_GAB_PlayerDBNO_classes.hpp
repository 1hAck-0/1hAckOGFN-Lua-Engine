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

// BlueprintGeneratedClass GAB_PlayerDBNO.GAB_PlayerDBNO_C
// 0x0160 (0x0A98 - 0x0938)
class UGAB_PlayerDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                DeathMontage;                                             // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DeathHitDirection;                                        // 0x0948(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  DeathHitResult;                                           // 0x0954(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       DamageTags;                                               // 0x09E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayStatusAfflicted;                                  // 0x0A00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_DBNOSpeed;                                             // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 DBNOSpeedHandle;                                          // 0x0A28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              F_FailsafeDBNOSpeed;                                      // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A34(0x0004) MISSED OFFSET
	TMap<struct FGameplayTag, struct FName>            MAP_DBNOSpeedRowNames;                                    // 0x0A38(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       N_DBNOSpeedRowName;                                       // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HolsterId;                                                // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_PlayerDBNO.GAB_PlayerDBNO_C");
		return ptr;
	}


	void InitializeDeathHitDirection(struct FGameplayEventData EventHitData);
	void Completed_F61877974D2CED083195EF8A8CDA60C2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled_F61877974D2CED083195EF8A8CDA60C2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered_F61877974D2CED083195EF8A8CDA60C2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_PlayerDBNO(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
