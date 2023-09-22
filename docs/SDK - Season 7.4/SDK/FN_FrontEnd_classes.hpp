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

// BlueprintGeneratedClass Frontend.FrontEnd_C
// 0x0018 (0x0360 - 0x0348)
class AFrontEnd_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               NewLobby;                                                 // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class AHBOnboardingFlow_C*                         HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty;   // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend.FrontEnd_C");
		return ptr;
	}


	void PlaySpeech(struct FString Filename, int SampleRate, class USoundWave* AssetFile);
	void EnableTutorial();
	void ReceiveBeginPlay();
	void OnMatchStarted();
	void ExecuteUbergraph_FrontEnd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
