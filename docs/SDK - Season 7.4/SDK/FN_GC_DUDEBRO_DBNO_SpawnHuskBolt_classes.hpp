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

// BlueprintGeneratedClass GC_DUDEBRO_DBNO_SpawnHuskBolt.GC_DUDEBRO_DBNO_SpawnHuskBolt_C
// 0x0000 (0x01A0 - 0x01A0)
class UGC_DUDEBRO_DBNO_SpawnHuskBolt_C : public UFortGameplayCueNotify_Burst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_DUDEBRO_DBNO_SpawnHuskBolt.GC_DUDEBRO_DBNO_SpawnHuskBolt_C");
		return ptr;
	}


	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
