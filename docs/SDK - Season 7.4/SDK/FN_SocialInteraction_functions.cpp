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

// Function SocialInteraction.SocialInteraction_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialInteraction_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialInteraction.SocialInteraction_C.BP_OnHovered");

	USocialInteraction_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialInteraction.SocialInteraction_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialInteraction_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialInteraction.SocialInteraction_C.BP_OnUnhovered");

	USocialInteraction_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialInteraction.SocialInteraction_C.OnInteractionSet
// (Event, Protected, BlueprintEvent)

void USocialInteraction_C::OnInteractionSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialInteraction.SocialInteraction_C.OnInteractionSet");

	USocialInteraction_C_OnInteractionSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialInteraction_C::ExecuteUbergraph_SocialInteraction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction");

	USocialInteraction_C_ExecuteUbergraph_SocialInteraction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
