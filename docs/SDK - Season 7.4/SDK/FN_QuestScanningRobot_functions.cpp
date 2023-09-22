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

// Function QuestScanningRobot.QuestScanningRobot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AQuestScanningRobot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScanningRobot.QuestScanningRobot_C.UserConstructionScript");

	AQuestScanningRobot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScanningRobot.QuestScanningRobot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AQuestScanningRobot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScanningRobot.QuestScanningRobot_C.ReceiveBeginPlay");

	AQuestScanningRobot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScanningRobot.QuestScanningRobot_C.animdone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AQuestScanningRobot_C::animdone(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScanningRobot.QuestScanningRobot_C.animdone");

	AQuestScanningRobot_C_animdone_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScanningRobot.QuestScanningRobot_C.ExecuteUbergraph_QuestScanningRobot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AQuestScanningRobot_C::ExecuteUbergraph_QuestScanningRobot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScanningRobot.QuestScanningRobot_C.ExecuteUbergraph_QuestScanningRobot");

	AQuestScanningRobot_C_ExecuteUbergraph_QuestScanningRobot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
