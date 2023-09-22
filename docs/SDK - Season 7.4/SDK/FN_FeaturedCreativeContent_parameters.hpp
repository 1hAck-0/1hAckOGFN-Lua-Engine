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

// Function FeaturedCreativeContent.FeaturedCreativeContent_C.OnSetMediaURLs
struct UFeaturedCreativeContent_C_OnSetMediaURLs_Params
{
	TArray<struct FString>                             MediaURLs;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FeaturedCreativeContent.FeaturedCreativeContent_C.ExecuteUbergraph_FeaturedCreativeContent
struct UFeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
