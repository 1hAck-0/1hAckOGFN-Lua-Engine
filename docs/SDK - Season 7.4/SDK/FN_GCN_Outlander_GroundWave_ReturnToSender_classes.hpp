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

// BlueprintGeneratedClass GCN_Outlander_GroundWave_ReturnToSender.GCN_Outlander_GroundWave_ReturnToSender_C
// 0x0000 (0x0080 - 0x0080)
class UGCN_Outlander_GroundWave_ReturnToSender_C : public UFortGameplayCueNotify_Simple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Outlander_GroundWave_ReturnToSender.GCN_Outlander_GroundWave_ReturnToSender_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
