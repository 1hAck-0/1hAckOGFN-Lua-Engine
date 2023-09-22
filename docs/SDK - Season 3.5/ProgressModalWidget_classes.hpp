#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD4 (0x4C4 - 0x3F0)
// WidgetBlueprintGeneratedClass ProgressModalWidget.ProgressModalWidget_C
class UProgressModalWidget_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class ULightbox_C*                           Lightbox;                                          // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressWidget_C*                     ProgressWidget;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x408(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x420(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           Icon;                                              // 0x438(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bIntroOutrEnabled;                                 // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bAutoInitialize;                                   // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bFocusSelf;                                        // 0x4C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bConsumeAnalogInput;                               // 0x4C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProgressModalWidget_C");
		return Clss;
	}

	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetIcon(const struct FSlateBrush& Icon);
	void SetDescription(class FText Description);
	void SetTitle(class FText Title);
	void Initialize(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Construct();
	void HandleIntroEnded();
	void HandleOutroEnded();
	void OnBeginIntro();
	void OnBeginOutro();
	void Destruct();
	void ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
