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

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.UpdateQuest
struct AB_Prj_Athena_SneakySnowman_C_UpdateQuest_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.ShouldApplySnowman?
struct AB_Prj_Athena_SneakySnowman_C_ShouldApplySnowman__Params
{
	class UObject*                                     PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.Should Bounce?
struct AB_Prj_Athena_SneakySnowman_C_Should_Bounce__Params
{
	struct FVector                                     Hit_Normal;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.UserConstructionScript
struct AB_Prj_Athena_SneakySnowman_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.ReceiveBeginPlay
struct AB_Prj_Athena_SneakySnowman_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.OnStop
struct AB_Prj_Athena_SneakySnowman_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.OnExploded
struct AB_Prj_Athena_SneakySnowman_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.OnTouched
struct AB_Prj_Athena_SneakySnowman_C_OnTouched_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.Explode
struct AB_Prj_Athena_SneakySnowman_C_Explode_Params
{
};

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.ExecuteUbergraph_B_Prj_Athena_SneakySnowman
struct AB_Prj_Athena_SneakySnowman_C_ExecuteUbergraph_B_Prj_Athena_SneakySnowman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
