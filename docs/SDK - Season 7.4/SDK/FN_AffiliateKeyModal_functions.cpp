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

// Function AffiliateKeyModal.AffiliateKeyModal_C.OnNavUpToAffiliateKey
// (Public, BlueprintCallable, BlueprintEvent)

void UAffiliateKeyModal_C::OnNavUpToAffiliateKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.OnNavUpToAffiliateKey");

	UAffiliateKeyModal_C_OnNavUpToAffiliateKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.OnNavDownFromAffiliateKey
// (Public, BlueprintCallable, BlueprintEvent)

void UAffiliateKeyModal_C::OnNavDownFromAffiliateKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.OnNavDownFromAffiliateKey");

	UAffiliateKeyModal_C_OnNavDownFromAffiliateKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAffiliateKeyModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.OnActivated");

	UAffiliateKeyModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAffiliateKeyModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent");

	UAffiliateKeyModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAffiliateKeyModal_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent");

	UAffiliateKeyModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.OnSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAffiliateKeyModal_C::OnSet(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.OnSet");

	UAffiliateKeyModal_C_OnSet_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__IconTextButton_C
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAffiliateKeyModal_C::BndEvt__IconTextButton_C(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__IconTextButton_C");

	UAffiliateKeyModal_C_BndEvt__IconTextButton_C_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.OnCheckComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasValidAffiliateName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AffilateNameChecked            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAffiliateKeyModal_C::OnCheckComplete(bool bSuccess, bool bWasValidAffiliateName, struct FString AffilateNameChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.OnCheckComplete");

	UAffiliateKeyModal_C_OnCheckComplete_Params params;
	params.bSuccess = bSuccess;
	params.bWasValidAffiliateName = bWasValidAffiliateName;
	params.AffilateNameChecked = AffilateNameChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.OnFinish
// (BlueprintCallable, BlueprintEvent)

void UAffiliateKeyModal_C::OnFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.OnFinish");

	UAffiliateKeyModal_C_OnFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.ExecuteUbergraph_AffiliateKeyModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAffiliateKeyModal_C::ExecuteUbergraph_AffiliateKeyModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.ExecuteUbergraph_AffiliateKeyModal");

	UAffiliateKeyModal_C_ExecuteUbergraph_AffiliateKeyModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.OnPopupClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAffiliateKeyModal_C::OnPopupClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AffiliateKeyModal.AffiliateKeyModal_C.OnPopupClosed__DelegateSignature");

	UAffiliateKeyModal_C_OnPopupClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
