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

// Function BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CameraLens_CrackExit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C.UserConstructionScript");

	ABP_CameraLens_CrackExit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
