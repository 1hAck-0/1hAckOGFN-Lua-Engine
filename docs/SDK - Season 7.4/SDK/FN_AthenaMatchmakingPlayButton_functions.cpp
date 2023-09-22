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

// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMatchmakingPlayButton_C::SetButtonText(struct FText InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.SetButtonText");

	UAthenaMatchmakingPlayButton_C_SetButtonText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlayButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.PreConstruct");

	UAthenaMatchmakingPlayButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.ExecuteUbergraph_AthenaMatchmakingPlayButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlayButton_C::ExecuteUbergraph_AthenaMatchmakingPlayButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.ExecuteUbergraph_AthenaMatchmakingPlayButton");

	UAthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
