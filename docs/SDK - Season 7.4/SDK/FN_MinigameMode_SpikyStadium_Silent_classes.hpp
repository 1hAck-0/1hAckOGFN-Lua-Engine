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

// BlueprintGeneratedClass MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C
// 0x0008 (0x06E0 - 0x06D8)
class AMinigameMode_SpikyStadium_Silent_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C");
		return ptr;
	}


	void UserConstructionScript();
	void HandleMinigameStarted();
	void HandleMinigameWarmup();
	void HandleMinigameEnded();
	void ExecuteUbergraph_MinigameMode_SpikyStadium_Silent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
