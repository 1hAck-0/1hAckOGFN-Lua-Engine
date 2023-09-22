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

// Function FortRadioButtonGroup.FortRadioButtonGroup_C.CenterOnWidget
struct UFortRadioButtonGroup_C_CenterOnWidget_Params
{
};

// Function FortRadioButtonGroup.FortRadioButtonGroup_C.OnButtonClicked_Bind
struct UFortRadioButtonGroup_C_OnButtonClicked_Bind_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortRadioButtonGroup.FortRadioButtonGroup_C.Destruct
struct UFortRadioButtonGroup_C_Destruct_Params
{
};

// Function FortRadioButtonGroup.FortRadioButtonGroup_C.UpdateButtons
struct UFortRadioButtonGroup_C_UpdateButtons_Params
{
};

// Function FortRadioButtonGroup.FortRadioButtonGroup_C.ExecuteUbergraph_FortRadioButtonGroup
struct UFortRadioButtonGroup_C_ExecuteUbergraph_FortRadioButtonGroup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortRadioButtonGroup.FortRadioButtonGroup_C.RadioButtonClicked_Event__DelegateSignature
struct UFortRadioButtonGroup_C_RadioButtonClicked_Event__DelegateSignature_Params
{
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
