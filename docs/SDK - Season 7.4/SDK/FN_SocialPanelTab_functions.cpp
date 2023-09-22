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

// Function SocialPanelTab.SocialPanelTab_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialPanelTab_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelTab.SocialPanelTab_C.BP_OnHovered");

	USocialPanelTab_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialPanelTab_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelTab.SocialPanelTab_C.BP_OnUnhovered");

	USocialPanelTab_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void USocialPanelTab_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelTab.SocialPanelTab_C.BP_OnSelected");

	USocialPanelTab_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void USocialPanelTab_C::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelTab.SocialPanelTab_C.BP_OnDeselected");

	USocialPanelTab_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanelTab.SocialPanelTab_C.ExecuteUbergraph_SocialPanelTab
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanelTab_C::ExecuteUbergraph_SocialPanelTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelTab.SocialPanelTab_C.ExecuteUbergraph_SocialPanelTab");

	USocialPanelTab_C_ExecuteUbergraph_SocialPanelTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
