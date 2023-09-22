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

// BlueprintGeneratedClass TT_Constructor_HammerHitsHeal.TT_Constructor_HammerHitsHeal_C
// 0x0000 (0x0168 - 0x0168)
class UTT_Constructor_HammerHitsHeal_C : public UFortGameplayAbilityTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TT_Constructor_HammerHitsHeal.TT_Constructor_HammerHitsHeal_C");
		return ptr;
	}


	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag Tag, class UFortTooltipContext* Context, struct FGameplayTag Token, struct FText* OutText);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
