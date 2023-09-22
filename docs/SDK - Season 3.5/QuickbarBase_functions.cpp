#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function QuickbarBase.QuickbarBase_C.HandleQuickbarContentChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickBarType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      ChangedSlots                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::HandleQuickbarContentChanged(enum class EFortQuickBars QuickBarType, TArray<int32>& ChangedSlots, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsDead_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "HandleQuickbarContentChanged");

	Params::UQuickbarBase_C_HandleQuickbarContentChanged_Params Parms;
	Parms.QuickBarType = QuickBarType;
	Parms.ChangedSlots = ChangedSlots;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.UpdateCurrentFocusedQuickbar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          PreviousFocusedQuickbar                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CurrentFocusedQuickbar                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          PrevFocusedQuickbarIndex                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarBase_C::UpdateCurrentFocusedQuickbar(enum class EFortQuickBars* PreviousFocusedQuickbar, enum class EFortQuickBars* CurrentFocusedQuickbar, enum class EFortQuickBars PrevFocusedQuickbarIndex, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "UpdateCurrentFocusedQuickbar");

	Params::UQuickbarBase_C_UpdateCurrentFocusedQuickbar_Params Parms;
	Parms.PrevFocusedQuickbarIndex = PrevFocusedQuickbarIndex;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (PreviousFocusedQuickbar != nullptr)
		*PreviousFocusedQuickbar = Parms.PreviousFocusedQuickbar;

	if (CurrentFocusedQuickbar != nullptr)
		*CurrentFocusedQuickbar = Parms.CurrentFocusedQuickbar;

}


// Function QuickbarBase.QuickbarBase_C.ShouldRefreshQuickbarItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              RequestedSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::ShouldRefreshQuickbarItem(int32 RequestedSlot, int32 CurrentSlot, bool* Result, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "ShouldRefreshQuickbarItem");

	Params::UQuickbarBase_C_ShouldRefreshQuickbarItem_Params Parms;
	Parms.RequestedSlot = RequestedSlot;
	Parms.CurrentSlot = CurrentSlot;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function QuickbarBase.QuickbarBase_C.RefreshQuickbar
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::RefreshQuickbar(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "RefreshQuickbar");

	Params::UQuickbarBase_C_RefreshQuickbar_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::HandleKeybindsChanged(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "HandleKeybindsChanged");

	Params::UQuickbarBase_C_HandleKeybindsChanged_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::Minimize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "Minimize");

	Params::UQuickbarBase_C_Minimize_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::Maximize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "Maximize");

	Params::UQuickbarBase_C_Maximize_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.Is Valid Slot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Array_Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::Is_Valid_Slot(int32 Slot, bool* Is_Valid, int32* Array_Index, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "Is Valid Slot");

	Params::UQuickbarBase_C_Is_Valid_Slot_Params Parms;
	Parms.Slot = Slot;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Valid != nullptr)
		*Is_Valid = Parms.Is_Valid;

	if (Array_Index != nullptr)
		*Array_Index = Parms.Array_Index;

}


// Function QuickbarBase.QuickbarBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickbarBase_C::Construct()
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "Construct");

	Params::UQuickbarBase_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.OnWorldItemListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      ItemsAdded                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      ItemsRemoved                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuickbarBase_C::OnWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "OnWorldItemListChanged");

	Params::UQuickbarBase_C_OnWorldItemListChanged_Params Parms;
	Parms.ItemsAdded = ItemsAdded;
	Parms.ItemsRemoved = ItemsRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarSlotFocusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarBase_C::OnQuickbarSlotFocusChanged(enum class EFortQuickBars QuickbarIndex, int32 Slot)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "OnQuickbarSlotFocusChanged");

	Params::UQuickbarBase_C_OnQuickbarSlotFocusChanged_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarContentsChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      ChangedSlots                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuickbarBase_C::OnQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex, TArray<int32>& ChangedSlots)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "OnQuickbarContentsChanged");

	Params::UQuickbarBase_C_OnQuickbarContentsChanged_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;
	Parms.ChangedSlots = ChangedSlots;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarForceFullUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarBase_C::OnQuickbarForceFullUpdate(enum class EFortQuickBars QuickbarIndex)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "OnQuickbarForceFullUpdate");

	Params::UQuickbarBase_C_OnQuickbarForceFullUpdate_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarSecondarySlotFocusChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarBase_C::OnQuickbarSecondarySlotFocusChanged_Event_0(enum class EFortQuickBars QuickbarIndex, int32 Slot)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "OnQuickbarSecondarySlotFocusChanged_Event_0");

	Params::UQuickbarBase_C_OnQuickbarSecondarySlotFocusChanged_Event_0_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerDied
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport      DeathReport                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickbarBase_C::OnLocalPlayerDied(struct FFortPlayerDeathReport& DeathReport)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "OnLocalPlayerDied");

	Params::UQuickbarBase_C_OnLocalPlayerDied_Params Parms;
	Parms.DeathReport = DeathReport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerRevived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarBase_C::OnLocalPlayerRevived()
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "OnLocalPlayerRevived");

	Params::UQuickbarBase_C_OnLocalPlayerRevived_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarBase_C::OnLocalPlayerSpawned()
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "OnLocalPlayerSpawned");

	Params::UQuickbarBase_C_OnLocalPlayerSpawned_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickbarBase_C::Destruct()
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "Destruct");

	Params::UQuickbarBase_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarBase.QuickbarBase_C.ExecuteUbergraph_QuickbarBase
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsAdded                                    (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsRemoved                                  (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Is_Valid_Slot_Is_Valid                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Is_Valid_Slot_Array_Index                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Valid_Slot_Is_Valid1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Is_Valid_Slot_Array_Index1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex123                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Slot1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Valid_Slot_Is_Valid12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Is_Valid_Slot_Array_Index12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item12                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldRefreshQuickbarItem_Result                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_CustomEvent_ChangedSlots                                  (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Slot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldRefreshQuickbarItem_Result1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item123                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerDeathReport      K2Node_CustomEvent_DeathReport                                   (ConstParm)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567                      (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678                     (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789                    (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910                  (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011                (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112              (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011121314          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112131415        (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213141516      (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011121314151617    (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item1234                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_UpdateCurrentFocusedQuickbar_PreviousFocusedQuickbar    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_UpdateCurrentFocusedQuickbar_CurrentFocusedQuickbar     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::ExecuteUbergraph_QuickbarBase(int32 EntryPoint, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, bool CallFunc_Is_Valid_Slot_Is_Valid, int32 CallFunc_Is_Valid_Slot_Array_Index, bool CallFunc_Is_Valid_Slot_Is_Valid1, int32 CallFunc_Is_Valid_Slot_Array_Index1, class UQuickbarSlot_C* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQuickbarSlot_C* CallFunc_Array_Get_Item1, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex123, int32 K2Node_CustomEvent_Slot1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Is_Valid_Slot_Is_Valid12, int32 CallFunc_Is_Valid_Slot_Array_Index12, class UQuickbarSlot_C* CallFunc_Array_Get_Item12, bool CallFunc_ShouldRefreshQuickbarItem_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex12, TArray<int32>& K2Node_CustomEvent_ChangedSlots, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex1, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, int32 K2Node_CustomEvent_Slot, bool CallFunc_ShouldRefreshQuickbarItem_Result1, class UQuickbarSlot_C* CallFunc_Array_Get_Item123, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, class UFortHUDContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, class UQuickbarSlot_C* CallFunc_Array_Get_Item1234, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12345, enum class EFortQuickBars CallFunc_UpdateCurrentFocusedQuickbar_PreviousFocusedQuickbar, enum class EFortQuickBars CallFunc_UpdateCurrentFocusedQuickbar_CurrentFocusedQuickbar, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarBase_C", "ExecuteUbergraph_QuickbarBase");

	Params::UQuickbarBase_C_ExecuteUbergraph_QuickbarBase_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ItemsAdded = K2Node_CustomEvent_ItemsAdded;
	Parms.K2Node_CustomEvent_ItemsRemoved = K2Node_CustomEvent_ItemsRemoved;
	Parms.CallFunc_Is_Valid_Slot_Is_Valid = CallFunc_Is_Valid_Slot_Is_Valid;
	Parms.CallFunc_Is_Valid_Slot_Array_Index = CallFunc_Is_Valid_Slot_Array_Index;
	Parms.CallFunc_Is_Valid_Slot_Is_Valid1 = CallFunc_Is_Valid_Slot_Is_Valid1;
	Parms.CallFunc_Is_Valid_Slot_Array_Index1 = CallFunc_Is_Valid_Slot_Array_Index1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.K2Node_CustomEvent_QuickbarIndex123 = K2Node_CustomEvent_QuickbarIndex123;
	Parms.K2Node_CustomEvent_Slot1 = K2Node_CustomEvent_Slot1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Is_Valid_Slot_Is_Valid12 = CallFunc_Is_Valid_Slot_Is_Valid12;
	Parms.CallFunc_Is_Valid_Slot_Array_Index12 = CallFunc_Is_Valid_Slot_Array_Index12;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_ShouldRefreshQuickbarItem_Result = CallFunc_ShouldRefreshQuickbarItem_Result;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_QuickbarIndex12 = K2Node_CustomEvent_QuickbarIndex12;
	Parms.K2Node_CustomEvent_ChangedSlots = K2Node_CustomEvent_ChangedSlots;
	Parms.K2Node_CustomEvent_QuickbarIndex1 = K2Node_CustomEvent_QuickbarIndex1;
	Parms.K2Node_CustomEvent_QuickbarIndex = K2Node_CustomEvent_QuickbarIndex;
	Parms.K2Node_CustomEvent_Slot = K2Node_CustomEvent_Slot;
	Parms.CallFunc_ShouldRefreshQuickbarItem_Result1 = CallFunc_ShouldRefreshQuickbarItem_Result1;
	Parms.CallFunc_Array_Get_Item123 = CallFunc_Array_Get_Item123;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CustomEvent_DeathReport = K2Node_CustomEvent_DeathReport;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567 = K2Node_CreateDelegate_OutputDelegate1234567;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678 = K2Node_CreateDelegate_OutputDelegate12345678;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789 = K2Node_CreateDelegate_OutputDelegate123456789;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910 = K2Node_CreateDelegate_OutputDelegate12345678910;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011 = K2Node_CreateDelegate_OutputDelegate1234567891011;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112 = K2Node_CreateDelegate_OutputDelegate123456789101112;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213 = K2Node_CreateDelegate_OutputDelegate12345678910111213;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011121314 = K2Node_CreateDelegate_OutputDelegate1234567891011121314;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112131415 = K2Node_CreateDelegate_OutputDelegate123456789101112131415;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213141516 = K2Node_CreateDelegate_OutputDelegate12345678910111213141516;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011121314151617 = K2Node_CreateDelegate_OutputDelegate1234567891011121314151617;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue12 = CallFunc_EqualEqual_ByteByte_ReturnValue12;
	Parms.CallFunc_Array_Get_Item1234 = CallFunc_Array_Get_Item1234;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.CallFunc_UpdateCurrentFocusedQuickbar_PreviousFocusedQuickbar = CallFunc_UpdateCurrentFocusedQuickbar_PreviousFocusedQuickbar;
	Parms.CallFunc_UpdateCurrentFocusedQuickbar_CurrentFocusedQuickbar = CallFunc_UpdateCurrentFocusedQuickbar_CurrentFocusedQuickbar;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
