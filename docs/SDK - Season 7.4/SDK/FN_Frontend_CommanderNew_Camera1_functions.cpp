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

// Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontend_CommanderNew_Camera1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.UserConstructionScript");

	AFrontend_CommanderNew_Camera1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontend_CommanderNew_Camera1_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.OnActivated");

	AFrontend_CommanderNew_Camera1_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFrontend_CommanderNew_Camera1_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.OnDeactivated");

	AFrontend_CommanderNew_Camera1_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.ExecuteUbergraph_Frontend_CommanderNew_Camera1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_CommanderNew_Camera1_C::ExecuteUbergraph_Frontend_CommanderNew_Camera1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.ExecuteUbergraph_Frontend_CommanderNew_Camera1");

	AFrontend_CommanderNew_Camera1_C_ExecuteUbergraph_Frontend_CommanderNew_Camera1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
