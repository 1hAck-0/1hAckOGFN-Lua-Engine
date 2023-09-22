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

// Function ToyOptionsComponent.ToyOptionsComponent_C.OnLocalInteract
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UFortMatchmakingKnobsModal* ModalWidget                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UToyOptionsComponent_C::OnLocalInteract(class AFortPlayerPawn* InteractingPawn, bool* bResult, class UFortMatchmakingKnobsModal** ModalWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsComponent.ToyOptionsComponent_C.OnLocalInteract");

	UToyOptionsComponent_C_OnLocalInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (ModalWidget != nullptr)
		*ModalWidget = params.ModalWidget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
