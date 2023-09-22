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


// Function LeaveButton.LeaveButton_C.GetDescriptionText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        DescriptionText                                                  (Parm, OutParm)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::GetDescriptionText(class FText* DescriptionText, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "GetDescriptionText");

	Params::ULeaveButton_C_GetDescriptionText_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (DescriptionText != nullptr)
		*DescriptionText = Parms.DescriptionText;

}


// Function LeaveButton.LeaveButton_C.IsInNeighborhood
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsInNeighborhood                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortDeployableBaseManager*  DeployableBaseManager                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDeployableBaseUseType  CallFunc_GetDeployableBaseUseType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortDeployableBaseManager*  CallFunc_GetCurrent_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::IsInNeighborhood(bool* bIsInNeighborhood, class AFortDeployableBaseManager* DeployableBaseManager, enum class EDeployableBaseUseType CallFunc_GetDeployableBaseUseType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class AFortDeployableBaseManager* CallFunc_GetCurrent_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "IsInNeighborhood");

	Params::ULeaveButton_C_IsInNeighborhood_Params Parms;
	Parms.DeployableBaseManager = DeployableBaseManager;
	Parms.CallFunc_GetDeployableBaseUseType_ReturnValue = CallFunc_GetDeployableBaseUseType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrent_ReturnValue = CallFunc_GetCurrent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInNeighborhood != nullptr)
		*bIsInNeighborhood = Parms.bIsInNeighborhood;

}


// Function LeaveButton.LeaveButton_C.Update Style State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULeaveButton_C::Update_Style_State()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "Update Style State");

	Params::ULeaveButton_C_Update_Style_State_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextOverride                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeaveButton_C::SetText(class FText TextOverride)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "SetText");

	Params::ULeaveButton_C_SetText_Params Parms;
	Parms.TextOverride = TextOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.GetButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UIconTextButton_C*           Leave                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::GetButton(class UIconTextButton_C** Leave)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "GetButton");

	Params::ULeaveButton_C_GetButton_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Leave != nullptr)
		*Leave = Parms.Leave;

}


// Function LeaveButton.LeaveButton_C.HasUnsavedQuestProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasUnsavedQuestProgress                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "HasUnsavedQuestProgress");

	Params::ULeaveButton_C_HasUnsavedQuestProgress_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue = CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasUnsavedQuestProgress != nullptr)
		*HasUnsavedQuestProgress = Parms.HasUnsavedQuestProgress;

}


// Function LeaveButton.LeaveButton_C.LeaveParty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::LeaveParty(class UFortPartyContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "LeaveParty");

	Params::ULeaveButton_C_LeaveParty_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLeaveActionText_Text                                 ()
// bool                               CallFunc_IsConsideredInGame_InGame                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::UpdateState(class FText CallFunc_GetLeaveActionText_Text, bool CallFunc_IsConsideredInGame_InGame, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "UpdateState");

	Params::ULeaveButton_C_UpdateState_Params Parms;
	Parms.CallFunc_GetLeaveActionText_Text = CallFunc_GetLeaveActionText_Text;
	Parms.CallFunc_IsConsideredInGame_InGame = CallFunc_IsConsideredInGame_InGame;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue = CallFunc_GetNumPlayersInLocalParty_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.IsConsideredInGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InGame                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::IsConsideredInGame(bool* InGame, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "IsConsideredInGame");

	Params::ULeaveButton_C_IsConsideredInGame_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InGame != nullptr)
		*InGame = Parms.InGame;

}


// Function LeaveButton.LeaveButton_C.GetLeaveActionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInOutpostZone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable123                                            ()
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable1234                                           ()
// class FText                        K2Node_Select_Default                                            ()
// bool                               CallFunc_IsConsideredInGame_InGame                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerControllerOutpost_C*K2Node_DynamicCast_AsBP_Player_Controller_Outpost                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select1_Default                                           ()
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsideredInGame_InGame1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12_Default                                          ()
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::GetLeaveActionText(class FText* Text, class FText Temp_text_Variable, class FText Temp_text_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInOutpostZone_ReturnValue, class FText Temp_text_Variable12, class FText Temp_text_Variable123, bool Temp_bool_Variable1, class FText Temp_text_Variable1234, class FText K2Node_Select_Default, bool CallFunc_IsConsideredInGame_InGame, bool Temp_bool_Variable12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select1_Default, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_IsConsideredInGame_InGame1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class FText K2Node_Select12_Default, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "GetLeaveActionText");

	Params::ULeaveButton_C_GetLeaveActionText_Params Parms;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsInOutpostZone_ReturnValue = CallFunc_IsInOutpostZone_ReturnValue;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_text_Variable1234 = Temp_text_Variable1234;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsConsideredInGame_InGame = CallFunc_IsConsideredInGame_InGame;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Outpost = K2Node_DynamicCast_AsBP_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;
	Parms.CallFunc_IsConsideredInGame_InGame1 = CallFunc_IsConsideredInGame_InGame1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function LeaveButton.LeaveButton_C.DialogResult_1E39F47546648367BB2F218F69311220
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_1E39F47546648367BB2F218F69311220(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "DialogResult_1E39F47546648367BB2F218F69311220");

	Params::ULeaveButton_C_DialogResult_1E39F47546648367BB2F218F69311220_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.DialogResult_F5AF58094777CFEEC0BF28BEA620800C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_F5AF58094777CFEEC0BF28BEA620800C(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "DialogResult_F5AF58094777CFEEC0BF28BEA620800C");

	Params::ULeaveButton_C_DialogResult_F5AF58094777CFEEC0BF28BEA620800C_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B");

	Params::ULeaveButton_C_DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.DialogResult_A0D25F7F4E82D325BF226E811F1D79AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_A0D25F7F4E82D325BF226E811F1D79AF(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "DialogResult_A0D25F7F4E82D325BF226E811F1D79AF");

	Params::ULeaveButton_C_DialogResult_A0D25F7F4E82D325BF226E811F1D79AF_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::HandleTeamMemberRemoved(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "HandleTeamMemberRemoved");

	Params::ULeaveButton_C_HandleTeamMemberRemoved_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewTeamMemberInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ULeaveButton_C::HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "HandleTeamMemberAdded");

	Params::ULeaveButton_C_HandleTeamMemberAdded_Params Parms;
	Parms.NewTeamMemberInfo = NewTeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.HandleLobbyEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULeaveButton_C::HandleLobbyEvents()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "HandleLobbyEvents");

	Params::ULeaveButton_C_HandleLobbyEvents_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULeaveButton_C::Construct()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "Construct");

	Params::ULeaveButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");

	Params::ULeaveButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULeaveButton_C::Destruct()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "Destruct");

	Params::ULeaveButton_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "PreConstruct");

	Params::ULeaveButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.HandlePlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ULeaveButton_C::HandlePlayerStateChanged(struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "HandlePlayerStateChanged");

	Params::ULeaveButton_C_HandlePlayerStateChanged_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result12                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable1                                              ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_PlayerIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result123                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName123                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567                      (ZeroConstructor, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_NewTeamMemberInfo                             (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerControllerOutpost_C*K2Node_DynamicCast_AsBP_Player_Controller_Outpost                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678                     (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsideredInGame_InGame                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable12                                             ()
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable123                                            ()
// class FText                        Temp_text_Variable1234                                           ()
// bool                               CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress1        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortOutpostContext*         CallFunc_GetContext_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select1_Default                                           ()
// class FText                        Temp_text_Variable12345                                          ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345678                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInOutpostZone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue123456789                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345678910                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable123456                                         ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULeaveWarningInfo_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULeaveWarningInfo_C*         CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        Temp_text_Variable1234567                                        ()
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select12_Default                                          ()
// class FText                        K2Node_Select123_Default                                         ()
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsideredInGame_InGame1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInNeighborhood_bIsInNeighborhood                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234567891011                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable12345678                                       ()
// bool                               CallFunc_IsInOutpostZone_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable123456789                                      ()
// class FText                        K2Node_Select1234_Default                                        ()
// class FText                        K2Node_Select12345_Default                                       ()
// bool                               Temp_bool_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_TeamMemberInfo                                (ConstParm, HasGetValueTypeHash)
// class FText                        K2Node_Select123456_Default                                      ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue12  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue123 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue123                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::ExecuteUbergraph_LeaveButton(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EFortDialogResult K2Node_CustomEvent_Result12, class FName K2Node_CustomEvent_ResultName12, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, enum class ESubGame CallFunc_GetSubGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, class FName Temp_name_Variable12, enum class EFortDialogResult Temp_byte_Variable12, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, bool Temp_bool_Variable1, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class FText K2Node_Select_Default, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, class FName Temp_name_Variable123, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult Temp_byte_Variable123, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, int32 K2Node_CustomEvent_PlayerIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, enum class EFortDialogResult K2Node_CustomEvent_Result123, class FName K2Node_CustomEvent_ResultName123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_IsConsideredInGame_InGame, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456, class FText Temp_text_Variable12, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, bool CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress, bool CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress1, bool Temp_bool_Variable12, class UFortOutpostContext* CallFunc_GetContext_ReturnValue1234567, class FText K2Node_Select1_Default, class FText Temp_text_Variable12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678, bool CallFunc_IsInOutpostZone_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456789, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue12, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue12, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678910, class FText Temp_text_Variable123456, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, class ULeaveWarningInfo_C* CallFunc_Create_ReturnValue, class ULeaveWarningInfo_C* CallFunc_Create_ReturnValue1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable1234567, bool Temp_bool_Variable123, bool Temp_bool_Variable1234, class FText K2Node_Select12_Default, class FText K2Node_Select123_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue12, bool Temp_bool_Variable12345, bool CallFunc_IsConsideredInGame_InGame1, bool CallFunc_IsInNeighborhood_bIsInNeighborhood, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011, class FText Temp_text_Variable12345678, bool CallFunc_IsInOutpostZone_ReturnValue1, class FText Temp_text_Variable123456789, class FText K2Node_Select1234_Default, class FText K2Node_Select12345_Default, bool Temp_bool_Variable123456, const struct FFortTeamMemberInfo& K2Node_CustomEvent_TeamMemberInfo, class FText K2Node_Select123456_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue12, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue123, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "ExecuteUbergraph_LeaveButton");

	Params::ULeaveButton_C_ExecuteUbergraph_LeaveButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_Result12 = K2Node_CustomEvent_Result12;
	Parms.K2Node_CustomEvent_ResultName12 = K2Node_CustomEvent_ResultName12;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.K2Node_CustomEvent_ResultName1 = K2Node_CustomEvent_ResultName1;
	Parms.Temp_name_Variable12 = Temp_name_Variable12;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue12 = CallFunc_EqualEqual_ByteByte_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue = CallFunc_GetNumPlayersInLocalParty_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	Parms.Temp_name_Variable123 = Temp_name_Variable123;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue123 = CallFunc_EqualEqual_ByteByte_ReturnValue123;
	Parms.K2Node_CustomEvent_PlayerIndex = K2Node_CustomEvent_PlayerIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.K2Node_CustomEvent_Result123 = K2Node_CustomEvent_Result123;
	Parms.K2Node_CustomEvent_ResultName123 = K2Node_CustomEvent_ResultName123;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567 = K2Node_CreateDelegate_OutputDelegate1234567;
	Parms.K2Node_CustomEvent_NewTeamMemberInfo = K2Node_CustomEvent_NewTeamMemberInfo;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Outpost = K2Node_DynamicCast_AsBP_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678 = K2Node_CreateDelegate_OutputDelegate12345678;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;
	Parms.CallFunc_IsConsideredInGame_InGame = CallFunc_IsConsideredInGame_InGame;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.CallFunc_GetContext_ReturnValue123456 = CallFunc_GetContext_ReturnValue123456;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue1 = CallFunc_GetNumPlayersInLocalParty_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_text_Variable1234 = Temp_text_Variable1234;
	Parms.CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress = CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress;
	Parms.CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress1 = CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress1;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_GetContext_ReturnValue1234567 = CallFunc_GetContext_ReturnValue1234567;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_text_Variable12345 = Temp_text_Variable12345;
	Parms.CallFunc_GetContext_ReturnValue12345678 = CallFunc_GetContext_ReturnValue12345678;
	Parms.CallFunc_IsInOutpostZone_ReturnValue = CallFunc_IsInOutpostZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue123456789 = CallFunc_GetContext_ReturnValue123456789;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue12 = CallFunc_GetNumPlayersInLocalParty_ReturnValue12;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue12 = CallFunc_Greater_IntInt_ReturnValue12;
	Parms.CallFunc_GetUINavigationManager_ReturnValue1 = CallFunc_GetUINavigationManager_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12345678910 = CallFunc_GetContext_ReturnValue12345678910;
	Parms.Temp_text_Variable123456 = Temp_text_Variable123456;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue12 = CallFunc_GetOwningPlayer_ReturnValue12;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue1 = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable1234567 = Temp_text_Variable1234567;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_GetUINavigationManager_ReturnValue12 = CallFunc_GetUINavigationManager_ReturnValue12;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.CallFunc_IsConsideredInGame_InGame1 = CallFunc_IsConsideredInGame_InGame1;
	Parms.CallFunc_IsInNeighborhood_bIsInNeighborhood = CallFunc_IsInNeighborhood_bIsInNeighborhood;
	Parms.CallFunc_GetContext_ReturnValue1234567891011 = CallFunc_GetContext_ReturnValue1234567891011;
	Parms.Temp_text_Variable12345678 = Temp_text_Variable12345678;
	Parms.CallFunc_IsInOutpostZone_ReturnValue1 = CallFunc_IsInOutpostZone_ReturnValue1;
	Parms.Temp_text_Variable123456789 = Temp_text_Variable123456789;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;
	Parms.K2Node_Select12345_Default = K2Node_Select12345_Default;
	Parms.Temp_bool_Variable123456 = Temp_bool_Variable123456;
	Parms.K2Node_CustomEvent_TeamMemberInfo = K2Node_CustomEvent_TeamMemberInfo;
	Parms.K2Node_Select123456_Default = K2Node_Select123456_Default;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue12 = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue12;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue123 = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue123;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue123 = CallFunc_IsValid_ReturnValue123;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.Update Visibility__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::Update_Visibility__DelegateSignature(bool Visibility)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "Update Visibility__DelegateSignature");

	Params::ULeaveButton_C_Update_Visibility__DelegateSignature_Params Parms;
	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULeaveButton_C::OnClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "OnClicked__DelegateSignature");

	Params::ULeaveButton_C_OnClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
