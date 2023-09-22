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

// BlueprintGeneratedClass GCN_Athena_CageTrap_ActivateTrap.GCN_Athena_CageTrap_ActivateTrap_C
// 0x0010 (0x0090 - 0x0080)
class UGCN_Athena_CageTrap_ActivateTrap_C : public UFortGameplayCueNotify_Simple
{
public:
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem_Build;                                     // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_CageTrap_ActivateTrap.GCN_Athena_CageTrap_ActivateTrap_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
