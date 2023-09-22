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

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Play Audio Based on Storm Distance
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::Play_Audio_Based_on_Storm_Distance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Play Audio Based on Storm Distance");

	AGCNL_OutOfStWStorm_C_Play_Audio_Based_on_Storm_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.SetCameraEffects
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::SetCameraEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.SetCameraEffects");

	AGCNL_OutOfStWStorm_C_SetCameraEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.GetLocationInCircleXY
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LocationLocalSpace             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCNL_OutOfStWStorm_C::GetLocationInCircleXY(struct FVector* LocationLocalSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.GetLocationInCircleXY");

	AGCNL_OutOfStWStorm_C_GetLocationInCircleXY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationLocalSpace != nullptr)
		*LocationLocalSpace = params.LocationLocalSpace;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_OutOfStWStorm_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnRemove");

	AGCNL_OutOfStWStorm_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnExecute
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_OutOfStWStorm_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnExecute");

	AGCNL_OutOfStWStorm_C_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_OutOfStWStorm_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnActive");

	AGCNL_OutOfStWStorm_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.UserConstructionScript");

	AGCNL_OutOfStWStorm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.LightningTimeline__FinishedFunc
// (BlueprintEvent)

void AGCNL_OutOfStWStorm_C::LightningTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.LightningTimeline__FinishedFunc");

	AGCNL_OutOfStWStorm_C_LightningTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.LightningTimeline__UpdateFunc
// (BlueprintEvent)

void AGCNL_OutOfStWStorm_C::LightningTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.LightningTimeline__UpdateFunc");

	AGCNL_OutOfStWStorm_C_LightningTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Timeline
// (BlueprintEvent)

void AGCNL_OutOfStWStorm_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Timeline");

	AGCNL_OutOfStWStorm_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.K2_OnReset
// (Event, Public, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.K2_OnReset");

	AGCNL_OutOfStWStorm_C_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InStormPawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EffectCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_OutOfStWStorm_C::OnActivated(class AFortPlayerPawn* InStormPawn, int EffectCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnActivated");

	AGCNL_OutOfStWStorm_C_OnActivated_Params params;
	params.InStormPawn = InStormPawn;
	params.EffectCount = EffectCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.StartRandomLighningStrikes
// (BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::StartRandomLighningStrikes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.StartRandomLighningStrikes");

	AGCNL_OutOfStWStorm_C_StartRandomLighningStrikes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Play Lightning Flash Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_OutOfStWStorm_C::Play_Lightning_Flash_Audio(struct FVector Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Play Lightning Flash Audio");

	AGCNL_OutOfStWStorm_C_Play_Lightning_Flash_Audio_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnRemoved
// (BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnRemoved");

	AGCNL_OutOfStWStorm_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.RandomLightningFlashesRepeat
// (BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::RandomLightningFlashesRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.RandomLightningFlashesRepeat");

	AGCNL_OutOfStWStorm_C_RandomLightningFlashesRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.On Storm Audio
// (BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::On_Storm_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.On Storm Audio");

	AGCNL_OutOfStWStorm_C_On_Storm_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Add Storm Audio
// (BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::Add_Storm_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Add Storm Audio");

	AGCNL_OutOfStWStorm_C_Add_Storm_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Remove Storm Audio
// (BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::Remove_Storm_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Remove Storm Audio");

	AGCNL_OutOfStWStorm_C_Remove_Storm_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Start Storm Audio Fader
// (BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::Start_Storm_Audio_Fader()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Start Storm Audio Fader");

	AGCNL_OutOfStWStorm_C_Start_Storm_Audio_Fader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.ZapFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ZapCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_OutOfStWStorm_C::ZapFX(int ZapCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.ZapFX");

	AGCNL_OutOfStWStorm_C_ZapFX_Params params;
	params.ZapCount = ZapCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Bind On Storm Audio
// (BlueprintCallable, BlueprintEvent)

void AGCNL_OutOfStWStorm_C::Bind_On_Storm_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Bind On Storm Audio");

	AGCNL_OutOfStWStorm_C_Bind_On_Storm_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.ExecuteUbergraph_GCNL_OutOfStWStorm
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_OutOfStWStorm_C::ExecuteUbergraph_GCNL_OutOfStWStorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.ExecuteUbergraph_GCNL_OutOfStWStorm");

	AGCNL_OutOfStWStorm_C_ExecuteUbergraph_GCNL_OutOfStWStorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
