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

// Function CMSImage.CMSImage_C.SetMediaURL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MediaUrl                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCMSImage_C::SetMediaURL(struct FString MediaUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMSImage.CMSImage_C.SetMediaURL");

	UCMSImage_C_SetMediaURL_Params params;
	params.MediaUrl = MediaUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
