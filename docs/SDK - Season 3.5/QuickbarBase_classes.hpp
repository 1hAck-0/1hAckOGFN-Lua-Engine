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

// 0x23 (0x263 - 0x240)
// WidgetBlueprintGeneratedClass QuickbarBase.QuickbarBase_C
class UQuickbarBase_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	enum class EFortQuickBars                    MyQuickbarIndex;                                   // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FocusedSlot;                                       // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UQuickbarSlot_C*>               QuickbarSlots;                                     // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         IsMaximized;                                       // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortQuickBars                    FocusedQuickbarIndex;                              // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBattleRoyale;                                    // 0x262(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuickbarBase_C");
		return Clss;
	}

	void HandleQuickbarContentChanged(enum class EFortQuickBars QuickBarType, TArray<int32>& ChangedSlots, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsDead_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateCurrentFocusedQuickbar(enum class EFortQuickBars* PreviousFocusedQuickbar, enum class EFortQuickBars* CurrentFocusedQuickbar, enum class EFortQuickBars PrevFocusedQuickbarIndex, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot);
	void ShouldRefreshQuickbarItem(int32 RequestedSlot, int32 CurrentSlot, bool* Result, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void RefreshQuickbar(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleKeybindsChanged(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Minimize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Maximize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Is_Valid_Slot(int32 Slot, bool* Is_Valid, int32* Array_Index, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void OnWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void OnQuickbarSlotFocusChanged(enum class EFortQuickBars QuickbarIndex, int32 Slot);
	void OnQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex, TArray<int32>& ChangedSlots);
	void OnQuickbarForceFullUpdate(enum class EFortQuickBars QuickbarIndex);
	void OnQuickbarSecondarySlotFocusChanged_Event_0(enum class EFortQuickBars QuickbarIndex, int32 Slot);
	void OnLocalPlayerDied(struct FFortPlayerDeathReport& DeathReport);
	void OnLocalPlayerRevived();
	void OnLocalPlayerSpawned();
	void Destruct();
	void ExecuteUbergraph_QuickbarBase(int32 EntryPoint, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, bool CallFunc_Is_Valid_Slot_Is_Valid, int32 CallFunc_Is_Valid_Slot_Array_Index, bool CallFunc_Is_Valid_Slot_Is_Valid1, int32 CallFunc_Is_Valid_Slot_Array_Index1, class UQuickbarSlot_C* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQuickbarSlot_C* CallFunc_Array_Get_Item1, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex123, int32 K2Node_CustomEvent_Slot1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Is_Valid_Slot_Is_Valid12, int32 CallFunc_Is_Valid_Slot_Array_Index12, class UQuickbarSlot_C* CallFunc_Array_Get_Item12, bool CallFunc_ShouldRefreshQuickbarItem_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex12, TArray<int32>& K2Node_CustomEvent_ChangedSlots, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex1, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, int32 K2Node_CustomEvent_Slot, bool CallFunc_ShouldRefreshQuickbarItem_Result1, class UQuickbarSlot_C* CallFunc_Array_Get_Item123, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, class UFortHUDContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, class UQuickbarSlot_C* CallFunc_Array_Get_Item1234, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12345, enum class EFortQuickBars CallFunc_UpdateCurrentFocusedQuickbar_PreviousFocusedQuickbar, enum class EFortQuickBars CallFunc_UpdateCurrentFocusedQuickbar_CurrentFocusedQuickbar, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
