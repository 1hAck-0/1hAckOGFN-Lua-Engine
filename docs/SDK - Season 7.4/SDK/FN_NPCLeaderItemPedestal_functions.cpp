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

// Function NPCLeaderItemPedestal.NPCLeaderItemPedestal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANPCLeaderItemPedestal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCLeaderItemPedestal.NPCLeaderItemPedestal_C.UserConstructionScript");

	ANPCLeaderItemPedestal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCLeaderItemPedestal.NPCLeaderItemPedestal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPCLeaderItemPedestal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCLeaderItemPedestal.NPCLeaderItemPedestal_C.ReceiveBeginPlay");

	ANPCLeaderItemPedestal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCLeaderItemPedestal.NPCLeaderItemPedestal_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPCLeaderItemPedestal_C::CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCLeaderItemPedestal.NPCLeaderItemPedestal_C.CameraChanged");

	ANPCLeaderItemPedestal_C_CameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCLeaderItemPedestal.NPCLeaderItemPedestal_C.ExecuteUbergraph_NPCLeaderItemPedestal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPCLeaderItemPedestal_C::ExecuteUbergraph_NPCLeaderItemPedestal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCLeaderItemPedestal.NPCLeaderItemPedestal_C.ExecuteUbergraph_NPCLeaderItemPedestal");

	ANPCLeaderItemPedestal_C_ExecuteUbergraph_NPCLeaderItemPedestal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
