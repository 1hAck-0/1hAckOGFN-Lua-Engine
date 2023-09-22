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

// BlueprintGeneratedClass GC_YourMoveCreep_Explosion.GC_YourMoveCreep_Explosion_C
// 0x0018 (0x01B8 - 0x01A0)
class UGC_YourMoveCreep_Explosion_C : public UFortGameplayCueNotify_Burst
{
public:
	class UParticleSystem*                             P_YourMoveCreep;                                          // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOffset;                                                  // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	class USoundBase*                                  ExplosionSound;                                           // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_YourMoveCreep_Explosion.GC_YourMoveCreep_Explosion_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
