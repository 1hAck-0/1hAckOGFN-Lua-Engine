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

// BlueprintGeneratedClass MinigameStat_PlayerDeaths.MinigameStat_PlayerDeaths_C
// 0x0000 (0x0188 - 0x0188)
class UMinigameStat_PlayerDeaths_C : public UFortMinigameStatFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameStat_PlayerDeaths.MinigameStat_PlayerDeaths_C");
		return ptr;
	}


	int Compare(int FirstScore, int SecondScore);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
