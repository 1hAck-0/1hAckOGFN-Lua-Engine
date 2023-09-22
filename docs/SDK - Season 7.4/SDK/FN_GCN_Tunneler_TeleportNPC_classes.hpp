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

// BlueprintGeneratedClass GCN_Tunneler_TeleportNPC.GCN_Tunneler_TeleportNPC_C
// 0x0008 (0x0430 - 0x0428)
class AGCN_Tunneler_TeleportNPC_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Tunneler_TeleportNPC.GCN_Tunneler_TeleportNPC_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GCN_Tunneler_TeleportNPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
