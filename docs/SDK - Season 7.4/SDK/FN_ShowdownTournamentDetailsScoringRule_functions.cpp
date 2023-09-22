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

// Function ShowdownTournamentDetailsScoringRule.ShowdownTournamentDetailsScoringRule_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortShowdownScoringRuleInfo ScoreRule                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortTournamentDisplayInfo TournamentDisplayInfo          (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownTournamentDetailsScoringRule_C::SetData(struct FFortShowdownScoringRuleInfo ScoreRule, struct FFortTournamentDisplayInfo TournamentDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetailsScoringRule.ShowdownTournamentDetailsScoringRule_C.SetData");

	UShowdownTournamentDetailsScoringRule_C_SetData_Params params;
	params.ScoreRule = ScoreRule;
	params.TournamentDisplayInfo = TournamentDisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
