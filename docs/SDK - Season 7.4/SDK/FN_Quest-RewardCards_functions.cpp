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

// Function Quest-RewardCards.Quest-RewardCards_C.PlayIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UQuest_RewardCards_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCards.Quest-RewardCards_C.PlayIntro");

	UQuest_RewardCards_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCards.Quest-RewardCards_C.PlayBounceLoop
// (Public, BlueprintCallable, BlueprintEvent)

void UQuest_RewardCards_C::PlayBounceLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCards.Quest-RewardCards_C.PlayBounceLoop");

	UQuest_RewardCards_C_PlayBounceLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCards.Quest-RewardCards_C.PopulateCards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*> inItemDefinitions              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuest_RewardCards_C::PopulateCards(TArray<class UFortItemDefinition*>* inItemDefinitions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCards.Quest-RewardCards_C.PopulateCards");

	UQuest_RewardCards_C_PopulateCards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inItemDefinitions != nullptr)
		*inItemDefinitions = params.inItemDefinitions;
}


// Function Quest-RewardCards.Quest-RewardCards_C.WidgetSetUp
// (Public, BlueprintCallable, BlueprintEvent)

void UQuest_RewardCards_C::WidgetSetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCards.Quest-RewardCards_C.WidgetSetUp");

	UQuest_RewardCards_C_WidgetSetUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCards.Quest-RewardCards_C.HandleIntroComplete
// (BlueprintCallable, BlueprintEvent)

void UQuest_RewardCards_C::HandleIntroComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCards.Quest-RewardCards_C.HandleIntroComplete");

	UQuest_RewardCards_C_HandleIntroComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCards.Quest-RewardCards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuest_RewardCards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCards.Quest-RewardCards_C.Construct");

	UQuest_RewardCards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCards.Quest-RewardCards_C.UpdateCosmeticListDisplay
// (Event, Public, BlueprintEvent)

void UQuest_RewardCards_C::UpdateCosmeticListDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCards.Quest-RewardCards_C.UpdateCosmeticListDisplay");

	UQuest_RewardCards_C_UpdateCosmeticListDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCards.Quest-RewardCards_C.ExecuteUbergraph_Quest-RewardCards
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuest_RewardCards_C::ExecuteUbergraph_Quest_RewardCards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCards.Quest-RewardCards_C.ExecuteUbergraph_Quest-RewardCards");

	UQuest_RewardCards_C_ExecuteUbergraph_Quest_RewardCards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
