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


// Function QuickbarSlot.QuickbarSlot_C.InitializeInvalidation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::InitializeInvalidation(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "InitializeInvalidation");

	Params::UQuickbarSlot_C_InitializeInvalidation_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemType           Item_Type_To_Show                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue1                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1234                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12345                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue123456                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1234567                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::UpdateItemBoxSize(enum class EFortItemType Item_Type_To_Show, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortItemType CallFunc_GetType_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_ShouldUseNewItemCards_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class EFortItemType K2Node_Select_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue123, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue1, enum class EFortItemType K2Node_Select1_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1234, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Add_FloatFloat_ReturnValue12345, float CallFunc_Add_FloatFloat_ReturnValue123456, float CallFunc_Add_FloatFloat_ReturnValue1234567, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue1)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "UpdateItemBoxSize");

	Params::UQuickbarSlot_C_UpdateItemBoxSize_Params Parms;
	Parms.Item_Type_To_Show = Item_Type_To_Show;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12 = CallFunc_Add_FloatFloat_ReturnValue12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue123 = CallFunc_Add_FloatFloat_ReturnValue123;
	Parms.CallFunc_GetCardSize_ReturnValue1 = CallFunc_GetCardSize_ReturnValue1;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue1 = CallFunc_SlotAsOverlaySlot_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetCardDimensions_ReturnValue1 = CallFunc_GetCardDimensions_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1234 = CallFunc_Add_FloatFloat_ReturnValue1234;
	Parms.CallFunc_BreakVector2D_X1 = CallFunc_BreakVector2D_X1;
	Parms.CallFunc_BreakVector2D_Y1 = CallFunc_BreakVector2D_Y1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12345 = CallFunc_Add_FloatFloat_ReturnValue12345;
	Parms.CallFunc_Add_FloatFloat_ReturnValue123456 = CallFunc_Add_FloatFloat_ReturnValue123456;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1234567 = CallFunc_Add_FloatFloat_ReturnValue1234567;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue1 = CallFunc_Lerp_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::OnCooldownStopped(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "OnCooldownStopped");

	Params::UQuickbarSlot_C_OnCooldownStopped_Params Parms;
	Parms.CooldownType = CooldownType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::OnCooldownStarted(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "OnCooldownStarted");

	Params::UQuickbarSlot_C_OnCooldownStarted_Params Parms;
	Parms.CooldownType = CooldownType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuickbarSlotCooldown_C*     K2Node_DynamicCast_AsQuickbar_Slot_Cooldown                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UQuickbarSlot_C::InitializeCooldowns(class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "InitializeCooldowns");

	Params::UQuickbarSlot_C_InitializeCooldowns_Params Parms;
	Parms.K2Node_DynamicCast_AsQuickbar_Slot_Cooldown = K2Node_DynamicCast_AsQuickbar_Slot_Cooldown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSkipAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickbarSlotCooldown_C*     K2Node_DynamicCast_AsQuickbar_Slot_Cooldown                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::Maximize(bool ShouldSkipAnimation, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "Maximize");

	Params::UQuickbarSlot_C_Maximize_Params Parms;
	Parms.ShouldSkipAnimation = ShouldSkipAnimation;
	Parms.K2Node_DynamicCast_AsQuickbar_Slot_Cooldown = K2Node_DynamicCast_AsQuickbar_Slot_Cooldown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSkipAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickbarSlotCooldown_C*     K2Node_DynamicCast_AsQuickbar_Slot_Cooldown                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::Minimize(bool ShouldSkipAnimation, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "Minimize");

	Params::UQuickbarSlot_C_Minimize_Params Parms;
	Parms.ShouldSkipAnimation = ShouldSkipAnimation;
	Parms.K2Node_DynamicCast_AsQuickbar_Slot_Cooldown = K2Node_DynamicCast_AsQuickbar_Slot_Cooldown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::SetSelected(bool Selected, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable12, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select12_Default, float CallFunc_GetEndTime_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "SetSelected");

	Params::UQuickbarSlot_C_SetSelected_Params Parms;
	Parms.Selected = Selected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMaximizeStarted()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMaximizeStarted");

	Params::UQuickbarSlot_C_HandleMaximizeStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMinimizeFinished()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMinimizeFinished");

	Params::UQuickbarSlot_C_HandleMinimizeFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMaximizeFinished()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMaximizeFinished");

	Params::UQuickbarSlot_C_HandleMaximizeFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMinimizeStarted()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMinimizeStarted");

	Params::UQuickbarSlot_C_HandleMinimizeStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::Construct()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "Construct");

	Params::UQuickbarSlot_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "PreConstruct");

	Params::UQuickbarSlot_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AnimatedBoxScaleFactor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::SetAnimatedBoxScaleFactor(float AnimatedBoxScaleFactor)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "SetAnimatedBoxScaleFactor");

	Params::UQuickbarSlot_C_SetAnimatedBoxScaleFactor_Params Parms;
	Parms.AnimatedBoxScaleFactor = AnimatedBoxScaleFactor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable123                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1234                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable12345                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable123456                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// enum class EItemDisplayStyle       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_AnimatedBoxScaleFactor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::ExecuteUbergraph_QuickbarSlot(int32 EntryPoint, class UTexture2D* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable12, class UTexture2D* Temp_object_Variable123, class UTexture2D* Temp_object_Variable1234, class UTexture2D* Temp_object_Variable12345, class UTexture2D* Temp_object_Variable123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EItemDisplayStyle Temp_byte_Variable, class UTexture2D* K2Node_Select_Default, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_AnimatedBoxScaleFactor)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "ExecuteUbergraph_QuickbarSlot");

	Params::UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_object_Variable123 = Temp_object_Variable123;
	Parms.Temp_object_Variable1234 = Temp_object_Variable1234;
	Parms.Temp_object_Variable12345 = Temp_object_Variable12345;
	Parms.Temp_object_Variable123456 = Temp_object_Variable123456;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue1 = CallFunc_GetCardSize_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_AnimatedBoxScaleFactor = K2Node_CustomEvent_AnimatedBoxScaleFactor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
