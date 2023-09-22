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

// BlueprintGeneratedClass GCN_NPC_Ice.GCN_NPC_Ice_C
// 0x00D0 (0x04F8 - 0x0428)
class AGCN_NPC_Ice_C : public AFortGameplayCueNotify_Looping
{
public:
	float                                              TransitionOutLength;                                      // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	TMap<struct FName, struct FLinearColor>            VectorParameters;                                         // 0x0430(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UMaterialInterface*>    Elemental_Mat_Map;                                        // 0x0480(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             Ice_Particle_Husk;                                        // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ice_Particle_Player;                                      // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Flinger_Ice_Modifier;                                     // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_NPC_Ice.GCN_NPC_Ice_C");
		return ptr;
	}


	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
