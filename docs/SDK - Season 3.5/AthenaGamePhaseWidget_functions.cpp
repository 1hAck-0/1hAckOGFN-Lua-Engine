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


// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.OnGamePhaseStepChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGamePhaseWidget_C::OnGamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseWidget_C", "OnGamePhaseStepChanged");

	Params::UAthenaGamePhaseWidget_C_OnGamePhaseStepChanged_Params Parms;
	Parms.GamePhaseStep = GamePhaseStep;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.ExecuteUbergraph_AthenaGamePhaseWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhaseStep    K2Node_Event_GamePhaseStep                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhaseStep    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable123                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1234                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12345                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable123456                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1234567                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12345678                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable123456789                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12345678910                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGamePhaseWidget_C::ExecuteUbergraph_AthenaGamePhaseWidget(int32 EntryPoint, enum class EAthenaGamePhaseStep K2Node_Event_GamePhaseStep, enum class EAthenaGamePhaseStep Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable12, class UMaterialInterface* Temp_object_Variable123, class UMaterialInterface* Temp_object_Variable1234, class UMaterialInterface* Temp_object_Variable12345, class UMaterialInterface* Temp_object_Variable123456, class UMaterialInterface* Temp_object_Variable1234567, class UMaterialInterface* Temp_object_Variable12345678, class UMaterialInterface* Temp_object_Variable123456789, class UMaterialInterface* Temp_object_Variable12345678910, class UMaterialInterface* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseWidget_C", "ExecuteUbergraph_AthenaGamePhaseWidget");

	Params::UAthenaGamePhaseWidget_C_ExecuteUbergraph_AthenaGamePhaseWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_GamePhaseStep = K2Node_Event_GamePhaseStep;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_object_Variable123 = Temp_object_Variable123;
	Parms.Temp_object_Variable1234 = Temp_object_Variable1234;
	Parms.Temp_object_Variable12345 = Temp_object_Variable12345;
	Parms.Temp_object_Variable123456 = Temp_object_Variable123456;
	Parms.Temp_object_Variable1234567 = Temp_object_Variable1234567;
	Parms.Temp_object_Variable12345678 = Temp_object_Variable12345678;
	Parms.Temp_object_Variable123456789 = Temp_object_Variable123456789;
	Parms.Temp_object_Variable12345678910 = Temp_object_Variable12345678910;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
