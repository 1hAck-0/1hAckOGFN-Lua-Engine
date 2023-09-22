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

// WidgetBlueprintGeneratedClass LobbyGadgetButton.LobbyGadgetButton_C
// 0x0059 (0x0291 - 0x0238)
class ULobbyGadgetButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPanelButton_C*                              Button;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      EmptySlot;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                      Item;                                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UFortWorldItemDefinition*>            DesignTestItemDefinitions;                                // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortWorldItem*                              GadgetItem;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty LobbyGadgetButton.LobbyGadgetButton_C.OnButtonClicked
	unsigned char                                      UnknownData01[0x10];                                      // 0x0280(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty LobbyGadgetButton.LobbyGadgetButton_C.OnButtonHovered
	bool                                               bLocked;                                                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyGadgetButton.LobbyGadgetButton_C");
		return ptr;
	}


	void Focus();
	void GetLocked(bool* bLocked);
	void SetLocked(bool bLocked);
	void GetGadgetItem(class UFortWorldItem** GadgetItem);
	void Refresh(class UFortWorldItem* WorldItem);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void ExecuteUbergraph_LobbyGadgetButton(int EntryPoint);
	void OnButtonHovered__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
	void OnButtonClicked__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
