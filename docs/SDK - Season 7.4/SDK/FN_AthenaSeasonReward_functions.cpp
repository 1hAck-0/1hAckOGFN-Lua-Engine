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

// Function AthenaSeasonReward.AthenaSeasonReward_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::GetItem(class UFortItem** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.GetItem");

	UAthenaSeasonReward_C_GetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.SetupQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::SetupQuantity(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.SetupQuantity");

	UAthenaSeasonReward_C_SetupQuantity_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ResetVariantToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::ResetVariantToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ResetVariantToDefault");

	UAthenaSeasonReward_C_ResetVariantToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.GetTemporaryItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FFortCosmeticVariantPreviewElement> Cosmetics                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortItem*>       Temporary_Items                (Parm, OutParm, ZeroConstructor)

void UAthenaSeasonReward_C::GetTemporaryItems(TArray<struct FFortCosmeticVariantPreviewElement>* Cosmetics, TArray<class UFortItem*>* Temporary_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.GetTemporaryItems");

	UAthenaSeasonReward_C_GetTemporaryItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cosmetics != nullptr)
		*Cosmetics = params.Cosmetics;
	if (Temporary_Items != nullptr)
		*Temporary_Items = params.Temporary_Items;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.CancelVariantTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::CancelVariantTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.CancelVariantTimer");

	UAthenaSeasonReward_C_CancelVariantTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.StartVariantTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OverrideTimer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::StartVariantTimer(float OverrideTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.StartVariantTimer");

	UAthenaSeasonReward_C_StartVariantTimer_Params params;
	params.OverrideTimer = OverrideTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.GetAthenaItemCharacterItemDefinition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaCharacterItemDefinition* AsAthena_Character_Item_Definition (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::GetAthenaItemCharacterItemDefinition(class UAthenaCharacterItemDefinition** AsAthena_Character_Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.GetAthenaItemCharacterItemDefinition");

	UAthenaSeasonReward_C_GetAthenaItemCharacterItemDefinition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsAthena_Character_Item_Definition != nullptr)
		*AsAthena_Character_Item_Definition = params.AsAthena_Character_Item_Definition;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.OnVaultItemsChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaSeasonReward_C::OnVaultItemsChanged(TArray<class UFortItem*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.OnVaultItemsChanged");

	UAthenaSeasonReward_C_OnVaultItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ShowNextVariant
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::ShowNextVariant()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ShowNextVariant");

	UAthenaSeasonReward_C_ShowNextVariant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.StopCyclingVariants
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::StopCyclingVariants()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.StopCyclingVariants");

	UAthenaSeasonReward_C_StopCyclingVariants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.BeginCyclingVariants
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::BeginCyclingVariants()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.BeginCyclingVariants");

	UAthenaSeasonReward_C_BeginCyclingVariants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVaultByUser
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::ViewInVaultByUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVaultByUser");

	UAthenaSeasonReward_C_ViewInVaultByUser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVault
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       Additional_Items               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaSeasonReward_C::ViewInVault(TArray<class UFortItem*> Additional_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVault");

	UAthenaSeasonReward_C_ViewInVault_Params params;
	params.Additional_Items = Additional_Items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.SetSecondaryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               SecondaryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::SetSecondaryItem(class UFortItem* SecondaryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.SetSecondaryItem");

	UAthenaSeasonReward_C_SetSecondaryItem_Params params;
	params.SecondaryItem = SecondaryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.EnableRarityFlare
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::EnableRarityFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.EnableRarityFlare");

	UAthenaSeasonReward_C_EnableRarityFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.SetViewOnHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldViewOnHover              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::SetViewOnHover(bool ShouldViewOnHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.SetViewOnHover");

	UAthenaSeasonReward_C_SetViewOnHover_Params params;
	params.ShouldViewOnHover = ShouldViewOnHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Claimed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelAchieved                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOwned                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::SetState(bool Claimed, bool Locked, bool LevelAchieved, bool bOwned)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.SetState");

	UAthenaSeasonReward_C_SetState_Params params;
	params.Claimed = Claimed;
	params.Locked = Locked;
	params.LevelAchieved = LevelAchieved;
	params.bOwned = bOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               InItemToRepresent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Claimed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelAchieved                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOwned                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortItemCardSize              ItemCardSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::Setup(class UFortItem* InItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved, bool bOwned, EFortItemCardSize ItemCardSize, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.Setup");

	UAthenaSeasonReward_C_Setup_Params params;
	params.InItemToRepresent = InItemToRepresent;
	params.Claimed = Claimed;
	params.Locked = Locked;
	params.LevelAchieved = LevelAchieved;
	params.bOwned = bOwned;
	params.ItemCardSize = ItemCardSize;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonReward_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnHovered");

	UAthenaSeasonReward_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.PlayIntro");

	UAthenaSeasonReward_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewItem
// (BlueprintCallable, BlueprintEvent)

void UAthenaSeasonReward_C::ViewItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ViewItem");

	UAthenaSeasonReward_C_ViewItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonReward_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnClicked");

	UAthenaSeasonReward_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::ExecuteUbergraph_AthenaSeasonReward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward");

	UAthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
