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

// Function EsportsCameraClient.EsportsCameraClient.SetDynamicMaterial
struct AEsportsCameraClient_SetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EsportsCameraClient.EsportsCameraClient.IsPlayingWebMovie
struct AEsportsCameraClient_IsPlayingWebMovie_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EsportsCameraClient.EsportsCameraClient.IsPlatformEnabled
struct AEsportsCameraClient_IsPlatformEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EsportsCameraClient.EsportsCameraClient.HasDynamicMaterial
struct AEsportsCameraClient_HasDynamicMaterial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EsportsCameraClient.EsportsCameraStatusBase.FollowedPlayerChanged
struct UEsportsCameraStatusBase_FollowedPlayerChanged_Params
{
	class AEsportsCameraClient*                        InEsportsCameraClient;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
