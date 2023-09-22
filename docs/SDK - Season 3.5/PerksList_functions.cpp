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


// Function PerksList.PerksList_C.ResetVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerksList_C::ResetVariables()
{
	static auto Func = Class->GetFunction("PerksList_C", "ResetVariables");

	Params::UPerksList_C_ResetVariables_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPerksList_C::Construct()
{
	static auto Func = Class->GetFunction("PerksList_C", "Construct");

	Params::UPerksList_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.OnGeneratePerkTier
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerkTier             FortPerkTier                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UFortPerkTierWidget_NUI*     PerkTierWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerksList_C::OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI* PerkTierWidget)
{
	static auto Func = Class->GetFunction("PerksList_C", "OnGeneratePerkTier");

	Params::UPerksList_C_OnGeneratePerkTier_Params Parms;
	Parms.FortPerkTier = FortPerkTier;
	Parms.PerkTierWidget = PerkTierWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.OnGeneratePerk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerk                 FortPerk                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortPerkWidget_NUI*         PerkWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerksList_C::OnGeneratePerk(const struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI* PerkWidget)
{
	static auto Func = Class->GetFunction("PerksList_C", "OnGeneratePerk");

	Params::UPerksList_C_OnGeneratePerk_Params Parms;
	Parms.FortPerk = FortPerk;
	Parms.PerkWidget = PerkWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.OnHeroChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UPerksList_C::OnHeroChanged()
{
	static auto Func = Class->GetFunction("PerksList_C", "OnHeroChanged");

	Params::UPerksList_C_OnHeroChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.OnStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UPerksList_C::OnStateChanged()
{
	static auto Func = Class->GetFunction("PerksList_C", "OnStateChanged");

	Params::UPerksList_C_OnStateChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.ExecuteUbergraph_PerksList
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIPerkTier             K2Node_Event_FortPerkTier                                        (NoDestructor)
// class UFortPerkTierWidget_NUI*     K2Node_Event_PerkTierWidget                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkTierWidgetNew_C*        K2Node_DynamicCast_AsPerk_Tier_Widget_New                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIPerk                 K2Node_Event_FortPerk                                            ()
// class UFortPerkWidget_NUI*         K2Node_Event_PerkWidget                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkWidgetNew_C*            K2Node_DynamicCast_AsPerk_Widget_New                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select123_Default                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456789                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1234_Default                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345678910                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue12                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234567891011                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue123                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select12345_Default                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkDivider_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerksList_C::ExecuteUbergraph_PerksList(int32 EntryPoint, const struct FFortUIPerkTier& K2Node_Event_FortPerkTier, class UFortPerkTierWidget_NUI* K2Node_Event_PerkTierWidget, class UPerkTierWidgetNew_C* K2Node_DynamicCast_AsPerk_Tier_Widget_New, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, const struct FFortUIPerk& K2Node_Event_FortPerk, class UFortPerkWidget_NUI* K2Node_Event_PerkWidget, class UPerkWidgetNew_C* K2Node_DynamicCast_AsPerk_Widget_New, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsPerkUnlocked_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue1, bool Temp_bool_Variable12, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1234, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue12, bool CallFunc_HasAnyChildren_ReturnValue123, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable123, enum class ESlateVisibility K2Node_Select12_Default, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, bool Temp_bool_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345678, enum class ESlateVisibility K2Node_Select123_Default, enum class ESlateVisibility Temp_byte_Variable123456789, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue1, bool Temp_bool_Variable12345, enum class ESlateVisibility K2Node_Select1234_Default, enum class ESlateVisibility Temp_byte_Variable12345678910, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue12, enum class ESlateVisibility Temp_byte_Variable1234567891011, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue123, enum class ESlateVisibility K2Node_Select12345_Default, class UPerkDivider_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1)
{
	static auto Func = Class->GetFunction("PerksList_C", "ExecuteUbergraph_PerksList");

	Params::UPerksList_C_ExecuteUbergraph_PerksList_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FortPerkTier = K2Node_Event_FortPerkTier;
	Parms.K2Node_Event_PerkTierWidget = K2Node_Event_PerkTierWidget;
	Parms.K2Node_DynamicCast_AsPerk_Tier_Widget_New = K2Node_DynamicCast_AsPerk_Tier_Widget_New;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.K2Node_Event_FortPerk = K2Node_Event_FortPerk;
	Parms.K2Node_Event_PerkWidget = K2Node_Event_PerkWidget;
	Parms.K2Node_DynamicCast_AsPerk_Widget_New = K2Node_DynamicCast_AsPerk_Widget_New;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue1 = CallFunc_HasAnyChildren_ReturnValue1;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue12 = CallFunc_HasAnyChildren_ReturnValue12;
	Parms.CallFunc_HasAnyChildren_ReturnValue123 = CallFunc_HasAnyChildren_ReturnValue123;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_byte_Variable123456 = Temp_byte_Variable123456;
	Parms.Temp_byte_Variable1234567 = Temp_byte_Variable1234567;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.Temp_byte_Variable12345678 = Temp_byte_Variable12345678;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.Temp_byte_Variable123456789 = Temp_byte_Variable123456789;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue1 = CallFunc_AddChildToVerticalBox_ReturnValue1;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;
	Parms.Temp_byte_Variable12345678910 = Temp_byte_Variable12345678910;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue12 = CallFunc_AddChildToVerticalBox_ReturnValue12;
	Parms.Temp_byte_Variable1234567891011 = Temp_byte_Variable1234567891011;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue123 = CallFunc_AddChildToVerticalBox_ReturnValue123;
	Parms.K2Node_Select12345_Default = K2Node_Select12345_Default;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue1 = CallFunc_AddChild_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
