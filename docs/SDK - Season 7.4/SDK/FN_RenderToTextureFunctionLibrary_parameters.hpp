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

// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position
struct URenderToTextureFunctionLibrary_C_Set_Canvas_Material_Scale_and_Position_Params
{
	struct FVector2D                                   Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Screen_Position;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Screen_Size;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array
struct URenderToTextureFunctionLibrary_C_Array_to_HLSL_Int_Array_Params
{
	TEnumAsByte<EIntTypes>                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Variable_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           int2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             int3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        int4;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
