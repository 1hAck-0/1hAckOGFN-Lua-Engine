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

// BlueprintGeneratedClass MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C
// 0x0008 (0x06E0 - 0x06D8)
class AMinigameMode_FiringRangeV2_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C");
		return ptr;
	}


	void GiftWeapons();
	void UserConstructionScript();
	void HandleMinigameStarted();
	void ExecuteUbergraph_MinigameMode_FiringRangeV2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
