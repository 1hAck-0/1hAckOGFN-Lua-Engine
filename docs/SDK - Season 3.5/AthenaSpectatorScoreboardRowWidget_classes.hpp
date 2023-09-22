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

// 0x40 (0x858 - 0x818)
// WidgetBlueprintGeneratedClass AthenaSpectatorScoreboardRowWidget.AthenaSpectatorScoreboardRowWidget_C
class UAthenaSpectatorScoreboardRowWidget_C : public UAthenaSpectatorScoreboardEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x818(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      Kills;                                             // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RecordingPlayerIcon;                               // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ScoreboardStateBorder;                             // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpectatorTargetIcon;                               // 0x838(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TeamColorBorder;                                   // 0x840(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TeamNumber;                                        // 0x848(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      User;                                              // 0x850(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorScoreboardRowWidget_C");
		return Clss;
	}

	void Refresh(class UClass* IrrelevantStyle, class UClass* DefaultStyle, class UClass* DeadStyle, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_ClassClass_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, bool CallFunc_NotEqual_ClassClass_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_NotEqual_ClassClass_ReturnValue12, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1);
	void OnEntryDataSet();
	void ExecuteUbergraph_AthenaSpectatorScoreboardRowWidget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
