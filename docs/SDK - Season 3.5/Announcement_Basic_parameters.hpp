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
// Function Announcement_Basic.Announcement_Basic_C.UpdateWidgetData
struct UAnnouncement_Basic_C_UpdateWidgetData_Params
{
public:
	class AFortClientAnnouncement*               Announcement;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Announcement_Basic.Announcement_Basic_C.Construct
struct UAnnouncement_Basic_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Announcement_Basic.Announcement_Basic_C.AnnouncementStopped
struct UAnnouncement_Basic_C_AnnouncementStopped_Params
{
public:
	class AFortClientAnnouncement*               Announcement;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6D (0x6D - 0x0)
// Function Announcement_Basic.Announcement_Basic_C.ExecuteUbergraph_Announcement_Basic
struct UAnnouncement_Basic_C_ExecuteUbergraph_Announcement_Basic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D41[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D42[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortClientAnnouncement*               K2Node_Event_Announcement1;                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortClientAnnouncement_Basic*         K2Node_DynamicCast_AsFort_Client_Announcement_Basic; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue1;                 // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue12;                // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  K2Node_Select_Default;                             // 0x30(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue123;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D43[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetBrushResource_ReturnValue;             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D44[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortClientAnnouncement*               K2Node_Event_Announcement;                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable12;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable123;                             // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select12_Default;                           // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
