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

// BlueprintGeneratedClass GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C
// 0x003C (0x0974 - 0x0938)
class UGA_Athena_ZipLine_Smash_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateIntervalForSmashVolume;                             // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class UClass*                                      StructureDamageGE;                                        // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_ZipLine_Athena_Harness_C*                ZiplineHarness;                                           // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Athena_Environmental_ZipLine_C*          Zipline;                                                  // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortCustomMovement>                   DrivingCustomMovementMode;                                // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0969(0x0003) MISSED OFFSET
	struct FActiveGameplayEffectHandle                 FallImmunityGEFX;                                         // 0x096C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C");
		return ptr;
	}


	void CheckForQuestProgress();
	void CheckMotor();
	void SpawnMotor(class AActor* PlayerPawn);
	void BreakNearbyStructures(class AFortPlayerPawn* PlayerPawn);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void HandleMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void SurroundingsCheck();
	void RemoveFallDamageImmunity(struct FHitResult Hit);
	void HandleZiplineStateChanged(bool bIsZiplining);
	void ExecuteUbergraph_GA_Athena_ZipLine_Smash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
