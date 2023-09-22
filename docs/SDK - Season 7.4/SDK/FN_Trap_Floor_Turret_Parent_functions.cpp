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

// Function Trap_Floor_Turret_Parent.Trap_Floor_Turret_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret_Parent.Trap_Floor_Turret_Parent_C.UserConstructionScript");

	ATrap_Floor_Turret_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
