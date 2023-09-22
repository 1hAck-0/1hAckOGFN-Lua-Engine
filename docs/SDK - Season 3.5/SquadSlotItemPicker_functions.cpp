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


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USquadSlotItemPicker_C::Construct()
{
	static auto Func = Class->GetFunction("SquadSlotItemPicker_C", "Construct");

	Params::USquadSlotItemPicker_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleChangeSort
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USquadSlotItemPicker_C::HandleChangeSort()
{
	static auto Func = Class->GetFunction("SquadSlotItemPicker_C", "HandleChangeSort");

	Params::USquadSlotItemPicker_C_HandleChangeSort_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleSortChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESquadSlotSortType      CurrentSortType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadSlotType          NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotItemPicker_C::HandleSortChanged(enum class ESquadSlotSortType CurrentSortType, enum class ESquadSlotType NewParam)
{
	static auto Func = Class->GetFunction("SquadSlotItemPicker_C", "HandleSortChanged");

	Params::USquadSlotItemPicker_C_HandleSortChanged_Params Parms;
	Parms.CurrentSortType = CurrentSortType;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.ExecuteUbergraph_SquadSlotItemPicker
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadSlotSortType      K2Node_CustomEvent_CurrentSortType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadSlotType          K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadSlotSortType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable123                                            ()
// enum class ESquadSlotType          Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable1234                                           ()
// class FText                        Temp_text_Variable12345                                          ()
// class FText                        Temp_text_Variable123456                                         ()
// class FText                        Temp_text_Variable1234567                                        ()
// class FText                        Temp_text_Variable12345678                                       ()
// class FText                        Temp_text_Variable123456789                                      ()
// class FText                        Temp_text_Variable12345678910                                    ()
// class FText                        Temp_text_Variable1234567891011                                  ()
// class FText                        K2Node_Select_Default                                            ()
// class FText                        K2Node_Select1_Default                                           ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void USquadSlotItemPicker_C::ExecuteUbergraph_SquadSlotItemPicker(int32 EntryPoint, enum class ESquadSlotSortType K2Node_CustomEvent_CurrentSortType, enum class ESquadSlotType K2Node_CustomEvent_NewParam, enum class ESquadSlotSortType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, enum class ESquadSlotType Temp_byte_Variable1, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class FText Temp_text_Variable123456789, class FText Temp_text_Variable12345678910, class FText Temp_text_Variable1234567891011, class FText K2Node_Select_Default, class FText K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("SquadSlotItemPicker_C", "ExecuteUbergraph_SquadSlotItemPicker");

	Params::USquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CurrentSortType = K2Node_CustomEvent_CurrentSortType;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_text_Variable1234 = Temp_text_Variable1234;
	Parms.Temp_text_Variable12345 = Temp_text_Variable12345;
	Parms.Temp_text_Variable123456 = Temp_text_Variable123456;
	Parms.Temp_text_Variable1234567 = Temp_text_Variable1234567;
	Parms.Temp_text_Variable12345678 = Temp_text_Variable12345678;
	Parms.Temp_text_Variable123456789 = Temp_text_Variable123456789;
	Parms.Temp_text_Variable12345678910 = Temp_text_Variable12345678910;
	Parms.Temp_text_Variable1234567891011 = Temp_text_Variable1234567891011;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
