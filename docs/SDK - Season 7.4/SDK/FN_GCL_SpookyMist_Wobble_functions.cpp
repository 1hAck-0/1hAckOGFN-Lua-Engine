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

// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_SpookyMist_Wobble_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.WhileActive");

	AGCL_SpookyMist_Wobble_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.OnActive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_SpookyMist_Wobble_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.OnActive");

	AGCL_SpookyMist_Wobble_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_SpookyMist_Wobble_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.OnRemove");

	AGCL_SpookyMist_Wobble_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_SpookyMist_Wobble_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.UserConstructionScript");

	AGCL_SpookyMist_Wobble_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_SpookyMist_Wobble_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.ReceiveBeginPlay");

	AGCL_SpookyMist_Wobble_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.WiggleActors
// (BlueprintCallable, BlueprintEvent)

void AGCL_SpookyMist_Wobble_C::WiggleActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.WiggleActors");

	AGCL_SpookyMist_Wobble_C_WiggleActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.ExecuteUbergraph_GCL_SpookyMist_Wobble
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_SpookyMist_Wobble_C::ExecuteUbergraph_GCL_SpookyMist_Wobble(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.ExecuteUbergraph_GCL_SpookyMist_Wobble");

	AGCL_SpookyMist_Wobble_C_ExecuteUbergraph_GCL_SpookyMist_Wobble_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
