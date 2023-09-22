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

// Function ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase* ListEntry                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectRefundItemQuantityList_C::AddListEntry(class UFortItemQuantityListEntryBase* ListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C.AddListEntry");

	UItemInspectRefundItemQuantityList_C_AddListEntry_Params params;
	params.ListEntry = ListEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C.ExecuteUbergraph_ItemInspectRefundItemQuantityList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectRefundItemQuantityList_C::ExecuteUbergraph_ItemInspectRefundItemQuantityList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C.ExecuteUbergraph_ItemInspectRefundItemQuantityList");

	UItemInspectRefundItemQuantityList_C_ExecuteUbergraph_ItemInspectRefundItemQuantityList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
