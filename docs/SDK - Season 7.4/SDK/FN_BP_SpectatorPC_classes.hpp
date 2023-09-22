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

// BlueprintGeneratedClass BP_SpectatorPC.BP_SpectatorPC_C
// 0x0008 (0x25B8 - 0x25B0)
class ABP_SpectatorPC_C : public AFortPlayerControllerSpectating
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x25B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpectatorPC.BP_SpectatorPC_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpectatorPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
