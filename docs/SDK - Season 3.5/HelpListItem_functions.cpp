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


// Function HelpListItem.HelpListItem_C.SetupExpansion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Expanded                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpListItem_C::SetupExpansion(bool Expanded, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HelpListItem_C", "SetupExpansion");

	Params::UHelpListItem_C_SetupExpansion_Params Parms;
	Parms.Expanded = Expanded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.InitializeItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpListItem_C::InitializeItem(bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("HelpListItem_C", "InitializeItem");

	Params::UHelpListItem_C_InitializeItem_Params Parms;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.ExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpListItem_C::ExpansionChanged(bool bExpanded)
{
	static auto Func = Class->GetFunction("HelpListItem_C", "ExpansionChanged");

	Params::UHelpListItem_C_ExpansionChanged_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHelpListItem_C::Construct()
{
	static auto Func = Class->GetFunction("HelpListItem_C", "Construct");

	Params::UHelpListItem_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.OnHelpItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHelpListItem_C::OnHelpItemSet()
{
	static auto Func = Class->GetFunction("HelpListItem_C", "OnHelpItemSet");

	Params::UHelpListItem_C_OnHelpItemSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.ExecuteUbergraph_HelpListItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemExpanded_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpListItem_C::ExecuteUbergraph_HelpListItem(int32 EntryPoint, bool K2Node_Event_bExpanded, bool CallFunc_IsItemExpanded_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("HelpListItem_C", "ExecuteUbergraph_HelpListItem");

	Params::UHelpListItem_C_ExecuteUbergraph_HelpListItem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.CallFunc_IsItemExpanded_ReturnValue = CallFunc_IsItemExpanded_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.InviteJoinChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpListItem_C::InviteJoinChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("HelpListItem_C", "InviteJoinChanged__DelegateSignature");

	Params::UHelpListItem_C_InviteJoinChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
