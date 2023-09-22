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

// Function ItemReceivedSkullTrooperStyleChallenge.ItemReceivedSkullTrooperStyleChallenge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedSkullTrooperStyleChallenge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedSkullTrooperStyleChallenge.ItemReceivedSkullTrooperStyleChallenge_C.Construct");

	UItemReceivedSkullTrooperStyleChallenge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedSkullTrooperStyleChallenge.ItemReceivedSkullTrooperStyleChallenge_C.ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedSkullTrooperStyleChallenge_C::ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedSkullTrooperStyleChallenge.ItemReceivedSkullTrooperStyleChallenge_C.ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge");

	UItemReceivedSkullTrooperStyleChallenge_C_ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
