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

// BlueprintGeneratedClass GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C
// 0x0004 (0x042C - 0x0428)
class AGCNL_GM_MaxHealthIncrease_Major_C : public AFortGameplayCueNotify_Looping
{
public:
	float                                              Restore_Delay;                                            // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C");
		return ptr;
	}


	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
