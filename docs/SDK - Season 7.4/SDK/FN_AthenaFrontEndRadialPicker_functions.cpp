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

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaFrontEndRadialPicker_C::OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnMouseWheel");

	UAthenaFrontEndRadialPicker_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaFrontEndRadialPicker_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnMouseButtonDown");

	UAthenaFrontEndRadialPicker_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaFrontEndRadialPicker_C::OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnTouchEnded");

	UAthenaFrontEndRadialPicker_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.On Item Touched
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Touched_Item                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::On_Item_Touched(class URadialPickerItem_C* Touched_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.On Item Touched");

	UAthenaFrontEndRadialPicker_C_On_Item_Touched_Params params;
	params.Touched_Item = Touched_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetShowMouseCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InShowMouseCursor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::SetShowMouseCursor(bool InShowMouseCursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetShowMouseCursor");

	UAthenaFrontEndRadialPicker_C_SetShowMouseCursor_Params params;
	params.InShowMouseCursor = InShowMouseCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetPointerDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::SetPointerDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetPointerDirection");

	UAthenaFrontEndRadialPicker_C_SetPointerDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.IsGamepadInPickerDeadZone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsInDeadZone                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::IsGamepadInPickerDeadZone(bool* bIsInDeadZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.IsGamepadInPickerDeadZone");

	UAthenaFrontEndRadialPicker_C_IsGamepadInPickerDeadZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInDeadZone != nullptr)
		*bIsInDeadZone = params.bIsInDeadZone;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.MoveActiveOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MoveOptionDirection            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::MoveActiveOption(int MoveOptionDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.MoveActiveOption");

	UAthenaFrontEndRadialPicker_C_MoveActiveOption_Params params;
	params.MoveOptionDirection = MoveOptionDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ResetInput
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::ResetInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ResetInput");

	UAthenaFrontEndRadialPicker_C_ResetInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.CanConfirm
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanAccept                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::CanConfirm(bool* CanAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.CanConfirm");

	UAthenaFrontEndRadialPicker_C_CanConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAccept != nullptr)
		*CanAccept = params.CanAccept;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::SetInputMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetInputMode");

	UAthenaFrontEndRadialPicker_C_SetInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetActiveOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::SetActiveOption(int Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetActiveOption");

	UAthenaFrontEndRadialPicker_C_SetActiveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ClearActiveOption
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::ClearActiveOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ClearActiveOption");

	UAthenaFrontEndRadialPicker_C_ClearActiveOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.GetOptionAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::GetOptionAngle(int Option, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.GetOptionAngle");

	UAthenaFrontEndRadialPicker_C_GetOptionAngle_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.GetAngleDifference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AngleA                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleB                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::GetAngleDifference(float AngleA, float AngleB, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.GetAngleDifference");

	UAthenaFrontEndRadialPicker_C_GetAngleDifference_Params params;
	params.AngleA = AngleA;
	params.AngleB = AngleB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.GetOptionPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::GetOptionPosition(int Option, struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.GetOptionPosition");

	UAthenaFrontEndRadialPicker_C_GetOptionPosition_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.InitializePicker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPickerMode                PickerMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::InitializePicker(EFortPickerMode PickerMode, int InitialOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.InitializePicker");

	UAthenaFrontEndRadialPicker_C_InitializePicker_Params params;
	params.PickerMode = PickerMode;
	params.InitialOption = InitialOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Construct");

	UAthenaFrontEndRadialPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Tick");

	UAthenaFrontEndRadialPicker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Event AcceptOption
// (BlueprintCallable, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::Event_AcceptOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Event AcceptOption");

	UAthenaFrontEndRadialPicker_C_Event_AcceptOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Event CancelPicker
// (BlueprintCallable, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::Event_CancelPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Event CancelPicker");

	UAthenaFrontEndRadialPicker_C_Event_CancelPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ClosePicker
// (BlueprintCallable, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::ClosePicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ClosePicker");

	UAthenaFrontEndRadialPicker_C_ClosePicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.AcceptChosenOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PickerOption                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::AcceptChosenOption(int PickerOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.AcceptChosenOption");

	UAthenaFrontEndRadialPicker_C_AcceptChosenOption_Params params;
	params.PickerOption = PickerOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnPickerRefreshItems
// (BlueprintCallable, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::OnPickerRefreshItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnPickerRefreshItems");

	UAthenaFrontEndRadialPicker_C_OnPickerRefreshItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption0_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__PickerOption0_K2Node_ComponentBoundEvent(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption0_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption0_K2Node_ComponentBoundEvent_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption1_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__PickerOption1_K2Node_ComponentBoundEvent(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption1_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption1_K2Node_ComponentBoundEvent_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__PickerOption2_K2Node_ComponentBoundEvent(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption2_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption2_K2Node_ComponentBoundEvent_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption3_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__PickerOption3_K2Node_ComponentBoundEvent(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption3_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption3_K2Node_ComponentBoundEvent_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption4_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__PickerOption4_K2Node_ComponentBoundEvent(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption4_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption4_K2Node_ComponentBoundEvent_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption5_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__PickerOption5_K2Node_ComponentBoundEvent(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption5_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption5_K2Node_ComponentBoundEvent_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption6_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__PickerOption6_K2Node_ComponentBoundEvent(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption6_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption6_K2Node_ComponentBoundEvent_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption7_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__PickerOption7_K2Node_ComponentBoundEvent(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption7_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption7_K2Node_ComponentBoundEvent_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__NextWheelButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__NextWheelButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__NextWheelButton_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__NextWheelButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PreviousWheelButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::BndEvt__PreviousWheelButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PreviousWheelButton_K2Node_ComponentBoundEvent");

	UAthenaFrontEndRadialPicker_C_BndEvt__PreviousWheelButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ExecuteUbergraph_AthenaFrontEndRadialPicker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFrontEndRadialPicker_C::ExecuteUbergraph_AthenaFrontEndRadialPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ExecuteUbergraph_AthenaFrontEndRadialPicker");

	UAthenaFrontEndRadialPicker_C_ExecuteUbergraph_AthenaFrontEndRadialPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Picker Closing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaFrontEndRadialPicker_C::Picker_Closing__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Picker Closing__DelegateSignature");

	UAthenaFrontEndRadialPicker_C_Picker_Closing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
