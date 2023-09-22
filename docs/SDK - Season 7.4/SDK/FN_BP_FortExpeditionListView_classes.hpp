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

// WidgetBlueprintGeneratedClass BP_FortExpeditionListView.BP_FortExpeditionListView_C
// 0x0028 (0x0298 - 0x0270)
class UBP_FortExpeditionListView_C : public UFortExpeditionListViewWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0278(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty BP_FortExpeditionListView.BP_FortExpeditionListView_C.OnItemClicked
	unsigned char                                      UnknownData01[0x10];                                      // 0x0288(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty BP_FortExpeditionListView.BP_FortExpeditionListView_C.OnItemHovered

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionListView.BP_FortExpeditionListView_C");
		return ptr;
	}


	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent(class UObject* Item);
	void ExecuteUbergraph_BP_FortExpeditionListView(int EntryPoint);
	void OnItemHovered__DelegateSignature(class UObject* Item);
	void OnItemClicked__DelegateSignature(class UObject* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
