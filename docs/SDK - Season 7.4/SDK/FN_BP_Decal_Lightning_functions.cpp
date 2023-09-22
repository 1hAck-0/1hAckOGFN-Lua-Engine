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

// Function BP_Decal_Lightning.BP_Decal_Lightning_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Decal_Lightning_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal_Lightning.BP_Decal_Lightning_C.UserConstructionScript");

	ABP_Decal_Lightning_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decal_Lightning.BP_Decal_Lightning_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Decal_Lightning_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal_Lightning.BP_Decal_Lightning_C.ReceiveBeginPlay");

	ABP_Decal_Lightning_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decal_Lightning.BP_Decal_Lightning_C.ExecuteUbergraph_BP_Decal_Lightning
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Decal_Lightning_C::ExecuteUbergraph_BP_Decal_Lightning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal_Lightning.BP_Decal_Lightning_C.ExecuteUbergraph_BP_Decal_Lightning");

	ABP_Decal_Lightning_C_ExecuteUbergraph_BP_Decal_Lightning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
