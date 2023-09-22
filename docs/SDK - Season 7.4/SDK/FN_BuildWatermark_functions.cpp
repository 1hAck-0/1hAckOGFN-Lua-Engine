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

// Function BuildWatermark.BuildWatermark_C.UpdateCalenderOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::UpdateCalenderOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.UpdateCalenderOffset");

	UBuildWatermark_C_UpdateCalenderOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.SetTextCollapseIfDefault
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 InputText                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 DefaultText                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBuildWatermark_C::SetTextCollapseIfDefault(class UTextBlock* Text_Widget, struct FString InputText, struct FString DefaultText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.SetTextCollapseIfDefault");

	UBuildWatermark_C_SetTextCollapseIfDefault_Params params;
	params.Text_Widget = Text_Widget;
	params.InputText = InputText;
	params.DefaultText = DefaultText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.Update Watermark
// (Public, BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::Update_Watermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Update Watermark");

	UBuildWatermark_C_Update_Watermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Construct");

	UBuildWatermark_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
// (BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::HandlePartyJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.HandlePartyJoined");

	UBuildWatermark_C_HandlePartyJoined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Destruct");

	UBuildWatermark_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBuildWatermark_C::HandlePlayerStateChanged(struct FFortTeamMemberInfo PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged");

	UBuildWatermark_C_HandlePlayerStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark");

	UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
