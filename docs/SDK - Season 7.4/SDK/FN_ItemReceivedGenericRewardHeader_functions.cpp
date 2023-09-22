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

// Function ItemReceivedGenericRewardHeader.ItemReceivedGenericRewardHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedGenericRewardHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedGenericRewardHeader.ItemReceivedGenericRewardHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedGenericRewardHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedGenericRewardHeader.ItemReceivedGenericRewardHeader_C.ExecuteUbergraph_ItemReceivedGenericRewardHeader
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedGenericRewardHeader_C::ExecuteUbergraph_ItemReceivedGenericRewardHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedGenericRewardHeader.ItemReceivedGenericRewardHeader_C.ExecuteUbergraph_ItemReceivedGenericRewardHeader");

	UItemReceivedGenericRewardHeader_C_ExecuteUbergraph_ItemReceivedGenericRewardHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
