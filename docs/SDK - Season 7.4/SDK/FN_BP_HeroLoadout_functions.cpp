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

// Function BP_HeroLoadout.BP_HeroLoadout_C.SetVisiblityofDetailSpecificMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::SetVisiblityofDetailSpecificMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeroLoadout.BP_HeroLoadout_C.SetVisiblityofDetailSpecificMeshes");

	ABP_HeroLoadout_C_SetVisiblityofDetailSpecificMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.SetVisiblityofSceneLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HeroLoadout_C::SetVisiblityofSceneLighting(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeroLoadout.BP_HeroLoadout_C.SetVisiblityofSceneLighting");

	ABP_HeroLoadout_C_SetVisiblityofSceneLighting_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeroLoadout.BP_HeroLoadout_C.UserConstructionScript");

	ABP_HeroLoadout_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.DisableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::DisableLobbySetLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeroLoadout.BP_HeroLoadout_C.DisableLobbySetLighting");

	ABP_HeroLoadout_C_DisableLobbySetLighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::UpdateSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeroLoadout.BP_HeroLoadout_C.UpdateSettings");

	ABP_HeroLoadout_C_UpdateSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.EnableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::EnableLobbySetLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeroLoadout.BP_HeroLoadout_C.EnableLobbySetLighting");

	ABP_HeroLoadout_C_EnableLobbySetLighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HeroLoadout_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeroLoadout.BP_HeroLoadout_C.ReceiveBeginPlay");

	ABP_HeroLoadout_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.ExecuteUbergraph_BP_HeroLoadout
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HeroLoadout_C::ExecuteUbergraph_BP_HeroLoadout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeroLoadout.BP_HeroLoadout_C.ExecuteUbergraph_BP_HeroLoadout");

	ABP_HeroLoadout_C_ExecuteUbergraph_BP_HeroLoadout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
