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

// 0x0 (0x0 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.CancelRename
struct UAthenaReplayBrowserRenameDialog_C_CancelRename_Params
{
public:
};

// 0x218 (0x218 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.TapToClose
struct UAthenaReplayBrowserRenameDialog_C_TapToClose_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
};

// 0x1 (0x1 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.PreConstruct
struct UAthenaReplayBrowserRenameDialog_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnActivated
struct UAthenaReplayBrowserRenameDialog_C_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x19 (0x19 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x83 (0x83 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.ExecuteUbergraph_AthenaReplayBrowserRenameDialog
struct UAthenaReplayBrowserRenameDialog_C_ExecuteUbergraph_AthenaReplayBrowserRenameDialog_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4333[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x28(0x18)()
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_Text1;                  // 0x48(0x18)(ConstParm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4334[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x68(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue1;                 // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnCancelRename__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_OnCancelRename__DelegateSignature_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnConfirmRename__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_OnConfirmRename__DelegateSignature_Params
{
public:
	class UAthenaReplayBrowserRowProxyInstance*  BrowserRowProxy;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  NewName;                                           // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
