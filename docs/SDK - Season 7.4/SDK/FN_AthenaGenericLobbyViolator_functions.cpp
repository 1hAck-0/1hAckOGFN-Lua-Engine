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

// Function AthenaGenericLobbyViolator.AthenaGenericLobbyViolator_C.SetGamemodeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SubText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaGenericLobbyViolator_C::SetGamemodeName(struct FText Name, struct FText SubText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericLobbyViolator.AthenaGenericLobbyViolator_C.SetGamemodeName");

	UAthenaGenericLobbyViolator_C_SetGamemodeName_Params params;
	params.Name = Name;
	params.SubText = SubText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
