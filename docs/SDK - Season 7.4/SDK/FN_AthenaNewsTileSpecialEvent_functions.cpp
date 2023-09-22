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

// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)

void UAthenaNewsTileSpecialEvent_C::PlayIntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.PlayIntroAnim");

	UAthenaNewsTileSpecialEvent_C_PlayIntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.SetDefaultImage
// (Event, Public, BlueprintEvent)

void UAthenaNewsTileSpecialEvent_C::SetDefaultImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.SetDefaultImage");

	UAthenaNewsTileSpecialEvent_C_SetDefaultImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.ExecuteUbergraph_AthenaNewsTileSpecialEvent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaNewsTileSpecialEvent_C::ExecuteUbergraph_AthenaNewsTileSpecialEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.ExecuteUbergraph_AthenaNewsTileSpecialEvent");

	UAthenaNewsTileSpecialEvent_C_ExecuteUbergraph_AthenaNewsTileSpecialEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
