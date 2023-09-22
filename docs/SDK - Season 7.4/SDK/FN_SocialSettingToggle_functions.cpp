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

// Function SocialSettingToggle.SocialSettingToggle_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)

void USocialSettingToggle_C::UpdateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialSettingToggle.SocialSettingToggle_C.UpdateSize");

	USocialSettingToggle_C_UpdateSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialSettingToggle.SocialSettingToggle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USocialSettingToggle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialSettingToggle.SocialSettingToggle_C.Construct");

	USocialSettingToggle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialSettingToggle.SocialSettingToggle_C.ExecuteUbergraph_SocialSettingToggle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialSettingToggle_C::ExecuteUbergraph_SocialSettingToggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialSettingToggle.SocialSettingToggle_C.ExecuteUbergraph_SocialSettingToggle");

	USocialSettingToggle_C_ExecuteUbergraph_SocialSettingToggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
