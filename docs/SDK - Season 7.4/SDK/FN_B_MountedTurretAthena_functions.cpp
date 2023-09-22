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

// Function B_MountedTurretAthena.B_MountedTurretAthena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_MountedTurretAthena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MountedTurretAthena.B_MountedTurretAthena_C.UserConstructionScript");

	AB_MountedTurretAthena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_MountedTurretAthena.B_MountedTurretAthena_C.OnHostVehicleSetup
// (Event, Public, BlueprintEvent)

void AB_MountedTurretAthena_C::OnHostVehicleSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MountedTurretAthena.B_MountedTurretAthena_C.OnHostVehicleSetup");

	AB_MountedTurretAthena_C_OnHostVehicleSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_MountedTurretAthena.B_MountedTurretAthena_C.MountedTurretSnowmanCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AB_MountedTurretAthena_C::MountedTurretSnowmanCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MountedTurretAthena.B_MountedTurretAthena_C.MountedTurretSnowmanCheck");

	AB_MountedTurretAthena_C_MountedTurretSnowmanCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_MountedTurretAthena.B_MountedTurretAthena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_MountedTurretAthena_C::K2_OnUnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MountedTurretAthena.B_MountedTurretAthena_C.K2_OnUnEquip");

	AB_MountedTurretAthena_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_MountedTurretAthena.B_MountedTurretAthena_C.ExecuteUbergraph_B_MountedTurretAthena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_MountedTurretAthena_C::ExecuteUbergraph_B_MountedTurretAthena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MountedTurretAthena.B_MountedTurretAthena_C.ExecuteUbergraph_B_MountedTurretAthena");

	AB_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
