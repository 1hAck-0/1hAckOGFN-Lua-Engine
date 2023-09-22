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

// BlueprintGeneratedClass GC_Teleport_in.GC_Teleport_In_C
// 0x0004 (0x0084 - 0x0080)
class UGC_Teleport_In_C : public UFortGameplayCueNotify_Simple
{
public:
	float                                              Default_Play_Length;                                      // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Teleport_in.GC_Teleport_In_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
