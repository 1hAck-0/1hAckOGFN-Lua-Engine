# Input Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Table of Contents

#### [Input Engine Overview ](#input-engine-overview)
  - [Key Codes](#key-codes)
  - [Hotkeys](#hotkeys)
#### [Setup ](#setup)
#### Functions
- [IsKeyDown](#iskeydown)
- [IsKeyPressed](#iskeypressed)
- [IsKeyReleased](#iskeyreleased)
- [GetKeysCount](#getkeyscount)
- [GetKeyStr](#getkeystr)
- [GetController](#getcontroller)
- [HotkeyCollection](#hotkeycollection)
#### Classes (Metatables)
- [InputGameControllerMT](#inputgamecontrollermt)
  - [IsKeyDown](#inputgamecontrollermtiskeydown)
  - [IGetKeysCount](#inputgamecontrollermtgetkeyscount)
  - [GetRightThumbstick](#inputgamecontrollermtgetarightthumbstick)
  - [GetLeftThumbstick](#inputgamecontrollermtgetleftthumbstick)
  - [GetRightTrigger](#inputgamecontrollermtgetrighttrigger)
  - [GetLeftTrigger](#inputgamecontrollermtgetlefttrigger)
- [HotkeyCollectionMT](#hotkeycollectionmt)
  - [IsActive](#hotkeycollectionmtisactive)
  - [IsDown](#hotkeycollectionmtisdown)
  - [IsPressed](#hotkeycollectionmtispressed)
  - [IsReleased](#hotkeycollectionmtisreleased)
  - [IsNone](#hotkeycollectionmtisnone)
  - [Reset](#hotkeycollectionmtreset)
  - [ModifyButton](#hotkeycollectionmtmodifybutton)
  - [NumHotkeys](#hotkeycollectionmtnumhotkeys)
  - [ClearHotkeys](#hotkeycollectionmtclearhotkeys)
  - [RemoveHotkey](#hotkeycollectionmtremovehotkey)
  - [RegisterHotkeys](#hotkeycollectionmtregisterhotkeys)
  - [AddHotkey](#hotkeycollectionmtaddhotkey)
  - [NewHotkey](#hotkeycollectionmtnewhotkey)


---

### [Predefined Constants ](#predefined-constants)

## Input Engine Overview

Navigating through the "input" library requires a fundamental understanding of key codes and hotkeys, the building blocks of our input engine.

### Thread Safety

The input system is designed with thread safety in mind, ensuring seamless input handling across both the game thread and the render thread. It maintains two separate states of inputs - each updated in its corresponding thread - to facilitate this. When using our input API, it automatically switches to the appropriate state depending on the thread context. This means that you can confidently use the input functions in your scripts, knowing they'll work reliably on both the game and render threads.

### Key Codes

Key codes are integers (`number[int]`) that uniquely identify a key across various input devices like your keyboard, mouse, or game controller. Our engine recognizes the following types of key codes:

- [Native Windows Key Codes](https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes): Ranging from `0-255`, these key codes represent keyboard and mouse inputs.
  
- Game Controller Binds: Assigned values from `256-511`, these key codes correspond to game controller buttons.

Since the native key codes are well documented in the linked resource above, we won't delve into them here. However, our engine introduces unique controller binds as follows:

```lua
X = 0,
Y = 1,
B = 2,
A = 3,
RT = 4,
RB = 5,
RSB = 6,
LT = 7,
LB = 8,
LSB = 9,
DPAD_UP = 10,
DPAD_RIGHT = 11,
DPAD_DOWN = 12,
DPAD_LEFT = 13,
START = 14,
BACK = 15,
TOUCHPAD = 16,
PSB = 17,

COUNT = 18
```

**Note**: The naming convention used here is based on Xbox controllers, but rest assured, our input engine is compatible with both Xbox and PlayStation controllers. To compute the "absolute" key code for a given controller bind, simply add 256 to its value (e.g., for `X`, it's `256 + 0 = 256`).

Refer to the [Predefined Constants](#predefined-constants) section for these key codes defined globally upon loading this library.

### Hotkeys

Our enhanced hotkey system enables users to bind multiple keys to a single action or even to use key combinations like "CTRL+A+B" as a hotkey. These sets of hotkeys for a single action are collectively termed as `HotkeyCollections`. Learn more about the functionalities they offer [here](#hotkeycollectionmt).

## Setup

In order to use the input library, you must first load it into a Lua table by adding the following code at the top of your script in the "global code" space:
```lua
local input = require("input", true)
```

In that case the functions provided by the this library are loaded in a Lua table called `input`. But since it's a variable you can change it to whatever you prefer.

## Functions

---

### `IsKeyDown`

```lua
function IsKeyDown(key: number[int]) -> bool
```

#### Description

Checks if a specific key is currently held down.

#### Parameters

- `key`: The absolute keycode of the key.

#### Return Value

Boolean indicating whether the key is down.

#### Example

```lua
if input.IsKeyDown(INPUT_VK_SPACE) then
  println("Space key is down")
end
```

---

### `IsKeyPressed`

```lua
function IsKeyPressed(key: number[int]) -> bool
```

#### Description

Checks if a specific key has been pressed this tick.

#### Parameters

- `key`: The absolute keycode of the key.

#### Return Value

Boolean indicating whether the key has been pressed.

#### Example

```lua
if input.IsKeyPressed(INPUT_VK_SPACE) then
  println("Space key was pressed")
end
```

---

### `IsKeyReleased`

```lua
function IsKeyReleased(key: number[int]) -> bool
```

#### Description

Checks if a specific key has been released.

#### Parameters

- `key`: The absolute keycode of the key.

#### Return Value

Boolean indicating whether the key has been released.

#### Example

```lua
if input.IsKeyReleased(INPUT_VK_SPACE) then
  println("Space key was released")
end
```

---

### `GetKeysCount`

```lua
function GetKeysCount() -> number[int]
```

#### Description

Gets the total count of keys supported by our input system.

#### Parameters

None.

#### Return Value

The total number of keys supported.

#### Example

```lua
local totalKeys = input.GetKeysCount()
println("Total supported keys:", totalKeys)
```

---

### `GetKeyStr`

```lua
function GetKeyStr(key: number[int]) -> string
```

#### Description

Gets the string representation of a given key.

#### Parameters

- `key`: The absolute keycode of the key.

#### Return Value

String representation of the key.

#### Example

```lua
local keyStr = input.GetKeyStr(INPUT_VK_SPACE)
println("Key string:", keyStr)
```

---

### `GetController`

```lua
function GetController() -> userdata[InputGameControllerMT]|nil
```

#### Description

Retrieves the active game controller if available.
**IMPORTANT:** Controller support must be turned on inside the "Misc" tab of the cheat menu. Otherwise this function will always return `nil`.

#### Parameters

None.

#### Return Value

Userdata associated with `InputGameControllerMT` representing the game controller or `nil` if no controller is available.

#### Example

```lua
local controller = input.GetController()
if controller then
  println("Controller is connected")
  -- Do something
else
  println("No controller found")
end
```

---

### `HotkeyCollection`

```lua
function HotkeyCollection(key: number[int] = 0, keyMode: number[int] = 0) -> userdata[HotkeyCollectionMT]
```

#### Description

Creates a new instance of the `HotkeyCollectionMT` class as Lua managed userdata, allowing you to manage a collection of user-defined hotkeys. The function supports optional parameters to specify a default key and key mode for the hotkeys in the collection.

#### Parameters

- `key`: Default key code to associate with the hotkeys in the collection (default is 0).
- `keyMode`: Default key mode to associate with the hotkeys in the collection (default is Hold).

#### Return Value

Returns a new instance of the `HotkeyCollectionMT` class.

#### Example

```lua
-- Create a new HotkeyCollectionMT instance with default values
local myHotkey = input.HotkeyCollection()

-- Create a new HotkeyCollectionMT instance with a specific default key and key mode
local customHotkey = input.HotkeyCollection(string.byte('F'), 2)
```

---

## Classes (Metatables)

---

### InputGameControllerMT

`InputGameControllerMT` serves as an interface for handling game controller inputs. The class offers multiple methods to detect and manage various types of button presses, thumbstick movements, and trigger pressures on the game controller. To utilize the functionality of this class, you can acquire an instance by calling `GetController`.

---

### `InputGameControllerMT:IsKeyDown`

```lua
function InputGameControllerMT:IsKeyDown(key: number[int]) -> bool
```

#### Description

Checks if a specific button on the controller is currently held down.

#### Parameters

- `key`: The relative controller keycode of the button to check.

#### Return Value

Boolean indicating whether the button is down.

#### Example

```lua
if controller:IsKeyDown(INPUT_GAMEPAD_A) then
  println("A button is down")
end
```

---

### `InputGameControllerMT:GetKeysCount`

```lua
function InputGameControllerMT:GetKeysCount() -> number[int]
```

#### Description

Gets the total count of keys/buttons supported by the controller input system (may vary).

#### Parameters

None.

#### Return Value

The total number of keys/buttons supported.

#### Example

```lua
local totalButtons = controller:GetKeysCount()
println("Total supported buttons:", totalButtons)
```

---

### `InputGameControllerMT:GetRightThumbstick`

```lua
function InputGameControllerMT:GetRightThumbstick(deadzone: number[float]?) -> vec2
```

#### Description

Gets the position of the right thumbstick.

#### Parameters

- `deadzone`: This is a float threshold value between 0.0 and 1.0 for deadzone filtering. If this parameter is not explicitly set, the system will automatically use the value specified by the user in the `Controller Support` settings section of the cheat menu. The deadzone helps to filter out minor, unintended inputs.

#### Return Value

2D Vector containing x and y positions between 0.0 and 1.0 of the right thumbstick.

#### Example

```lua
local rightStickPos = controller:GetRightThumbstick()
println("Right Stick Position:", rightStickPos)
```

---

### `InputGameControllerMT:GetLeftThumbstick`

```lua
function InputGameControllerMT:GetLeftThumbstick(deadzone: number[float]?) -> vec2
```

#### Description

Gets the position of the left thumbstick.

#### Parameters

- `deadzone`: This is a float threshold value between 0.0 and 1.0 for deadzone filtering. If this parameter is not explicitly set, the system will automatically use the value specified by the user in the `Controller Support` settings section of the cheat menu. The deadzone helps to filter out minor, unintended inputs.

#### Return Value

2D Vector containing x and y positions between 0.0 and 1.0 of the left thumbstick.

#### Example

```lua
local leftStickPos = controller:GetLeftThumbstick()
println("Left Stick Position:", leftStickPos)
```

---

### `InputGameControllerMT:GetRightTrigger`

```lua
function InputGameControllerMT:GetRightTrigger(deadzone: number[float]?) -> number[float]
```

#### Description

Gets the pressure value of the right trigger.

#### Parameters

- `deadzone`: This is a float threshold value between 0.0 and 1.0 for deadzone filtering. If this parameter is not explicitly set, the system will automatically use the value specified by the user in the `Controller Support` settings section of the cheat menu. The deadzone helps to filter out minor, unintended inputs.

#### Return Value

Float between 0.0 and 1.0 indicating the pressure on the right trigger.

#### Example

```lua
local rightTriggerPressure = controller:GetRightTrigger()
println("Right Trigger Pressure:", rightTriggerPressure)
```

---

### `InputGameControllerMT:GetLeftTrigger`

```lua
function InputGameControllerMT:GetLeftTrigger(deadzone: number[float]?) -> number[float]
```

#### Description

Gets the pressure value of the left trigger.

#### Parameters

- `deadzone`: This is a float threshold value between 0.0 and 1.0 for deadzone filtering. If this parameter is not explicitly set, the system will automatically use the value specified by the user in the `Controller Support` settings section of the cheat menu. The deadzone helps to filter out minor, unintended inputs.

#### Return Value

Float between 0.0 and 1.0 indicating the pressure on the left trigger.

#### Example

```lua
local leftTriggerPressure = controller:GetLeftTrigger()
println("Left Trigger Pressure:", leftTriggerPressure)
```

---

### HotkeyCollectionMT

The `HotkeyCollectionMT` class serves as a robust interface for managing and interacting with a collection of user-defined hotkeys. These hotkeys are tied to specific actions, making the class invaluable for scripts designed to offer a customizable user experience. Through the various methods this class offers, you can easily manipulate and query hotkey settings in your Lua scripts.

To instantiate this class, use the [HotkeyCollection()](#hotkeycollection) function. Memory management and garbage collection are automatically handled, eliminating the need for manual clean-up.

##### Key Codes
As previously discussed in this documentation, key codes are numerical representations of specific keys on the keyboard. For more details, refer to the [key codes section](#key-codes).

##### Key Modes
Key Modes are a new, pivotal concept that allows the user to specify the condition under which a hotkey is considered "active." These modes can be one of the following:
  - `Hold`: The hotkey is active as long as it's being held down. Represented by a 0.
  - `Press`: The hotkey is active only at the moment it is initially pressed. Represented by a 1.
  - `Released`: The hotkey is active only at the moment it is released. Represented by a 2.
  - `Not Held`: The hotkey is active when it is not being held down. Represented by a 3.

##### Internal Active State

The concept of the "Internal Active State" is essential when working with the `IsActive()` function. This internal state is a boolean (true or false) value maintained by the input engine for each hotkey to indicate its "active" status.

- **For "Hold" and "Not Held" Key Modes:** The internal active state is not relevant. The engine checks the current status of the key (down or not down) during each update tick.
  
- **For "Press" and "Released" Key Modes:** The internal active state comes into play. Here's how it works:
  - When a hotkey is pressed (for "Press" mode) or released (for "Released" mode), the internal active state is toggled.
  - The `IsActive()` function will return true not just when the hotkey is pressed or released, but whenever the internal active state is true.
  - The internal state remains true until the user again presses or releases the hotkey, toggling the state.
  - If you want `IsActive()` to return true only for the specific tick where the hotkey is actually pressed or released, use the `Reset()` function right after `IsActive()`. Calling `Reset()` sets the internal active state to false for all hotkeys, meaning `IsActive()` will not return true again until a new press or release event occurs for those hotkeys.

This design allows for more complex interactions and behaviors tied to single or sequential key presses and releases.

---

### `HotkeyCollectionMT:IsActive`

```lua
function HotkeyCollectionMT:IsActive(changeActive: bool = true) -> bool
```

#### Description

Checks if the hotkey collection is currently active.

#### Parameters

- `changeActive`: Boolean to determine whether the internal active state of the hotkey can change or whether you just want to fetch its value.

#### Return Value

Boolean indicating whether the hotkey collection is active.

#### Example

```lua
if myHotkey:IsActive() then
  println("The hotkey is active.")

  -- Optionally call myHotkey:Reset() to set the internal active state
end
```

---

### `HotkeyCollectionMT:IsDown`

```lua
function HotkeyCollectionMT:IsDown() -> bool
```

#### Description

Checks if any hotkey in the collection is currently held down.

#### Parameters

None.

#### Return Value

Boolean indicating whether any hotkey is down.

#### Example

```lua
if myHotkey:IsDown() then
  println("A hotkey is currently down.")
end
```

---

### `HotkeyCollectionMT:IsPressed`

```lua
function HotkeyCollectionMT:IsPressed() -> bool
```

#### Description

Checks if any hotkey in the collection has been pressed this tick.

#### Parameters

None.

#### Return Value

Boolean indicating whether any hotkey has been pressed.

#### Example

```lua
if myHotkey:IsPressed() then
  println("A hotkey has been pressed.")
end
```

---

### `HotkeyCollectionMT:IsReleased`

```lua
function HotkeyCollectionMT:IsReleased() -> bool
```

#### Description

Checks if any hotkey in the collection has been released.

#### Parameters

None.

#### Return Value

Boolean indicating whether any hotkey has been released.

#### Example

```lua
if myHotkey:IsReleased() then
  println("A hotkey has been released.")
end
```

---

### `HotkeyCollectionMT:IsNone`

```lua
function HotkeyCollectionMT:IsNone() -> bool
```

#### Description

Checks if the hotkey collection contains no enabled hotkeys.

#### Parameters

None.

#### Return Value

Boolean indicating whether the collection contains no enabled hotkeys.

#### Example

```lua
if myHotkey:IsNone() then
  println("There is no enabled hotkey currently.")
end
```

---

### `HotkeyCollectionMT:Reset`

```lua
function HotkeyCollectionMT:Reset() -> none
```

#### Description

Resets the internal "active" state of all hotkeys in the collection.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
myHotkey:Reset()
println("The hotkey collection has been reset.")
```

---

### `HotkeyCollectionMT:ModifyButton`

```lua
function HotkeyCollectionMT:ModifyButton(settingsLabel: string, label: string = "Edit Hotkeys") -> bool
```

#### Description

Displays an ImGui button for letting the user modify the hotkey collection to their preference. Use only in the Render Thread and in an ImGui context.

#### Parameters

- `settingsLabel`: Label for the hotkey settings popup window.
- `label`: Label for the button. If empty or not specified "Edit Hotkeys" is the default.

#### Return Value

Boolean indicating whether the button was clicked.

#### Example

```lua
if myHotkey:ModifyButton("My hotkey Settings", "Edit my Hotkeys") then
  println("Modify Button was clicked.")
end
```

---

### `HotkeyCollectionMT:NumHotkeys`

```lua
function HotkeyCollectionMT:NumHotkeys() -> number[int]
```

#### Description

Returns the number of hotkeys in the collection.

#### Parameters

None.

#### Return Value

The number of hotkeys in the collection.

#### Example

```lua
local num = myHotkey:NumHotkeys()
println("Number of hotkeys:", num)
```

---

### `HotkeyCollectionMT:ClearHotkeys`

```lua
function HotkeyCollectionMT:ClearHotkeys() -> none
```

#### Description

Clears all hotkeys from the collection.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
myHotkey:ClearHotkeys()
println("All hotkeys have been cleared.")
```

---

### `HotkeyCollectionMT:RemoveHotkey`

```lua
function HotkeyCollectionMT:RemoveHotkey(index: number[int]) -> bool
```

#### Description

Removes a hotkey from the collection by an index.

#### Parameters

- `index`: The index starting from 0 of the hotkey to remove.

#### Return Value

Boolean indicating whether the hotkey was successfully removed.

#### Example

```lua
if myHotkey:RemoveHotkey(0) then
  println("Hotkey was removed.")
end
```

---

### `HotkeyCollectionMT:RegisterHotkeys`

```lua
function HotkeyCollectionMT:RegisterHotkeys() -> none
```

#### Description

Ensures that the state of all hotkeys in the collection is consistently updated each tick by registering them with the input engine. While this function is predominantly used internally and should not generally require explicit invocation, it is exposed for those rare cases where hotkey states might not be recognized as expected.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
myHotkey:RegisterHotkeys()
println("All hotkeys have been registered to the input engine.")
```

---

### `HotkeyCollectionMT:AddHotkey`

```lua
function HotkeyCollectionMT:AddHotkey(key: number[int] = 0, keyMode: number[int] = 0) -> none
```

#### Description

Adds a new hotkey to the collection that's enabled by default.

#### Parameters

- `key`: The keycode for the hotkey.
- `keyMode`: The key mode for the hotkey.

#### Return Value

None.

#### Example

```lua
myHotkey:AddHotkey(INPUT_VK_SPACE, 1) -- Add the space key with key mode 1 - press mode
println("New space hotkey added.")
```

---

### `HotkeyCollectionMT:NewHotkey`

```lua
function HotkeyCollectionMT:NewHotkey()
```

#### Description

Adds a new, empty hotkey in the collection that's disabled unless the user enables it in the settings of the hotkey collection.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
myHotkey:NewHotkey()
println("New, empty, disabled hotkey created.")
```

---

## Predefined Constants

Predefined constants in our library are essentially key codes accessible globally within your Lua scripts. These constants become available when you load this library and allow for quick and easy key binding and interaction. Below is the full list of predefined constants:
```lua
-- Native key code binds
INPUT_VK_LBUTTON
INPUT_VK_RBUTTON
INPUT_VK_CANCEL
INPUT_VK_MBUTTON
INPUT_VK_XBUTTON1
INPUT_VK_XBUTTON2
INPUT_VK_BACK
INPUT_VK_TAB
INPUT_VK_CLEAR
INPUT_VK_RETURN
INPUT_VK_SHIFT
INPUT_VK_CONTROL
INPUT_VK_MENU
INPUT_VK_PAUSE
INPUT_VK_CAPITAL
INPUT_VK_KANA
INPUT_VK_HANGEUL
INPUT_VK_HANGUL
INPUT_VK_IME_ON
INPUT_VK_JUNJA
INPUT_VK_FINAL
INPUT_VK_HANJA
INPUT_VK_KANJI
INPUT_VK_IME_OFF
INPUT_VK_ESCAPE
INPUT_VK_CONVERT
INPUT_VK_NONCONVERT
INPUT_VK_ACCEPT
INPUT_VK_MODECHANGE
INPUT_VK_SPACE
INPUT_VK_PRIOR
INPUT_VK_NEXT
INPUT_VK_END
INPUT_VK_HOME
INPUT_VK_LEFT
INPUT_VK_UP
INPUT_VK_RIGHT
INPUT_VK_DOWN
INPUT_VK_SELECT
INPUT_VK_println
INPUT_VK_EXECUTE
INPUT_VK_SNAPSHOT
INPUT_VK_INSERT
INPUT_VK_DELETE
INPUT_VK_HELP
INPUT_VK_LWIN
INPUT_VK_RWIN
INPUT_VK_APPS
INPUT_VK_SLEEP
INPUT_VK_NUMPAD0
INPUT_VK_NUMPAD1
INPUT_VK_NUMPAD2
INPUT_VK_NUMPAD3
INPUT_VK_NUMPAD4
INPUT_VK_NUMPAD5
INPUT_VK_NUMPAD6
INPUT_VK_NUMPAD7
INPUT_VK_NUMPAD8
INPUT_VK_NUMPAD9
INPUT_VK_MULTIPLY
INPUT_VK_ADD
INPUT_VK_SEPARATOR
INPUT_VK_SUBTRACT
INPUT_VK_DECIMAL
INPUT_VK_DIVIDE
INPUT_VK_F1
INPUT_VK_F2
INPUT_VK_F3
INPUT_VK_F4
INPUT_VK_F5
INPUT_VK_F6
INPUT_VK_F7
INPUT_VK_F8
INPUT_VK_F9
INPUT_VK_F10
INPUT_VK_F11
INPUT_VK_F12
INPUT_VK_F13
INPUT_VK_F14
INPUT_VK_F15
INPUT_VK_F16
INPUT_VK_F17
INPUT_VK_F18
INPUT_VK_F19
INPUT_VK_F20
INPUT_VK_F21
INPUT_VK_F22
INPUT_VK_F23
INPUT_VK_F24
INPUT_VK_NAVIGATION_VIEW
INPUT_VK_NAVIGATION_MENU
INPUT_VK_NAVIGATION_UP
INPUT_VK_NAVIGATION_DOWN
INPUT_VK_NAVIGATION_LEFT
INPUT_VK_NAVIGATION_RIGHT
INPUT_VK_NAVIGATION_ACCEPT
INPUT_VK_NAVIGATION_CANCEL
INPUT_VK_NUMLOCK
INPUT_VK_SCROLL
INPUT_VK_OEM_NEC_EQUAL
INPUT_VK_OEM_FJ_JISHO
INPUT_VK_OEM_FJ_MASSHOU
INPUT_VK_OEM_FJ_TOUROKU
INPUT_VK_OEM_FJ_LOYA
INPUT_VK_OEM_FJ_ROYA
INPUT_VK_LSHIFT
INPUT_VK_RSHIFT
INPUT_VK_LCONTROL
INPUT_VK_RCONTROL
INPUT_VK_LMENU
INPUT_VK_RMENU
INPUT_VK_BROWSER_BACK
INPUT_VK_BROWSER_FORWARD
INPUT_VK_BROWSER_REFRESH
INPUT_VK_BROWSER_STOP
INPUT_VK_BROWSER_SEARCH
INPUT_VK_BROWSER_FAVORITES
INPUT_VK_BROWSER_HOME
INPUT_VK_VOLUME_MUTE
INPUT_VK_VOLUME_DOWN
INPUT_VK_VOLUME_UP
INPUT_VK_MEDIA_NEXT_TRACK
INPUT_VK_MEDIA_PREV_TRACK
INPUT_VK_MEDIA_STOP
INPUT_VK_MEDIA_PLAY_PAUSE
INPUT_VK_LAUNCH_MAIL
INPUT_VK_LAUNCH_MEDIA_SELECT
INPUT_VK_LAUNCH_APP1
INPUT_VK_LAUNCH_APP2
INPUT_VK_OEM_1
INPUT_VK_OEM_PLUS
INPUT_VK_OEM_COMMA
INPUT_VK_OEM_MINUS
INPUT_VK_OEM_PERIOD
INPUT_VK_OEM_2
INPUT_VK_OEM_3
-- Those only work with Xbox controllers unlike our game controller input engine
INPUT_VK_GAMEPAD_A
INPUT_VK_GAMEPAD_B
INPUT_VK_GAMEPAD_X
INPUT_VK_GAMEPAD_Y
INPUT_VK_GAMEPAD_RIGHT_SHOULDER
INPUT_VK_GAMEPAD_LEFT_SHOULDER
INPUT_VK_GAMEPAD_LEFT_TRIGGER
INPUT_VK_GAMEPAD_RIGHT_TRIGGER
INPUT_VK_GAMEPAD_DPAD_UP
INPUT_VK_GAMEPAD_DPAD_DOWN
INPUT_VK_GAMEPAD_DPAD_LEFT
INPUT_VK_GAMEPAD_DPAD_RIGHT
INPUT_VK_GAMEPAD_MENU
INPUT_VK_GAMEPAD_VIEW
INPUT_VK_GAMEPAD_LEFT_THUMBSTICK_BUTTON
INPUT_VK_GAMEPAD_RIGHT_THUMBSTICK_BUTTON
INPUT_VK_GAMEPAD_LEFT_THUMBSTICK_UP
INPUT_VK_GAMEPAD_LEFT_THUMBSTICK_DOWN
INPUT_VK_GAMEPAD_LEFT_THUMBSTICK_RIGHT
INPUT_VK_GAMEPAD_LEFT_THUMBSTICK_LEFT
INPUT_VK_GAMEPAD_RIGHT_THUMBSTICK_UP
INPUT_VK_GAMEPAD_RIGHT_THUMBSTICK_DOWN
INPUT_VK_GAMEPAD_RIGHT_THUMBSTICK_RIGHT
INPUT_VK_GAMEPAD_RIGHT_THUMBSTICK_LEFT
INPUT_VK_OEM_4
INPUT_VK_OEM_5
INPUT_VK_OEM_6
INPUT_VK_OEM_7
INPUT_VK_OEM_8
INPUT_VK_OEM_AX
INPUT_VK_OEM_102
INPUT_VK_ICO_HELP
INPUT_VK_ICO_00
INPUT_VK_PROCESSKEY
INPUT_VK_ICO_CLEAR
INPUT_VK_PACKET
INPUT_VK_OEM_RESET
INPUT_VK_OEM_JUMP
INPUT_VK_OEM_PA1
INPUT_VK_OEM_PA2
INPUT_VK_OEM_PA3
INPUT_VK_OEM_WSCTRL
INPUT_VK_OEM_CUSEL
INPUT_VK_OEM_ATTN
INPUT_VK_OEM_FINISH
INPUT_VK_OEM_COPY
INPUT_VK_OEM_AUTO
INPUT_VK_OEM_ENLW
INPUT_VK_OEM_BACKTAB
INPUT_VK_ATTN
INPUT_VK_CRSEL
INPUT_VK_EXSEL
INPUT_VK_EREOF
INPUT_VK_PLAY
INPUT_VK_ZOOM
INPUT_VK_NONAME
INPUT_VK_PA1
INPUT_VK_OEM_CLEAR

-- Game controller key codes (relative, starting from 0)
INPUT_GAMEPAD_X
INPUT_GAMEPAD_Y
INPUT_GAMEPAD_B
INPUT_GAMEPAD_A
INPUT_GAMEPAD_RT
INPUT_GAMEPAD_RB
INPUT_GAMEPAD_RSB
INPUT_GAMEPAD_LT
INPUT_GAMEPAD_LB
INPUT_GAMEPAD_LSB
INPUT_GAMEPAD_DPAD_UP
INPUT_GAMEPAD_DPAD_RIGHT
INPUT_GAMEPAD_DPAD_DOWN
INPUT_GAMEPAD_DPAD_LEFT
INPUT_GAMEPAD_START
INPUT_GAMEPAD_BACK
INPUT_GAMEPAD_TOUCHPAD
INPUT_GAMEPAD_PSB
```
