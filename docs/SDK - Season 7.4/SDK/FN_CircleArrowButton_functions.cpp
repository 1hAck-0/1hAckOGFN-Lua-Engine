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

// Function CircleArrowButton.CircleArrowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircleArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleArrowButton.CircleArrowButton_C.PreConstruct");

	UCircleArrowButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UCircleArrowButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered");

	UCircleArrowButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UCircleArrowButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered");

	UCircleArrowButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UCircleArrowButton_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked");

	UCircleArrowButton_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircleArrowButton_C::ExecuteUbergraph_CircleArrowButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton");

	UCircleArrowButton_C_ExecuteUbergraph_CircleArrowButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
