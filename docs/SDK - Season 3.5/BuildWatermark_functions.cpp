#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BuildWatermark.BuildWatermark_C.Update Watermark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetWatermark_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAppName_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          ()
// class FText                        CallFunc_GetPlayAgainstWatermarkText_ReturnValue                 ()
// class FText                        CallFunc_GetFillWithWatermarkText_ReturnValue                    ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMCPRegion_ReturnValue                                ()

void UBuildWatermark_C::Update_Watermark(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetWatermark_ReturnValue, int32 CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, const class FString& CallFunc_GetAppName_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_GetPlayAgainstWatermarkText_ReturnValue, class FText CallFunc_GetFillWithWatermarkText_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, class FText CallFunc_GetMCPRegion_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "Update Watermark");

	Params::UBuildWatermark_C_Update_Watermark_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetWatermark_ReturnValue = CallFunc_GetWatermark_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetAppName_ReturnValue = CallFunc_GetAppName_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.CallFunc_GetPlayAgainstWatermarkText_ReturnValue = CallFunc_GetPlayAgainstWatermarkText_ReturnValue;
	Parms.CallFunc_GetFillWithWatermarkText_ReturnValue = CallFunc_GetFillWithWatermarkText_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetMCPRegion_ReturnValue = CallFunc_GetMCPRegion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBuildWatermark_C::Construct()
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "Construct");

	Params::UBuildWatermark_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamInfo                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UBuildWatermark_C::HandlePlayerStateChanged(struct FFortTeamMemberInfo& TeamInfo)
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "HandlePlayerStateChanged");

	Params::UBuildWatermark_C_HandlePlayerStateChanged_Params Parms;
	Parms.TeamInfo = TeamInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildWatermark_C::HandlePartyJoined()
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "HandlePartyJoined");

	Params::UBuildWatermark_C_HandlePartyJoined_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBuildWatermark_C::Destruct()
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "Destruct");

	Params::UBuildWatermark_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_TeamInfo                                      (ConstParm, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortTeamMemberInfo& K2Node_CustomEvent_TeamInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "ExecuteUbergraph_BuildWatermark");

	Params::UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TeamInfo = K2Node_CustomEvent_TeamInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
