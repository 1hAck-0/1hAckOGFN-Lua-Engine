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

// Function FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C.TrailOn
// (Public, BlueprintCallable, BlueprintEvent)

void UFortAnimNotify_Interface_Interface_C::TrailOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C.TrailOn");

	UFortAnimNotify_Interface_Interface_C_TrailOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C.TrailOff
// (Public, BlueprintCallable, BlueprintEvent)

void UFortAnimNotify_Interface_Interface_C::TrailOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C.TrailOff");

	UFortAnimNotify_Interface_Interface_C_TrailOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
