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

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetDisplayState
struct UHeroLoadoutActiveAbilityDetailRow_C_SetDisplayState_Params
{
	bool                                               ShowName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDescription;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseVerboseDescription;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetAbilityKit
struct UHeroLoadoutActiveAbilityDetailRow_C_SetAbilityKit_Params
{
	class UFortAbilityKit*                             AbilityKit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.IsAbilityUnlocked
struct UHeroLoadoutActiveAbilityDetailRow_C_IsAbilityUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.GetAbilityKit
struct UHeroLoadoutActiveAbilityDetailRow_C_GetAbilityKit_Params
{
	class UFortAbilityKit*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetHero
struct UHeroLoadoutActiveAbilityDetailRow_C_SetHero_Params
{
	class UFortHero*                                   Hero;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateTextStyles
struct UHeroLoadoutActiveAbilityDetailRow_C_UpdateTextStyles_Params
{
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromState
struct UHeroLoadoutActiveAbilityDetailRow_C_UpdateFromState_Params
{
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromStyle
struct UHeroLoadoutActiveAbilityDetailRow_C_UpdateFromStyle_Params
{
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.PreConstruct
struct UHeroLoadoutActiveAbilityDetailRow_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.Construct
struct UHeroLoadoutActiveAbilityDetailRow_C_Construct_Params
{
};

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow
struct UHeroLoadoutActiveAbilityDetailRow_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
