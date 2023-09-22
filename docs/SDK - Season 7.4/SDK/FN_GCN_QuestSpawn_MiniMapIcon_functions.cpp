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

// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_QuestSpawn_MiniMapIcon_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.OnRemove");

	AGCN_QuestSpawn_MiniMapIcon_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.HideMiniBossGCN
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_QuestSpawn_MiniMapIcon_C::HideMiniBossGCN()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.HideMiniBossGCN");

	AGCN_QuestSpawn_MiniMapIcon_C_HideMiniBossGCN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_QuestSpawn_MiniMapIcon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.UserConstructionScript");

	AGCN_QuestSpawn_MiniMapIcon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCN_QuestSpawn_MiniMapIcon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.ReceiveBeginPlay");

	AGCN_QuestSpawn_MiniMapIcon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_QuestSpawn_MiniMapIcon_C::ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon");

	AGCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
