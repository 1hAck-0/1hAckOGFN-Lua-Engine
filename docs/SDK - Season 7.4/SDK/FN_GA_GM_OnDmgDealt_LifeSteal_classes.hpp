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

// BlueprintGeneratedClass GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C
// 0x0008 (0x0978 - 0x0970)
class UGA_GM_OnDmgDealt_LifeSteal_C : public UGA_GM_OnDmgDealt_SelfHeal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C");
		return ptr;
	}


	void DoOnDmgDealtBehavior(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
