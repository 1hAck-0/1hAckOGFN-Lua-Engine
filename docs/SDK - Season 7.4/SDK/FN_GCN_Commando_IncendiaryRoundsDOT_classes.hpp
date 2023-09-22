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

// BlueprintGeneratedClass GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C
// 0x0008 (0x0430 - 0x0428)
class AGCN_Commando_IncendiaryRoundsDOT_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveDestroyed();
	void ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
