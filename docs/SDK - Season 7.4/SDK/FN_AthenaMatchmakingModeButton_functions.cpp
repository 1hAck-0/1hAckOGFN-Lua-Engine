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

// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingModeButton_C::RefreshFillText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText");

	UAthenaMatchmakingModeButton_C_RefreshFillText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingModeButton_C::SetSquadFillText(bool bFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText");

	UAthenaMatchmakingModeButton_C_SetSquadFillText_Params params;
	params.bFill = bFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*     NewPlaylist                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OverrideName                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMatchmakingModeButton_C::PlaylistChanged(class UFortPlaylistAthena* NewPlaylist, struct FText OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged");

	UAthenaMatchmakingModeButton_C_PlaylistChanged_Params params;
	params.NewPlaylist = NewPlaylist;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingModeButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo");

	UAthenaMatchmakingModeButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingModeButton_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.Tick");

	UAthenaMatchmakingModeButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingModeButton_C::ExecuteUbergraph_AthenaMatchmakingModeButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton");

	UAthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
