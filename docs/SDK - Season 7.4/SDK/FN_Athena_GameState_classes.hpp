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

// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
// 0x0028 (0x1DB8 - 0x1D90)
class AAthena_GameState_C : public AFortGameStateAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x1D98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline;                                                 // 0x1DA0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline02;                                               // 0x1DA4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1DA5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1DA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Victory_Royale_Sound;                                     // 0x1DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_GameState.Athena_GameState_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline();
	void OnWinnerAnnounced();
	void ExecuteUbergraph_Athena_GameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
