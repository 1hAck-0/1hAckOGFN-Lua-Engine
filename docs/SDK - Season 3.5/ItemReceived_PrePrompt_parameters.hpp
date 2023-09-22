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
// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.LargeImageLoaded
struct UItemReceived_PrePrompt_C_LargeImageLoaded_Params
{
public:
	class UObject*                               Obj;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.UpdateFromGiftBoxItem
struct UItemReceived_PrePrompt_C_UpdateFromGiftBoxItem_Params
{
public:
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x0(0x18)()
	class UFortGiftBoxItemDefinition*            CallFunc_GetGiftBoxDefinition_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x20(0x18)()
	class FText                                  CallFunc_FormatTextUsingParams_ReturnValue;        // 0x38(0x18)()
};

// 0x8 (0x8 - 0x0)
// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
struct UItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnActivated
struct UItemReceived_PrePrompt_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnGiftBoxItemSet
struct UItemReceived_PrePrompt_C_OnGiftBoxItemSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.CustomEvent_0
struct UItemReceived_PrePrompt_C_CustomEvent_0_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.ExecuteUbergraph_ItemReceived_PrePrompt
struct UItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemReceived_Base_C*                  CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue1;          // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.PreTest__DelegateSignature
struct UItemReceived_PrePrompt_C_PreTest__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
