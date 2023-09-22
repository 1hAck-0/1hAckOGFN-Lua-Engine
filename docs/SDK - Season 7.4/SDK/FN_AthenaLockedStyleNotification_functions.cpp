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

// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.SetLockedStyleDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LockedStyleDescription         (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLockedStyleNotification_C::SetLockedStyleDescription(struct FText LockedStyleDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.SetLockedStyleDescription");

	UAthenaLockedStyleNotification_C_SetLockedStyleDescription_Params params;
	params.LockedStyleDescription = LockedStyleDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLockedStyleNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.Construct");

	UAthenaLockedStyleNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockedStyleNotification_C::ExecuteUbergraph_AthenaLockedStyleNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification");

	UAthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
