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


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaMemberLocationStateChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// enum class EFortPartyMemberLocationLocation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAthenaPartyMemberReady_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnAthenaMemberLocationStateChanged(struct FUniqueNetIdRepl& Member_Id, enum class EFortPartyMemberLocation Location, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue, bool CallFunc_IsAthenaPartyMemberReady_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnAthenaMemberLocationStateChanged");

	Params::ULobbyPlayerPadTop_C_OnAthenaMemberLocationStateChanged_Params Parms;
	Parms.Member_Id = Member_Id;
	Parms.Location = Location;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_IsAthenaPartyMemberReady_ReturnValue = CallFunc_IsAthenaPartyMemberReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::UpdateMicIcon()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "UpdateMicIcon");

	Params::ULobbyPlayerPadTop_C_UpdateMicIcon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerStoppedTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::HandlePlayerStoppedTalking()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "HandlePlayerStoppedTalking");

	Params::ULobbyPlayerPadTop_C_HandlePlayerStoppedTalking_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerMutingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsTalking                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::HandlePlayerMutingChanged(const struct FUniqueNetIdRepl& UniqueId, bool IsTalking, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "HandlePlayerMutingChanged");

	Params::ULobbyPlayerPadTop_C_HandlePlayerMutingChanged_Params Parms;
	Parms.UniqueId = UniqueId;
	Parms.IsTalking = IsTalking;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerTalkingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsTalking                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::HandlePlayerTalkingChanged(const struct FUniqueNetIdRepl& UniqueId, bool IsTalking, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "HandlePlayerTalkingChanged");

	Params::ULobbyPlayerPadTop_C_HandlePlayerTalkingChanged_Params Parms;
	Parms.UniqueId = UniqueId;
	Parms.IsTalking = IsTalking;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshAthenaReadyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortPartyMemberLocationLocation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocationValid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ReadyVar                                                         (Edit, BlueprintVisible)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsJoinPartyDuringMatchEnabled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::RefreshAthenaReadyState(bool Ready, enum class EFortPartyMemberLocation Location, bool LocationValid, class FText ReadyVar, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsJoinPartyDuringMatchEnabled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "RefreshAthenaReadyState");

	Params::ULobbyPlayerPadTop_C_RefreshAthenaReadyState_Params Parms;
	Parms.Ready = Ready;
	Parms.Location = Location;
	Parms.LocationValid = LocationValid;
	Parms.ReadyVar = ReadyVar;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue12 = CallFunc_EqualEqual_ByteByte_ReturnValue12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue123 = CallFunc_EqualEqual_ByteByte_ReturnValue123;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsJoinPartyDuringMatchEnabled_ReturnValue = CallFunc_IsJoinPartyDuringMatchEnabled_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyStateChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortPartyMemberLocationCallFunc_GetPartyMemberLocation_LocationOut                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPartyMemberLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnAthenaReadyStateChanged(struct FUniqueNetIdRepl& Member_Id, bool Ready, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue, enum class EFortPartyMemberLocation CallFunc_GetPartyMemberLocation_LocationOut, bool CallFunc_GetPartyMemberLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnAthenaReadyStateChanged");

	Params::ULobbyPlayerPadTop_C_OnAthenaReadyStateChanged_Params Parms;
	Parms.Member_Id = Member_Id;
	Parms.Ready = Ready;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_GetPartyMemberLocation_LocationOut = CallFunc_GetPartyMemberLocation_LocationOut;
	Parms.CallFunc_GetPartyMemberLocation_ReturnValue = CallFunc_GetPartyMemberLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnLobbyPlayerUnhovered");

	Params::ULobbyPlayerPadTop_C_OnLobbyPlayerUnhovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::Initialize(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "Initialize");

	Params::ULobbyPlayerPadTop_C_Initialize_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsJoinPartyDuringMatchEnabled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsJoinPartyDuringMatchEnabled_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "InitializeContextEvents");

	Params::ULobbyPlayerPadTop_C_InitializeContextEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsJoinPartyDuringMatchEnabled_ReturnValue = CallFunc_IsJoinPartyDuringMatchEnabled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnLobbyPlayerHovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnLobbyPlayerHovered");

	Params::ULobbyPlayerPadTop_C_OnLobbyPlayerHovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "SetTeamMemberInfo");

	Params::ULobbyPlayerPadTop_C_SetTeamMemberInfo_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue = CallFunc_LessEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue1 = CallFunc_Conv_StringToName_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortLobbyBeaconClient*      CallFunc_GetLobbyBeaconClient_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortLobbyBeaconClientRM*    K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAthenaPartyMemberReady_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyMemberLocationCallFunc_GetPartyMemberLocation_LocationOut                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPartyMemberLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::Refresh(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue12, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class AFortLobbyBeaconClient* CallFunc_GetLobbyBeaconClient_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AFortLobbyBeaconClientRM* K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, bool CallFunc_IsAthenaPartyMemberReady_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortPartyContext* CallFunc_GetContext_ReturnValue123, enum class EFortPartyMemberLocation CallFunc_GetPartyMemberLocation_LocationOut, bool CallFunc_GetPartyMemberLocation_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "Refresh");

	Params::ULobbyPlayerPadTop_C_Refresh_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetLobbyBeaconClient_ReturnValue = CallFunc_GetLobbyBeaconClient_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM = K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_IsAthenaPartyMemberReady_ReturnValue = CallFunc_IsAthenaPartyMemberReady_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetPartyMemberLocation_LocationOut = CallFunc_GetPartyMemberLocation_LocationOut;
	Parms.CallFunc_GetPartyMemberLocation_ReturnValue = CallFunc_GetPartyMemberLocation_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::RefreshPlayerName(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "RefreshPlayerName");

	Params::ULobbyPlayerPadTop_C_RefreshPlayerName_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "PreConstruct");

	Params::ULobbyPlayerPadTop_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::Construct()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "Construct");

	Params::ULobbyPlayerPadTop_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::OnLobbyStarted()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnLobbyStarted");

	Params::ULobbyPlayerPadTop_C_OnLobbyStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            PlayerNetId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bIsReady                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnUpdateLobbyPlayerPadTop(const struct FUniqueNetIdRepl& PlayerNetId, bool bIsReady)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnUpdateLobbyPlayerPadTop");

	Params::ULobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop_Params Parms;
	Parms.PlayerNetId = PlayerNetId;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyDisconnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::OnLobbyDisconnected()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnLobbyDisconnected");

	Params::ULobbyPlayerPadTop_C_OnLobbyDisconnected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable1                                            (ZeroConstructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortLobbyBeaconClient*      CallFunc_GetLobbyBeaconClient_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortLobbyBeaconClientRM*    K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable12                                           (ZeroConstructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable123                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_PlayerNetId                                   (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreUniqueIDsIdentical_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void ULobbyPlayerPadTop_C::ExecuteUbergraph_LobbyPlayerPadTop(int32 EntryPoint, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortLobbyBeaconClient* CallFunc_GetLobbyBeaconClient_ReturnValue, class AFortLobbyBeaconClientRM* K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& Temp_string_Variable12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue, const class FString& Temp_string_Variable123, const struct FUniqueNetIdRepl& K2Node_CustomEvent_PlayerNetId, bool K2Node_CustomEvent_bIsReady, bool CallFunc_AreUniqueIDsIdentical_ReturnValue, int32 Temp_int_Variable, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "ExecuteUbergraph_LobbyPlayerPadTop");

	Params::ULobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable1 = Temp_string_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLobbyBeaconClient_ReturnValue = CallFunc_GetLobbyBeaconClient_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM = K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_string_Variable12 = Temp_string_Variable12;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.Temp_string_Variable123 = Temp_string_Variable123;
	Parms.K2Node_CustomEvent_PlayerNetId = K2Node_CustomEvent_PlayerNetId;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.CallFunc_AreUniqueIDsIdentical_ReturnValue = CallFunc_AreUniqueIDsIdentical_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
