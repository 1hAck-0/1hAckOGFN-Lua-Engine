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

// Function ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedTomatoHeadStyleChallenge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C.Construct");

	UItemReceivedTomatoHeadStyleChallenge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C.ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedTomatoHeadStyleChallenge_C::ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C.ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge");

	UItemReceivedTomatoHeadStyleChallenge_C_ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
