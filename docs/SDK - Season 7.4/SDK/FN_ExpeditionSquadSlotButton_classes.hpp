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

// WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C
// 0x0041 (0x0BF1 - 0x0BB0)
class UExpeditionSquadSlotButton_C : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                SquadSlotIndex;                                           // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BBC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0BBC(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotSelected
	unsigned char                                      UnknownData02[0x10];                                      // 0x0BD0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotUpdated
	unsigned char                                      UnknownData03[0x10];                                      // 0x0BE0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotOpened
	EFortItemCardSize                                  SlottedItemCardSize;                                      // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C");
		return ptr;
	}


	void Get_Squad_Data(struct FName* OutSquadId, int* OutSquadSlotIndex, TArray<EFortItemType>* ItemTypes);
	void PreConstruct(bool IsDesignTime);
	void SquadSlotWidgetUpdated();
	void HandlePostDifferentSquadSlotSetBP();
	void BP_OnSelected();
	void BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent(bool bIsOpen);
	void Construct();
	void Destruct();
	void Open_Squad_Slot(int SquadSlotIndex);
	void ExecuteUbergraph_ExpeditionSquadSlotButton(int EntryPoint);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item);
	void OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
