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

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadKeyTextButton_C::SetNonInteractableStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle");

	UGamepadKeyTextButton_C_SetNonInteractableStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> ContentAlignment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadKeyTextButton_C::SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment");

	UGamepadKeyTextButton_C_SetContentAlignment_Params params;
	params.ContentAlignment = ContentAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UGamepadKeyTextButton_C::UpdateContentAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment");

	UGamepadKeyTextButton_C_UpdateContentAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadKeyTextButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet");

	UGamepadKeyTextButton_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DescText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadKeyTextButton_C::SetData(struct FKey Key, struct FText DescText, struct FName ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetData");

	UGamepadKeyTextButton_C_SetData_Params params;
	params.Key = Key;
	params.DescText = DescText;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadKeyTextButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct");

	UGamepadKeyTextButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DescText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadKeyTextButton_C::SetDataAndUpdateButton(struct FKey Key, struct FText DescText, struct FName ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton");

	UGamepadKeyTextButton_C_SetDataAndUpdateButton_Params params;
	params.Key = Key;
	params.DescText = DescText;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGamepadKeyTextButton_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGamepadKeyTextButton_C::UpdateButton(class UGamepadKeyTextButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton");

	UGamepadKeyTextButton_C_UpdateButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGamepadKeyTextButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo");

	UGamepadKeyTextButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadKeyTextButton_C::ExecuteUbergraph_GamepadKeyTextButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton");

	UGamepadKeyTextButton_C_ExecuteUbergraph_GamepadKeyTextButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UGamepadKeyTextButton_C::ChangeTheBinding_Button__DelegateSignature(struct FName ActionName, struct FKey Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button__DelegateSignature");

	UGamepadKeyTextButton_C_ChangeTheBinding_Button__DelegateSignature_Params params;
	params.ActionName = ActionName;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
