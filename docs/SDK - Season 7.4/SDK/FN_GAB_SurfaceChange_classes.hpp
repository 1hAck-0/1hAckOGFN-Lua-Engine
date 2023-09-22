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

// BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C
// 0x0080 (0x09B8 - 0x0938)
class UGAB_SurfaceChange_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	struct FScalableFloat                              RemovalDelay;                                             // 0x0948(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              IcySurfacesEnabled;                                       // 0x0968(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       HasIce;                                                   // 0x0988(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SurfaceChange_Ice;                                     // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_SurfaceChange_Snow;                                    // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C");
		return ptr;
	}


	void HotfixableGEApplication(struct FScalableFloat Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse);
	void RemoveGameplayEffects();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAB_SurfaceChange(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
