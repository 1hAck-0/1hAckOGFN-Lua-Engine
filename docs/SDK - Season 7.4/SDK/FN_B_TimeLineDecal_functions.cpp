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

// Function B_TimeLineDecal.B_TimeLineDecal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_TimeLineDecal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TimeLineDecal.B_TimeLineDecal_C.UserConstructionScript");

	AB_TimeLineDecal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline
// (BlueprintEvent)

void AB_TimeLineDecal_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline");

	AB_TimeLineDecal_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TimeLineDecal.B_TimeLineDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_TimeLineDecal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TimeLineDecal.B_TimeLineDecal_C.ReceiveBeginPlay");

	AB_TimeLineDecal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TimeLineDecal.B_TimeLineDecal_C.ExecuteUbergraph_B_TimeLineDecal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_TimeLineDecal_C::ExecuteUbergraph_B_TimeLineDecal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TimeLineDecal.B_TimeLineDecal_C.ExecuteUbergraph_B_TimeLineDecal");

	AB_TimeLineDecal_C_ExecuteUbergraph_B_TimeLineDecal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
