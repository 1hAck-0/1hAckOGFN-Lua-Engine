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

// Function Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C.OnBackgroundChanged
// (BlueprintCallable, BlueprintEvent)

void AFrontend_Lobby_Layout2_C::OnBackgroundChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C.OnBackgroundChanged");

	AFrontend_Lobby_Layout2_C_OnBackgroundChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontend_Lobby_Layout2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C.ReceiveBeginPlay");

	AFrontend_Lobby_Layout2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C.ExecuteUbergraph_Frontend_Lobby_Layout2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_Lobby_Layout2_C::ExecuteUbergraph_Frontend_Lobby_Layout2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C.ExecuteUbergraph_Frontend_Lobby_Layout2");

	AFrontend_Lobby_Layout2_C_ExecuteUbergraph_Frontend_Lobby_Layout2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
