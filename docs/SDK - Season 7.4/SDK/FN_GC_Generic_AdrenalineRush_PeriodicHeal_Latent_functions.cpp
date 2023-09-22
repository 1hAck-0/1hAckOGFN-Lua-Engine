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

// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.Set Adrenaline Rush Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerPawn*         Player_Pawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C::Set_Adrenaline_Rush_Visibility(bool Visible, class AFortPlayerPawn* Player_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.Set Adrenaline Rush Visibility");

	AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_Set_Adrenaline_Rush_Visibility_Params params;
	params.Visible = Visible;
	params.Player_Pawn = Player_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.Destroy Meshes
// (Public, BlueprintCallable, BlueprintEvent)

void AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C::Destroy_Meshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.Destroy Meshes");

	AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_Destroy_Meshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.Duplicate Meshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C::Duplicate_Meshes(class AFortPlayerPawn* Player_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.Duplicate Meshes");

	AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_Duplicate_Meshes_Params params;
	params.Player_Pawn = Player_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.HealthCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Check_Return                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C::HealthCheck(class AFortPlayerPawn* Player_Pawn, bool* Check_Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.HealthCheck");

	AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_HealthCheck_Params params;
	params.Player_Pawn = Player_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Check_Return != nullptr)
		*Check_Return = params.Check_Return;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.UserConstructionScript");

	AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.HealthSweep__FinishedFunc
// (BlueprintEvent)

void AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C::HealthSweep__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.HealthSweep__FinishedFunc");

	AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_HealthSweep__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.HealthSweep__UpdateFunc
// (BlueprintEvent)

void AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C::HealthSweep__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.HealthSweep__UpdateFunc");

	AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_HealthSweep__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.K2_HandleGameplayCue");

	AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Latent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C::ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Latent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Latent");

	AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C_ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Latent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
