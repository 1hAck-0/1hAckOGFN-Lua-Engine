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

// BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C
// 0x0010 (0x0948 - 0x0938)
class UGA_DefaultPlayer_InteractSearch_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C");
		return ptr;
	}


	void EndInteractSearch();
	void StartInteractSearch();
	void K2_OnEndAbility(bool bWasCancelled);
	void Completed_B697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered_B697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_InteractSearch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
