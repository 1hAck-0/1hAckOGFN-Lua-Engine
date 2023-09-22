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

// BlueprintGeneratedClass GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C
// 0x0017 (0x0960 - 0x0949)
class UGAT_Athena_PurpleStuff_C : public UGAT_TriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Athena_PurpleStuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
