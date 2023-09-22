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

// Function GiftingUserItem.GiftingUserItem_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// ESelectionState                NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnimateOnSelect               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingUserItem_C::SetSelectionState(ESelectionState NewState, bool bAnimateOnSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingUserItem.GiftingUserItem_C.SetSelectionState");

	UGiftingUserItem_C_SetSelectionState_Params params;
	params.NewState = NewState;
	params.bAnimateOnSelect = bAnimateOnSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingUserItem.GiftingUserItem_C.UpdateMessageText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   NewMessage                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGiftingUserItem_C::UpdateMessageText(struct FText NewMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingUserItem.GiftingUserItem_C.UpdateMessageText");

	UGiftingUserItem_C_UpdateMessageText_Params params;
	params.NewMessage = NewMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingUserItem.GiftingUserItem_C.ExecuteUbergraph_GiftingUserItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingUserItem_C::ExecuteUbergraph_GiftingUserItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingUserItem.GiftingUserItem_C.ExecuteUbergraph_GiftingUserItem");

	UGiftingUserItem_C_ExecuteUbergraph_GiftingUserItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
