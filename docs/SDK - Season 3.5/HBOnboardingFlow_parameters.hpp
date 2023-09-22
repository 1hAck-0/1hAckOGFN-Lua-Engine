#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x15 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HasCompletedOnboardingObjective
struct AHBOnboardingFlow_C_HasCompletedOnboardingObjective_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue; // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager
struct AHBOnboardingFlow_C_GetCampaignQuestManager_Params
{
public:
	class UFortQuestManager*                     QuestManager;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.GetOnboardingQuestItem
struct AHBOnboardingFlow_C_GetOnboardingQuestItem_Params
{
public:
	class UFortQuestItem*                        Result;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.CanAccessManagementFeatures
struct AHBOnboardingFlow_C_CanAccessManagementFeatures_Params
{
public:
	bool                                         Can_Manage;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFrontEndFeatureState         CallFunc_GetFeatureState_OutFeatureState;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFrontEndFeatureStateReason   CallFunc_GetFeatureState_OutReason;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFrontEndFeatureState         CallFunc_GetFeatureState_OutFeatureState1;         // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFrontEndFeatureStateReason   CallFunc_GetFeatureState_OutReason1;               // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFrontEndFeatureState         CallFunc_GetFeatureState_OutFeatureState12;        // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFrontEndFeatureStateReason   CallFunc_GetFeatureState_OutReason12;              // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue12;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue12;                  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
struct AHBOnboardingFlow_C_RecheckNeedToPlayEventMovie_Params
{
public:
	bool                                         WaitingToCheckAgain;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
struct AHBOnboardingFlow_C_NeedsToPlayEventMovie_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileApp_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C90[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestInProgress_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed
struct AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Params
{
public:
	int32                                        NewLocalVar_0;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.ShowBannerSelect
struct AHBOnboardingFlow_C_ShowBannerSelect_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBannerSelectionWidget_C*              K2Node_DynamicCast_AsBanner_Selection_Widget;      // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMcpFailure
struct AHBOnboardingFlow_C_HandleMcpFailure_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.UserConstructionScript
struct AHBOnboardingFlow_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_C2C889344301B8DBF8F046A2A175D133
struct AHBOnboardingFlow_C_OnCanceled_C2C889344301B8DBF8F046A2A175D133_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133
struct AHBOnboardingFlow_C_OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
struct AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B301E90D33_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
struct AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_0A5ABC9C483947108FD9FB9980E7C62F
struct AHBOnboardingFlow_C_OnFailure_0A5ABC9C483947108FD9FB9980E7C62F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F
struct AHBOnboardingFlow_C_OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F
struct AHBOnboardingFlow_C_OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_F17CF9054AFDDDAF314AC4911BC9818F
struct AHBOnboardingFlow_C_OnFailure_F17CF9054AFDDDAF314AC4911BC9818F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F
struct AHBOnboardingFlow_C_OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F
struct AHBOnboardingFlow_C_OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0
struct AHBOnboardingFlow_C_OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B35313D7CD
struct AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B35313D7CD_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD
struct AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251
struct AHBOnboardingFlow_C_OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6
struct AHBOnboardingFlow_C_OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_74930F274B5470B17CF720953FE7E260
struct AHBOnboardingFlow_C_OnFailure_74930F274B5470B17CF720953FE7E260_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_74930F274B5470B17CF720953FE7E260
struct AHBOnboardingFlow_C_OnSuccess_74930F274B5470B17CF720953FE7E260_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0
struct AHBOnboardingFlow_C_OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7FBC276641DD576B7417ED97A4734318
struct AHBOnboardingFlow_C_OnStateEntered_7FBC276641DD576B7417ED97A4734318_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2
struct AHBOnboardingFlow_C_OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.DialogResult_1D81E4B94CE33A3425130BABD5A7283B
struct AHBOnboardingFlow_C_DialogResult_1D81E4B94CE33A3425130BABD5A7283B_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515
struct AHBOnboardingFlow_C_OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
struct AHBOnboardingFlow_C_OnFailure_50CD26324B96B121A5B49DA66113AE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
struct AHBOnboardingFlow_C_OnIgnored_50CD26324B96B121A5B49DA66113AE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
struct AHBOnboardingFlow_C_OnSuccess_50CD26324B96B121A5B49DA66113AE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D
struct AHBOnboardingFlow_C_OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5
struct AHBOnboardingFlow_C_OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5
struct AHBOnboardingFlow_C_OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.StartPlaySatelliteCine
struct AHBOnboardingFlow_C_StartPlaySatelliteCine_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.StartNameHomebase
struct AHBOnboardingFlow_C_StartNameHomebase_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_HomebasePersonalized
struct AHBOnboardingFlow_C_HandleClientEvent_HomebasePersonalized_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.StartOnboardingZone
struct AHBOnboardingFlow_C_StartOnboardingZone_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
struct AHBOnboardingFlow_C_StartFlow_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCheckOnboardingZoneComplete
struct AHBOnboardingFlow_C_HandleCheckOnboardingZoneComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSwitchToHomeBase
struct AHBOnboardingFlow_C_HandleSwitchToHomeBase_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlaySatelliteCine
struct AHBOnboardingFlow_C_HandlePlaySatelliteCine_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNameHomebase
struct AHBOnboardingFlow_C_HandleNameHomebase_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed Retry
struct AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Retry_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Retries Exhausted
struct AHBOnboardingFlow_C_Handle_Client_Quest_Login_Retries_Exhausted_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelected
struct AHBOnboardingFlow_C_HandleClientEvent_SubGameSelected_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_OnRejoinGameAbandoned
struct AHBOnboardingFlow_C_HandleClientEvent_OnRejoinGameAbandoned_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCompanionAppOnboardingAbort
struct AHBOnboardingFlow_C_HandleCompanionAppOnboardingAbort_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNoEntitlement
struct AHBOnboardingFlow_C_HandleNoEntitlement_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleForcedLogout
struct AHBOnboardingFlow_C_HandleForcedLogout_Params
{
public:
	class FText                                  Reason_Title;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Reason;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
struct AHBOnboardingFlow_C_HandlePlayEventCine_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMobileManagementRestricted
struct AHBOnboardingFlow_C_HandleMobileManagementRestricted_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
struct AHBOnboardingFlow_C_HandleClientEvent_PlayEventMovie_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelection
struct AHBOnboardingFlow_C_HandleClientEvent_SubGameSelection_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_RejoinAvailable
struct AHBOnboardingFlow_C_HandleClientEvent_RejoinAvailable_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSubGameSelection
struct AHBOnboardingFlow_C_HandleSubGameSelection_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.ReenterFlow
struct AHBOnboardingFlow_C_ReenterFlow_Params
{
public:
};

// 0x790 (0x790 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
struct AHBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AutoSelectSubGame_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C96[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue1;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x48(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue12;                 // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue12;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue12;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue123;                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1234;               // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue12345;              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue123456;             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileApp_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1234567;            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileApp_ReturnValue1;                 // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue12345678;           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable;                                // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0xE8(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue123;                // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue123456789;          // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123;                   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1234;                  // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C9D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0x118(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345;         // 0x128(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456;        // 0x138(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue12345678910;        // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1234567891011;      // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileApp_ReturnValue12;                // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CanPlay_DenialReason;                     // 0x160(0x18)()
	bool                                         CallFunc_CanPlay_ReturnValue;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567;       // 0x180(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue1234;               // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue123456789101112;    // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue12345;                 // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678;      // 0x1A8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789;     // 0x1B8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910;   // 0x1C8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011; // 0x1D8(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4CA1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1F0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortClientAnnouncement*               CallFunc_FinishSpawningActor_ReturnValue;          // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue;    // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112; // 0x240(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue123456;                // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue12345678910111213;  // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213; // 0x260(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue12345;              // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array;                            // 0x278(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue1234567;               // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue1;               // 0x290(0x30)(IsPlainOldData, NoDestructor)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue123456;             // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314; // 0x2C8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue12345678;              // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CA5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415; // 0x2E0(0x10)(ZeroConstructor, NoDestructor)
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array1;                           // 0x2F0(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516; // 0x300(0x10)(ZeroConstructor, NoDestructor)
	class UFortQuestManager*                     CallFunc_GetCampaignQuestManager_QuestManager;     // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_SendQuestStatEvent*   CallFunc_SendClientStatEvent_ReturnValue;          // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123456789;             // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource12345;         // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus12345;          // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent12345;         // 0x338(0x20)(ConstParm, NoDestructor)
	uint8                                        Pad_4CA7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue12;              // 0x360(0x30)(IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1; // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortClientAnnouncement*               CallFunc_FinishSpawningActor_ReturnValue1;         // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue1;   // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue12345678910;           // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314151617; // 0x3B8(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x3C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1234567891011121314; // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIState                      CallFunc__BPGetCurrentUIState_ReturnValue;         // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CAA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue123456789101112131415; // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortHomeBaseInfo                     CallFunc_GetHomeBaseInfo_Result;                   // 0x3E8(0x40)()
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue1234567;            // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1234567891011;         // 0x432(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x433(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetCampaignQuestManager_QuestManager1;    // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_SendQuestStatEvent*   CallFunc_SendClientStatEvent_ReturnValue1;         // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123456789101112;       // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue1; // 0x449(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue12;                // 0x44A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue12; // 0x44B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue123;               // 0x44C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue123; // 0x44D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1234;              // 0x44E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x44F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue1;          // 0x450(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIState                      CallFunc__BPGetCurrentUIState_ReturnValue1;        // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415161718; // 0x460(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array12;                          // 0x478(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819; // 0x488(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               K2Node_HandleClientEvent_EventSource1234;          // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus1234;           // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent1234;          // 0x4A8(0x20)(ConstParm, NoDestructor)
	class UObject*                               K2Node_HandleClientEvent_EventSource123;           // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus123;            // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent123;           // 0x4D8(0x20)(ConstParm, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920; // 0x4F8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021; // 0x508(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122; // 0x518(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  K2Node_CustomEvent_Reason_Title;                   // 0x528(0x18)()
	class FText                                  K2Node_CustomEvent_Reason;                         // 0x540(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x558(0x18)()
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x578(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue12345678910111213;     // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12;            // 0x598(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue123;           // 0x5B0(0x18)()
	bool                                         CallFunc_Not_PreBool_ReturnValue12345;             // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223; // 0x5D0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NeedsToPlayEventMovie_ReturnValue;        // 0x5E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain; // 0x5E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain1; // 0x5E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1234;          // 0x5E8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12345;         // 0x600(0x18)()
	bool                                         CallFunc_CanAccessManagementFeatures_Can_Manage;   // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue123456;            // 0x619(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource12;            // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus12;             // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent12;            // 0x630(0x20)(ConstParm, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324; // 0x670(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_LoadCurrentSubgameProfiles* CallFunc_LoadCurrentSubgameProfiles_ReturnValue;   // 0x680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1234567891011121314;   // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122232425; // 0x690(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223242526; // 0x6A0(0x10)(ZeroConstructor, NoDestructor)
	class UFortQuestItem*                        CallFunc_GetOnboardingQuestItem_Result;            // 0x6B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123456789101112131415; // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        CallFunc_GetOnboardingQuestItem_Result1;           // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetCampaignQuestManager_QuestManager12;   // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue;   // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetCampaignQuestManager_QuestManager123;  // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_SendQuestStatEvent*   CallFunc_SendClientStatEvent_ReturnValue12;        // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue12345678910111213141516; // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1234567891011121314151617; // 0x6F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue1234; // 0x6F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource1;             // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus1;              // 0x700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent1;             // 0x708(0x20)(ConstParm, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12; // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue1;              // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortClientAnnouncement*               CallFunc_FinishSpawningActor_ReturnValue12;        // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x750(0x20)(ConstParm, NoDestructor)
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue12;  // 0x770(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123456789101112131415161718; // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324252627; // 0x780(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
