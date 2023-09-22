#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AlterationWidget.AlterationWidget_C.GetValidLazyTexture
struct UAlterationWidget_C_GetValidLazyTexture_Params
{
};

// Function AlterationWidget.AlterationWidget_C.HasValidTexture
struct UAlterationWidget_C_HasValidTexture_Params
{
	bool                                               ValidBrush;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationWidget.AlterationWidget_C.IsGamplaySlot
struct UAlterationWidget_C_IsGamplaySlot_Params
{
	class UFortAlterationItemDefinition*               Alteration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationWidget.AlterationWidget_C.TriggerTextAnimation
struct UAlterationWidget_C_TriggerTextAnimation_Params
{
};

// Function AlterationWidget.AlterationWidget_C.SetWidgetSettings
struct UAlterationWidget_C_SetWidgetSettings_Params
{
	bool                                               bInIncludeName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInIncludeShortDescription;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInIncludeDescription;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        InIconSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInUseLargeFormatName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InShouldShowRarity;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationWidget.AlterationWidget_C.InitLockedLayout
struct UAlterationWidget_C_InitLockedLayout_Params
{
};

// Function AlterationWidget.AlterationWidget_C.SetEvolutionDetails
struct UAlterationWidget_C_SetEvolutionDetails_Params
{
};

// Function AlterationWidget.AlterationWidget_C.UpdatePips
struct UAlterationWidget_C_UpdatePips_Params
{
};

// Function AlterationWidget.AlterationWidget_C.InitDescriptiveText
struct UAlterationWidget_C_InitDescriptiveText_Params
{
};

// Function AlterationWidget.AlterationWidget_C.InitIcon
struct UAlterationWidget_C_InitIcon_Params
{
};

// Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration
struct UAlterationWidget_C_ShouldFadeAlteration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AlterationWidget.AlterationWidget_C.GetHighlightColor
struct UAlterationWidget_C_GetHighlightColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AlterationWidget.AlterationWidget_C.OnSetup
struct UAlterationWidget_C_OnSetup_Params
{
};

// Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget
struct UAlterationWidget_C_ExecuteUbergraph_AlterationWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
