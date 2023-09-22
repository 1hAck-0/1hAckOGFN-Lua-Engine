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

// Function Turntable.SunDirectionandColorSet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASunDirectionandColorSet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turntable.SunDirectionandColorSet_C.UserConstructionScript");

	ASunDirectionandColorSet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Turntable.SunDirectionandColorSet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASunDirectionandColorSet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turntable.SunDirectionandColorSet_C.ReceiveBeginPlay");

	ASunDirectionandColorSet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Turntable.SunDirectionandColorSet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASunDirectionandColorSet_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Turntable.SunDirectionandColorSet_C.ReceiveTick");

	ASunDirectionandColorSet_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Turntable.SunDirectionandColorSet_C.ExecuteUbergraph_SunDirectionandColorSet
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASunDirectionandColorSet_C::ExecuteUbergraph_SunDirectionandColorSet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Turntable.SunDirectionandColorSet_C.ExecuteUbergraph_SunDirectionandColorSet");

	ASunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
