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

// BlueprintGeneratedClass GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C
// 0x0014 (0x094C - 0x0938)
class UGA_Ferret_ExitHoldEvent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDuration;                                          // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C");
		return ptr;
	}


	void EventReceived(struct FGameplayEventData Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Ferret_ExitHoldEvent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
