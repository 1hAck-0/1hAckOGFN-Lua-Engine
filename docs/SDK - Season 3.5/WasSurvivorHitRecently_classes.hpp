#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass WasSurvivorHitRecently.WasSurvivorHitRecently_C
class UWasSurvivorHitRecently_C : public UBTDecorator_BlueprintBase
{
public:
	enum class ESurvivorHitInfoType              SurvivorHitInfoType;                               // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RecentlyValue;                                     // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WasSurvivorHitRecently_C");
		return Clss;
	}

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class FName Name_SurvivorHitInfoTime, class FName Name_SurvivorHitInfoType, class AFortPawn* Pawn, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetValueAsFloat_ReturnValue, uint8 CallFunc_GetValueAsEnum_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
