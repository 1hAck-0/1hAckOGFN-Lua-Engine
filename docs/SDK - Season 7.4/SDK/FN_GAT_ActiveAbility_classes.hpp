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

// BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C
// 0x0029 (0x0961 - 0x0938)
class UGAT_ActiveAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                TC_AbilitiesGenericActiveAbilityActivate;                 // 0x0940(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       N_SavedCollisionChannel;                                  // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_KnockBackImmunity;                                     // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GEH_KnockBackImmunity;                                    // 0x0958(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPlayerHolsterState;                                      // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C");
		return ptr;
	}


	void SendHeroAbilityActivationEvent();
	void SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful);
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload);
	void ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);
	void SetKnockbackImmunity(bool ImmunityOn);
	void SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_ActiveAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
