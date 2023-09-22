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

// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.CenterEvolutionAtIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::CenterEvolutionAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.CenterEvolutionAtIndex");

	UItemInspectEvolutionConfirmation_C_CenterEvolutionAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.RefreshEvolution
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::RefreshEvolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.RefreshEvolution");

	UItemInspectEvolutionConfirmation_C_RefreshEvolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.GetMissingCatalystRestrictionDescription
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Description                    (Parm, OutParm)

void UItemInspectEvolutionConfirmation_C::GetMissingCatalystRestrictionDescription(struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.GetMissingCatalystRestrictionDescription");

	UItemInspectEvolutionConfirmation_C_GetMissingCatalystRestrictionDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Description != nullptr)
		*Description = params.Description;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionRestrictions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::SetEvolutionRestrictions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionRestrictions");

	UItemInspectEvolutionConfirmation_C_SetEvolutionRestrictions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ClearEvolutionRepresented
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::ClearEvolutionRepresented()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ClearEvolutionRepresented");

	UItemInspectEvolutionConfirmation_C_ClearEvolutionRepresented_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnShow");

	UItemInspectEvolutionConfirmation_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HideEvolutionOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::HideEvolutionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HideEvolutionOptions");

	UItemInspectEvolutionConfirmation_C_HideEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ShowEvolutionOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::ShowEvolutionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ShowEvolutionOptions");

	UItemInspectEvolutionConfirmation_C_ShowEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.GetNumEvolutionOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumRecipes                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::GetNumEvolutionOptions(int* NumRecipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.GetNumEvolutionOptions");

	UItemInspectEvolutionConfirmation_C_GetNumEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumRecipes != nullptr)
		*NumRecipes = params.NumRecipes;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetupEvolutionOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::SetupEvolutionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetupEvolutionOptions");

	UItemInspectEvolutionConfirmation_C_SetupEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::HandleEvolutionOptionSelected(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionSelected");

	UItemInspectEvolutionConfirmation_C_HandleEvolutionOptionSelected_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EvolutionIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               EvolutionItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::SetEvolutionToRepresent(int EvolutionIndex, class UFortItem* EvolutionItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionToRepresent");

	UItemInspectEvolutionConfirmation_C_SetEvolutionToRepresent_Params params;
	params.EvolutionIndex = EvolutionIndex;
	params.EvolutionItem = EvolutionItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetItemToRepresent");

	UItemInspectEvolutionConfirmation_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.DialogResult_D643FF8B4C03A0C777FC1C918A1D1431
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::DialogResult_D643FF8B4C03A0C777FC1C918A1D1431(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.DialogResult_D643FF8B4C03A0C777FC1C918A1D1431");

	UItemInspectEvolutionConfirmation_C_DialogResult_D643FF8B4C03A0C777FC1C918A1D1431_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.DialogResult");

	UItemInspectEvolutionConfirmation_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent");

	UItemInspectEvolutionConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectEvolutionConfirmation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.Construct");

	UItemInspectEvolutionConfirmation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ExecuteUbergraph_ItemInspectEvolutionConfirmation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::ExecuteUbergraph_ItemInspectEvolutionConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ExecuteUbergraph_ItemInspectEvolutionConfirmation");

	UItemInspectEvolutionConfirmation_C_ExecuteUbergraph_ItemInspectEvolutionConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionSelected__DelegateSignature");

	UItemInspectEvolutionConfirmation_C_OnEvolutionOptionSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::OnEvolutionOptionUnhovered__DelegateSignature(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature");

	UItemInspectEvolutionConfirmation_C_OnEvolutionOptionUnhovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::OnEvolutionOptionHovered__DelegateSignature(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionHovered__DelegateSignature");

	UItemInspectEvolutionConfirmation_C_OnEvolutionOptionHovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToEvolve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EvolutionIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionConfirmation_C::OnEvolutionConfirm__DelegateSignature(class UFortItem* ItemToEvolve, int EvolutionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionConfirm__DelegateSignature");

	UItemInspectEvolutionConfirmation_C_OnEvolutionConfirm__DelegateSignature_Params params;
	params.ItemToEvolve = ItemToEvolve;
	params.EvolutionIndex = EvolutionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
