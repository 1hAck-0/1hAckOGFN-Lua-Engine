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

// BlueprintGeneratedClass GC_Ninja_MantisLeap_MantisStrikeFX.GC_Ninja_MantisLeap_MantisStrikeFX_C
// 0x0010 (0x0090 - 0x0080)
class UGC_Ninja_MantisLeap_MantisStrikeFX_C : public UFortGameplayCueNotify_Simple
{
public:
	class UParticleSystem*                             P_MantisStrikeImpact;                                     // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MantisStrikeImpactCue;                                    // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Ninja_MantisLeap_MantisStrikeFX.GC_Ninja_MantisLeap_MantisStrikeFX_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
