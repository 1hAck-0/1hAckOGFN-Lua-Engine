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


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveStarted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LevelText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        WaveText                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              WaveNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeWaveAlertWidget_C::OnWaveStarted(class FText& LevelText, int32 Level, class FText& WaveText, int32 WaveNum)
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnWaveStarted");

	Params::UHordeWaveAlertWidget_C_OnWaveStarted_Params Parms;
	Parms.LevelText = LevelText;
	Parms.Level = Level;
	Parms.WaveText = WaveText;
	Parms.WaveNum = WaveNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Wave                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHordeWaveAlertWidget_C::OnWaveCompleted(int32 Wave, TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnWaveCompleted");

	Params::UHordeWaveAlertWidget_C_OnWaveCompleted_Params Parms;
	Parms.Wave = Wave;
	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnHordeTierInitialized_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>Items                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHordeWaveAlertWidget_C::OnHordeTierInitialized_Event_0(TArray<struct FFortItemInstanceQuantityPair>& Items)
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnHordeTierInitialized_Event_0");

	Params::UHordeWaveAlertWidget_C_OnHordeTierInitialized_Event_0_Params Parms;
	Parms.Items = Items;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveModifiersAdded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>Modifiers                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHordeWaveAlertWidget_C::OnWaveModifiersAdded(TArray<class UFortGameplayModifierItemDefinition*>& Modifiers)
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnWaveModifiersAdded");

	Params::UHordeWaveAlertWidget_C_OnWaveModifiersAdded_Params Parms;
	Parms.Modifiers = Modifiers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHordeWaveAlertWidget_C::Construct()
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "Construct");

	Params::UHordeWaveAlertWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierAppearanceAnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeWaveAlertWidget_C::OnModifierAppearanceAnimComplete()
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnModifierAppearanceAnimComplete");

	Params::UHordeWaveAlertWidget_C_OnModifierAppearanceAnimComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAllModifiersPresented
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeWaveAlertWidget_C::OnAllModifiersPresented()
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnAllModifiersPresented");

	Params::UHordeWaveAlertWidget_C_OnAllModifiersPresented_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeWaveAlertWidget_C::OnAppearanceDisappearanceAnimComplete()
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnAppearanceDisappearanceAnimComplete");

	Params::UHordeWaveAlertWidget_C_OnAppearanceDisappearanceAnimComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierDisappearanceAnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeWaveAlertWidget_C::OnModifierDisappearanceAnimComplete()
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnModifierDisappearanceAnimComplete");

	Params::UHordeWaveAlertWidget_C_OnModifierDisappearanceAnimComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete_Quick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeWaveAlertWidget_C::OnAppearanceDisappearanceAnimComplete_Quick()
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnAppearanceDisappearanceAnimComplete_Quick");

	Params::UHordeWaveAlertWidget_C_OnAppearanceDisappearanceAnimComplete_Quick_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.ExecuteUbergraph_HordeWaveAlertWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        K2Node_CustomEvent_LevelText                                     (ConstParm)
// int32                              K2Node_CustomEvent_Level                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_WaveText                                      (ConstParm)
// int32                              K2Node_CustomEvent_WaveNum                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Wave                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>K2Node_CustomEvent_Rewards                                       (ConstParm, ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData12                           (HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>K2Node_CustomEvent_Items                                         (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array12                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue12                                    ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// TArray<class UFortGameplayModifierItemDefinition*>K2Node_CustomEvent_Modifiers                                     (ConstParm, ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567                      (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678                     (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeWaveAlertWidget_C::ExecuteUbergraph_HordeWaveAlertWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_CustomEvent_LevelText, int32 K2Node_CustomEvent_Level, class FText K2Node_CustomEvent_WaveText, int32 K2Node_CustomEvent_WaveNum, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, int32 K2Node_CustomEvent_Wave, TArray<struct FFortItemInstanceQuantityPair>& K2Node_CustomEvent_Rewards, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, TArray<struct FFortItemInstanceQuantityPair>& K2Node_CustomEvent_Items, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array12, class FText CallFunc_Format_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, TArray<class UFortGameplayModifierItemDefinition*>& K2Node_CustomEvent_Modifiers, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("HordeWaveAlertWidget_C", "ExecuteUbergraph_HordeWaveAlertWidget");

	Params::UHordeWaveAlertWidget_C_ExecuteUbergraph_HordeWaveAlertWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_LevelText = K2Node_CustomEvent_LevelText;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.K2Node_CustomEvent_WaveText = K2Node_CustomEvent_WaveText;
	Parms.K2Node_CustomEvent_WaveNum = K2Node_CustomEvent_WaveNum;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CustomEvent_Wave = K2Node_CustomEvent_Wave;
	Parms.K2Node_CustomEvent_Rewards = K2Node_CustomEvent_Rewards;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_MakeStruct_FormatArgumentData12 = K2Node_MakeStruct_FormatArgumentData12;
	Parms.K2Node_CustomEvent_Items = K2Node_CustomEvent_Items;
	Parms.K2Node_MakeArray_Array12 = K2Node_MakeArray_Array12;
	Parms.CallFunc_Format_ReturnValue12 = CallFunc_Format_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.K2Node_CustomEvent_Modifiers = K2Node_CustomEvent_Modifiers;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567 = K2Node_CreateDelegate_OutputDelegate1234567;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678 = K2Node_CreateDelegate_OutputDelegate12345678;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
