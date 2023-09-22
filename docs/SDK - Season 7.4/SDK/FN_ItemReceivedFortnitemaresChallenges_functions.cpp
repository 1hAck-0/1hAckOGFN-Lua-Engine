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

// Function ItemReceivedFortnitemaresChallenges.ItemReceivedFortnitemaresChallenges_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedFortnitemaresChallenges_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFortnitemaresChallenges.ItemReceivedFortnitemaresChallenges_C.Construct");

	UItemReceivedFortnitemaresChallenges_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedFortnitemaresChallenges.ItemReceivedFortnitemaresChallenges_C.ExecuteUbergraph_ItemReceivedFortnitemaresChallenges
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedFortnitemaresChallenges_C::ExecuteUbergraph_ItemReceivedFortnitemaresChallenges(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedFortnitemaresChallenges.ItemReceivedFortnitemaresChallenges_C.ExecuteUbergraph_ItemReceivedFortnitemaresChallenges");

	UItemReceivedFortnitemaresChallenges_C_ExecuteUbergraph_ItemReceivedFortnitemaresChallenges_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
