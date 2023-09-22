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

// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.AddWidgetClassToMapAndSwitcher
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<class UClass*, class UUserWidget*> WidgetMap                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWidgetSwitcher*         WidgetSwitcher                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UChallengeBundleCategoryHeader_C::AddWidgetClassToMapAndSwitcher(class UClass* WidgetClass, TMap<class UClass*, class UUserWidget*>* WidgetMap, class UWidgetSwitcher** WidgetSwitcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.AddWidgetClassToMapAndSwitcher");

	UChallengeBundleCategoryHeader_C_AddWidgetClassToMapAndSwitcher_Params params;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetMap != nullptr)
		*WidgetMap = params.WidgetMap;
	if (WidgetSwitcher != nullptr)
		*WidgetSwitcher = params.WidgetSwitcher;
}


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.InitEffectsWidgets
// (Protected, BlueprintCallable, BlueprintEvent)

void UChallengeBundleCategoryHeader_C::InitEffectsWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.InitEffectsWidgets");

	UChallengeBundleCategoryHeader_C_InitEffectsWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.ApplyStyle
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChallengeBundleCategoryHeaderStyleStruct Style                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeBundleCategoryHeader_C::ApplyStyle(struct FChallengeBundleCategoryHeaderStyleStruct Style)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.ApplyStyle");

	UChallengeBundleCategoryHeader_C_ApplyStyle_Params params;
	params.Style = Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.UpdateBundle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeBundleCategoryHeader_C::UpdateBundle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.UpdateBundle");

	UChallengeBundleCategoryHeader_C_UpdateBundle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeBundleCategoryHeader_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.PreConstruct");

	UChallengeBundleCategoryHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.OnBundleUpdated
// (Event, Protected, BlueprintEvent)

void UChallengeBundleCategoryHeader_C::OnBundleUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.OnBundleUpdated");

	UChallengeBundleCategoryHeader_C_OnBundleUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.ExecuteUbergraph_ChallengeBundleCategoryHeader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeBundleCategoryHeader_C::ExecuteUbergraph_ChallengeBundleCategoryHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.ExecuteUbergraph_ChallengeBundleCategoryHeader");

	UChallengeBundleCategoryHeader_C_ExecuteUbergraph_ChallengeBundleCategoryHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
