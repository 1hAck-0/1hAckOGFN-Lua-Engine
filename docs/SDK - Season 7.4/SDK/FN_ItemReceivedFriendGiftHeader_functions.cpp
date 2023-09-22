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

// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedFriendGiftHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedFriendGiftHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SanitizedMsg                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UItemReceivedFriendGiftHeader_C::CustomEvent_1(bool bSuccess, struct FString SanitizedMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.CustomEvent_1");

	UItemReceivedFriendGiftHeader_C_CustomEvent_1_Params params;
	params.bSuccess = bSuccess;
	params.SanitizedMsg = SanitizedMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedFriendGiftHeader_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.OnInitialized");

	UItemReceivedFriendGiftHeader_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.ExecuteUbergraph_ItemReceivedFriendGiftHeader
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedFriendGiftHeader_C::ExecuteUbergraph_ItemReceivedFriendGiftHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.ExecuteUbergraph_ItemReceivedFriendGiftHeader");

	UItemReceivedFriendGiftHeader_C_ExecuteUbergraph_ItemReceivedFriendGiftHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
