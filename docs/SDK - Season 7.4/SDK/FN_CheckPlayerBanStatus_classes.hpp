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

// BlueprintGeneratedClass CheckPlayerBanStatus.CheckPlayerBanStatus_C
// 0x0058 (0x03E8 - 0x0390)
class ACheckPlayerBanStatus_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerBannedModal_C*                        BannedModal;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FMcpBanInfo                                 CurrBanInfo;                                              // 0x03A8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckPlayerBanStatus.CheckPlayerBanStatus_C");
		return ptr;
	}


	void OnActionCompleted();
	void ShowBan();
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams Params);
	void ExecuteUbergraph_CheckPlayerBanStatus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
