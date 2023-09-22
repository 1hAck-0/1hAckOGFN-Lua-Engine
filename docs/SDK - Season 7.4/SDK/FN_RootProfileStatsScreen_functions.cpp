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

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdateStatSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URootProfileStatsScreen_C::UpdateStatSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdateStatSet");

	URootProfileStatsScreen_C_UpdateStatSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdatePlaylist
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URootProfileStatsScreen_C::UpdatePlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdatePlaylist");

	URootProfileStatsScreen_C_UpdatePlaylist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URootProfileStatsScreen_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.HandleBack");

	URootProfileStatsScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URootProfileStatsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.Construct");

	URootProfileStatsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void URootProfileStatsScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDeactivated");

	URootProfileStatsScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URootProfileStatsScreen_C::BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent");

	URootProfileStatsScreen_C_BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URootProfileStatsScreen_C::BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent");

	URootProfileStatsScreen_C_BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URootProfileStatsScreen_C::BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent");

	URootProfileStatsScreen_C_BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStatSetChanged
// (Event, Public, BlueprintEvent)

void URootProfileStatsScreen_C::OnStatSetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStatSetChanged");

	URootProfileStatsScreen_C_OnStatSetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URootProfileStatsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent");

	URootProfileStatsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void URootProfileStatsScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnActivated");

	URootProfileStatsScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStartFetchingData
// (Event, Public, BlueprintEvent)

void URootProfileStatsScreen_C::OnStartFetchingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStartFetchingData");

	URootProfileStatsScreen_C_OnStartFetchingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnNoData
// (Event, Public, BlueprintEvent)

void URootProfileStatsScreen_C::OnNoData()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnNoData");

	URootProfileStatsScreen_C_OnNoData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDataRecieved
// (Event, Public, BlueprintEvent)

void URootProfileStatsScreen_C::OnDataRecieved()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDataRecieved");

	URootProfileStatsScreen_C_OnDataRecieved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.ExecuteUbergraph_RootProfileStatsScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URootProfileStatsScreen_C::ExecuteUbergraph_RootProfileStatsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RootProfileStatsScreen.RootProfileStatsScreen_C.ExecuteUbergraph_RootProfileStatsScreen");

	URootProfileStatsScreen_C_ExecuteUbergraph_RootProfileStatsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
