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

// BlueprintGeneratedClass NPCLeaderItemPedestal.NPCLeaderItemPedestal_C
// 0x0020 (0x0400 - 0x03E0)
class ANPCLeaderItemPedestal_C : public AFortItemPreviewPedestal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestToShow;                                              // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition*                         HeroItemDefinition;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCLeaderItemPedestal.NPCLeaderItemPedestal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_NPCLeaderItemPedestal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
