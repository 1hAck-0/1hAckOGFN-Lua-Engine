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

// Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontend_Upgrades_Camera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.UserConstructionScript");

	AFrontend_Upgrades_Camera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontend_Upgrades_Camera_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.OnActivated");

	AFrontend_Upgrades_Camera_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFrontend_Upgrades_Camera_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.OnDeactivated");

	AFrontend_Upgrades_Camera_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.ExecuteUbergraph_Frontend_Upgrades_Camera
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_Upgrades_Camera_C::ExecuteUbergraph_Frontend_Upgrades_Camera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.ExecuteUbergraph_Frontend_Upgrades_Camera");

	AFrontend_Upgrades_Camera_C_ExecuteUbergraph_Frontend_Upgrades_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
