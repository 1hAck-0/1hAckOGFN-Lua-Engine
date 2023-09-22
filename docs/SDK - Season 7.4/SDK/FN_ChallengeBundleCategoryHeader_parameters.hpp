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

// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.AddWidgetClassToMapAndSwitcher
struct UChallengeBundleCategoryHeader_C_AddWidgetClassToMapAndSwitcher_Params
{
	class UClass*                                      WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<class UClass*, class UUserWidget*>            WidgetMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWidgetSwitcher*                             WidgetSwitcher;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.InitEffectsWidgets
struct UChallengeBundleCategoryHeader_C_InitEffectsWidgets_Params
{
};

// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.ApplyStyle
struct UChallengeBundleCategoryHeader_C_ApplyStyle_Params
{
	struct FChallengeBundleCategoryHeaderStyleStruct   Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.UpdateBundle
struct UChallengeBundleCategoryHeader_C_UpdateBundle_Params
{
};

// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.PreConstruct
struct UChallengeBundleCategoryHeader_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.OnBundleUpdated
struct UChallengeBundleCategoryHeader_C_OnBundleUpdated_Params
{
};

// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.ExecuteUbergraph_ChallengeBundleCategoryHeader
struct UChallengeBundleCategoryHeader_C_ExecuteUbergraph_ChallengeBundleCategoryHeader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
