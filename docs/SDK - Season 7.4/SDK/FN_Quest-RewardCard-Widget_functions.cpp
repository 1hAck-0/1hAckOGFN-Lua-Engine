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

// Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.GetMaterialFromRewardItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UQuest_RewardCard_Widget_C::GetMaterialFromRewardItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.GetMaterialFromRewardItem");

	UQuest_RewardCard_Widget_C_GetMaterialFromRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.Card Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UQuest_RewardCard_Widget_C::Card_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.Card Initialize");

	UQuest_RewardCard_Widget_C_Card_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.Item-DataPolpulate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuest_RewardCard_Widget_C::Item_DataPolpulate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.Item-DataPolpulate");

	UQuest_RewardCard_Widget_C_Item_DataPolpulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.Item-Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UQuest_RewardCard_Widget_C::Item_Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.Item-Setup");

	UQuest_RewardCard_Widget_C_Item_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuest_RewardCard_Widget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.PreConstruct");

	UQuest_RewardCard_Widget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.ExecuteUbergraph_Quest-RewardCard-Widget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuest_RewardCard_Widget_C::ExecuteUbergraph_Quest_RewardCard_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest-RewardCard-Widget.Quest-RewardCard-Widget_C.ExecuteUbergraph_Quest-RewardCard-Widget");

	UQuest_RewardCard_Widget_C_ExecuteUbergraph_Quest_RewardCard_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
