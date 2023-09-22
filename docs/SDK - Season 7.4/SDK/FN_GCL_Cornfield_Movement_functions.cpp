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

// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_Cornfield_Movement_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.WhileActive");

	AGCL_Cornfield_Movement_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_Cornfield_Movement_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.OnActive");

	AGCL_Cornfield_Movement_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_Cornfield_Movement_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.OnRemove");

	AGCL_Cornfield_Movement_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_Cornfield_Movement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.UserConstructionScript");

	AGCL_Cornfield_Movement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_Cornfield_Movement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.ReceiveBeginPlay");

	AGCL_Cornfield_Movement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.On Player Step
// (BlueprintCallable, BlueprintEvent)

void AGCL_Cornfield_Movement_C::On_Player_Step()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.On Player Step");

	AGCL_Cornfield_Movement_C_On_Player_Step_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.ExecuteUbergraph_GCL_Cornfield_Movement
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Cornfield_Movement_C::ExecuteUbergraph_GCL_Cornfield_Movement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.ExecuteUbergraph_GCL_Cornfield_Movement");

	AGCL_Cornfield_Movement_C_ExecuteUbergraph_GCL_Cornfield_Movement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
