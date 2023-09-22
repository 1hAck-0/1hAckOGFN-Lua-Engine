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

// Function ItemWindow.ItemWindow_C.GetPeopleName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               InfoItemInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UItemWindow_C::GetPeopleName(class UFortItem* InfoItemInstance, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.GetPeopleName");

	UItemWindow_C_GetPeopleName_Params params;
	params.InfoItemInstance = InfoItemInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ItemWindow.ItemWindow_C.HandleSelectedButtonChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           SelectedButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SelectedButtonIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWindow_C::HandleSelectedButtonChanged(class UCommonButton* SelectedButton, int SelectedButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.HandleSelectedButtonChanged");

	UItemWindow_C_HandleSelectedButtonChanged_Params params;
	params.SelectedButton = SelectedButton;
	params.SelectedButtonIndex = SelectedButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Set Description Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     Item_Definition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonTextBlock*        Text_Box_to_Set                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemWindow_C::Set_Description_Text(class UFortItemDefinition* Item_Definition, class UCommonTextBlock* Text_Box_to_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Set Description Text");

	UItemWindow_C_Set_Description_Text_Params params;
	params.Item_Definition = Item_Definition;
	params.Text_Box_to_Set = Text_Box_to_Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.InternalToExternalRarity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortRarity                    InRarity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ExternalRarity                 (Parm, OutParm)

void UItemWindow_C::InternalToExternalRarity(EFortRarity InRarity, struct FText* ExternalRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.InternalToExternalRarity");

	UItemWindow_C_InternalToExternalRarity_Params params;
	params.InRarity = InRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExternalRarity != nullptr)
		*ExternalRarity = params.ExternalRarity;
}


// Function ItemWindow.ItemWindow_C.HandleButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWindow_C::HandleButton(class UWidget* Content, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.HandleButton");

	UItemWindow_C_HandleButton_Params params;
	params.Content = Content;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UItemWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Initialize");

	UItemWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.SetTitleAndItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*> Info_Items                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemWindow_C::SetTitleAndItems(struct FText Title, TArray<class UFortItemDefinition*>* Info_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.SetTitleAndItems");

	UItemWindow_C_SetTitleAndItems_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info_Items != nullptr)
		*Info_Items = params.Info_Items;
}


// Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent");

	UItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Construct");

	UItemWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemWindow_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Destruct");

	UItemWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWindow_C::ExecuteUbergraph_ItemWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow");

	UItemWindow_C_ExecuteUbergraph_ItemWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
