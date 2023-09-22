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

// 0xA0 (0x460 - 0x3C0)
// WidgetBlueprintGeneratedClass AbilitiesPage.AbilitiesPage_C
class UAbilitiesPage_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          AbilitiesBox;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                  AbilityTilePrimary;                                // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                  AbilityTileSecondary;                              // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                  AbilityTileTertiary;                               // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextAbilityDescription;                      // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextAbilityName;                             // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTierIndicator*                    FortTierIndicatorUnlockTier;                       // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          GadgetsBox;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                  GadgetTilePrimary;                                 // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                  GadgetTileSecondary;                               // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovieWidget_C*                        MovieWidget;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxMovie;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextLevel;                                         // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxGadgetsList;                            // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherAbilityDescription;                  // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         SelectedAbilityButton;                             // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          VideoMediaSource;                                  // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitiesPage_C");
		return Clss;
	}

	void HandleInventory(bool* Passthrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void UpdateAbilityMovie(class UFortGadgetItemDefinition* InGadgetItemDef, bool CallFunc_IsValid_ReturnValue);
	void InitializeAbilityTiles(const TArray<class UFortGadgetItemDefinition*>& SlottedGadgets, const TArray<class UAbilitiesPageTile_C*>& AvailableSlots, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UAbilitiesPageTile_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue123, int32 Temp_int_Loop_Counter_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue1234, int32 CallFunc_Array_Add_ReturnValue12345, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_Array_RemoveItem_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue123456, class UFortHeroManagementContext* CallFunc_GetContext_ReturnValue12, const struct FHeroUIData& CallFunc_GetHeroData_HeroData, bool CallFunc_GetHeroData_ReturnValue, TArray<struct FFortUIPerk>& CallFunc_GetHeroAbilityPerks_HeroAbilityPerks, bool CallFunc_GetHeroAbilityPerks_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue123, const struct FFortUIPerk& CallFunc_Array_Get_Item1, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue123, bool CallFunc_IsValid_ReturnValue123, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue1234, class UFortAbilityKit* CallFunc_GetGrantedAbilityKit_ReturnValue, bool CallFunc_IsValid_ReturnValue1234, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, class UFortGadgetItemDefinition* CallFunc_Array_Get_Item12, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue);
	void AddTilesToButtonGroup(class UVerticalBox* ButtonContainer, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitiesPageTile_C* K2Node_DynamicCast_AsAbilities_Page_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleSelectedButtonChanged(class UCommonButton* InSelectedButton, int32 InSelectedButtonIndex, class UCommonButton* NewLocalVar_0);
	void OnAbilitySelected(class UCommonButton* AbilityButton, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UAbilitiesPageTile_C* K2Node_DynamicCast_AsAbilities_Page_Tile, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EFortItemTier CallFunc_GetTier_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class FText CallFunc_GetTooltipTextFromToken_OutText, bool CallFunc_GetTooltipTextFromToken_ReturnValue, class FText CallFunc_GetTooltipTextFromToken_OutText1, bool CallFunc_GetTooltipTextFromToken_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData123, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1234, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12345, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array12, class FText CallFunc_Format_ReturnValue12);
	void HandleBack(bool* Passthrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void OnActivated();
	void OnQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex, TArray<int32>& ChangedSlots);
	void Construct();
	void OnDeactivated();
	void ExecuteUbergraph_AbilitiesPage(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, TArray<int32>& K2Node_CustomEvent_ChangedSlots, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue1, bool CallFunc_HasAnyUserFocus_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
