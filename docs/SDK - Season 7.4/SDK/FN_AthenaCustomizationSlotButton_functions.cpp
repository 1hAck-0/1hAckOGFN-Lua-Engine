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

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.SetCardSizeAndSlotImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemCardSize              CardSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             SlotImage                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaCustomizationSlotButton_C::SetCardSizeAndSlotImage(EFortItemCardSize CardSize, struct FSlateBrush SlotImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.SetCardSizeAndSlotImage");

	UAthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage_Params params;
	params.CardSize = CardSize;
	params.SlotImage = SlotImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationSlotButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct");

	UAthenaCustomizationSlotButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCustomizationSlotButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct");

	UAthenaCustomizationSlotButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationSlotButton_C::ExecuteUbergraph_AthenaCustomizationSlotButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton");

	UAthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
