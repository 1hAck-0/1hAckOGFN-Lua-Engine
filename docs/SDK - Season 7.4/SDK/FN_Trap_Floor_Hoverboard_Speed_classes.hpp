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

// BlueprintGeneratedClass Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C
// 0x0050 (0x0DF0 - 0x0DA0)
class ATrap_Floor_Hoverboard_Speed_C : public ABuildingTrapFloor_Hoverboard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                    // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SpeedBoost_Idle;                                        // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Ready_Sound;                                         // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C");
		return ptr;
	}


	bool BP_ShouldTrigger(TArray<class AActor*> TouchingActors);
	void UserConstructionScript();
	void OnPlaced();
	void OnOutOfDurability();
	void OnFinishedBuilding();
	void OnWorldReady();
	void ExecuteUbergraph_Trap_Floor_Hoverboard_Speed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
