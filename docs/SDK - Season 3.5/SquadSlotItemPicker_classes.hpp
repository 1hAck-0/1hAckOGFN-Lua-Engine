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

// 0x30 (0x490 - 0x460)
// WidgetBlueprintGeneratedClass SquadSlotItemPicker.SquadSlotItemPicker_C
class USquadSlotItemPicker_C : public UFortSquadSlotItemPicker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      HideSort;                                          // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowSort;                                          // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Show_Items;                                        // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hide_Items;                                        // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SortText;                                          // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SquadSlotItemPicker_C");
		return Clss;
	}

	void Construct();
	void HandleChangeSort();
	void HandleSortChanged(enum class ESquadSlotSortType CurrentSortType, enum class ESquadSlotType NewParam);
	void ExecuteUbergraph_SquadSlotItemPicker(int32 EntryPoint, enum class ESquadSlotSortType K2Node_CustomEvent_CurrentSortType, enum class ESquadSlotType K2Node_CustomEvent_NewParam, enum class ESquadSlotSortType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, enum class ESquadSlotType Temp_byte_Variable1, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class FText Temp_text_Variable123456789, class FText Temp_text_Variable12345678910, class FText Temp_text_Variable1234567891011, class FText K2Node_Select_Default, class FText K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
