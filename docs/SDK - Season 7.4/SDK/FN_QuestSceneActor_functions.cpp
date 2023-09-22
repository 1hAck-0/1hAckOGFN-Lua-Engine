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

// Function QuestSceneActor.QuestSceneActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AQuestSceneActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSceneActor.QuestSceneActor_C.UserConstructionScript");

	AQuestSceneActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestSceneActor.QuestSceneActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AQuestSceneActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSceneActor.QuestSceneActor_C.ReceiveBeginPlay");

	AQuestSceneActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestSceneActor.QuestSceneActor_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AQuestSceneActor_C::CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSceneActor.QuestSceneActor_C.CameraChanged");

	AQuestSceneActor_C_CameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestSceneActor.QuestSceneActor_C.ExecuteUbergraph_QuestSceneActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AQuestSceneActor_C::ExecuteUbergraph_QuestSceneActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSceneActor.QuestSceneActor_C.ExecuteUbergraph_QuestSceneActor");

	AQuestSceneActor_C_ExecuteUbergraph_QuestSceneActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
