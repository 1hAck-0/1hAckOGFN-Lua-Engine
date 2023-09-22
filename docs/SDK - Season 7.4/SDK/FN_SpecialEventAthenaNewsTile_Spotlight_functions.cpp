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

// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)

void USpecialEventAthenaNewsTile_Spotlight_C::PlayIntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.PlayIntroAnim");

	USpecialEventAthenaNewsTile_Spotlight_C_PlayIntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.SetDefaultImage
// (Event, Public, BlueprintEvent)

void USpecialEventAthenaNewsTile_Spotlight_C::SetDefaultImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.SetDefaultImage");

	USpecialEventAthenaNewsTile_Spotlight_C_SetDefaultImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpecialEventAthenaNewsTile_Spotlight_C::ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight");

	USpecialEventAthenaNewsTile_Spotlight_C_ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
