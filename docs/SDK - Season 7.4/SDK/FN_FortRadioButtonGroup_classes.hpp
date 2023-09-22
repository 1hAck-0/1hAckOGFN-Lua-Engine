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

// WidgetBlueprintGeneratedClass FortRadioButtonGroup.FortRadioButtonGroup_C
// 0x0064 (0x0294 - 0x0230)
class UFortRadioButtonGroup_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                                    SizeBox_Buttons;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBox_Buttons;                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFortRadioButtonItemStruct>          Buttons;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UIconTextButton_C*>                   CreatedButtons;                                           // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0268(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty FortRadioButtonGroup.FortRadioButtonGroup_C.RadioButtonClicked_Event
	float                                              WidthOverride;                                            // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UCommonButtonGroup*                          CreatedButtonsGroup;                                      // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CommonButtonGroup;                                        // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightOverride;                                           // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortRadioButtonGroup.FortRadioButtonGroup_C");
		return ptr;
	}


	void CenterOnWidget();
	void OnButtonClicked_Bind(class UCommonButton* AssociatedButton, int ButtonIndex);
	void Destruct();
	void UpdateButtons();
	void ExecuteUbergraph_FortRadioButtonGroup(int EntryPoint);
	void RadioButtonClicked_Event__DelegateSignature(int SelectedIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
