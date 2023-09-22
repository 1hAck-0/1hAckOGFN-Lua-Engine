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

// 0x7C (0x29C - 0x220)
// WidgetBlueprintGeneratedClass HordeWaveAlertWidget.HordeWaveAlertWidget_C
class UHordeWaveAlertWidget_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      AppearanceAndDisappearance_Quick;                  // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ModifierDisappearance;                             // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ModifierAppearance;                                // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AppearanceAndDisappearance;                        // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ContentSwitcher;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HordeLevelText;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ModifierAddedText;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RewardText;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHordeWaveModifiersWidget_C*           WaveModifiersWidget;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WaveNumText;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WaveText;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        AllModsPresentedDisplayDelay;                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> EmptyArray;                                        // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        PostInitializationDelay;                           // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HordeWaveAlertWidget_C");
		return Clss;
	}

	void OnWaveStarted(class FText& LevelText, int32 Level, class FText& WaveText, int32 WaveNum);
	void OnWaveCompleted(int32 Wave, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void OnHordeTierInitialized_Event_0(TArray<struct FFortItemInstanceQuantityPair>& Items);
	void OnWaveModifiersAdded(TArray<class UFortGameplayModifierItemDefinition*>& Modifiers);
	void Construct();
	void OnModifierAppearanceAnimComplete();
	void OnAllModifiersPresented();
	void OnAppearanceDisappearanceAnimComplete();
	void OnModifierDisappearanceAnimComplete();
	void OnAppearanceDisappearanceAnimComplete_Quick();
	void ExecuteUbergraph_HordeWaveAlertWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_CustomEvent_LevelText, int32 K2Node_CustomEvent_Level, class FText K2Node_CustomEvent_WaveText, int32 K2Node_CustomEvent_WaveNum, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, int32 K2Node_CustomEvent_Wave, TArray<struct FFortItemInstanceQuantityPair>& K2Node_CustomEvent_Rewards, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, TArray<struct FFortItemInstanceQuantityPair>& K2Node_CustomEvent_Items, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array12, class FText CallFunc_Format_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, TArray<class UFortGameplayModifierItemDefinition*>& K2Node_CustomEvent_Modifiers, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
