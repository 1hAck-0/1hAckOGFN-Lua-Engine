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

// Function AthenaNews.AthenaNews_C.BeginIntroSequence
struct UAthenaNews_C_BeginIntroSequence_Params
{
};

// Function AthenaNews.AthenaNews_C.SingleItemConfiguration
struct UAthenaNews_C_SingleItemConfiguration_Params
{
};

// Function AthenaNews.AthenaNews_C.ResetViewConfiguration
struct UAthenaNews_C_ResetViewConfiguration_Params
{
};

// Function AthenaNews.AthenaNews_C.HandleNewsStyle
struct UAthenaNews_C_HandleNewsStyle_Params
{
	EAthenaNewsStyle                                   NewsStyle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
struct UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaNews.AthenaNews_C.UpdateStyle__DelegateSignature
struct UAthenaNews_C_UpdateStyle__DelegateSignature_Params
{
	EAthenaNewsStyle                                   NewStyle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
