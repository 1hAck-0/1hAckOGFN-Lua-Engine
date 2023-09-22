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

// WidgetBlueprintGeneratedClass MinigameButtons.MinigameButtons_C
// 0x0140 (0x0370 - 0x0230)
class UMinigameButtons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                             ButtonSwitcher;                                           // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           EndGameButton;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           EndGameButton2;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           StartGameButton;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           StartGameButton2;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty MinigameButtons.MinigameButtons_C.StartButtonClicked
	unsigned char                                      UnknownData01[0x10];                                      // 0x0270(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty MinigameButtons.MinigameButtons_C.EndButtonClicked
	unsigned char                                      UnknownData02[0x10];                                      // 0x0280(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty MinigameButtons.MinigameButtons_C.StartButtonHovered
	unsigned char                                      UnknownData03[0x10];                                      // 0x0290(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty MinigameButtons.MinigameButtons_C.EndButtonHovered
	class UIconTextButton_C*                           CurrentButton;                                            // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EMinigameButtonsState>                 ButtonState;                                              // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<EMinigameButtonsState>, struct FMinigameButtonsStateConfiguration> ButtonConfigurations;                                     // 0x02B0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0300(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty MinigameButtons.MinigameButtons_C.StartButtonUnhovered
	unsigned char                                      UnknownData06[0x10];                                      // 0x0310(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty MinigameButtons.MinigameButtons_C.EndButtonUnhovered
	struct FMinigameButtonsWidgetSwitcherConfiguration CurrentWidgetSwitcherConfiguration;                       // 0x0320(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMinigameButtonsWidgetSwitcherConfiguration> WidgetSwitcherConfigurations;                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MinigameButtons.MinigameButtons_C");
		return ptr;
	}


	void UpdateButtonsFromButtonState();
	void SetButtonState(TEnumAsByte<EMinigameButtonsState> Value);
	void CenterOnCurrentButton();
	void UpdateButtons(class AFortMinigameSettingsBuilding* Machine);
	void BndEvt__StartGameButton_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__EndGameButton_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void SetWidgetSwitcherIndex(int Index);
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void OnInitialized();
	void ExecuteUbergraph_MinigameButtons(int EntryPoint);
	void EndButtonUnhovered__DelegateSignature(class UCommonButton* Button);
	void StartButtonUnhovered__DelegateSignature(class UCommonButton* Button);
	void EndButtonHovered__DelegateSignature(class UCommonButton* Button);
	void StartButtonHovered__DelegateSignature(class UCommonButton* Button);
	void EndButtonClicked__DelegateSignature();
	void StartButtonClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
