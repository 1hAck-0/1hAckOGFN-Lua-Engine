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

// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Creative_SpeedAdjust_Vehicle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.UserConstructionScript");

	AGCNL_Creative_SpeedAdjust_Vehicle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_Creative_SpeedAdjust_Vehicle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ReceiveBeginPlay");

	AGCNL_Creative_SpeedAdjust_Vehicle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Creative_SpeedAdjust_Vehicle_C::ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle");

	AGCNL_Creative_SpeedAdjust_Vehicle_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
