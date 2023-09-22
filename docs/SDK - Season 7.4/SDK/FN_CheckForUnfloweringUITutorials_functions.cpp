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

// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.CanRunTutorialQuests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckForUnfloweringUITutorials_C::CanRunTutorialQuests(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.CanRunTutorialQuests");

	ACheckForUnfloweringUITutorials_C_CanRunTutorialQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckForUnfloweringUITutorials_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.UserConstructionScript");

	ACheckForUnfloweringUITutorials_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckForUnfloweringUITutorials_C::Execute(struct FFortScriptedActionParams Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.Execute");

	ACheckForUnfloweringUITutorials_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.ExecuteUbergraph_CheckForUnfloweringUITutorials
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckForUnfloweringUITutorials_C::ExecuteUbergraph_CheckForUnfloweringUITutorials(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.ExecuteUbergraph_CheckForUnfloweringUITutorials");

	ACheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
