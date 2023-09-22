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

// BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C
// 0x0020 (0x0988 - 0x0968)
class UGA_DefaultPlayer_Stunned_C : public UGAB_GenericStunned_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFortFeedbackHandle                         StunFeedbackEvent;                                        // 0x0970(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_Stunned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
