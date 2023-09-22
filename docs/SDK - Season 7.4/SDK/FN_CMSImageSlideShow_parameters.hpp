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

// Function CMSImageSlideShow.CMSImageSlideShow_C.SetMediaURLs
struct UCMSImageSlideShow_C_SetMediaURLs_Params
{
	TArray<struct FString>                             MediaURLs;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CMSImageSlideShow.CMSImageSlideShow_C.ExecuteUbergraph_CMSImageSlideShow
struct UCMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
