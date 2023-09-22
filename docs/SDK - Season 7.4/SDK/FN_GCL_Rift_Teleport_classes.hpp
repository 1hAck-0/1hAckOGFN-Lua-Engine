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

// BlueprintGeneratedClass GCL_Rift_Teleport.GCL_Rift_Teleport_C
// 0x0000 (0x0428 - 0x0428)
class AGCL_Rift_Teleport_C : public AFortGameplayCueNotify_Looping
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Rift_Teleport.GCL_Rift_Teleport_C");
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters Parameters);
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
