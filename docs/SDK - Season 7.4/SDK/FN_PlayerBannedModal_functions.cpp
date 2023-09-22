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

// Function PlayerBannedModal.PlayerBannedModal_C.HandleCloseAttempted
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerBannedModal_C::HandleCloseAttempted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.HandleCloseAttempted");

	UPlayerBannedModal_C_HandleCloseAttempted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBannedModal.PlayerBannedModal_C.RemoveModal
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerBannedModal_C::RemoveModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.RemoveModal");

	UPlayerBannedModal_C_RemoveModal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBannedModal.PlayerBannedModal_C.BanEnumToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerBanReasons              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExploitProgramName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlayerBannedModal_C::BanEnumToText(EPlayerBanReasons Index, struct FString ExploitProgramName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.BanEnumToText");

	UPlayerBannedModal_C_BanEnumToText_Params params;
	params.Index = Index;
	params.ExploitProgramName = ExploitProgramName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerBannedModal.PlayerBannedModal_C.OnBanAck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBannedModal_C::OnBanAck(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.OnBanAck");

	UPlayerBannedModal_C_OnBanAck_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBannedModal.PlayerBannedModal_C.UpdateTimeRemaining
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Time                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerBannedModal_C::UpdateTimeRemaining(struct FText Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.UpdateTimeRemaining");

	UPlayerBannedModal_C_UpdateTimeRemaining_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBannedModal.PlayerBannedModal_C.DisableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisableButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBannedModal_C::DisableButton(bool DisableButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.DisableButton");

	UPlayerBannedModal_C_DisableButton_Params params;
	params.DisableButton = DisableButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBannedModal.PlayerBannedModal_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Content                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerBannedModal_C::UpdateText(struct FText Title, struct FText Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.UpdateText");

	UPlayerBannedModal_C_UpdateText_Params params;
	params.Title = Title;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBannedModal.PlayerBannedModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerBannedModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent");

	UPlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBannedModal.PlayerBannedModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPlayerBannedModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.OnActivated");

	UPlayerBannedModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBannedModal.PlayerBannedModal_C.ExecuteUbergraph_PlayerBannedModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBannedModal_C::ExecuteUbergraph_PlayerBannedModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.ExecuteUbergraph_PlayerBannedModal");

	UPlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBannedModal.PlayerBannedModal_C.OnCloseSucceeded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerBannedModal_C::OnCloseSucceeded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBannedModal.PlayerBannedModal_C.OnCloseSucceeded__DelegateSignature");

	UPlayerBannedModal_C_OnCloseSucceeded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
