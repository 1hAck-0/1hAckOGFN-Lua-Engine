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

// 0x99 (0x2A9 - 0x210)
// WidgetBlueprintGeneratedClass TooltipStatWidget.TooltipStatWidget_C
class UTooltipStatWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UImage*                                _Image__HR;                                        // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            _Text__Label;                                      // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            _Text__Single;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            _Text__Value;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ButtonHover;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTooltipStat                          TooltipData;                                       // 0x248(0x31)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2B74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           TextColor;                                         // 0x280(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HoverEnabled;                                      // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TooltipStatWidget_C");
		return Clss;
	}

	void Init(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor12, const struct FSlateColor& K2Node_MakeStruct_SlateColor123, const struct FLinearColor& CallFunc_Get_Debuff_Color_Color, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color1, const struct FSlateColor& K2Node_MakeStruct_SlateColor1234, const struct FSlateColor& K2Node_MakeStruct_SlateColor12345, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_TooltipStatWidget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
