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

// 0x140 (0x358 - 0x218)
// WidgetBlueprintGeneratedClass BuildingBar.BuildingBar_C
class UBuildingBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        _Horizontal_Box__Health_Stat_Text;                 // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__HP_Baseplate;                              // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              _Overlay__HP_Bar_Artwork;                          // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          _ProgressBar__HP_Delta;                            // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          _ProgressBar__HP_Fill;                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              _Size_Box__HP_Bar;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              _Size_Box__HP_Bevel;                               // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageHPBevel;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherHPText;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBuildModeHPText;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextCurrentHealthStat;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextMaxHealthStat;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                TrapItemCard;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TrapNameTextBlock;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TrapUsesText;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TrapVerticalBox;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Current_HP_Value;                                  // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_HP_Value;                                      // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Last_HP_Value;                                     // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_464A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          HP_FadeTimer;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        HP_FadeUpdateRate;                                 // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuildingInteraction          DisplayMode;                                       // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_464B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Max_Durability_Value;                              // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Durability_Value;                          // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_Baseplate_Color;                           // 0x2C8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Alternate_Baseplate_Color;                         // 0x2D8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_HP_Color_A;                                // 0x2E8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_HP_Color_B;                                // 0x2F8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_HP_Color_C;                                // 0x308(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Alternate_HP_Color_A;                              // 0x318(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Alternate_HP_Color_B;                              // 0x328(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Alternate_HP_Color_C;                              // 0x338(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Trap_Durability_Text;                         // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_464C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             TemporaryTrapInstance;                             // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BuildingBar_C");
		return Clss;
	}

	void UpdateBuildingTrap(class ABuildingTrap* BuildingTrap, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetTrapLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_GetShortDisplayName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void Set_Display_Mode(enum class EFortBuildingInteraction Display_Mode, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, enum class EFortBuildingInteraction Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, enum class EFortBuildingInteraction Temp_byte_Variable12345678, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, enum class EFortBuildingInteraction Temp_byte_Variable123456789, const struct FLinearColor& Temp_struct_Variable12, const struct FLinearColor& Temp_struct_Variable123, enum class EFortBuildingInteraction Temp_byte_Variable12345678910, const struct FLinearColor& Temp_struct_Variable1234, const struct FLinearColor& Temp_struct_Variable12345, enum class EFortBuildingInteraction Temp_byte_Variable1234567891011, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select12_Default, int32 Temp_int_Variable123456, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EFortBuildingInteraction Temp_byte_Variable123456789101112, const struct FLinearColor& K2Node_Select123_Default, int32 K2Node_Select1234_Default, const struct FLinearColor& K2Node_Select12345_Default);
	void Update_Durability_Text(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void Update_Current_Durability_Value(float CurrentDurability, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Update_Max_Durability_Value(float Max, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1);
	void Initialize_Bar(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1);
	void Set_Timer(bool Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Update(bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void Update_HP_Delta_Bar(float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void Update_HP_Fill_Bar(float CallFunc_Conv_IntToFloat_ReturnValue, float Temp_float_Variable, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void Update_Current_HP_Value(float Current, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Update_Max_HP_Value(float Max, int32 CallFunc_FCeil_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void ExecuteUbergraph_BuildingBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
