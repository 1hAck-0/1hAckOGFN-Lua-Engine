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

// 0xA8 (0x2C0 - 0x218)
// WidgetBlueprintGeneratedClass ErrorEntry.ErrorEntry_C
class UErrorEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     IconTextButton;                                    // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MESSAGE;                                           // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortErrorInfo                        ErrorInfo;                                         // 0x230(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                ErrorUrlBase;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ErrorEntry_C");
		return Clss;
	}

	void Center_on_Widget(bool* Did_Center, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetErrorInfo(const struct FFortErrorInfo& ErrorInfo);
	void GetButtonVisibility(enum class ESlateVisibility* NewParam);
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ErrorEntry(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility CallFunc_GetButtonVisibility_NewParam, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
