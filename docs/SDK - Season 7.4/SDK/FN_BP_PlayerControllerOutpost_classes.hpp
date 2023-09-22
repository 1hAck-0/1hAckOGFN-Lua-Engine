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

// BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C
// 0x0019 (0x24C9 - 0x24B0)
class ABP_PlayerControllerOutpost_C : public AFortPlayerControllerOutpost
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x24B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AOutpostStructureBase*                       NewVar_1;                                                 // 0x24B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOutpostStructureBase*                       NewVar_2;                                                 // 0x24C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               GetHelp;                                                  // 0x24C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C");
		return ptr;
	}


	void UserConstructionScript();
	void ServerStartExpandingOutpost(bool GetHelp);
	void ExecuteUbergraph_BP_PlayerControllerOutpost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
