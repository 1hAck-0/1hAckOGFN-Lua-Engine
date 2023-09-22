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

// 0x40 (0x878 - 0x838)
// WidgetBlueprintGeneratedClass SocialImportButton.SocialImportButton_C
class USocialImportButton_C : public UFortSocialImportButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x838(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x840(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ContentBorder;                                     // 0x848(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftSideImage;                                     // 0x850(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            RightExtraContentSlot;                             // 0x858(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TextOverride;                                      // 0x860(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialImportButton_C");
		return Clss;
	}

	void OnCaptionGenerated(class FText& Caption);
	void ExecuteUbergraph_SocialImportButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FText K2Node_Event_Caption, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetDisplayText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable1, class FText K2Node_Select1_Default, bool CallFunc_TextIsEmpty_ReturnValue12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
