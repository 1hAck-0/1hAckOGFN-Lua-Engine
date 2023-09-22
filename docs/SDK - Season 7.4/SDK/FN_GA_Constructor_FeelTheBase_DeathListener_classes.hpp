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

// BlueprintGeneratedClass GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C
// 0x0042 (0x0A4C - 0x0A0A)
class UGA_Constructor_FeelTheBase_DeathListener_C : public UGAT_GenericTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0A0A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      StackCount;                                               // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       OverflowTag;                                              // 0x0A20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Stack1;                                                   // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stack2;                                                   // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stack3;                                                   // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C");
		return ptr;
	}


	void ActivateBASEStacks(int StackCount, class AB_Constructor_BASE_C* BASEReference);
	void Exceute_GC(class AB_Constructor_BASE_C* BASEReference, bool* Overflow);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
