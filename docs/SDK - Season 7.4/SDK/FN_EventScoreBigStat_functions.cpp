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

// Function EventScoreBigStat.EventScoreBigStat_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ValueContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   FormatterText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortTournamentDisplayInfo Tournament_Display_Info        (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventScoreBigStat_C::SetData(struct FText Label, int Value, int ValueContext, struct FText FormatterText, struct FFortTournamentDisplayInfo Tournament_Display_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventScoreBigStat.EventScoreBigStat_C.SetData");

	UEventScoreBigStat_C_SetData_Params params;
	params.Label = Label;
	params.Value = Value;
	params.ValueContext = ValueContext;
	params.FormatterText = FormatterText;
	params.Tournament_Display_Info = Tournament_Display_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
