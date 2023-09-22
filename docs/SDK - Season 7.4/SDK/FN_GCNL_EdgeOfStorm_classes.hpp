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

// BlueprintGeneratedClass GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C
// 0x0020 (0x08A0 - 0x0880)
class AGCNL_EdgeOfStorm_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             StormPawn;                                                // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBoundAudioPercent;                                       // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0899(0x0003) MISSED OFFSET
	float                                              CurrentPlaybackPercent;                                   // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C");
		return ptr;
	}


	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void Activated(struct FVector EdgeOfStorm);
	void Deactivated();
	void ExecuteUbergraph_GCNL_EdgeOfStorm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
