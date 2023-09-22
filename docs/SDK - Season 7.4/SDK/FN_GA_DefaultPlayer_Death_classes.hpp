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

// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
// 0x0008 (0x0AD0 - 0x0AC8)
class UGA_DefaultPlayer_Death_C : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C");
		return ptr;
	}


	void PickDeathMontageSection();
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
