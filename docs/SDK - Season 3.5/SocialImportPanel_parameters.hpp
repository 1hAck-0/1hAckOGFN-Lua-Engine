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
// Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened
struct USocialImportPanel_C_OnLauncherImportOpened_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested
struct USocialImportPanel_C_OnClaimViewRequested_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested
struct USocialImportPanel_C_OnImportViewRequested_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested
struct USocialImportPanel_C_OnWaitingViewRequested_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet
struct USocialImportPanel_C_OnPanelTypeSet_Params
{
public:
	enum class ESocialImportPanelType            NewType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnActivated
struct USocialImportPanel_C_OnActivated_Params
{
public:
};

// 0x27C (0x27C - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel
struct USocialImportPanel_C_ExecuteUbergraph_SocialImportPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelType            Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelPlatform        Temp_byte_Variable1;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47B1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable1;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelPlatform        Temp_byte_Variable12;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x38(0x18)()
	enum class ESocialImportPanelPlatform        Temp_byte_Variable123;                             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable12;                              // 0x58(0x18)()
	class FText                                  Temp_text_Variable123;                             // 0x70(0x18)()
	enum class ESocialImportPanelPlatform        Temp_byte_Variable1234;                            // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelType            K2Node_Event_NewType;                              // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESocialImportPanelPlatform        CallFunc_GetSocialPlatform_ReturnValue;            // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select1_Default;                            // 0x98(0x18)()
	class FText                                  K2Node_Select12_Default;                           // 0xB0(0x18)()
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0xC8(0x88)()
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue1;        // 0x160(0x88)()
	struct FSlateBrush                           K2Node_Select123_Default;                          // 0x1E8(0x88)()
	int32                                        Temp_int_Variable;                                 // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select1234_Default;                         // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
