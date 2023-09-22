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

// 0x8 (0x8 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.SetTopBar
struct UAthenaTabsScreen_C_SetTopBar_Params
{
public:
	class UTopBar_C*                             InTopbar;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabSelected
struct UAthenaTabsScreen_C_HandleTabSelected_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabCreated
struct UAthenaTabsScreen_C_HandleTabCreated_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                      K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4448[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x28(0x18)()
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1;         // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4449[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable1;                              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_444A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.OnActivated
struct UAthenaTabsScreen_C_OnActivated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
struct UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
struct UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.OnDeactivated
struct UAthenaTabsScreen_C_OnDeactivated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabContentCreated
struct UAthenaTabsScreen_C_HandleTabContentCreated_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                     TabWidget;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature
struct UAthenaTabsScreen_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.Construct
struct UAthenaTabsScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__Social_K2Node_ComponentBoundEvent_89_CommonButtonClicked__DelegateSignature
struct UAthenaTabsScreen_C_BndEvt__Social_K2Node_ComponentBoundEvent_89_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.PreConstruct
struct UAthenaTabsScreen_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.OnActiveFriendsCountUpdated
struct UAthenaTabsScreen_C_OnActiveFriendsCountUpdated_Params
{
public:
	int32                                        ActiveFriendsCount;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.DisableTabsHotfixedOffTabs
struct UAthenaTabsScreen_C_DisableTabsHotfixedOffTabs_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         NewParam;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E3 (0x2E3 - 0x0)
// Function AthenaTabsScreen.AthenaTabsScreen_C.ExecuteUbergraph_AthenaTabsScreen
struct UAthenaTabsScreen_C_ExecuteUbergraph_AthenaTabsScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_444B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue; // 0x10(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class FName                                  K2Node_CustomEvent_TabId1;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                     K2Node_CustomEvent_TabWidget;                      // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_Root_C*                     K2Node_DynamicCast_AsStore_Main_Root;              // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_444C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_444D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	class UHorizontalTabList_C*                  K2Node_DynamicCast_AsHorizontal_Tab_List;          // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_444E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalTabList_C*                  K2Node_DynamicCast_AsHorizontal_Tab_List1;         // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_444F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue1;     // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4450[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xB0(0x10)(IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin1;                         // 0xC0(0x10)(IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xD8(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1;                     // 0x100(0x28)()
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTabListRegistrationInfo          CallFunc_GetPreregisteredTabInfo_OutTabInfo;       // 0x130(0xC8)(ContainsInstancedReference)
	bool                                         CallFunc_GetPreregisteredTabInfo_ReturnValue;      // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4451[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId1;                 // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0x208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                      K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess123;                    // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1;         // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue12;        // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x21B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4452[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x220(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x228(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4453[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalTabList_C*                  K2Node_DynamicCast_AsHorizontal_Tab_List12;        // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1234;                   // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4454[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalTabList_C*                  K2Node_DynamicCast_AsHorizontal_Tab_List123;       // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12345;                  // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4455[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ActiveFriendsCount;             // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4456[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortSocialItem*>               CallFunc_GetActiveFriendsList_OutActiveFriends;    // 0x270(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x280(0x18)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4457[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue1;              // 0x2A0(0x18)()
	class FName                                  K2Node_CustomEvent_TabId;                          // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_NewParam;                       // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortLeaderboardContext*               CallFunc_GetContext_ReturnValue1;                  // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanShowLeaderboards_ReturnValue;          // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue123;       // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4458[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue12;                 // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
