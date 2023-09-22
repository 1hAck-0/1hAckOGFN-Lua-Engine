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

// Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.Remove Snowman
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_Athena_Enemy_SneakySnowman_C::Remove_Snowman(class AFortPlayerPawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.Remove Snowman");

	UGAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_Athena_Enemy_SneakySnowman_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.K2_ActivateAbility");

	UGAT_Athena_Enemy_SneakySnowman_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_Athena_Enemy_SneakySnowman_C::ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman");

	UGAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
