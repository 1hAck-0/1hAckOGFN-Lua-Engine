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


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.SwitchLightingLOW
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::SwitchLightingLOW(bool Visibility, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "SwitchLightingLOW");

	Params::AStorePinataMaster_BP_C_SwitchLightingLOW_Params Parms;
	Parms.Visibility = Visibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.SwitchLightingPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::SwitchLightingPC(bool Visibility, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "SwitchLightingPC");

	Params::AStorePinataMaster_BP_C_SwitchLightingPC_Params Parms;
	Parms.Visibility = Visibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ChooseRandomWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue12                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue123                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1234                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue12345                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue123456                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1234567                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue12345678                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue123456789                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue12345678910                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1234567891011              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue123                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue1234                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue12345                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::ChooseRandomWeapon(int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue12, bool CallFunc_EqualEqual_IntInt_ReturnValue123, bool CallFunc_EqualEqual_IntInt_ReturnValue1234, bool CallFunc_EqualEqual_IntInt_ReturnValue12345, bool CallFunc_EqualEqual_IntInt_ReturnValue123456, bool CallFunc_EqualEqual_IntInt_ReturnValue1234567, bool CallFunc_EqualEqual_IntInt_ReturnValue12345678, bool CallFunc_EqualEqual_IntInt_ReturnValue123456789, bool CallFunc_EqualEqual_IntInt_ReturnValue12345678910, bool CallFunc_EqualEqual_IntInt_ReturnValue1234567891011, int32 CallFunc_RandomIntegerInRange_ReturnValue12, int32 CallFunc_RandomIntegerInRange_ReturnValue123, int32 CallFunc_RandomIntegerInRange_ReturnValue1234, int32 CallFunc_RandomIntegerInRange_ReturnValue12345)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ChooseRandomWeapon");

	Params::AStorePinataMaster_BP_C_ChooseRandomWeapon_Params Parms;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue1 = CallFunc_RandomIntegerInRange_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue12 = CallFunc_EqualEqual_IntInt_ReturnValue12;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue123 = CallFunc_EqualEqual_IntInt_ReturnValue123;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1234 = CallFunc_EqualEqual_IntInt_ReturnValue1234;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue12345 = CallFunc_EqualEqual_IntInt_ReturnValue12345;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue123456 = CallFunc_EqualEqual_IntInt_ReturnValue123456;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1234567 = CallFunc_EqualEqual_IntInt_ReturnValue1234567;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue12345678 = CallFunc_EqualEqual_IntInt_ReturnValue12345678;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue123456789 = CallFunc_EqualEqual_IntInt_ReturnValue123456789;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue12345678910 = CallFunc_EqualEqual_IntInt_ReturnValue12345678910;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1234567891011 = CallFunc_EqualEqual_IntInt_ReturnValue1234567891011;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue12 = CallFunc_RandomIntegerInRange_ReturnValue12;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue123 = CallFunc_RandomIntegerInRange_ReturnValue123;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue1234 = CallFunc_RandomIntegerInRange_ReturnValue1234;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue12345 = CallFunc_RandomIntegerInRange_ReturnValue12345;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.PackPersonalitySounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USoundBase*>          K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPackPersonality*        CallFunc_GetPackPersonality_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::PackPersonalitySounds(TArray<class USoundBase*>& K2Node_MakeArray_Array, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class USoundBase* CallFunc_Array_Get_Item, class UFortPackPersonality* CallFunc_GetPackPersonality_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "PackPersonalitySounds");

	Params::AStorePinataMaster_BP_C_PackPersonalitySounds_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPackPersonality_ReturnValue = CallFunc_GetPackPersonality_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.DefinePinataAssets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_GetPackImage_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable12                                           (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue123                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable123                                          (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue1234                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable1234                                         (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue12345                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable12345                                        (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue123456                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable123456                                       (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue1234567                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable1234567                                      (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue12345678                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable12345678                                     (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable123456789                                    (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue123456789                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue12345678910                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable12345678910                                  (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue1234567891011                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable1234567891011                                (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue123456789101112                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::DefinePinataAssets(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011, class UFortStoreContext* CallFunc_GetContext_ReturnValue, const struct FTransform& Temp_struct_Variable, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue1, class UTexture* CallFunc_GetPackImage_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FTransform& Temp_struct_Variable1, const struct FTransform& Temp_struct_Variable12, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue12, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue123, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516, const struct FTransform& Temp_struct_Variable123, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue1234, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122, const struct FTransform& Temp_struct_Variable1234, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue12345, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728, const struct FTransform& Temp_struct_Variable12345, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue123456, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334, const struct FTransform& Temp_struct_Variable123456, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue1234567, const struct FTransform& Temp_struct_Variable1234567, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue12345678, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748, const struct FTransform& Temp_struct_Variable12345678, const struct FTransform& Temp_struct_Variable123456789, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue123456789, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue12345678910, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354, const struct FTransform& Temp_struct_Variable12345678910, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue1234567891011, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455, bool CallFunc_K2_AttachToComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061, const struct FTransform& Temp_struct_Variable1234567891011, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue123456789101112, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "DefinePinataAssets");

	Params::AStorePinataMaster_BP_C_DefinePinataAssets_Params Parms;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue1 = CallFunc_AddComponent_ReturnValue1;
	Parms.CallFunc_GetPackImage_ReturnValue = CallFunc_GetPackImage_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue1 = CallFunc_GetDisplayName_ReturnValue1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable12 = Temp_struct_Variable12;
	Parms.CallFunc_AddComponent_ReturnValue12 = CallFunc_AddComponent_ReturnValue12;
	Parms.CallFunc_AddComponent_ReturnValue123 = CallFunc_AddComponent_ReturnValue123;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516;
	Parms.Temp_struct_Variable123 = Temp_struct_Variable123;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617;
	Parms.CallFunc_AddComponent_ReturnValue1234 = CallFunc_AddComponent_ReturnValue1234;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122;
	Parms.Temp_struct_Variable1234 = Temp_struct_Variable1234;
	Parms.CallFunc_AddComponent_ReturnValue12345 = CallFunc_AddComponent_ReturnValue12345;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728;
	Parms.Temp_struct_Variable12345 = Temp_struct_Variable12345;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829;
	Parms.CallFunc_AddComponent_ReturnValue123456 = CallFunc_AddComponent_ReturnValue123456;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334;
	Parms.Temp_struct_Variable123456 = Temp_struct_Variable123456;
	Parms.CallFunc_AddComponent_ReturnValue1234567 = CallFunc_AddComponent_ReturnValue1234567;
	Parms.Temp_struct_Variable1234567 = Temp_struct_Variable1234567;
	Parms.CallFunc_AddComponent_ReturnValue12345678 = CallFunc_AddComponent_ReturnValue12345678;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748;
	Parms.Temp_struct_Variable12345678 = Temp_struct_Variable12345678;
	Parms.Temp_struct_Variable123456789 = Temp_struct_Variable123456789;
	Parms.CallFunc_AddComponent_ReturnValue123456789 = CallFunc_AddComponent_ReturnValue123456789;
	Parms.CallFunc_AddComponent_ReturnValue12345678910 = CallFunc_AddComponent_ReturnValue12345678910;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354;
	Parms.Temp_struct_Variable12345678910 = Temp_struct_Variable12345678910;
	Parms.CallFunc_AddComponent_ReturnValue1234567891011 = CallFunc_AddComponent_ReturnValue1234567891011;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061;
	Parms.Temp_struct_Variable1234567891011 = Temp_struct_Variable1234567891011;
	Parms.CallFunc_AddComponent_ReturnValue123456789101112 = CallFunc_AddComponent_ReturnValue123456789101112;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue1                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue12                    (IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable12                                           (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue123                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue123                   (IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue1, const struct FTransform& Temp_struct_Variable1, bool CallFunc_K2_AttachToComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue12, const struct FTransform& Temp_struct_Variable12, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue123, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue123)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "UserConstructionScript");

	Params::AStorePinataMaster_BP_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue1 = CallFunc_AddComponent_ReturnValue1;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue12 = CallFunc_AddComponent_ReturnValue12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue1 = CallFunc_K2_GetComponentToWorld_ReturnValue1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue12 = CallFunc_K2_GetComponentToWorld_ReturnValue12;
	Parms.Temp_struct_Variable12 = Temp_struct_Variable12;
	Parms.CallFunc_AddComponent_ReturnValue123 = CallFunc_AddComponent_ReturnValue123;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue123 = CallFunc_K2_GetComponentToWorld_ReturnValue123;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DarkenBG__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_DarkenBG__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DarkenBG__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_DarkenBG__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DarkenBG__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_DarkenBG__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DarkenBG__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_DarkenBG__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-UndarkenBG__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_UndarkenBG__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-UndarkenBG__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_UndarkenBG__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-UndarkenBG__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_UndarkenBG__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-UndarkenBG__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_UndarkenBG__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-WeaponCharge__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_WeaponCharge__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-WeaponCharge__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_WeaponCharge__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-WeaponCharge__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_WeaponCharge__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-WeaponCharge__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_WeaponCharge__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-RegularEyes__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_RegularEyes__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-RegularEyes__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_RegularEyes__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-RegularEyes__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_RegularEyes__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-RegularEyes__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_RegularEyes__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EyesFollowMouseAgain__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_EyesFollowMouseAgain__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EyesFollowMouseAgain__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_EyesFollowMouseAgain__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EyesFollowMouseAgain__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_EyesFollowMouseAgain__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EyesFollowMouseAgain__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_EyesFollowMouseAgain__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-ChangeLighting__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_ChangeLighting__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-ChangeLighting__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_ChangeLighting__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-ChangeLighting__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_ChangeLighting__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-ChangeLighting__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_ChangeLighting__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_CardCough__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_CardCough__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_CardCough__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_CardCough__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_CardCough__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_CardCough__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_CardCough__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_CardCough__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade2__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade2__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade2__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade2__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade2__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade2__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__TasslesDropOff2__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade2__TasslesDropOff2__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade2__TasslesDropOff2__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade2__TasslesDropOff2__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PhaseBFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PhaseBFade__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PhaseBFade__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_PhaseBFade__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PhaseBFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PhaseBFade__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PhaseBFade__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_PhaseBFade__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade1__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade1__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade1__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade1__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade1__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade1__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__TasslesDropOffEvent__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade1__TasslesDropOffEvent__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade1__TasslesDropOffEvent__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade1__TasslesDropOffEvent__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PushbroomAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PushbroomAnim__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_PushbroomAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PushbroomAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PushbroomAnim__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_PushbroomAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__Trigger Particles__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PushbroomAnim__Trigger_Particles__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PushbroomAnim__Trigger Particles__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_PushbroomAnim__Trigger_Particles__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Attack__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Attack__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_Attack__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Attack__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Attack__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_Attack__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__EventTrackHit__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Attack__EventTrackHit__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Attack__EventTrackHit__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_Attack__EventTrackHit__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-SuspiciousEyes__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_SuspiciousEyes__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-SuspiciousEyes__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_SuspiciousEyes__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-SuspiciousEyes__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_SuspiciousEyes__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-SuspiciousEyes__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_SuspiciousEyes__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-PupilContracts__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PupilContracts__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-PupilContracts__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_PupilContracts__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-PupilContracts__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PupilContracts__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-PupilContracts__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_PupilContracts__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EquipWeapon__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_EquipWeapon__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EquipWeapon__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_EquipWeapon__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EquipWeapon__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_EquipWeapon__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EquipWeapon__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_EquipWeapon__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DropEyeAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_DropEyeAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DropEyeAnim__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_DropEyeAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DropEyeAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_DropEyeAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DropEyeAnim__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_DropEyeAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade3__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade3__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade3__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade3__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade3__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade3__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__TasslesDropOff2__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade3__TasslesDropOff2__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade3__TasslesDropOff2__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade3__TasslesDropOff2__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");

	Params::AStorePinataMaster_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	Params::AStorePinataMaster_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1");

	Params::AStorePinataMaster_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0");

	Params::AStorePinataMaster_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpTchEvt_Released(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpTchEvt_Released");

	Params::AStorePinataMaster_BP_C_InpTchEvt_Released_Params Parms;
	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpTchEvt_Pressed");

	Params::AStorePinataMaster_BP_C_InpTchEvt_Pressed_Params Parms;
	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.OnLoaded_34AE763040BC26E1AD2CE4842CE48F91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::OnLoaded_34AE763040BC26E1AD2CE4842CE48F91(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "OnLoaded_34AE763040BC26E1AD2CE4842CE48F91");

	Params::AStorePinataMaster_BP_C_OnLoaded_34AE763040BC26E1AD2CE4842CE48F91_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CardPackStoreStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CardPackStoreStart()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "CardPackStoreStart");

	Params::AStorePinataMaster_BP_C_CardPackStoreStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ReceiveBeginPlay");

	Params::AStorePinataMaster_BP_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ReadyToAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::ReadyToAttack()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ReadyToAttack");

	Params::AStorePinataMaster_BP_C_ReadyToAttack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.OpenPinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::OpenPinata()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "OpenPinata");

	Params::AStorePinataMaster_BP_C_OpenPinata_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.PackDestroyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::PackDestroyStart()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "PackDestroyStart");

	Params::AStorePinataMaster_BP_C_PackDestroyStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CardEnterStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CardEnterStart()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "CardEnterStart");

	Params::AStorePinataMaster_BP_C_CardEnterStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.StartPackOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::StartPackOpen()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "StartPackOpen");

	Params::AStorePinataMaster_BP_C_StartPackOpen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.OnStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortStoreState         NewStoreState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::OnStoreStateChanged(enum class EFortStoreState NewStoreState)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "OnStoreStateChanged");

	Params::AStorePinataMaster_BP_C_OnStoreStateChanged_Params Parms;
	Parms.NewStoreState = NewStoreState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ExitCardPackStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::ExitCardPackStore()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ExitCardPackStore");

	Params::AStorePinataMaster_BP_C_ExitCardPackStore_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.Stop-DropEyeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::Stop_DropEyeAnim()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "Stop-DropEyeAnim");

	Params::AStorePinataMaster_BP_C_Stop_DropEyeAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.Stop-SwingingEyeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::Stop_SwingingEyeAnim()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "Stop-SwingingEyeAnim");

	Params::AStorePinataMaster_BP_C_Stop_SwingingEyeAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ReceiveTick");

	Params::AStorePinataMaster_BP_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.SpawnCandy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::SpawnCandy()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "SpawnCandy");

	Params::AStorePinataMaster_BP_C_SpawnCandy_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::InitiatePinata()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InitiatePinata");

	Params::AStorePinataMaster_BP_C_InitiatePinata_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CameraResetComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CameraResetComplete()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "CameraResetComplete");

	Params::AStorePinataMaster_BP_C_CameraResetComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CameraTransitionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CameraTransitionComplete()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "CameraTransitionComplete");

	Params::AStorePinataMaster_BP_C_CameraTransitionComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ExecuteUbergraph_StorePinataMaster_BP
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue12          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AStoreCamera_Blueprint_C*>CallFunc_GetAllActorsOfClass_OutActors1                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AStoreCardReveal_BP_C*>CallFunc_GetAllActorsOfClass_OutActors12                         (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortStoreState         K2Node_CustomEvent_NewStoreState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue12                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue123                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue1                     (IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue1                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult12                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue1                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Loudness                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Duration                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Loudness1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Duration1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue12                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue123                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue1                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue12                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location12                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation12                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale12                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class AStoreWeaponMaster_BP_C>>Temp_softclass_Variable                                          (ZeroConstructor, ReferenceParm)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStoreWeaponMaster_BP_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseSpecificPinataWeapon_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLimitedToES2Features_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETouchIndex             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable1                                            (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key1                                        (HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult123                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_TLerp_ReturnValue1                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult1234                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult1                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardPackDestroyComplete_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CardPackOpeningComplete_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue12                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable123456789                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12345678910                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1234567891011                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable123456789101112                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable123                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select123_Default                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue12                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue12                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RandomRotator_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue12                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue123                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue123                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate1_FirstRun                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate1_Data                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue123                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1234                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue12345                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate12_FirstRun                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate12_Data                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue123456                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1234567                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue12345678                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue12                                     (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult12345                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FKey                        Temp_struct_Variable12                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key12                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key123                                      (HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue123                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate123_FirstRun                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate123_Data                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult123456               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue12                    (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class AStoreWeaponMaster_BP_C>CallFunc_Array_Get_Item12                                        (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStoreCardReveal_BP_C*       CallFunc_Array_Get_Item123                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable123                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location123                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation123                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale123                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStoreCamera_Blueprint_C*    CallFunc_Array_Get_Item1234                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue123            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable123                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue123                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::ExecuteUbergraph_StorePinataMaster_BP(int32 EntryPoint, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class USoundBase* K2Node_DynamicCast_AsSound_Base1, bool K2Node_DynamicCast_bSuccess1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue12, class USoundBase* K2Node_DynamicCast_AsSound_Base12, bool K2Node_DynamicCast_bSuccess12, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AStoreCamera_Blueprint_C*>& CallFunc_GetAllActorsOfClass_OutActors1, int32 CallFunc_Array_Length_ReturnValue1, TArray<class AStoreCardReveal_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors12, int32 CallFunc_Array_Length_ReturnValue12, enum class EFortStoreState K2Node_CustomEvent_NewStoreState, bool K2Node_SwitchEnum_CmpSuccess, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue12, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue123, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, float CallFunc_GetMousePosition_LocationX1, float CallFunc_GetMousePosition_LocationY1, bool CallFunc_GetMousePosition_ReturnValue1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult12, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, float CallFunc_BroadcastPlayerImpactAtLocation_Loudness, float CallFunc_BroadcastPlayerImpactAtLocation_Duration, bool CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue, float CallFunc_BroadcastPlayerImpactAtLocation_Loudness1, float CallFunc_BroadcastPlayerImpactAtLocation_Duration1, bool CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue12, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue123, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue12, const struct FVector& CallFunc_BreakTransform_Location12, const struct FRotator& CallFunc_BreakTransform_Rotation12, const struct FVector& CallFunc_BreakTransform_Scale12, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TSoftClassPtr<class AStoreWeaponMaster_BP_C>>& Temp_softclass_Variable, class UClass* Temp_class_Variable, class UClass* K2Node_CustomEvent_Loaded, bool Temp_bool_Has_Been_Initd_Variable, class UClass* K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP, bool K2Node_ClassDynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AStoreWeaponMaster_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, const struct FVector& Temp_struct_Variable, bool CallFunc_UseSpecificPinataWeapon_ReturnValue, bool CallFunc_IsLimitedToES2Features_ReturnValue, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex, const struct FVector& K2Node_InputTouchEvent_Location, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex1, const struct FVector& K2Node_InputTouchEvent_Location1, const struct FKey& Temp_struct_Variable1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue1, class UFortStoreContext* CallFunc_GetContext_ReturnValue1, class UFortStoreContext* CallFunc_GetContext_ReturnValue12, int32 CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue, int32 CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, int32 Temp_int_Variable, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult123, const struct FTransform& CallFunc_TLerp_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult1234, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortStoreContext* CallFunc_GetContext_ReturnValue1234, class UFortStoreContext* CallFunc_GetContext_ReturnValue12345, bool CallFunc_CardPackDestroyComplete_ReturnValue, bool CallFunc_CardPackOpeningComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue123456, bool Temp_bool_Variable1234, bool K2Node_Select_Default, bool Temp_bool_Variable12345, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool Temp_bool_Variable123456, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable1, int32 Temp_int_Loop_Counter_Variable, bool K2Node_Select1_Default, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool Temp_bool_Variable1234567, float K2Node_Event_DeltaSeconds, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue12, bool Temp_bool_Variable12345678, bool Temp_bool_Variable123456789, int32 Temp_int_Variable12, bool K2Node_Select12_Default, bool Temp_bool_Variable12345678910, bool Temp_bool_Variable1234567891011, bool Temp_bool_Variable123456789101112, int32 Temp_int_Variable123, bool K2Node_Select123_Default, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue12, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue1, float CallFunc_Lerp_ReturnValue12, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, bool Temp_bool_B_Execution_Happened_Variable, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue12, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue123, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue12, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue123, bool Temp_bool_A_Execution_Happened_Variable, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, bool K2Node_MultiGate1_FirstRun, int32 K2Node_MultiGate1_Data, float CallFunc_Lerp_ReturnValue123, float CallFunc_Lerp_ReturnValue1234, float CallFunc_Lerp_ReturnValue12345, bool K2Node_MultiGate12_FirstRun, int32 K2Node_MultiGate12_Data, int32 CallFunc_Array_Add_ReturnValue12, float CallFunc_Lerp_ReturnValue123456, float CallFunc_Lerp_ReturnValue1234567, float CallFunc_Lerp_ReturnValue12345678, int32 CallFunc_Add_IntInt_ReturnValue12, class UFortStoreContext* CallFunc_GetContext_ReturnValue1234567, const struct FTransform& CallFunc_TLerp_ReturnValue12, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult12345, const struct FKey& Temp_struct_Variable12, const struct FKey& K2Node_InputKeyEvent_Key12, const struct FKey& K2Node_InputKeyEvent_Key123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue123, bool K2Node_MultiGate123_FirstRun, int32 K2Node_MultiGate123_Data, int32 Temp_int_Array_Index_Variable1, class UStaticMeshComponent* CallFunc_Array_Get_Item1, class APlayerController* CallFunc_GetPlayerController_ReturnValue12, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue123, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult123456, bool CallFunc_K2_AttachToComponent_ReturnValue1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue12, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable1, TSoftClassPtr<class AStoreWeaponMaster_BP_C> CallFunc_Array_Get_Item12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, int32 Temp_int_Array_Index_Variable12, class AStoreCardReveal_BP_C* CallFunc_Array_Get_Item123, int32 Temp_int_Loop_Counter_Variable12, bool CallFunc_Less_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue1234, int32 Temp_int_Array_Index_Variable123, const struct FVector& CallFunc_BreakTransform_Location123, const struct FRotator& CallFunc_BreakTransform_Rotation123, const struct FVector& CallFunc_BreakTransform_Scale123, class AStoreCamera_Blueprint_C* CallFunc_Array_Get_Item1234, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_IsMobilePlatform_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue123, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123, int32 Temp_int_Loop_Counter_Variable123, bool CallFunc_Less_IntInt_ReturnValue123, int32 CallFunc_Add_IntInt_ReturnValue12345, bool Temp_bool_IsClosed_Variable1)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ExecuteUbergraph_StorePinataMaster_BP");

	Params::AStorePinataMaster_BP_C_ExecuteUbergraph_StorePinataMaster_BP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1;
	Parms.K2Node_DynamicCast_AsSound_Base = K2Node_DynamicCast_AsSound_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSound_Base1 = K2Node_DynamicCast_AsSound_Base1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue12 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue12;
	Parms.K2Node_DynamicCast_AsSound_Base12 = K2Node_DynamicCast_AsSound_Base12;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors1 = CallFunc_GetAllActorsOfClass_OutActors1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors12 = CallFunc_GetAllActorsOfClass_OutActors12;
	Parms.CallFunc_Array_Length_ReturnValue12 = CallFunc_Array_Length_ReturnValue12;
	Parms.K2Node_CustomEvent_NewStoreState = K2Node_CustomEvent_NewStoreState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue1 = CallFunc_SpawnSoundAttached_ReturnValue1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue12 = CallFunc_SpawnSoundAttached_ReturnValue12;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue123 = CallFunc_SpawnSoundAttached_ReturnValue123;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue1 = CallFunc_K2_GetComponentToWorld_ReturnValue1;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.CallFunc_GetMousePosition_LocationX1 = CallFunc_GetMousePosition_LocationX1;
	Parms.CallFunc_GetMousePosition_LocationY1 = CallFunc_GetMousePosition_LocationY1;
	Parms.CallFunc_GetMousePosition_ReturnValue1 = CallFunc_GetMousePosition_ReturnValue1;
	Parms.CallFunc_MakeVector2D_ReturnValue1 = CallFunc_MakeVector2D_ReturnValue1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult1 = CallFunc_K2_SetWorldTransform_SweepHitResult1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult12 = CallFunc_K2_SetWorldTransform_SweepHitResult12;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue1 = CallFunc_GetVectorParameterValue_ReturnValue1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue1 = CallFunc_GetSocketTransform_ReturnValue1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Loudness = CallFunc_BroadcastPlayerImpactAtLocation_Loudness;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Duration = CallFunc_BroadcastPlayerImpactAtLocation_Duration;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue = CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Loudness1 = CallFunc_BroadcastPlayerImpactAtLocation_Loudness1;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Duration1 = CallFunc_BroadcastPlayerImpactAtLocation_Duration1;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue1 = CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue1;
	Parms.CallFunc_MakeVector2D_ReturnValue12 = CallFunc_MakeVector2D_ReturnValue12;
	Parms.CallFunc_MakeVector2D_ReturnValue123 = CallFunc_MakeVector2D_ReturnValue123;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X1 = CallFunc_BreakVector2D_X1;
	Parms.CallFunc_BreakVector2D_Y1 = CallFunc_BreakVector2D_Y1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor1 = K2Node_MakeStruct_LinearColor1;
	Parms.CallFunc_GetSocketTransform_ReturnValue12 = CallFunc_GetSocketTransform_ReturnValue12;
	Parms.CallFunc_BreakTransform_Location12 = CallFunc_BreakTransform_Location12;
	Parms.CallFunc_BreakTransform_Rotation12 = CallFunc_BreakTransform_Rotation12;
	Parms.CallFunc_BreakTransform_Scale12 = CallFunc_BreakTransform_Scale12;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_softclass_Variable = Temp_softclass_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP = K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_UseSpecificPinataWeapon_ReturnValue = CallFunc_UseSpecificPinataWeapon_ReturnValue;
	Parms.CallFunc_IsLimitedToES2Features_ReturnValue = CallFunc_IsLimitedToES2Features_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_InputTouchEvent_FingerIndex = K2Node_InputTouchEvent_FingerIndex;
	Parms.K2Node_InputTouchEvent_Location = K2Node_InputTouchEvent_Location;
	Parms.K2Node_InputTouchEvent_FingerIndex1 = K2Node_InputTouchEvent_FingerIndex1;
	Parms.K2Node_InputTouchEvent_Location1 = K2Node_InputTouchEvent_Location1;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_InputKeyEvent_Key1 = K2Node_InputKeyEvent_Key1;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue1 = CallFunc_Conv_LinearColorToColor_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue = CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue;
	Parms.CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue1 = CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult123 = CallFunc_K2_SetWorldTransform_SweepHitResult123;
	Parms.CallFunc_TLerp_ReturnValue1 = CallFunc_TLerp_ReturnValue1;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult1234 = CallFunc_K2_SetWorldTransform_SweepHitResult1234;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult1 = CallFunc_K2_SetWorldLocation_SweepHitResult1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.CallFunc_CardPackDestroyComplete_ReturnValue = CallFunc_CardPackDestroyComplete_ReturnValue;
	Parms.CallFunc_CardPackOpeningComplete_ReturnValue = CallFunc_CardPackOpeningComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue123456 = CallFunc_GetContext_ReturnValue123456;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.Temp_bool_Variable123456 = Temp_bool_Variable123456;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.Temp_bool_Variable1234567 = Temp_bool_Variable1234567;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue12 = CallFunc_GetVectorParameterValue_ReturnValue12;
	Parms.Temp_bool_Variable12345678 = Temp_bool_Variable12345678;
	Parms.Temp_bool_Variable123456789 = Temp_bool_Variable123456789;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_bool_Variable12345678910 = Temp_bool_Variable12345678910;
	Parms.Temp_bool_Variable1234567891011 = Temp_bool_Variable1234567891011;
	Parms.Temp_bool_Variable123456789101112 = Temp_bool_Variable123456789101112;
	Parms.Temp_int_Variable123 = Temp_int_Variable123;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue12 = CallFunc_Conv_LinearColorToColor_ReturnValue12;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue1 = CallFunc_Lerp_ReturnValue1;
	Parms.CallFunc_Lerp_ReturnValue12 = CallFunc_Lerp_ReturnValue12;
	Parms.CallFunc_RandomUnitVector_ReturnValue = CallFunc_RandomUnitVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomRotator_ReturnValue = CallFunc_RandomRotator_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue12 = CallFunc_MakeVector_ReturnValue12;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue123 = CallFunc_Array_Length_ReturnValue123;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue1 = CallFunc_AddComponent_ReturnValue1;
	Parms.CallFunc_AddComponent_ReturnValue12 = CallFunc_AddComponent_ReturnValue12;
	Parms.CallFunc_AddComponent_ReturnValue123 = CallFunc_AddComponent_ReturnValue123;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.K2Node_MultiGate1_FirstRun = K2Node_MultiGate1_FirstRun;
	Parms.K2Node_MultiGate1_Data = K2Node_MultiGate1_Data;
	Parms.CallFunc_Lerp_ReturnValue123 = CallFunc_Lerp_ReturnValue123;
	Parms.CallFunc_Lerp_ReturnValue1234 = CallFunc_Lerp_ReturnValue1234;
	Parms.CallFunc_Lerp_ReturnValue12345 = CallFunc_Lerp_ReturnValue12345;
	Parms.K2Node_MultiGate12_FirstRun = K2Node_MultiGate12_FirstRun;
	Parms.K2Node_MultiGate12_Data = K2Node_MultiGate12_Data;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_Lerp_ReturnValue123456 = CallFunc_Lerp_ReturnValue123456;
	Parms.CallFunc_Lerp_ReturnValue1234567 = CallFunc_Lerp_ReturnValue1234567;
	Parms.CallFunc_Lerp_ReturnValue12345678 = CallFunc_Lerp_ReturnValue12345678;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue1234567 = CallFunc_GetContext_ReturnValue1234567;
	Parms.CallFunc_TLerp_ReturnValue12 = CallFunc_TLerp_ReturnValue12;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult12345 = CallFunc_K2_SetWorldTransform_SweepHitResult12345;
	Parms.Temp_struct_Variable12 = Temp_struct_Variable12;
	Parms.K2Node_InputKeyEvent_Key12 = K2Node_InputKeyEvent_Key12;
	Parms.K2Node_InputKeyEvent_Key123 = K2Node_InputKeyEvent_Key123;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue12 = CallFunc_RandomFloatInRange_ReturnValue12;
	Parms.CallFunc_Array_Add_ReturnValue123 = CallFunc_Array_Add_ReturnValue123;
	Parms.K2Node_MultiGate123_FirstRun = K2Node_MultiGate123_FirstRun;
	Parms.K2Node_MultiGate123_Data = K2Node_MultiGate123_Data;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetPlayerController_ReturnValue12 = CallFunc_GetPlayerController_ReturnValue12;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue123 = CallFunc_Add_IntInt_ReturnValue123;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult123456 = CallFunc_K2_SetWorldTransform_SweepHitResult123456;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue1 = CallFunc_K2_AttachToComponent_ReturnValue1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue12 = CallFunc_K2_GetComponentToWorld_ReturnValue12;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable12 = Temp_int_Array_Index_Variable12;
	Parms.CallFunc_Array_Get_Item123 = CallFunc_Array_Get_Item123;
	Parms.Temp_int_Loop_Counter_Variable12 = Temp_int_Loop_Counter_Variable12;
	Parms.CallFunc_Less_IntInt_ReturnValue12 = CallFunc_Less_IntInt_ReturnValue12;
	Parms.CallFunc_Add_IntInt_ReturnValue1234 = CallFunc_Add_IntInt_ReturnValue1234;
	Parms.Temp_int_Array_Index_Variable123 = Temp_int_Array_Index_Variable123;
	Parms.CallFunc_BreakTransform_Location123 = CallFunc_BreakTransform_Location123;
	Parms.CallFunc_BreakTransform_Rotation123 = CallFunc_BreakTransform_Rotation123;
	Parms.CallFunc_BreakTransform_Scale123 = CallFunc_BreakTransform_Scale123;
	Parms.CallFunc_Array_Get_Item1234 = CallFunc_Array_Get_Item1234;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue123 = CallFunc_GetPlayerController_ReturnValue123;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue123 = CallFunc_CreateDynamicMaterialInstance_ReturnValue123;
	Parms.Temp_int_Loop_Counter_Variable123 = Temp_int_Loop_Counter_Variable123;
	Parms.CallFunc_Less_IntInt_ReturnValue123 = CallFunc_Less_IntInt_ReturnValue123;
	Parms.CallFunc_Add_IntInt_ReturnValue12345 = CallFunc_Add_IntInt_ReturnValue12345;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
