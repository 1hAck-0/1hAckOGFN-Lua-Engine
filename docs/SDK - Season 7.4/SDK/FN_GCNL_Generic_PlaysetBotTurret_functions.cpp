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

// Function GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Generic_PlaysetBotTurret_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C.OnActive");

	AGCNL_Generic_PlaysetBotTurret_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Generic_PlaysetBotTurret_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C.OnRemove");

	AGCNL_Generic_PlaysetBotTurret_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_PlaysetBotTurret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C.UserConstructionScript");

	AGCNL_Generic_PlaysetBotTurret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
