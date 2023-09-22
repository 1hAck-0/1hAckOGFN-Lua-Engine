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

// Function PieChartRowWidget.PieChartRowWidget_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonNumericType             NumericType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LegendColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieChartRowWidget_C::Setup(int Num, struct FText Name, float Value, ECommonNumericType NumericType, struct FLinearColor LegendColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieChartRowWidget.PieChartRowWidget_C.Setup");

	UPieChartRowWidget_C_Setup_Params params;
	params.Num = Num;
	params.Name = Name;
	params.Value = Value;
	params.NumericType = NumericType;
	params.LegendColor = LegendColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
