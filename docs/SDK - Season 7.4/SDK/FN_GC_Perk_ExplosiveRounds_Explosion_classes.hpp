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

// BlueprintGeneratedClass GC_Perk_ExplosiveRounds_Explosion.GC_Perk_ExplosiveRounds_Explosion_C
// 0x0000 (0x01A0 - 0x01A0)
class UGC_Perk_ExplosiveRounds_Explosion_C : public UFortGameplayCueNotify_Burst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Perk_ExplosiveRounds_Explosion.GC_Perk_ExplosiveRounds_Explosion_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
