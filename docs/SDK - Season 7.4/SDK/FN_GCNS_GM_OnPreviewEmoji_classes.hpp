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

// BlueprintGeneratedClass GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C
// 0x0018 (0x0098 - 0x0080)
class UGCNS_GM_OnPreviewEmoji_C : public UFortGameplayCueNotify_Simple
{
public:
	struct FVector                                     InitialVelocity;                                          // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C");
		return ptr;
	}


	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
