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

// Function ItemReceivedPCBGeneric.ItemReceivedPCBGeneric_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedPCBGeneric_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedPCBGeneric.ItemReceivedPCBGeneric_C.Construct");

	UItemReceivedPCBGeneric_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedPCBGeneric.ItemReceivedPCBGeneric_C.ExecuteUbergraph_ItemReceivedPCBGeneric
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedPCBGeneric_C::ExecuteUbergraph_ItemReceivedPCBGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedPCBGeneric.ItemReceivedPCBGeneric_C.ExecuteUbergraph_ItemReceivedPCBGeneric");

	UItemReceivedPCBGeneric_C_ExecuteUbergraph_ItemReceivedPCBGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
