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

// BlueprintGeneratedClass GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C
// 0x003C (0x0AAC - 0x0A70)
class UGA_Perk_H_FeelTheBASE_DeathListener_C : public UGAT_GenericTriggeredAbility_Perk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_Overflow;                                              // 0x0A78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      StackCount;                                               // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stack1;                                                   // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stack2;                                                   // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stack3;                                                   // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C");
		return ptr;
	}


	void ActivateBASEStacks(int Stack_Count, class AB_Perk_C_Constructor_BASE_C* BASEReference);
	void ExecuteGC(class AB_Perk_C_Constructor_BASE_C* BASEReference, bool* Overflow);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
