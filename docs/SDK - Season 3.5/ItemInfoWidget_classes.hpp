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

// 0x40 (0x250 - 0x210)
// WidgetBlueprintGeneratedClass ItemInfoWidget.ItemInfoWidget_C
class UItemInfoWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      ItemName;                                          // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemType;                                          // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainViewItemInfoOverlay;                           // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainViewItemInfoVB;                                // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RarityGlow;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Rule;                                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShortDescription;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInfoWidget_C");
		return Clss;
	}

	void PopulateUsingItem(class UFortItem* NewParam);
	void Update_Text(class UFortItem* NewParam);
	void ExecuteUbergraph_ItemInfoWidget(int32 EntryPoint, class UFortItem* K2Node_CustomEvent_NewParam, class FText CallFunc_GetDisplayName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UFortTokenType* K2Node_DynamicCast_AsFort_Token_Type, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, int32 CallFunc_GetNumInStack_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData123, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue12, class UFortItem* K2Node_CustomEvent_NewParam1, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
