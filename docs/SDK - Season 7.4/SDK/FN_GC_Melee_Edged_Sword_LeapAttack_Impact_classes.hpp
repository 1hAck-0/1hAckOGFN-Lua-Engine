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

// BlueprintGeneratedClass GC_Melee_Edged_Sword_LeapAttack_Impact.GC_Melee_Edged_Sword_LeapAttack_Impact_C
// 0x0014 (0x01B4 - 0x01A0)
class UGC_Melee_Edged_Sword_LeapAttack_Impact_C : public UFortGameplayCueNotify_Burst
{
public:
	class UParticleSystem*                             ImpactWaveFX;                                             // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactWaveFXScale;                                        // 0x01A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Melee_Edged_Sword_LeapAttack_Impact.GC_Melee_Edged_Sword_LeapAttack_Impact_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
