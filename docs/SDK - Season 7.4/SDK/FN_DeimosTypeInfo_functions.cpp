// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeimosTypeInfo.DeimosTypeInfo_C.GetEnemyColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDeimosTypeInfo_C::GetEnemyColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeimosTypeInfo.DeimosTypeInfo_C.GetEnemyColor");

	UDeimosTypeInfo_C_GetEnemyColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
