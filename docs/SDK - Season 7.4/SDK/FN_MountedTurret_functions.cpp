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

// Function MountedTurret.MountedTurret_C.OnGetExitSocketTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ExitSocket                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SocketIndex                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InTransform                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bOutOverriderExitSocket        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutOverrideTransform           (Parm, OutParm, IsPlainOldData)

void AMountedTurret_C::OnGetExitSocketTransform(struct FName ExitSocket, int SocketIndex, struct FTransform InTransform, bool* bOutOverriderExitSocket, struct FTransform* OutOverrideTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnGetExitSocketTransform");

	AMountedTurret_C_OnGetExitSocketTransform_Params params;
	params.ExitSocket = ExitSocket;
	params.SocketIndex = SocketIndex;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutOverriderExitSocket != nullptr)
		*bOutOverriderExitSocket = params.bOutOverriderExitSocket;
	if (OutOverrideTransform != nullptr)
		*OutOverrideTransform = params.OutOverrideTransform;
}


// Function MountedTurret.MountedTurret_C.BP_CanInteract
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   FortPC                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMountedTurret_C::BP_CanInteract(class AFortPlayerController* FortPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.BP_CanInteract");

	AMountedTurret_C_BP_CanInteract_Params params;
	params.FortPC = FortPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MountedTurret.MountedTurret_C.GetVehicleSeatPrimaryAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         FortPlayerPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AMountedTurret_C::GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.GetVehicleSeatPrimaryAction");

	AMountedTurret_C_GetVehicleSeatPrimaryAction_Params params;
	params.FortPlayerPawn = FortPlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MountedTurret.MountedTurret_C.CurrentOverheatScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMountedTurret_C::CurrentOverheatScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.CurrentOverheatScalar");

	AMountedTurret_C_CurrentOverheatScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MountedTurret.MountedTurret_C.GetIconPlacement
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutExtents                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::GetIconPlacement(class AActor* SelfActor, struct FVector* OutLocation, struct FVector* OutExtents)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.GetIconPlacement");

	AMountedTurret_C_GetIconPlacement_Params params;
	params.SelfActor = SelfActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutExtents != nullptr)
		*OutExtents = params.OutExtents;
}


// Function MountedTurret.MountedTurret_C.GetVehicleSeatActionLabels
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> AMountedTurret_C::GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.GetVehicleSeatActionLabels");

	AMountedTurret_C_GetVehicleSeatActionLabels_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MountedTurret.MountedTurret_C.GetVehicleSeatLabels
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> AMountedTurret_C::GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.GetVehicleSeatLabels");

	AMountedTurret_C_GetVehicleSeatLabels_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MountedTurret.MountedTurret_C.GetVehicleSeatActionNames
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> AMountedTurret_C::GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.GetVehicleSeatActionNames");

	AMountedTurret_C_GetVehicleSeatActionNames_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MountedTurret.MountedTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMountedTurret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.UserConstructionScript");

	AMountedTurret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnNotifyEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnNotifyEnd(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnNotifyEnd");

	AMountedTurret_C_OnNotifyEnd_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnNotifyBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnNotifyBegin(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnNotifyBegin");

	AMountedTurret_C_OnNotifyBegin_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnInterrupted(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnInterrupted");

	AMountedTurret_C_OnInterrupted_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnBlendOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnBlendOut(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnBlendOut");

	AMountedTurret_C_OnBlendOut_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnCompleted(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnCompleted");

	AMountedTurret_C_OnCompleted_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680");

	AMountedTurret_C_OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680");

	AMountedTurret_C_OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnInterrupted_BE998F90462B0AB8D888EB90F677D680
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnInterrupted_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnInterrupted_BE998F90462B0AB8D888EB90F677D680");

	AMountedTurret_C_OnInterrupted_BE998F90462B0AB8D888EB90F677D680_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnBlendOut_BE998F90462B0AB8D888EB90F677D680
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnBlendOut_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnBlendOut_BE998F90462B0AB8D888EB90F677D680");

	AMountedTurret_C_OnBlendOut_BE998F90462B0AB8D888EB90F677D680_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnCompleted_BE998F90462B0AB8D888EB90F677D680
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnCompleted_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnCompleted_BE998F90462B0AB8D888EB90F677D680");

	AMountedTurret_C_OnCompleted_BE998F90462B0AB8D888EB90F677D680_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483");

	AMountedTurret_C_OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483");

	AMountedTurret_C_OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnInterrupted_C545F8F445E4AE78043EFD8678F12483
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnInterrupted_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnInterrupted_C545F8F445E4AE78043EFD8678F12483");

	AMountedTurret_C_OnInterrupted_C545F8F445E4AE78043EFD8678F12483_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnBlendOut_C545F8F445E4AE78043EFD8678F12483
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnBlendOut_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnBlendOut_C545F8F445E4AE78043EFD8678F12483");

	AMountedTurret_C_OnBlendOut_C545F8F445E4AE78043EFD8678F12483_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnCompleted_C545F8F445E4AE78043EFD8678F12483
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnCompleted_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnCompleted_C545F8F445E4AE78043EFD8678F12483");

	AMountedTurret_C_OnCompleted_C545F8F445E4AE78043EFD8678F12483_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4");

	AMountedTurret_C_OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4");

	AMountedTurret_C_OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnInterrupted_DC5D83234D74654A536804AC35F92FE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnInterrupted_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnInterrupted_DC5D83234D74654A536804AC35F92FE4");

	AMountedTurret_C_OnInterrupted_DC5D83234D74654A536804AC35F92FE4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnBlendOut_DC5D83234D74654A536804AC35F92FE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnBlendOut_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnBlendOut_DC5D83234D74654A536804AC35F92FE4");

	AMountedTurret_C_OnBlendOut_DC5D83234D74654A536804AC35F92FE4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnCompleted_DC5D83234D74654A536804AC35F92FE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnCompleted_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnCompleted_DC5D83234D74654A536804AC35F92FE4");

	AMountedTurret_C_OnCompleted_DC5D83234D74654A536804AC35F92FE4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AMountedTurret_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnDeathPlayEffects");

	AMountedTurret_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnPawnEnterVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int SeatIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnPawnEnterVehicle");

	AMountedTurret_C_OnPawnEnterVehicle_Params params;
	params.PlayerPawn = PlayerPawn;
	params.SeatIdx = SeatIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.OnPawnExitVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ExitSocketName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.OnPawnExitVehicle");

	AMountedTurret_C_OnPawnExitVehicle_Params params;
	params.PlayerPawn = PlayerPawn;
	params.ExitSocketName = ExitSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.ReceiveEndPlay");

	AMountedTurret_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMountedTurret_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.ReceiveBeginPlay");

	AMountedTurret_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.Get Turret Weapon
// (BlueprintCallable, BlueprintEvent)

void AMountedTurret_C::Get_Turret_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.Get Turret Weapon");

	AMountedTurret_C_Get_Turret_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.Event On Weapon Fired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDualWeaponHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPersistantFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::Event_On_Weapon_Fired(EDualWeaponHand Hand, bool bPersistantFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.Event On Weapon Fired");

	AMountedTurret_C_Event_On_Weapon_Fired_Params params;
	params.Hand = Hand;
	params.bPersistantFire = bPersistantFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.HideQuickBarForAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::HideQuickBarForAbility(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.HideQuickBarForAbility");

	AMountedTurret_C_HideQuickBarForAbility_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.UpdateOverheatCosmetics
// (BlueprintCallable, BlueprintEvent)

void AMountedTurret_C::UpdateOverheatCosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.UpdateOverheatCosmetics");

	AMountedTurret_C_UpdateOverheatCosmetics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.Clear FX And AudioTimer
// (BlueprintCallable, BlueprintEvent)

void AMountedTurret_C::Clear_FX_And_AudioTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.Clear FX And AudioTimer");

	AMountedTurret_C_Clear_FX_And_AudioTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.Handle Rotation Audio
// (BlueprintCallable, BlueprintEvent)

void AMountedTurret_C::Handle_Rotation_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.Handle Rotation Audio");

	AMountedTurret_C_Handle_Rotation_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.Start FX And Audio Timer
// (BlueprintCallable, BlueprintEvent)

void AMountedTurret_C::Start_FX_And_Audio_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.Start FX And Audio Timer");

	AMountedTurret_C_Start_FX_And_Audio_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MountedTurret.MountedTurret_C.ExecuteUbergraph_MountedTurret
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMountedTurret_C::ExecuteUbergraph_MountedTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MountedTurret.MountedTurret_C.ExecuteUbergraph_MountedTurret");

	AMountedTurret_C_ExecuteUbergraph_MountedTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
