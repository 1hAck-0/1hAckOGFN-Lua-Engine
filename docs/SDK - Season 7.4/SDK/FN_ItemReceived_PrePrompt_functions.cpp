// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.LargeImageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Obj                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_PrePrompt_C::LargeImageLoaded(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.LargeImageLoaded");

	UItemReceived_PrePrompt_C_LargeImageLoaded_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.UpdateFromGiftBoxItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFromSelf                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_PrePrompt_C::UpdateFromGiftBoxItem(bool bFromSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.UpdateFromGiftBoxItem");

	UItemReceived_PrePrompt_C_UpdateFromGiftBoxItem_Params params;
	params.bFromSelf = bFromSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_PrePrompt_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent");

	UItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemReceived_PrePrompt_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnActivated");

	UItemReceived_PrePrompt_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnGiftBoxItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bFromSelf                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_PrePrompt_C::OnGiftBoxItemSet(bool bFromSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnGiftBoxItemSet");

	UItemReceived_PrePrompt_C_OnGiftBoxItemSet_Params params;
	params.bFromSelf = bFromSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_PrePrompt_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.CustomEvent_1");

	UItemReceived_PrePrompt_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceived_PrePrompt_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnInitialized");

	UItemReceived_PrePrompt_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnUserMsgFiltered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SanitzedMsg                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UItemReceived_PrePrompt_C::OnUserMsgFiltered(bool bSuccess, struct FString SanitzedMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnUserMsgFiltered");

	UItemReceived_PrePrompt_C_OnUserMsgFiltered_Params params;
	params.bSuccess = bSuccess;
	params.SanitzedMsg = SanitzedMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.ExecuteUbergraph_ItemReceived_PrePrompt
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_PrePrompt_C::ExecuteUbergraph_ItemReceived_PrePrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.ExecuteUbergraph_ItemReceived_PrePrompt");

	UItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
