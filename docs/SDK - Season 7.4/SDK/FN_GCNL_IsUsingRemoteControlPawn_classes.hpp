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

// BlueprintGeneratedClass GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C
// 0x0008 (0x0430 - 0x0428)
class AGCNL_IsUsingRemoteControlPawn_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C");
		return ptr;
	}


	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
