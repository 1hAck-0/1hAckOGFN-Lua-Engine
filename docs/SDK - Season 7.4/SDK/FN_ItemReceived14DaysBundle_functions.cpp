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

// Function ItemReceived14DaysBundle.ItemReceived14DaysBundle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceived14DaysBundle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived14DaysBundle.ItemReceived14DaysBundle_C.Construct");

	UItemReceived14DaysBundle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived14DaysBundle.ItemReceived14DaysBundle_C.ExecuteUbergraph_ItemReceived14DaysBundle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived14DaysBundle_C::ExecuteUbergraph_ItemReceived14DaysBundle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived14DaysBundle.ItemReceived14DaysBundle_C.ExecuteUbergraph_ItemReceived14DaysBundle");

	UItemReceived14DaysBundle_C_ExecuteUbergraph_ItemReceived14DaysBundle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
