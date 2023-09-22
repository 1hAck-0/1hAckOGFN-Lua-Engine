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

// WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
// 0x0032 (0x0262 - 0x0230)
class UItemReceivedHeaderSubWidgetBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortGiftBoxItem*                            GiftBoxItem_BP;                                           // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     FromUserName_BP;                                          // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FFortReceivedItemLootInfo>           ItemDefs;                                                 // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsBattlePassUpgrade;                                     // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSelfGift;                                                // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C");
		return ptr;
	}


	void InitFromGiftBoxItem_BP();
	void Construct();
	void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
