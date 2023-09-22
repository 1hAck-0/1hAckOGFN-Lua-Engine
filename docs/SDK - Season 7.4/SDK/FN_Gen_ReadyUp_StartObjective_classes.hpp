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

// BlueprintGeneratedClass Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C
// 0x0035 (0x005D - 0x0028)
class UGen_ReadyUp_StartObjective_C : public UFortMissionEventParams
{
public:
	float                                              ReadyUpTimerLength;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FText                                       InteractText;                                             // 0x0030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                          InteractSpawnLocation;                                    // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BluGloMissionActivationQty;                               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFightTheStorm;                                          // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C");
		return ptr;
	}


	void SetParams(float ReadyUpTimerLength, struct FText InteractText, int BluGloMissionActivationQty, bool IsFightTheStorm, TArray<struct FTransform>* InteractSpawnLocation, class UGen_ReadyUp_StartObjective_C** ThisObject);
	void BreakParams(float* ReadyUpTimerLength, TArray<struct FTransform>* InteractSpawnLocation, struct FText* InteractText, int* BluGloMissionActivationQty, bool* IsFightTheStorm);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
