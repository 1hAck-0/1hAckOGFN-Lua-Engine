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

// Function B_TNT_Athena.B_TNT_Athena_C.Spline Point Locations
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor)

void AB_TNT_Athena_C::Spline_Point_Locations(TArray<struct FVector> Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TNT_Athena.B_TNT_Athena_C.Spline Point Locations");

	AB_TNT_Athena_C_Spline_Point_Locations_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TNT_Athena.B_TNT_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_TNT_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TNT_Athena.B_TNT_Athena_C.UserConstructionScript");

	AB_TNT_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
