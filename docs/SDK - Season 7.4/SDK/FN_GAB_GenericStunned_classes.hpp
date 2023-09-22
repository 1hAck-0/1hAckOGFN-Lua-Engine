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

// BlueprintGeneratedClass GAB_GenericStunned.GAB_GenericStunned_C
// 0x0030 (0x0968 - 0x0938)
class UGAB_GenericStunned_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      StunActiveEffect;                                         // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveStun;                                               // 0x0948(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      RestoreControlResistEffect;                               // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_ImpactImmunity;                                        // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveImpactImmunity;                                     // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericStunned.GAB_GenericStunned_C");
		return ptr;
	}


	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAB_GenericStunned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
