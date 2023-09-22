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

// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
// 0x0011 (0x0949 - 0x0938)
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                TC_AbilitiesGenericTriggeredAbilityActivate;              // 0x0940(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPlayerHolsterState;                                      // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C");
		return ptr;
	}


	void SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful);
	void TriggeredAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAT_TriggeredAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
