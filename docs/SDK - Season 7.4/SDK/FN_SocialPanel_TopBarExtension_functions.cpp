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

// Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_TopBarExtension_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnHovered");

	USocialPanel_TopBarExtension_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_TopBarExtension_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnUnhovered");

	USocialPanel_TopBarExtension_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.ExecuteUbergraph_SocialPanel_TopBarExtension
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanel_TopBarExtension_C::ExecuteUbergraph_SocialPanel_TopBarExtension(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.ExecuteUbergraph_SocialPanel_TopBarExtension");

	USocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
