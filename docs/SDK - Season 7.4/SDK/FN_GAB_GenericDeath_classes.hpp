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

// BlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C
// 0x0190 (0x0AC8 - 0x0938)
class UGAB_GenericDeath_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                DeathMontage;                                             // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DeathMontageSectionName;                                  // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DeathHitDirection;                                        // 0x0950(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  DeathHitResult;                                           // 0x095C(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       DamageTags;                                               // 0x09E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       SpawnDroneTags;                                           // 0x0A08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                Front;                                                    // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Left;                                                     // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Right;                                                    // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Back;                                                     // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Head_Front;                                               // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Head_Left;                                                // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Head_Right;                                               // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Head_Back;                                                // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrontSectionNameCount;                                    // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LeftSectionNameCount;                                     // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RightSectionNameCount;                                    // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BackSectionNameCount;                                     // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Head_FrontSectionNameCount;                               // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Head_LeftSectionNameCount;                                // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Head_RightSectionNameCount;                               // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Head_BackSectionNameCount;                                // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FrontMontageSectionPrefix;                                // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BackMontageSectionPrefix;                                 // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftMontageSectionPrefix;                                 // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightMontageSectionPrefix;                                // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HeadFrontMontageSectionPrefix;                            // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HeadBackMontageSectionPrefix;                             // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HeadLeftMontageSectionPrefix;                             // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HeadRightMontageSectionPrefix;                            // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C");
		return ptr;
	}


	void GetRandomSectionName(int MaxNumberOfSections, struct FName OriginalSectionName, struct FName* SectionName);
	void InitializeDeathHitDirection(struct FGameplayEventData EventHitData);
	void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void K2_OnEndAbility(bool bWasCancelled);
	void PickDeathMontageSection();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAB_GenericDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
