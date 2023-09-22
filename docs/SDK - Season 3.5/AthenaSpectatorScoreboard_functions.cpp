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


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.SetConsoleInputImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Temp_struct_Variable                                             ()
// enum class ECommonGamepadType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Temp_struct_Variable1                                            ()
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      CallFunc_GetCurrentGamepadType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush12                                   ()
// struct FSlateBrush                 K2Node_Select_Default                                            ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush123                                  ()
// struct FSlateBrush                 K2Node_Select1_Default                                           ()

void UAthenaSpectatorScoreboard_C::SetConsoleInputImages(const struct FSlateBrush& Temp_struct_Variable, enum class ECommonGamepadType Temp_byte_Variable, const struct FSlateBrush& Temp_struct_Variable1, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, enum class ECommonGamepadType Temp_byte_Variable1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush12, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush123, const struct FSlateBrush& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "SetConsoleInputImages");

	Params::UAthenaSpectatorScoreboard_C_SetConsoleInputImages_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentGamepadType_ReturnValue = CallFunc_GetCurrentGamepadType_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;
	Parms.K2Node_MakeStruct_SlateBrush12 = K2Node_MakeStruct_SlateBrush12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush123 = K2Node_MakeStruct_SlateBrush123;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.UpdateListUI
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSpectatorScoreboard_C::UpdateListUI()
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "UpdateListUI");

	Params::UAthenaSpectatorScoreboard_C_UpdateListUI_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorScoreboard_C::ResetFocus()
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "ResetFocus");

	Params::UAthenaSpectatorScoreboard_C_ResetFocus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorScoreboard_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "Construct");

	Params::UAthenaSpectatorScoreboard_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ExecuteUbergraph_AthenaSpectatorScoreboard
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorScoreboard_C::ExecuteUbergraph_AthenaSpectatorScoreboard(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "ExecuteUbergraph_AthenaSpectatorScoreboard");

	Params::UAthenaSpectatorScoreboard_C_ExecuteUbergraph_AthenaSpectatorScoreboard_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
