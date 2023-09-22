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

// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.UpdateItemAndQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DirectlySetQuantity            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectRefundItemQuantityListEntry_C::UpdateItemAndQuantity(bool DirectlySetQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.UpdateItemAndQuantity");

	UItemInspectRefundItemQuantityListEntry_C_UpdateItemAndQuantity_Params params;
	params.DirectlySetQuantity = DirectlySetQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           IsBeingReset                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectRefundItemQuantityListEntry_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP");

	UItemInspectRefundItemQuantityListEntry_C_HandleDifferentItemOrQuantitySetBP_Params params;
	params.IsBeingReset = IsBeingReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectRefundItemQuantityListEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.Construct");

	UItemInspectRefundItemQuantityListEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectRefundItemQuantityListEntry_C::ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry");

	UItemInspectRefundItemQuantityListEntry_C_ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
