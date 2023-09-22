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

// Function B_SneakySnowman_Athena.B_SneakySnowman_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_SneakySnowman_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SneakySnowman_Athena.B_SneakySnowman_Athena_C.UserConstructionScript");

	AB_SneakySnowman_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SneakySnowman_Athena.B_SneakySnowman_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_SneakySnowman_Athena_C::K2_OnUnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SneakySnowman_Athena.B_SneakySnowman_Athena_C.K2_OnUnEquip");

	AB_SneakySnowman_Athena_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SneakySnowman_Athena.B_SneakySnowman_Athena_C.ExecuteUbergraph_B_SneakySnowman_Athena
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SneakySnowman_Athena_C::ExecuteUbergraph_B_SneakySnowman_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SneakySnowman_Athena.B_SneakySnowman_Athena_C.ExecuteUbergraph_B_SneakySnowman_Athena");

	AB_SneakySnowman_Athena_C_ExecuteUbergraph_B_SneakySnowman_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
