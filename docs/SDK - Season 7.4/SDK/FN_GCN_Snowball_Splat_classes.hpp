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

// BlueprintGeneratedClass GCN_Snowball_Splat.GCN_Snowball_Splat_C
// 0x0010 (0x01B0 - 0x01A0)
class UGCN_Snowball_Splat_C : public UGC_Tomato_Hit_Splat_C
{
public:
	bool                                               Decal;                                                    // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	class AActor*                                      NewVar_1;                                                 // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Snowball_Splat.GCN_Snowball_Splat_C");
		return ptr;
	}


	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
