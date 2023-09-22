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

// 0x6B (0x293 - 0x228)
// WidgetBlueprintGeneratedClass DailyRewardsItem.DailyRewardsItem_C
class UDailyRewardsItem_C : public UFortDailyRewardsItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class UImage*                                CheckCheckMark;                                    // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckMarkShadow;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Day;                                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         DayBorder;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                FortItemCard;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Claim_Surpress;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Current_Highlight;                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageEmptyBackground;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ItemBorder;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayTransform;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxMainContent;                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsDummyWidget;                                     // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsClaimed;                                         // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsCurrentWidget;                                   // 0x292(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DailyRewardsItem_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_DailyRewardsItem(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable12, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool Temp_bool_Variable123, const struct FLinearColor& Temp_struct_Variable12, const struct FLinearColor& Temp_struct_Variable123, bool Temp_bool_Variable1234, const struct FLinearColor& Temp_struct_Variable1234, const struct FLinearColor& Temp_struct_Variable12345, bool Temp_bool_Variable12345, enum class ESlateVisibility K2Node_Select_Default, const struct FVector2D& K2Node_Select1_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FLinearColor& K2Node_Select12_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select123_Default, const struct FLinearColor& Temp_struct_Variable123456, const struct FLinearColor& Temp_struct_Variable1234567, bool Temp_bool_Variable123456, enum class ESlateVisibility Temp_byte_Variable12, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123, const struct FLinearColor& K2Node_Select1234_Default, float K2Node_Select12345_Default, const struct FLinearColor& K2Node_Select123456_Default, bool Temp_bool_Variable1234567, enum class ESlateVisibility K2Node_Select1234567_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
