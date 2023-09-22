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

// Function FireModeSelectTile.FireModeSelectTile_C.HandleSelectionBorderFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFireModeSelectTile_C::HandleSelectionBorderFeedback(bool bIsSelected, bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.HandleSelectionBorderFeedback");

	UFireModeSelectTile_C_HandleSelectionBorderFeedback_Params params;
	params.bIsSelected = bIsSelected;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.StopMovie
// (Public, BlueprintCallable, BlueprintEvent)

void UFireModeSelectTile_C::StopMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.StopMovie");

	UFireModeSelectTile_C_StopMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.PlayMovie
// (Public, BlueprintCallable, BlueprintEvent)

void UFireModeSelectTile_C::PlayMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.PlayMovie");

	UFireModeSelectTile_C_PlayMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UFireModeSelectTile_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.Setup");

	UFireModeSelectTile_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.Mark Selected
// (Public, BlueprintCallable, BlueprintEvent)

void UFireModeSelectTile_C::Mark_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.Mark Selected");

	UFireModeSelectTile_C_Mark_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.PlayIntroOrOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayIntro                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFireModeSelectTile_C::PlayIntroOrOutro(bool PlayIntro)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.PlayIntroOrOutro");

	UFireModeSelectTile_C_PlayIntroOrOutro_Params params;
	params.PlayIntro = PlayIntro;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFireModeSelectTile_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.PreConstruct");

	UFireModeSelectTile_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.Save and Exit
// (BlueprintCallable, BlueprintEvent)

void UFireModeSelectTile_C::Save_and_Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.Save and Exit");

	UFireModeSelectTile_C_Save_and_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFireModeSelectTile_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent");

	UFireModeSelectTile_C_BndEvt__SelectionButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.OnSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFireModeSelectTile_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.OnSelected");

	UFireModeSelectTile_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.OnDeselected
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFireModeSelectTile_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.OnDeselected");

	UFireModeSelectTile_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFireModeSelectTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.Construct");

	UFireModeSelectTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.ExecuteUbergraph_FireModeSelectTile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFireModeSelectTile_C::ExecuteUbergraph_FireModeSelectTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.ExecuteUbergraph_FireModeSelectTile");

	UFireModeSelectTile_C_ExecuteUbergraph_FireModeSelectTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.HandleSelectConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*   Tile                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFireModeSelectTile_C::HandleSelectConfirmed__DelegateSignature(class UFireModeSelectTile_C* Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.HandleSelectConfirmed__DelegateSignature");

	UFireModeSelectTile_C_HandleSelectConfirmed__DelegateSignature_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireModeSelectTile.FireModeSelectTile_C.HandleFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*   Tile                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFireModeSelectTile_C::HandleFocus__DelegateSignature(class UFireModeSelectTile_C* Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireModeSelectTile.FireModeSelectTile_C.HandleFocus__DelegateSignature");

	UFireModeSelectTile_C_HandleFocus__DelegateSignature_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
