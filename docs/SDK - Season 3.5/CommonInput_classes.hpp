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

// 0x98 (0xC0 - 0x28)
// Class CommonInput.CommonInputContext
class UCommonInputContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnInputMethodChanged;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B91[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECommonInputType                  CurrentInputType;                                  // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonGamepadType                GamepadInputType;                                  // 0xB1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B92[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputContext");
		return Clss;
	}

	void SetGamepadInputType(enum class ECommonGamepadType InGamepadInputType);
	void SetCurrentInputType(enum class ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	void InputMethodChangedDelegate__DelegateSignature(enum class ECommonInputType bNewInputType);
	enum class ECommonInputType GetCurrentInputType();
	enum class ECommonGamepadType GetCurrentGamepadType();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
