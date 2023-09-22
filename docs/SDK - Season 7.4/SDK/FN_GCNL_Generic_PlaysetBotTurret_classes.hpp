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

// BlueprintGeneratedClass GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C
// 0x0008 (0x0430 - 0x0428)
class AGCNL_Generic_PlaysetBotTurret_C : public AFortGameplayCueNotify_Looping
{
public:
	class ATrap_Floor_Turret_Parent_C*                 BotTurret;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C");
		return ptr;
	}


	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
