#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommonInput.CommonInputSettings
// 0x0180 (0x01A8 - 0x0028)
class UCommonInputSettings : public UObject
{
public:
	bool                                               bAutoLoadData;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonInput.CommonInputSettings.InputData
	struct FCommonInputPlatformData                    CommonInputPlatformData[0x7];                             // 0x0058(0x0028) (Edit, Config)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
	class UClass*                                      InputDataClass;                                           // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCommonInputPlatformData                    CurrentPlatform;                                          // 0x0180(0x0028) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonInput.CommonInputSettings");
		return ptr;
	}

};


// Class CommonInput.CommonInputSubsystem
// 0x00A0 (0x00C8 - 0x0028)
class UCommonInputSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty CommonInput.CommonInputSubsystem.OnInputMethodChanged
	unsigned char                                      UnknownData01[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	ECommonInputType                                   LastInputType;                                            // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	ECommonInputType                                   CurrentInputType;                                         // 0x0051(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	ECommonGamepadType                                 GamepadInputType;                                         // 0x0052(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	TMap<struct FName, ECommonInputType>               CurrentInputLocks;                                        // 0x0058(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET
	bool                                               bIsGamepadSimulatedClick;                                 // 0x00C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonInput.CommonInputSubsystem");
		return ptr;
	}


	bool ShouldShowInputKeys();
	void SetGamepadInputType(ECommonGamepadType InGamepadInputType);
	void SetCurrentInputType(ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	void InputMethodChangedDelegate__DelegateSignature(ECommonInputType bNewInputType);
	ECommonInputType GetDefaultInputType();
	ECommonInputType GetCurrentInputType();
	ECommonGamepadType GetCurrentGamepadType();
};


// Class CommonInput.CommonUIInputData
// 0x0010 (0x0038 - 0x0028)
class UCommonUIInputData : public UObject
{
public:
	struct FDataTableRowHandle                         DefaultClickAction;                                       // 0x0028(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonInput.CommonUIInputData");
		return ptr;
	}

};


// Class CommonInput.CommonInputControllerData
// 0x0018 (0x0040 - 0x0028)
class UCommonInputControllerData : public UObject
{
public:
	ECommonInputType                                   InputType;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECommonGamepadType                                 GamepadType;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	TArray<struct FCommonInputKeyBrushConfiguration>   InputBrushDataMap;                                        // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonInput.CommonInputControllerData");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
