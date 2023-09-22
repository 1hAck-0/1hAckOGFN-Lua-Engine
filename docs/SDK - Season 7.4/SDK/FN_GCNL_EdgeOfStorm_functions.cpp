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

// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_EdgeOfStorm_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove");

	AGCNL_EdgeOfStorm_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_EdgeOfStorm_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute");

	AGCNL_EdgeOfStorm_C_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_EdgeOfStorm_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive");

	AGCNL_EdgeOfStorm_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_EdgeOfStorm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.UserConstructionScript");

	AGCNL_EdgeOfStorm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 EdgeOfStorm                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_EdgeOfStorm_C::Activated(struct FVector EdgeOfStorm)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated");

	AGCNL_EdgeOfStorm_C_Activated_Params params;
	params.EdgeOfStorm = EdgeOfStorm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated
// (BlueprintCallable, BlueprintEvent)

void AGCNL_EdgeOfStorm_C::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated");

	AGCNL_EdgeOfStorm_C_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_EdgeOfStorm_C::ExecuteUbergraph_GCNL_EdgeOfStorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm");

	AGCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
