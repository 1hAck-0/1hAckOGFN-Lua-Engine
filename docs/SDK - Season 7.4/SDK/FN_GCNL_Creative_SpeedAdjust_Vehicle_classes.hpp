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

// BlueprintGeneratedClass GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C
// 0x0008 (0x0888 - 0x0880)
class AGCNL_Creative_SpeedAdjust_Vehicle_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
