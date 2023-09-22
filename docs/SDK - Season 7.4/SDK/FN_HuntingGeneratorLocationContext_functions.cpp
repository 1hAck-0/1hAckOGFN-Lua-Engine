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

// Function HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C.ProvideSingleLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  QuerierActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultingLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHuntingGeneratorLocationContext_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C.ProvideSingleLocation");

	UHuntingGeneratorLocationContext_C_ProvideSingleLocation_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
