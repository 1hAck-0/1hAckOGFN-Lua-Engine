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

// Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.FormatItemDisplayTags
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FText>           TagTexts                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   FormatedText                   (Parm, OutParm)

void UItemDetailsHeaderKeywordsListText_C::FormatItemDisplayTags(TArray<struct FText>* TagTexts, struct FText* FormatedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.FormatItemDisplayTags");

	UItemDetailsHeaderKeywordsListText_C_FormatItemDisplayTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagTexts != nullptr)
		*TagTexts = params.TagTexts;
	if (FormatedText != nullptr)
		*FormatedText = params.FormatedText;
}


// Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeaderKeywordsListText_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.HandlePostDifferentItemToDetailSet");

	UItemDetailsHeaderKeywordsListText_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeaderKeywordsListText_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.HandlePostDifferentItemToCompareWithSet");

	UItemDetailsHeaderKeywordsListText_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.ExecuteUbergraph_ItemDetailsHeaderKeywordsListText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsHeaderKeywordsListText_C::ExecuteUbergraph_ItemDetailsHeaderKeywordsListText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.ExecuteUbergraph_ItemDetailsHeaderKeywordsListText");

	UItemDetailsHeaderKeywordsListText_C_ExecuteUbergraph_ItemDetailsHeaderKeywordsListText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
