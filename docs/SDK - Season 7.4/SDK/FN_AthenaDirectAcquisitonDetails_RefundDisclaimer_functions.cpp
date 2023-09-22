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

// Function AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C.PreConstruct");

	UAthenaDirectAcquisitonDetails_RefundDisclaimer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C.ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C.ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer");

	UAthenaDirectAcquisitonDetails_RefundDisclaimer_C_ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
