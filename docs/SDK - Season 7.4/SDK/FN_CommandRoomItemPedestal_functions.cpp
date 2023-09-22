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

// Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACommandRoomItemPedestal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.UserConstructionScript");

	ACommandRoomItemPedestal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.OnHeroPawnSetupCompleted
// (Event, Protected, BlueprintEvent)

void ACommandRoomItemPedestal_C::OnHeroPawnSetupCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.OnHeroPawnSetupCompleted");

	ACommandRoomItemPedestal_C_OnHeroPawnSetupCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.ExecuteUbergraph_CommandRoomItemPedestal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACommandRoomItemPedestal_C::ExecuteUbergraph_CommandRoomItemPedestal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.ExecuteUbergraph_CommandRoomItemPedestal");

	ACommandRoomItemPedestal_C_ExecuteUbergraph_CommandRoomItemPedestal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
