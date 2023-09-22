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

// Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedTournamentRewardHeader_C::InitFromGiftBoxItem_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.InitFromGiftBoxItem_BP");

	UItemReceivedTournamentRewardHeader_C_InitFromGiftBoxItem_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedTournamentRewardHeader_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.OnInitialized");

	UItemReceivedTournamentRewardHeader_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.ExecuteUbergraph_ItemReceivedTournamentRewardHeader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedTournamentRewardHeader_C::ExecuteUbergraph_ItemReceivedTournamentRewardHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.ExecuteUbergraph_ItemReceivedTournamentRewardHeader");

	UItemReceivedTournamentRewardHeader_C_ExecuteUbergraph_ItemReceivedTournamentRewardHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
