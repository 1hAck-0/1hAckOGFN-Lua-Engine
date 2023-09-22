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

// BlueprintGeneratedClass GAB_BaseDespawn.GAB_BaseDespawn_C
// 0x0018 (0x0950 - 0x0938)
class UGAB_BaseDespawn_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                TC_GameplayEffectInstantDeathDespawn;                     // 0x0940(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DelayBeforeKill;                                          // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RiftRandom;                                               // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_BaseDespawn.GAB_BaseDespawn_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAB_BaseDespawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
