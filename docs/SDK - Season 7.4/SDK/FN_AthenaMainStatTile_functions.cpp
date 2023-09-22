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

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatValueAsText                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMainStatTile_C::SetStatValue(struct FText StatValueAsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue");

	UAthenaMainStatTile_C_SetStatValue_Params params;
	params.StatValueAsText = StatValueAsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
