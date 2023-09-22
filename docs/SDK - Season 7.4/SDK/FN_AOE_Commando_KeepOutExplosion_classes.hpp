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

// BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
// 0x0320 (0x0908 - 0x05E8)
class AAOE_Commando_KeepOutExplosion_C : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AOE_Audio_Effect;                                         // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Grenade_Linger;                                         // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DamageArea;                                               // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Radius;                                                   // 0x0610(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	struct FSoundAttenuationSettings                   AOE_Sound_Attenuation_Based_On_Radius;                    // 0x0618(0x02E8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  AOE_Electric_Sound;                                       // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C");
		return ptr;
	}


	void OnRep_Radius();
	void UserConstructionScript();
	void Send_Info(float Radius);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
