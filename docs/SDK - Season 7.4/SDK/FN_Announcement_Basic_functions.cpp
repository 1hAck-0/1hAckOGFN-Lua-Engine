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

// Function Announcement_Basic.Announcement_Basic_C.SetBodyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAnnouncement_Basic_C::SetBodyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.SetBodyText");

	UAnnouncement_Basic_C_SetBodyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement* Announcement                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Basic_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.UpdateWidgetData");

	UAnnouncement_Basic_C_UpdateWidgetData_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_Basic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.Construct");

	UAnnouncement_Basic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.AnnouncementStopped
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement* Announcement                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Basic_C::AnnouncementStopped(class AFortClientAnnouncement* Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.AnnouncementStopped");

	UAnnouncement_Basic_C_AnnouncementStopped_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               bNewInputType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Basic_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.OnInputMethodChanged");

	UAnnouncement_Basic_C_OnInputMethodChanged_Params params;
	params.bNewInputType = bNewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_Basic_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.Destruct");

	UAnnouncement_Basic_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.OnKeybindsChanged
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_Basic_C::OnKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.OnKeybindsChanged");

	UAnnouncement_Basic_C_OnKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.ExecuteUbergraph_Announcement_Basic
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Basic_C::ExecuteUbergraph_Announcement_Basic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.ExecuteUbergraph_Announcement_Basic");

	UAnnouncement_Basic_C_ExecuteUbergraph_Announcement_Basic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
