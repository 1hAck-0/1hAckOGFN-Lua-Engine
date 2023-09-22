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

// BlueprintGeneratedClass GCN_Outlander_GroundWave_Explosion.GCN_Outlander_GroundWave_Explosion_C
// 0x001C (0x009C - 0x0080)
class UGCN_Outlander_GroundWave_Explosion_C : public UFortGameplayCueNotify_Simple
{
public:
	class UParticleSystem*                             FXExplosion;                                              // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundExplosion;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXScale;                                                  // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Outlander_GroundWave_Explosion.GCN_Outlander_GroundWave_Explosion_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
