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


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.LargeImageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Obj                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_PrePrompt_C::LargeImageLoaded(class UObject* Obj)
{
	static auto Func = Class->GetFunction("ItemReceived_PrePrompt_C", "LargeImageLoaded");

	Params::UItemReceived_PrePrompt_C_LargeImageLoaded_Params Parms;
	Parms.Obj = Obj;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.UpdateFromGiftBoxItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class UFortGiftBoxItemDefinition*  CallFunc_GetGiftBoxDefinition_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_FormatTextUsingParams_ReturnValue                       ()

void UItemReceived_PrePrompt_C::UpdateFromGiftBoxItem(class FText CallFunc_Conv_StringToText_ReturnValue, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_FormatTextUsingParams_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceived_PrePrompt_C", "UpdateFromGiftBoxItem");

	Params::UItemReceived_PrePrompt_C_UpdateFromGiftBoxItem_Params Parms;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetGiftBoxDefinition_ReturnValue = CallFunc_GetGiftBoxDefinition_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_FormatTextUsingParams_ReturnValue = CallFunc_FormatTextUsingParams_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_PrePrompt_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemReceived_PrePrompt_C", "BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature");

	Params::UItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemReceived_PrePrompt_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemReceived_PrePrompt_C", "OnActivated");

	Params::UItemReceived_PrePrompt_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnGiftBoxItemSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UItemReceived_PrePrompt_C::OnGiftBoxItemSet()
{
	static auto Func = Class->GetFunction("ItemReceived_PrePrompt_C", "OnGiftBoxItemSet");

	Params::UItemReceived_PrePrompt_C_OnGiftBoxItemSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceived_PrePrompt_C::CustomEvent_0()
{
	static auto Func = Class->GetFunction("ItemReceived_PrePrompt_C", "CustomEvent_0");

	Params::UItemReceived_PrePrompt_C_CustomEvent_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.ExecuteUbergraph_ItemReceived_PrePrompt
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemReceived_Base_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_PrePrompt_C::ExecuteUbergraph_ItemReceived_PrePrompt(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UItemReceived_Base_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1)
{
	static auto Func = Class->GetFunction("ItemReceived_PrePrompt_C", "ExecuteUbergraph_ItemReceived_PrePrompt");

	Params::UItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.PreTest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceived_PrePrompt_C::PreTest__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemReceived_PrePrompt_C", "PreTest__DelegateSignature");

	Params::UItemReceived_PrePrompt_C_PreTest__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
