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

// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
// 0x0058 (0x0308 - 0x02B0)
class UTabInputOptions_C : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                               OverlayBorder;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Currently_Selected_Input;                                 // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Currently_Primary;                                     // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x02C5(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty TabInputOptions.TabInputOptions_C.Enable Overlay
	unsigned char                                      UnknownData02[0x10];                                      // 0x02D8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty TabInputOptions.TabInputOptions_C.Disable Overlay
	bool                                               Using_Gamepad;                                            // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x02E9(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty TabInputOptions.TabInputOptions_C.Gamepad Changed
	class UOptionsMenuInputDisplayOnly_C*              DisplayObject;                                            // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C");
		return ptr;
	}


	void SetupDisplayOption(int InputIndex, class UOptionsMenuInputDisplayOnly_C** ReturnObject);
	void Set_Input_Enabled(bool Enabled);
	void Overlay_Key_Pressed(struct FKey NewKey);
	void DialogResult(EFortDialogResult Result, struct FName ResultName);
	void CenterOnTab();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent(class UUserWidget* Widget);
	void HandleUsingGamepadChanged(ECommonInputType NewInputType);
	void UnbindClicked(int Number_in_List, class UOptionsMenuInput_C* Widget);
	void ClearAndConstructKeybindList();
	void Input_Clicked(int Number_in_List, bool Is_Primary_Button);
	void UpdateOptionsTab();
	void Construct();
	void HandleChangeBinding(struct FKey NewKey);
	void ExecuteUbergraph_TabInputOptions(int EntryPoint);
	void Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input, struct FText Overlay_Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
