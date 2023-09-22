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

// BlueprintGeneratedClass GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C
// 0x004C (0x0474 - 0x0428)
class AGCNL_Athena_RuneVent_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      MyTargetCached;                                           // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpDelta;                                              // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDelta;                                              // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    LowGravityPSComponent;                                    // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                ExpireTellDelayTimer;                                     // 0x0450(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Duration;                                                 // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationTellDuration;                                   // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTime;                                                // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationSoundPeriod;                                    // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ExpirationSoundTimer;                                     // 0x0468(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxDrawDistance;                                          // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C");
		return ptr;
	}


	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void Activated(class AActor* PlayerPawn);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExpireTell();
	void ClearExpireTell();
	void PlayExpirationSound();
	void ExecuteUbergraph_GCNL_Athena_RuneVent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
