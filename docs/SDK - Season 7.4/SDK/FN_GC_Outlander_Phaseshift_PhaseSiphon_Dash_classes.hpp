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

// BlueprintGeneratedClass GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C
// 0x0008 (0x0938 - 0x0930)
class AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C : public AGC_Outlander_Phaseshift_AppliedFX_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
