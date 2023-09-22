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

// Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTournamentRoundUnlocked_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.Construct");

	UTournamentRoundUnlocked_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.BndEvt__ShowNextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentRoundUnlocked_C::BndEvt__ShowNextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.BndEvt__ShowNextButton_K2Node_ComponentBoundEvent");

	UTournamentRoundUnlocked_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.ExecuteUbergraph_TournamentRoundUnlocked
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentRoundUnlocked_C::ExecuteUbergraph_TournamentRoundUnlocked(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.ExecuteUbergraph_TournamentRoundUnlocked");

	UTournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
