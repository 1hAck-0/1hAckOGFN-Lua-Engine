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

// 0x40 (0x40 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions
struct UTabVideoOptions_C_Initialize_Display_Resolutions_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)()
	TArray<class FText>                          CallFunc_GetPossibleDisplayResolutions_ReturnValue; // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x28(0x18)()
};

// 0x84 (0x84 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Update Data
struct UTabVideoOptions_C_Update_Data_Params
{
public:
	bool                                         Reset_Quality_Selector;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x20(0x18)()
	int32                                        CallFunc_GetOverallQualityLevel_ReturnValue;       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentFPS_ReturnValue;                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWindowedFullscreen_ReturnValue;         // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBROnly_ReturnValue1;                    // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentDisplayResolution_ReturnValue;  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentWindowMode_ReturnValue;         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetShowFPS_ReturnValue;                   // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetShowGrass_ReturnValue;                 // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CAA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue1;              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMotionBlur_ReturnValue;                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseVsync_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CAB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue12;             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue123;            // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPostProcessQuality_ReturnValue;        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetEffectsQuality_ReturnValue;            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTextureQuality_ReturnValue;            // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewDistanceQuality_ReturnValue;       // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x318 (0x318 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Initialize Data
struct UTabVideoOptions_C_Initialize_Data_Params
{
public:
	TArray<class FText>                          NewLocalVar_0;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array1;                           // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array12;                          // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array123;                         // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x50(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x68(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12;            // 0x80(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue123;           // 0x98(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1234;          // 0xB0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12345;         // 0xC8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue123456;        // 0xE0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1234567;       // 0xF8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12345678;      // 0x110(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue123456789;     // 0x128(0x18)()
	TArray<class FText>                          CallFunc_GetPossibleFPS_ReturnValue;               // 0x140(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          CallFunc_GetPossibleWindowModes_ReturnValue;       // 0x150(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12345678910;   // 0x160(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1234567891011; // 0x178(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array1234;                        // 0x190(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array12345;                       // 0x1A0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue123456789101112; // 0x1B0(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array123456;                      // 0x1C8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array1234567;                     // 0x1D8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array12345678;                    // 0x1E8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array123456789;                   // 0x1F8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array12345678910;                 // 0x208(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array1234567891011;               // 0x218(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array123456789101112;             // 0x228(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12345678910111213; // 0x238(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array12345678910111213;           // 0x250(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1234567891011121314; // 0x260(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array1234567891011121314;         // 0x278(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue123456789101112131415; // 0x288(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array123456789101112131415;       // 0x2A0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12345678910111213141516; // 0x2B0(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array12345678910111213141516;     // 0x2C8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1234567891011121314151617; // 0x2D8(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array1234567891011121314151617;   // 0x2F0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue123456789101112131415161718; // 0x300(0x18)()
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Shadows Changed
struct UTabVideoOptions_C_Shadows_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed
struct UTabVideoOptions_C_Anti_Aliasing_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Textures Changed
struct UTabVideoOptions_C_Textures_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed
struct UTabVideoOptions_C_Post_Processing_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Effects Changed
struct UTabVideoOptions_C_Effects_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
struct UTabVideoOptions_C_Quality_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab
struct UTabVideoOptions_C_UpdateOptionsTab_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed
struct UTabVideoOptions_C_Window_Mode__Changed_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_22
struct UTabVideoOptions_C_CustomEvent_22_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23
struct UTabVideoOptions_C_CustomEvent_23_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.View Distance Changed
struct UTabVideoOptions_C_View_Distance_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Construct
struct UTabVideoOptions_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CenterOnTab
struct UTabVideoOptions_C_CenterOnTab_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.VSync Changed
struct UTabVideoOptions_C_VSync_Changed_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed
struct UTabVideoOptions_C_Motion_Blur_Changed_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CustomEvent
struct UTabVideoOptions_C_CustomEvent_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_1
struct UTabVideoOptions_C_CustomEvent_1_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.PreConstruct
struct UTabVideoOptions_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.3D Resolution Changed
struct UTabVideoOptions_C__3D_Resolution_Changed_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.OnGameUserSettingsUINeedsUpdate
struct UTabVideoOptions_C_OnGameUserSettingsUINeedsUpdate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Destruct
struct UTabVideoOptions_C_Destruct_Params
{
public:
};

// 0x1C8 (0x1C8 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
struct UTabVideoOptions_C_ExecuteUbergraph_TabVideoOptions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentWindowMode_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CAD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x38(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x48(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0x58(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable123;                             // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CAE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345;         // 0x70(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456;        // 0x80(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_Tab_Id123456;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id12345;                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id1234;                     // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id123;                      // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id12;                       // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id1;                        // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index123456;           // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWindowedFullscreen_ReturnValue;         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index12345;            // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index1234;             // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567;       // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_GetCurrentDisplayResolution_ReturnValue;  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678;      // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789;     // 0xE8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_Tab_Id;                         // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910;   // 0x100(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_Selected_Index123;              // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index12;               // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue1;              // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index1;                // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue12;             // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index;                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue123;            // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011; // 0x130(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112; // 0x140(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213; // 0x150(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314; // 0x160(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415; // 0x170(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x188(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x198(0x18)()
	bool                                         CallFunc_IsAthena_ReturnValue;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x1B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_CustomEvent_Slider_Value;                   // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue1;         // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature
struct UTabVideoOptions_C_Disable_Overlay__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature
struct UTabVideoOptions_C_Enable_Overlay__DelegateSignature_Params
{
public:
	bool                                         Accept_Input;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
