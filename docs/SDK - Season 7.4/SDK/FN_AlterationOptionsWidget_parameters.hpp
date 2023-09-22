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

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UnbindChildren
struct UAlterationOptionsWidget_C_UnbindChildren_Params
{
	class UPanelWidget*                                Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearAndUnbindOptions
struct UAlterationOptionsWidget_C_ClearAndUnbindOptions_Params
{
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.SetScrollWidget
struct UAlterationOptionsWidget_C_SetScrollWidget_Params
{
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ShouldShowNoOptions
struct UAlterationOptionsWidget_C_ShouldShowNoOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.DoAnyAlterationsExist
struct UAlterationOptionsWidget_C_DoAnyAlterationsExist_Params
{
	bool                                               OptionsExist;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.AddAlterationOptionWidget
struct UAlterationOptionsWidget_C_AddAlterationOptionWidget_Params
{
	EFortAlterationOptionType                          OptionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortAlterationOption*                       OptionWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearOptionsAndInitialize
struct UAlterationOptionsWidget_C_ClearOptionsAndInitialize_Params
{
	bool                                               bIntroAlteration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnItemChanged
struct UAlterationOptionsWidget_C_OnItemChanged_Params
{
	bool                                               bIntroAlterations;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnGenerateOption
struct UAlterationOptionsWidget_C_OnGenerateOption_Params
{
	EFortAlterationOptionType                          OptionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortAlterationOption*                       OptionWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.Destruct
struct UAlterationOptionsWidget_C_Destruct_Params
{
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnOptionSelected
struct UAlterationOptionsWidget_C_OnOptionSelected_Params
{
	class UCommonButton*                               SelectedOption;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ExecuteUbergraph_AlterationOptionsWidget
struct UAlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
