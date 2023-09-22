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


// Function HBOnboardingFlow.HBOnboardingFlow_C.HasCompletedOnboardingObjective
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AHBOnboardingFlow_C::HasCompletedOnboardingObjective(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HasCompletedOnboardingObjective");

	Params::AHBOnboardingFlow_C_HasCompletedOnboardingObjective_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue = CallFunc_HasCompletedOnboardingObjective_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestManager*           QuestManager                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHBOnboardingFlow_C::GetCampaignQuestManager(class UFortQuestManager** QuestManager, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "GetCampaignQuestManager");

	Params::AHBOnboardingFlow_C_GetCampaignQuestManager_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestManager != nullptr)
		*QuestManager = Parms.QuestManager;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.GetOnboardingQuestItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestItem*              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHBOnboardingFlow_C::GetOnboardingQuestItem(class UFortQuestItem** Result, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "GetOnboardingQuestItem");

	Params::AHBOnboardingFlow_C_GetOnboardingQuestItem_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.CanAccessManagementFeatures
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Can_Manage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFrontEndFeatureStateCallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFrontEndFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFrontEndFeatureStateCallFunc_GetFeatureState_OutFeatureState1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFrontEndFeatureStateReasonCallFunc_GetFeatureState_OutReason1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFrontEndFeatureStateCallFunc_GetFeatureState_OutFeatureState12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFrontEndFeatureStateReasonCallFunc_GetFeatureState_OutReason12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHBOnboardingFlow_C::CanAccessManagementFeatures(bool* Can_Manage, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState1, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState12, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason12, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "CanAccessManagementFeatures");

	Params::AHBOnboardingFlow_C_CanAccessManagementFeatures_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_GetFeatureState_OutFeatureState1 = CallFunc_GetFeatureState_OutFeatureState1;
	Parms.CallFunc_GetFeatureState_OutReason1 = CallFunc_GetFeatureState_OutReason1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetFeatureState_OutFeatureState12 = CallFunc_GetFeatureState_OutFeatureState12;
	Parms.CallFunc_GetFeatureState_OutReason12 = CallFunc_GetFeatureState_OutReason12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue12 = CallFunc_EqualEqual_ByteByte_ReturnValue12;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

	if (Can_Manage != nullptr)
		*Can_Manage = Parms.Can_Manage;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WaitingToCheckAgain                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHBOnboardingFlow_C::RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "RecheckNeedToPlayEventMovie");

	Params::AHBOnboardingFlow_C_RecheckNeedToPlayEventMovie_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WaitingToCheckAgain != nullptr)
		*WaitingToCheckAgain = Parms.WaitingToCheckAgain;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestInProgress_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AHBOnboardingFlow_C::NeedsToPlayEventMovie(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "NeedsToPlayEventMovie");

	Params::AHBOnboardingFlow_C_NeedsToPlayEventMovie_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsQuestInProgress_ReturnValue = CallFunc_IsQuestInProgress_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void AHBOnboardingFlow_C::Handle_Client_Quest_Login_Failed(int32 NewLocalVar_0, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "Handle Client Quest Login Failed");

	Params::AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ShowBannerSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBannerSelectionWidget_C*    K2Node_DynamicCast_AsBanner_Selection_Widget                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHBOnboardingFlow_C::ShowBannerSelect(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBannerSelectionWidget_C* K2Node_DynamicCast_AsBanner_Selection_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "ShowBannerSelect");

	Params::AHBOnboardingFlow_C_ShowBannerSelect_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBanner_Selection_Widget = K2Node_DynamicCast_AsBanner_Selection_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMcpFailure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleMcpFailure()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleMcpFailure");

	Params::AHBOnboardingFlow_C_HandleMcpFailure_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "UserConstructionScript");

	Params::AHBOnboardingFlow_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_C2C889344301B8DBF8F046A2A175D133
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnCanceled_C2C889344301B8DBF8F046A2A175D133()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnCanceled_C2C889344301B8DBF8F046A2A175D133");

	Params::AHBOnboardingFlow_C_OnCanceled_C2C889344301B8DBF8F046A2A175D133_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133");

	Params::AHBOnboardingFlow_C_OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnCanceled_856A325D44ECC73B857CE5B301E90D33()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnCanceled_856A325D44ECC73B857CE5B301E90D33");

	Params::AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B301E90D33_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33");

	Params::AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_0A5ABC9C483947108FD9FB9980E7C62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_0A5ABC9C483947108FD9FB9980E7C62F");

	Params::AHBOnboardingFlow_C_OnFailure_0A5ABC9C483947108FD9FB9980E7C62F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F");

	Params::AHBOnboardingFlow_C_OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F");

	Params::AHBOnboardingFlow_C_OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_F17CF9054AFDDDAF314AC4911BC9818F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_F17CF9054AFDDDAF314AC4911BC9818F");

	Params::AHBOnboardingFlow_C_OnFailure_F17CF9054AFDDDAF314AC4911BC9818F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F");

	Params::AHBOnboardingFlow_C_OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F");

	Params::AHBOnboardingFlow_C_OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0");

	Params::AHBOnboardingFlow_C_OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B35313D7CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnCanceled_856A325D44ECC73B857CE5B35313D7CD()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnCanceled_856A325D44ECC73B857CE5B35313D7CD");

	Params::AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B35313D7CD_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD");

	Params::AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251");

	Params::AHBOnboardingFlow_C_OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6");

	Params::AHBOnboardingFlow_C_OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_74930F274B5470B17CF720953FE7E260
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_74930F274B5470B17CF720953FE7E260()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_74930F274B5470B17CF720953FE7E260");

	Params::AHBOnboardingFlow_C_OnFailure_74930F274B5470B17CF720953FE7E260_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_74930F274B5470B17CF720953FE7E260
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_74930F274B5470B17CF720953FE7E260()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_74930F274B5470B17CF720953FE7E260");

	Params::AHBOnboardingFlow_C_OnSuccess_74930F274B5470B17CF720953FE7E260_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0");

	Params::AHBOnboardingFlow_C_OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7FBC276641DD576B7417ED97A4734318
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_7FBC276641DD576B7417ED97A4734318()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_7FBC276641DD576B7417ED97A4734318");

	Params::AHBOnboardingFlow_C_OnStateEntered_7FBC276641DD576B7417ED97A4734318_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2");

	Params::AHBOnboardingFlow_C_OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.DialogResult_1D81E4B94CE33A3425130BABD5A7283B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHBOnboardingFlow_C::DialogResult_1D81E4B94CE33A3425130BABD5A7283B(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "DialogResult_1D81E4B94CE33A3425130BABD5A7283B");

	Params::AHBOnboardingFlow_C_DialogResult_1D81E4B94CE33A3425130BABD5A7283B_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515");

	Params::AHBOnboardingFlow_C_OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_50CD26324B96B121A5B49DA66113AE5D");

	Params::AHBOnboardingFlow_C_OnFailure_50CD26324B96B121A5B49DA66113AE5D_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnIgnored_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnIgnored_50CD26324B96B121A5B49DA66113AE5D");

	Params::AHBOnboardingFlow_C_OnIgnored_50CD26324B96B121A5B49DA66113AE5D_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_50CD26324B96B121A5B49DA66113AE5D");

	Params::AHBOnboardingFlow_C_OnSuccess_50CD26324B96B121A5B49DA66113AE5D_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D");

	Params::AHBOnboardingFlow_C_OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5");

	Params::AHBOnboardingFlow_C_OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5");

	Params::AHBOnboardingFlow_C_OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartPlaySatelliteCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::StartPlaySatelliteCine()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "StartPlaySatelliteCine");

	Params::AHBOnboardingFlow_C_StartPlaySatelliteCine_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartNameHomebase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::StartNameHomebase()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "StartNameHomebase");

	Params::AHBOnboardingFlow_C_StartNameHomebase_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_HomebasePersonalized
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_HomebasePersonalized");

	Params::AHBOnboardingFlow_C_HandleClientEvent_HomebasePersonalized_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartOnboardingZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::StartOnboardingZone()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "StartOnboardingZone");

	Params::AHBOnboardingFlow_C_StartOnboardingZone_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::StartFlow()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "StartFlow");

	Params::AHBOnboardingFlow_C_StartFlow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCheckOnboardingZoneComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleCheckOnboardingZoneComplete()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleCheckOnboardingZoneComplete");

	Params::AHBOnboardingFlow_C_HandleCheckOnboardingZoneComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSwitchToHomeBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleSwitchToHomeBase()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleSwitchToHomeBase");

	Params::AHBOnboardingFlow_C_HandleSwitchToHomeBase_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlaySatelliteCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandlePlaySatelliteCine()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandlePlaySatelliteCine");

	Params::AHBOnboardingFlow_C_HandlePlaySatelliteCine_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNameHomebase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleNameHomebase()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleNameHomebase");

	Params::AHBOnboardingFlow_C_HandleNameHomebase_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed Retry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::Handle_Client_Quest_Login_Failed_Retry()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "Handle Client Quest Login Failed Retry");

	Params::AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Retry_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Retries Exhausted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::Handle_Client_Quest_Login_Retries_Exhausted()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "Handle Client Quest Login Retries Exhausted");

	Params::AHBOnboardingFlow_C_Handle_Client_Quest_Login_Retries_Exhausted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelected
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_SubGameSelected");

	Params::AHBOnboardingFlow_C_HandleClientEvent_SubGameSelected_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_OnRejoinGameAbandoned
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_OnRejoinGameAbandoned");

	Params::AHBOnboardingFlow_C_HandleClientEvent_OnRejoinGameAbandoned_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCompanionAppOnboardingAbort
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleCompanionAppOnboardingAbort()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleCompanionAppOnboardingAbort");

	Params::AHBOnboardingFlow_C_HandleCompanionAppOnboardingAbort_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNoEntitlement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleNoEntitlement()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleNoEntitlement");

	Params::AHBOnboardingFlow_C_HandleNoEntitlement_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleForcedLogout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Reason_Title                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AHBOnboardingFlow_C::HandleForcedLogout(class FText Reason_Title, class FText Reason)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleForcedLogout");

	Params::AHBOnboardingFlow_C_HandleForcedLogout_Params Parms;
	Parms.Reason_Title = Reason_Title;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandlePlayEventCine()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandlePlayEventCine");

	Params::AHBOnboardingFlow_C_HandlePlayEventCine_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMobileManagementRestricted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleMobileManagementRestricted()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleMobileManagementRestricted");

	Params::AHBOnboardingFlow_C_HandleMobileManagementRestricted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_PlayEventMovie");

	Params::AHBOnboardingFlow_C_HandleClientEvent_PlayEventMovie_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelection
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_SubGameSelection(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_SubGameSelection");

	Params::AHBOnboardingFlow_C_HandleClientEvent_SubGameSelection_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_RejoinAvailable
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_RejoinAvailable(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_RejoinAvailable");

	Params::AHBOnboardingFlow_C_HandleClientEvent_RejoinAvailable_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSubGameSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleSubGameSelection()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleSubGameSelection");

	Params::AHBOnboardingFlow_C_HandleSubGameSelection_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ReenterFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::ReenterFlow()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "ReenterFlow");

	Params::AHBOnboardingFlow_C_ReenterFlow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AutoSelectSubGame_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345678                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123456789                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue123                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1234                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345678910                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234567891011                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CanPlay_DenialReason                                    ()
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567                      (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123456789101112                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12345                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678                     (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789                    (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910                  (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011                (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112              (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue123456                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue12345678910111213                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213            (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue1234567                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011121314          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue12345678                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112131415        (ZeroConstructor, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213141516      (ZeroConstructor, NoDestructor)
// class UFortQuestManager*           CallFunc_GetCampaignQuestManager_QuestManager                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue123456789                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource12345                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus12345                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent12345                        (ConstParm, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue12                             (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement*     CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12345678910                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011121314151617    (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234567891011121314               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            CallFunc__BPGetCurrentUIState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue123456789101112131415             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHomeBaseInfo           CallFunc_GetHomeBaseInfo_Result                                  ()
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1234567891011                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetCampaignQuestManager_QuestManager1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue123456789101112                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue12           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue123                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue123          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1234                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            CallFunc__BPGetCurrentUIState_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112131415161718  (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array12                                         (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819(ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource1234                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus1234                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent1234                         (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource123                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus123                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent123                          (ConstParm, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920(ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021(ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122(ZeroConstructor, NoDestructor)
// class FText                        K2Node_CustomEvent_Reason_Title                                  ()
// class FText                        K2Node_CustomEvent_Reason                                        ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// bool                               CallFunc_IsValid_ReturnValue12345678910111213                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue12                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123                          ()
// bool                               CallFunc_Not_PreBool_ReturnValue12345                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223(ZeroConstructor, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NeedsToPlayEventMovie_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain1        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234                         ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345                        ()
// bool                               CallFunc_CanAccessManagementFeatures_Can_Manage                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue123456                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent12                           (ConstParm, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324(ZeroConstructor, NoDestructor)
// class UFortAsyncAction_LoadCurrentSubgameProfiles*CallFunc_LoadCurrentSubgameProfiles_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1234567891011121314                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122232425(ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223242526(ZeroConstructor, NoDestructor)
// class UFortQuestItem*              CallFunc_GetOnboardingQuestItem_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue123456789101112131415                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetOnboardingQuestItem_Result1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetCampaignQuestManager_QuestManager12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_EnsureClientQuestLogin*CallFunc_SendEnsureClientQuestLogin_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetCampaignQuestManager_QuestManager123                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12345678910111213141516              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1234567891011121314151617            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue1234         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent1                            (ConstParm, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement*     CallFunc_FinishSpawningActor_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue123456789101112131415161718          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324252627(ZeroConstructor, NoDestructor)

void AHBOnboardingFlow_C::ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_AutoSelectSubGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsValid_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456, bool CallFunc_IsMobileApp_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567, bool CallFunc_IsMobileApp_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678910, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011, bool CallFunc_IsMobileApp_ReturnValue12, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789101112, bool CallFunc_IsValid_ReturnValue12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, bool CallFunc_IsValid_ReturnValue123456, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678910111213, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue12345, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue1234567, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, bool CallFunc_IsValid_ReturnValue12345678, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue123456789, class UObject* K2Node_HandleClientEvent_EventSource12345, class UObject* K2Node_HandleClientEvent_EventFocus12345, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent12345, const struct FTransform& CallFunc_MakeTransform_ReturnValue12, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue1, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue1, bool CallFunc_IsValid_ReturnValue12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011121314, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue123456789101112131415, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1234567, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue1234567891011, bool CallFunc_BooleanOR_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager1, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue1, bool CallFunc_IsValid_ReturnValue123456789101112, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue12, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue123, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue1234, bool Temp_bool_IsClosed_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819, class UObject* K2Node_HandleClientEvent_EventSource1234, class UObject* K2Node_HandleClientEvent_EventFocus1234, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1234, class UObject* K2Node_HandleClientEvent_EventSource123, class UObject* K2Node_HandleClientEvent_EventFocus123, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122, class FText K2Node_CustomEvent_Reason_Title, class FText K2Node_CustomEvent_Reason, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, bool CallFunc_IsValid_ReturnValue12345678910111213, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_NeedsToPlayEventMovie_ReturnValue, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain1, class FText CallFunc_MakeLiteralText_ReturnValue1234, class FText CallFunc_MakeLiteralText_ReturnValue12345, bool CallFunc_CanAccessManagementFeatures_Can_Manage, bool CallFunc_Not_PreBool_ReturnValue123456, class UObject* K2Node_HandleClientEvent_EventSource12, class UObject* K2Node_HandleClientEvent_EventFocus12, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent12, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324, class UFortAsyncAction_LoadCurrentSubgameProfiles* CallFunc_LoadCurrentSubgameProfiles_ReturnValue, bool CallFunc_IsValid_ReturnValue1234567891011121314, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122232425, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223242526, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result, bool CallFunc_IsValid_ReturnValue123456789101112131415, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result1, bool CallFunc_HasCompletedQuest_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager12, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager123, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue12, bool CallFunc_IsValid_ReturnValue12345678910111213141516, bool CallFunc_IsValid_ReturnValue1234567891011121314151617, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue1234, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12, bool CallFunc_ClassIsChildOf_ReturnValue1, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue12, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue12, bool CallFunc_IsValid_ReturnValue123456789101112131415161718, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324252627)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "ExecuteUbergraph_HBOnboardingFlow");

	Params::AHBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue = CallFunc_HasCompletedOnboardingObjective_ReturnValue;
	Parms.CallFunc_SetUIState_ReturnValue = CallFunc_SetUIState_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_AutoSelectSubGame_ReturnValue = CallFunc_AutoSelectSubGame_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SetUIState_ReturnValue1 = CallFunc_SetUIState_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_SetUIState_ReturnValue12 = CallFunc_SetUIState_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.CallFunc_GetContext_ReturnValue123456 = CallFunc_GetContext_ReturnValue123456;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1234567 = CallFunc_GetContext_ReturnValue1234567;
	Parms.CallFunc_IsMobileApp_ReturnValue1 = CallFunc_IsMobileApp_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12345678 = CallFunc_GetContext_ReturnValue12345678;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.CallFunc_SetUIState_ReturnValue123 = CallFunc_SetUIState_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue123456789 = CallFunc_GetContext_ReturnValue123456789;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue123 = CallFunc_IsValid_ReturnValue123;
	Parms.CallFunc_IsValid_ReturnValue1234 = CallFunc_IsValid_ReturnValue1234;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.CallFunc_GetContext_ReturnValue12345678910 = CallFunc_GetContext_ReturnValue12345678910;
	Parms.CallFunc_GetContext_ReturnValue1234567891011 = CallFunc_GetContext_ReturnValue1234567891011;
	Parms.CallFunc_IsMobileApp_ReturnValue12 = CallFunc_IsMobileApp_ReturnValue12;
	Parms.CallFunc_CanPlay_DenialReason = CallFunc_CanPlay_DenialReason;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567 = K2Node_CreateDelegate_OutputDelegate1234567;
	Parms.CallFunc_SetUIState_ReturnValue1234 = CallFunc_SetUIState_ReturnValue1234;
	Parms.CallFunc_GetContext_ReturnValue123456789101112 = CallFunc_GetContext_ReturnValue123456789101112;
	Parms.CallFunc_IsValid_ReturnValue12345 = CallFunc_IsValid_ReturnValue12345;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678 = K2Node_CreateDelegate_OutputDelegate12345678;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789 = K2Node_CreateDelegate_OutputDelegate123456789;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910 = K2Node_CreateDelegate_OutputDelegate12345678910;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011 = K2Node_CreateDelegate_OutputDelegate1234567891011;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue = CallFunc_WaitForClientAnnouncement_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112 = K2Node_CreateDelegate_OutputDelegate123456789101112;
	Parms.CallFunc_IsValid_ReturnValue123456 = CallFunc_IsValid_ReturnValue123456;
	Parms.CallFunc_GetContext_ReturnValue12345678910111213 = CallFunc_GetContext_ReturnValue12345678910111213;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213 = K2Node_CreateDelegate_OutputDelegate12345678910111213;
	Parms.CallFunc_SetUIState_ReturnValue12345 = CallFunc_SetUIState_ReturnValue12345;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue1234567 = CallFunc_IsValid_ReturnValue1234567;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_SetUIState_ReturnValue123456 = CallFunc_SetUIState_ReturnValue123456;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011121314 = K2Node_CreateDelegate_OutputDelegate1234567891011121314;
	Parms.CallFunc_IsValid_ReturnValue12345678 = CallFunc_IsValid_ReturnValue12345678;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112131415 = K2Node_CreateDelegate_OutputDelegate123456789101112131415;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213141516 = K2Node_CreateDelegate_OutputDelegate12345678910111213141516;
	Parms.CallFunc_GetCampaignQuestManager_QuestManager = CallFunc_GetCampaignQuestManager_QuestManager;
	Parms.CallFunc_SendClientStatEvent_ReturnValue = CallFunc_SendClientStatEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue123456789 = CallFunc_IsValid_ReturnValue123456789;
	Parms.K2Node_HandleClientEvent_EventSource12345 = K2Node_HandleClientEvent_EventSource12345;
	Parms.K2Node_HandleClientEvent_EventFocus12345 = K2Node_HandleClientEvent_EventFocus12345;
	Parms.K2Node_HandleClientEvent_ClientEvent12345 = K2Node_HandleClientEvent_ClientEvent12345;
	Parms.CallFunc_MakeTransform_ReturnValue12 = CallFunc_MakeTransform_ReturnValue12;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue1 = CallFunc_WaitForClientAnnouncement_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue12345678910 = CallFunc_IsValid_ReturnValue12345678910;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011121314151617 = K2Node_CreateDelegate_OutputDelegate1234567891011121314151617;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1234567891011121314 = CallFunc_GetContext_ReturnValue1234567891011121314;
	Parms.CallFunc__BPGetCurrentUIState_ReturnValue = CallFunc__BPGetCurrentUIState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue123456789101112131415 = CallFunc_GetContext_ReturnValue123456789101112131415;
	Parms.CallFunc_GetHomeBaseInfo_Result = CallFunc_GetHomeBaseInfo_Result;
	Parms.CallFunc_SetUIState_ReturnValue1234567 = CallFunc_SetUIState_ReturnValue1234567;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1234567891011 = CallFunc_IsValid_ReturnValue1234567891011;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCampaignQuestManager_QuestManager1 = CallFunc_GetCampaignQuestManager_QuestManager1;
	Parms.CallFunc_SendClientStatEvent_ReturnValue1 = CallFunc_SendClientStatEvent_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue123456789101112 = CallFunc_IsValid_ReturnValue123456789101112;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue1 = CallFunc_HasCompletedOnboardingObjective_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue12 = CallFunc_Not_PreBool_ReturnValue12;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue12 = CallFunc_HasCompletedOnboardingObjective_ReturnValue12;
	Parms.CallFunc_Not_PreBool_ReturnValue123 = CallFunc_Not_PreBool_ReturnValue123;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue123 = CallFunc_HasCompletedOnboardingObjective_ReturnValue123;
	Parms.CallFunc_Not_PreBool_ReturnValue1234 = CallFunc_Not_PreBool_ReturnValue1234;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.CallFunc__BPGetCurrentUIState_ReturnValue1 = CallFunc__BPGetCurrentUIState_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112131415161718 = K2Node_CreateDelegate_OutputDelegate123456789101112131415161718;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.K2Node_MakeArray_Array12 = K2Node_MakeArray_Array12;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819 = K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819;
	Parms.K2Node_HandleClientEvent_EventSource1234 = K2Node_HandleClientEvent_EventSource1234;
	Parms.K2Node_HandleClientEvent_EventFocus1234 = K2Node_HandleClientEvent_EventFocus1234;
	Parms.K2Node_HandleClientEvent_ClientEvent1234 = K2Node_HandleClientEvent_ClientEvent1234;
	Parms.K2Node_HandleClientEvent_EventSource123 = K2Node_HandleClientEvent_EventSource123;
	Parms.K2Node_HandleClientEvent_EventFocus123 = K2Node_HandleClientEvent_EventFocus123;
	Parms.K2Node_HandleClientEvent_ClientEvent123 = K2Node_HandleClientEvent_ClientEvent123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920 = K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021 = K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122 = K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122;
	Parms.K2Node_CustomEvent_Reason_Title = K2Node_CustomEvent_Reason_Title;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue12345678910111213 = CallFunc_IsValid_ReturnValue12345678910111213;
	Parms.CallFunc_MakeLiteralText_ReturnValue12 = CallFunc_MakeLiteralText_ReturnValue12;
	Parms.CallFunc_MakeLiteralText_ReturnValue123 = CallFunc_MakeLiteralText_ReturnValue123;
	Parms.CallFunc_Not_PreBool_ReturnValue12345 = CallFunc_Not_PreBool_ReturnValue12345;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223 = K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_NeedsToPlayEventMovie_ReturnValue = CallFunc_NeedsToPlayEventMovie_ReturnValue;
	Parms.CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain = CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain;
	Parms.CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain1 = CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain1;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234 = CallFunc_MakeLiteralText_ReturnValue1234;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345 = CallFunc_MakeLiteralText_ReturnValue12345;
	Parms.CallFunc_CanAccessManagementFeatures_Can_Manage = CallFunc_CanAccessManagementFeatures_Can_Manage;
	Parms.CallFunc_Not_PreBool_ReturnValue123456 = CallFunc_Not_PreBool_ReturnValue123456;
	Parms.K2Node_HandleClientEvent_EventSource12 = K2Node_HandleClientEvent_EventSource12;
	Parms.K2Node_HandleClientEvent_EventFocus12 = K2Node_HandleClientEvent_EventFocus12;
	Parms.K2Node_HandleClientEvent_ClientEvent12 = K2Node_HandleClientEvent_ClientEvent12;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324 = K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324;
	Parms.CallFunc_LoadCurrentSubgameProfiles_ReturnValue = CallFunc_LoadCurrentSubgameProfiles_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1234567891011121314 = CallFunc_IsValid_ReturnValue1234567891011121314;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122232425 = K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122232425;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223242526 = K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223242526;
	Parms.CallFunc_GetOnboardingQuestItem_Result = CallFunc_GetOnboardingQuestItem_Result;
	Parms.CallFunc_IsValid_ReturnValue123456789101112131415 = CallFunc_IsValid_ReturnValue123456789101112131415;
	Parms.CallFunc_GetOnboardingQuestItem_Result1 = CallFunc_GetOnboardingQuestItem_Result1;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_GetCampaignQuestManager_QuestManager12 = CallFunc_GetCampaignQuestManager_QuestManager12;
	Parms.CallFunc_SendEnsureClientQuestLogin_ReturnValue = CallFunc_SendEnsureClientQuestLogin_ReturnValue;
	Parms.CallFunc_GetCampaignQuestManager_QuestManager123 = CallFunc_GetCampaignQuestManager_QuestManager123;
	Parms.CallFunc_SendClientStatEvent_ReturnValue12 = CallFunc_SendClientStatEvent_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue12345678910111213141516 = CallFunc_IsValid_ReturnValue12345678910111213141516;
	Parms.CallFunc_IsValid_ReturnValue1234567891011121314151617 = CallFunc_IsValid_ReturnValue1234567891011121314151617;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue1234 = CallFunc_HasCompletedOnboardingObjective_ReturnValue1234;
	Parms.K2Node_HandleClientEvent_EventSource1 = K2Node_HandleClientEvent_EventSource1;
	Parms.K2Node_HandleClientEvent_EventFocus1 = K2Node_HandleClientEvent_EventFocus1;
	Parms.K2Node_HandleClientEvent_ClientEvent1 = K2Node_HandleClientEvent_ClientEvent1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12;
	Parms.CallFunc_ClassIsChildOf_ReturnValue1 = CallFunc_ClassIsChildOf_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue12 = CallFunc_FinishSpawningActor_ReturnValue12;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue12 = CallFunc_WaitForClientAnnouncement_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue123456789101112131415161718 = CallFunc_IsValid_ReturnValue123456789101112131415161718;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324252627 = K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324252627;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
