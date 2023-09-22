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

// Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectRefundDetailsPanel_C::SetScrollWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetScrollWidget");

	UItemInspectRefundDetailsPanel_C_SetScrollWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetItemToRefund
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*        ItemToRefund                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectRefundDetailsPanel_C::SetItemToRefund(class UFortAccountItem* ItemToRefund)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetItemToRefund");

	UItemInspectRefundDetailsPanel_C_SetItemToRefund_Params params;
	params.ItemToRefund = ItemToRefund;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
