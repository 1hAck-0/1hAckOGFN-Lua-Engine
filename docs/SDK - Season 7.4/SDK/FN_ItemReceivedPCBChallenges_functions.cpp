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

// Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedPCBChallenges_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.Construct");

	UItemReceivedPCBChallenges_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.ExecuteUbergraph_ItemReceivedPCBChallenges
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedPCBChallenges_C::ExecuteUbergraph_ItemReceivedPCBChallenges(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.ExecuteUbergraph_ItemReceivedPCBChallenges");

	UItemReceivedPCBChallenges_C_ExecuteUbergraph_ItemReceivedPCBChallenges_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
