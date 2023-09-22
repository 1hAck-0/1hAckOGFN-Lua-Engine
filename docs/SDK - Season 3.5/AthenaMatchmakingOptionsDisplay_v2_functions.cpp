#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.On_ClickBlocker_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UAthenaMatchmakingOptionsDisplay_v2_C::On_ClickBlocker_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "On_ClickBlocker_MouseButtonDown_0");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_On_ClickBlocker_MouseButtonDown_0_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.InitializeGameModeButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::InitializeGameModeButtons(bool CallFunc_IsBROnly_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "InitializeGameModeButtons");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_InitializeGameModeButtons_Params Parms;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateLTM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlaylistAthena*> CallFunc_GetActivePlaylists_ReturnValue                          (ZeroConstructor, ReferenceParm)
// class UFortPlaylistAthena*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::UpdateLTM(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFortPlaylistAthena*>& CallFunc_GetActivePlaylists_ReturnValue, class UFortPlaylistAthena* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "UpdateLTM");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_UpdateLTM_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActivePlaylists_ReturnValue = CallFunc_GetActivePlaylists_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateStandardGameModeButtonAvailibilty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthena_Matchmaking_GameModeButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthena_Matchmaking_GameModeButton_C*CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::UpdateStandardGameModeButtonAvailibilty(int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "UpdateStandardGameModeButtonAvailibilty");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_UpdateStandardGameModeButtonAvailibilty_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupButtonBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UAthena_Matchmaking_GameModeButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetupButtonBindings(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "SetupButtonBindings");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_SetupButtonBindings_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ClearLTM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingOptionsDisplay_v2_C::ClearLTM()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "ClearLTM");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_ClearLTM_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.AddLTM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*         LTMPlaylist                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddSpecialStyle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthena_Matchmaking_GameModeButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::AddLTM(class UFortPlaylistAthena* LTMPlaylist, bool AddSpecialStyle, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "AddLTM");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_AddLTM_Params Parms;
	Parms.LTMPlaylist = LTMPlaylist;
	Parms.AddSpecialStyle = AddSpecialStyle;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ClearStandardGameModes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChildIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::ClearStandardGameModes(int32 ChildIndex)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "ClearStandardGameModes");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_ClearStandardGameModes_Params Parms;
	Parms.ChildIndex = ChildIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.AddStandardGameModes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlaylistAthena*> CallFunc_GetDefaultPlaylists_DefaultPlaylists                    (ZeroConstructor, ReferenceParm)
// class UAthena_Matchmaking_GameModeButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylistAthena*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::AddStandardGameModes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UFortPlaylistAthena*>& CallFunc_GetDefaultPlaylists_DefaultPlaylists, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Create_ReturnValue, class UFortPlaylistAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "AddStandardGameModes");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_AddStandardGameModes_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetDefaultPlaylists_DefaultPlaylists = CallFunc_GetDefaultPlaylists_DefaultPlaylists;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.CloseMatchmakingOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::CloseMatchmakingOptions(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "CloseMatchmakingOptions");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_CloseMatchmakingOptions_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::Handle_InputAction_Cancel(bool* Passthrough)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "Handle_InputAction_Cancel");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_Handle_InputAction_Cancel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetupInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "SetupInput");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_SetupInput_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingOptionsDisplay_v2_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "Construct");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingOptionsDisplay_v2_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "OnActivated");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnGameModeButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_Matchmaking_GameModeButton_C*SelectedGameModeButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnGameModeButtonSelected(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "OnGameModeButtonSelected");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_OnGameModeButtonSelected_Params Parms;
	Parms.SelectedGameModeButton = SelectedGameModeButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnModeButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_Matchmaking_GameModeButton_C*HoveredButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnModeButtonHovered(class UAthena_Matchmaking_GameModeButton_C* HoveredButton)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "OnModeButtonHovered");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_OnModeButtonHovered_Params Parms;
	Parms.HoveredButton = HoveredButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingOptionsDisplay_v2_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "Destruct");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthena_Matchmaking_GameModeButton_C*K2Node_CustomEvent_SelectedGameModeButton                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetCurrentPlaylistData_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthena_Matchmaking_GameModeButton_C*K2Node_CustomEvent_HoveredButton                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue123                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthena_Matchmaking_GameModeButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthena_Matchmaking_GameModeButton_C*CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaylistEnabled_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1234                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaylistEnabled_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_True_if_break_was_hit_Variable1, class UAthena_Matchmaking_GameModeButton_C* K2Node_CustomEvent_SelectedGameModeButton, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_SetCurrentPlaylistData_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UAthena_Matchmaking_GameModeButton_C* K2Node_CustomEvent_HoveredButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue123, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPlaylistEnabled_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue1234, bool CallFunc_IsPlaylistEnabled_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_True_if_break_was_hit_Variable1 = Temp_bool_True_if_break_was_hit_Variable1;
	Parms.K2Node_CustomEvent_SelectedGameModeButton = K2Node_CustomEvent_SelectedGameModeButton;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_SetCurrentPlaylistData_ReturnValue = CallFunc_SetCurrentPlaylistData_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.K2Node_CustomEvent_HoveredButton = K2Node_CustomEvent_HoveredButton;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue123 = CallFunc_IsValid_ReturnValue123;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsPlaylistEnabled_ReturnValue = CallFunc_IsPlaylistEnabled_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1234 = CallFunc_IsValid_ReturnValue1234;
	Parms.CallFunc_IsPlaylistEnabled_ReturnValue1 = CallFunc_IsPlaylistEnabled_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue12 = CallFunc_BooleanAND_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
