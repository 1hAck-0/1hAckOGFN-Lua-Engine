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

// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
// 0x004D (0x0985 - 0x0938)
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PostTriggerCancelDelay;                                   // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideReticle;                                              // 0x094C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x094D(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       ReticleHUDElementTags;                                    // 0x0950(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       MontageOverrideSection;                                   // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbilityStopped;                                          // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0979(0x0003) MISSED OFFSET
	struct FName                                       EmoteHolsterId;                                           // 0x097C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHolstered;                                               // 0x0984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C");
		return ptr;
	}


	void ForceStopMontage();
	void SetReticleVisibility(bool ShouldHide);
	void GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, TEnumAsByte<EFortCustomBodyType> BodyType, TEnumAsByte<EFortCustomGender> Gender);
	void GetBodyTypeAndGender(TEnumAsByte<EFortCustomBodyType>* BodyType, TEnumAsByte<EFortCustomGender>* Gender);
	void K2_OnEndAbility(bool bWasCancelled);
	void Completed_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void Triggered_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag);
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded);
	void K2_ActivateAbility();
	void OnMontageStartedPlaying();
	void PlayInitialEmoteMontage();
	void ExecuteUbergraph_GAB_Emote_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
