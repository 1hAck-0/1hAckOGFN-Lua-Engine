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

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetData
struct UMissionDetailsModifierRow_C_SetData_Params
{
	struct FText                                       In_Name;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               In_Show_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      In_Name_Text_Style;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       In_Description;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               In_Show_Description;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      In_Desc_Text_Style;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  In_Icon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               In_Use_Small_Icon;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetIconAsset
struct UMissionDetailsModifierRow_C_SetIconAsset_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetIcon
struct UMissionDetailsModifierRow_C_SetIcon_Params
{
	class UTexture2D*                                  In_Icon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetUseSmallIcon
struct UMissionDetailsModifierRow_C_SetUseSmallIcon_Params
{
	bool                                               In_Use;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateDescriptionTextStyle
struct UMissionDetailsModifierRow_C_UpdateDescriptionTextStyle_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescriptionTextStyle
struct UMissionDetailsModifierRow_C_SetDescriptionTextStyle_Params
{
	class UClass*                                      In_Style;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateShowDescription
struct UMissionDetailsModifierRow_C_UpdateShowDescription_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowDescription
struct UMissionDetailsModifierRow_C_SetShowDescription_Params
{
	bool                                               In_Show;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescription
struct UMissionDetailsModifierRow_C_SetDescription_Params
{
	struct FText                                       In_Description;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateNameTextStyle
struct UMissionDetailsModifierRow_C_UpdateNameTextStyle_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateShowName
struct UMissionDetailsModifierRow_C_UpdateShowName_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetNameTextStyle
struct UMissionDetailsModifierRow_C_SetNameTextStyle_Params
{
	class UClass*                                      In_Style;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowName
struct UMissionDetailsModifierRow_C_SetShowName_Params
{
	bool                                               In_Show;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetName
struct UMissionDetailsModifierRow_C_SetName_Params
{
	struct FText                                       In_Name;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateIcon
struct UMissionDetailsModifierRow_C_UpdateIcon_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateDescription
struct UMissionDetailsModifierRow_C_UpdateDescription_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateName
struct UMissionDetailsModifierRow_C_UpdateName_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Show Label
struct UMissionDetailsModifierRow_C_Show_Label_Params
{
	bool                                               ShowLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
struct UMissionDetailsModifierRow_C_PlayIntroAnimation_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Update
struct UMissionDetailsModifierRow_C_Update_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
struct UMissionDetailsModifierRow_C_Construct_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
struct UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
