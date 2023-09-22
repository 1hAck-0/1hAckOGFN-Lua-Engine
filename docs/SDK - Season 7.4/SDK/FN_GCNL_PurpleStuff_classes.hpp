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

// BlueprintGeneratedClass GCNL_PurpleStuff.GCNL_PurpleStuff_C
// 0x0010 (0x0438 - 0x0428)
class AGCNL_PurpleStuff_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerPawn_Athena_Generic_C*                PlayerActor;                                              // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_PurpleStuff.GCNL_PurpleStuff_C");
		return ptr;
	}


	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCNL_PurpleStuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
