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

// BlueprintGeneratedClass GC_NPC_Elemental_Ice.GC_NPC_Elemental_Ice_C
// 0x0040 (0x03E0 - 0x03A0)
class AGC_NPC_Elemental_Ice_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Husk_Elemental_Ice_AuxObjs;                             // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Ice_Elemental_FX;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Elemental_Material;                                       // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           Elemental_Physical_Material;                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delay_Time_for_Restore_Previous_Material;                 // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UFortFeedbackBank*                           Elemental_Feedback;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_NPC_Elemental_Ice.GC_NPC_Elemental_Ice_C");
		return ptr;
	}


	void Death_FX_Setup(bool Remove, class AEnemyPawn_Parent_C* Pawn);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void Rerun();
	void ExecuteUbergraph_GC_NPC_Elemental_Ice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
