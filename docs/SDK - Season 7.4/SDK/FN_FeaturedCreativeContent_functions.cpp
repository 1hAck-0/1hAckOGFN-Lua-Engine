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

// Function FeaturedCreativeContent.FeaturedCreativeContent_C.OnSetMediaURLs
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FString>         MediaURLs                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFeaturedCreativeContent_C::OnSetMediaURLs(TArray<struct FString> MediaURLs)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeaturedCreativeContent.FeaturedCreativeContent_C.OnSetMediaURLs");

	UFeaturedCreativeContent_C_OnSetMediaURLs_Params params;
	params.MediaURLs = MediaURLs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeaturedCreativeContent.FeaturedCreativeContent_C.ExecuteUbergraph_FeaturedCreativeContent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeaturedCreativeContent_C::ExecuteUbergraph_FeaturedCreativeContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeaturedCreativeContent.FeaturedCreativeContent_C.ExecuteUbergraph_FeaturedCreativeContent");

	UFeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
