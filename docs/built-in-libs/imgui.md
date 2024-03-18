# ImGui Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Table of Contents

#### [Introduction to ImGui ](#introduction-to-imgui)

#### [Setup ](#setup)

#### Functions

- [Text](#text)
- [Button](#button)
- [RadioButton](#radiobutton)
- [Switch](#switch)
- [Checkbox](#checkbox)
- [Hotkey](#hotkey)
- [SliderPro](#sliderpro)
- [Slider](#slider)
- [Combo](#combo)
- [ListBox](#listbox)
- [ColorEdit](#coloredit)
- [ColorPicker](#colorpicker)
- [ColorButton](#colorbutton)
- [TreeNode](#treenode)
- [TreePop](#treepop)
- [InputText](#inputtext)
- [InputTextWithHint](#inputtextwithhint)
- [InputTextMultiline](#inputtextmultiline)
- [InputInt](#inputint)
- [InputDouble](#inputdouble)
- [DragScalar](#dragscalar)
- [SetTooltip](#settooltip)
- [Begin](#begin)
- [End](#end)
- [BeginGroup](#begingroup)
- [EndGroup](#endgroup)
- [BeginDisabled](#begindisabled)
- [EndDisabled](#enddisabled)
- [BeginChild](#beginchild)
- [EndChild](#endchild)
- [BeginLabeledChild](#beginlabeledchild)
- [EndLabeledChild](#endlabeledchild)
- [BeginMenu](#beginmenu)
- [EndMenu](#endmenu)
- [MenuItem](#menuitem)
- [BeginPopup](#beginpopup)
- [EndPopup](#endpopup)
- [Popup](#popup)
- [CloseCurrentPopup](#closecurrentpopup)
- [OpenPopup](#openpopup)
- [PushID](#pushid)
- [PopID](#popid)
- [PushStyleColor](#pushstylecolor)
- [PopStyleColor](#popstylecolor)
- [PushStyleVar](#pushstylevar)
- [PopStyleVar](#popstylevar)
- [GetStyleColor](#getstylecolor)
- [GetStyleVar](#getstylevar)
- [Spacing](#spacing)
- [Dummy](#dummy)
- [NewLine](#newline)
- [SameLine](#sameline)
- [Indent](#indent)
- [Unindent](#unindent)
- [SetNextItemWidth](#setnextitemwidth)
- [Separator](#separator)
- [ColorConvertVec4ToU32](#colorconvertvec4tou32)
- [ColorConvertU32ToVec4](#colorconvertu32tovec4)
- [Columns](#columns)
- [NextColumn](#nextcolumn)
- [SetColumnOffset](#setcolumnoffset)
- [SetColumnWidth](#setcolumnwidth)
- [SetWindowFontScale](#setwindowfontscale)
- [SetKeyboardFocusHere](#setkeyboardfocushere)
- [GetBackgroundDrawList](#getbackgrounddrawlist)
- [GetForegroundDrawList](#getforegrounddrawlist)
- [GetOverlayDrawList](#getoverlaydrawlist)
- [GetWindowDrawList](#getwindowdrawlist)
- [CalcTextSize](#calctextsize)
- [CalcItemSize](#calcitemsize)
- [GetCursorPos](#getcursorpos)
- [SetCursorPos](#setcursorpos)
- [GetContentRegionAvail](#getcontentregionavail)
- [GetWindowSize](#getwindowsize)
- [SetWindowSize](#setwindowsize)
- [GetWindowPos](#getwindowpos)
- [SetWindowPos](#setwindowpos)
- [GetDisplaySize](#getdisplaysize)
- [GetDisplayCenter](#getdisplaycenter)
- [GetMousePos](#getmousepos)
- [IsWindowApperaing](#iswindowapperaing)
- [IsItemHovered](#isitemhovered)
- [IsItemActive](#isitemactive)
- [IsItemClicked](#isitemclicked)
- [IsItemFocused](#isitemfocused)
- [IsAnyItemHovered](#isanyitemhovered)
- [IsAnyItemActive](#isanyitemactive)
- [IsAnyItemFocused](#isanyitemfocused)
- [IsKeyDown](#iskeydown)
- [IsKeyPressed](#iskeypressed)
- [IsKeyReleased](#iskeyreleased)
- [IsMouseDown](#ismousedown)
- [IsMouseClicked](#ismouseclicked)
- [IsMouseReleased](#ismousereleased)
- [IsMouseDoubleClicked](#ismousedoubleclicked)
- [IsGameFocused](#isgamefocused)
- [IsMenuOpen](#ismenuopen)
- [IsMenuOverlayVisible](#ismenuoverlayvisible)
- [OpenMenu](#openmenu)
- [HideMenu](#hidemenu)
- [GetWindowInfo](#getwindowinfo)
- [GetDeltaTime](#getdeltatime)
- [CreateImageResource](#createimageresource)

#### Classes (Metatables)

- [ImDrawListMT](#imdrawlistmt)
  - [AddText](#imdrawlistmtaddtext)
  - [AddLine](#imdrawlistmtaddline)
  - [AddRect](#imdrawlistmtaddrect)
  - [AddRectFilled](#imdrawlistmtaddrectfilled)
  - [AddRectFilledMultiColor](#imdrawlistaddrectfilledmulticolor)
  - [AddCircle](#imdrawlistmtaddcircle)
  - [AddCircleFilled](#imdrawlistmtaddcirclefilled)
  - [AddTriangle](#imdrawlistmtaddtriangle)
  - [AddTriangleFilled](#imdrawlistmtaddtrianglefilled)
  - [AddQuad](#imdrawlistmtaddquad)
  - [AddQuadFilled](#imdrawlistmtaddquadfilled)
  - [AddImage](#imdrawlistmtaddimage)
  - [AddBezierCubic](#imdrawlistmtaddbeziercubic)
  - [AddBezierCurve](#imdrawlistmtaddbeziercurve)
  - [AddBezierQuadratic](#imdrawlistmtaddbezierquadratic)
  - [AddPolyline](#imdrawlistmtaddpolyline)

- [ImageAssetMT](#imageassetmt)
  - [GetTextureID](#imageassetmtgettextureid)
  - [GetSize](#imageassetmtgetsize)
  - [IsLoaded](#imageassetmtisloaded)
  - [Free](#imageassetmtfree)
  - [AddImage](#imageassetmtaddimage)
  - [Image](#imageassetmtimage)
  - [ImageButton](#imageassetmtimagebutton)
  - [ImageQuad](#imageassetmtimagequad)
  - [ImageRounded](#imageassetmtimagerounded)



#### Misc

- [Predefined Constants ](#predefined-constants)


---

## Introduction to ImGui

[ImGui](https://github.com/ocornut/imgui) is a standalone library initially developed in C++ for creating immediate-mode graphical user interfaces (GUIs). In our environment, ImGui is responsible for rendering everything outside the game, including cheat menus and visual elements. We are using version [v1.89.2 of ImGui](https://github.com/ocornut/imgui/tree/v1.89.2).

By mastering this library in your scripts, you can achieve various outcomes such as:

- Creating custom GUI windows
- Developing interactive user interfaces for tweaking your script settings via the `onSettings` event
- Drawing individual elements like lines, circles, and triangles using our `ImDrawList` functionality

If you've previously worked with ImGui in any project, you'll find it easy to adapt to this library. For newcomers, the architecture and usage might seem confusing initially. While the [official ImGui documentation](https://github.com/ocornut/imgui) is in C++, its principles can be readily translated to Lua and our engine. We also provide [example scripts](../examples/) that show how to use ImGui effectively in this Lua Engine.

**Note:** All ImGui code must execute on the Render Thread. Attempting to use ImGui functions on the Game Thread, for example in `onGameTick` events, won't work and may even lead to crashes. If you need to perform rendering on the Game Thread, refer to the [Renderer library](./api.md#renderer).



## Setup

To access the functionalities of this library, include the following line at the start of your Lua script:

```lua
local imgui = require("imgui", true)
```

This loads all available ImGui functions into a Lua table named `imgui`. Feel free to rename this variable according to your preference.



## Functions

### `Text`

```lua
function Text(...) -> none
```

#### Description

Renders textual content within an ImGui window.

#### Parameters

Accepts any number of arguments that can be converted to strings using the `tostring` method.

#### Return Value

None.

#### Example

```lua
imgui.Text("Number:", 12, "\nBoolean:", true)
```

---

### `Button`

```lua
function Button(label: string, size: vec2 = vec2(0, 0)) -> bool
```

#### Description

Renders a clickable button within the user interface.

#### Parameters

- `label`: Specifies the button's label text.
- `size`: Determines the button dimensions. Using `vec2(0, 0)` auto-adjusts the size based on the label.

#### Return Value

Returns `true` if the button has been clicked, otherwise `false`.

#### Example

```lua
if imgui.Button("Click me") then
  println("Button clicked.")
end
```

---

### `RadioButton`

```lua
function RadioButton(label: string, active: bool) -> bool
```

#### Description

Renders a radio button, ideal for single or multiple-choice selection menus.

#### Parameters

- `label`: Describes the radio button.
- `active`: Indicates if the radio button is currently selected.

#### Return Value

Returns `true` if the radio button is selected.

#### Example

```lua
local selection = 1
-- ...
if imgui.RadioButton("Option 1", selection == 1) then
  selection = 1
end
if imgui.RadioButton("Option 2", selection == 2) then
  selection = 2
end
```

---

### `Switch`

```lua
function Switch(label: string, enabled: bool) -> bool, bool
```

#### Description

Renders a toggle switch widget.

#### Parameters

- `label`: Describes the switch.
- `enabled`: Specifies the switch's current state.

#### Return Value

1. Updated state of the switch.
2. Boolean indicating whether the switch was toggled.

#### Example

```lua
local enabled = true
-- ...
enabled = imgui.Switch("My Switch", enabled)
```

---

### `Checkbox`

```lua
function Checkbox(label: string, ticked: bool) -> bool, bool
```

#### Description

Renders a checkbox widget.

#### Parameters

- `label`: Describes the checkbox.
- `ticked`: Indicates whether the checkbox is currently marked.

#### Return Value

1. Updated checkbox state.
2. Boolean indicating if the checkbox was toggled.

#### Example

```lua
local ticked = false
-- ...
ticked = imgui.Checkbox("My Checkbox", ticked)
```

---

### `Hotkey`

```lua
function Hotkey(
    label: string,
    key: number[int],
    changing: bool
) -> number[int], bool, bool
```

#### Description

Renders a widget for basic hotkey assignment. Refer to the [Input library](./input.md) for more information about hotkeys, key inputs and key codes.

#### Parameters

- `label`: Specifies the widget's label.
- `key`: Represents the current keycode as a numerical value.
- `changing`: Indicates if the hotkey is currently in edit mode. Usually, you wouldn't manually set this to true.

#### Return Value

1. Updated keycode.
2. Updated state indicating if the key is in edit mode.
3. Boolean indicating whether the key assignment has changed.

#### Example

```lua
local key = 0 -- 0 stands for NONE
local changing = false
-- ...
key, changing = imgui.Hotkey("My Hotkey", key, changing)
```

---

### `SliderPro`

```lua
function SliderPro(
    label: string,
    value: number[float],
    min: number[float],
    max: number[float],
    format: string = "%.2f",
    flags: number[int] = 0
) -> number[float], bool
```

#### Description

Renders a visually appealing number slider that isn't in ImGui by default.

#### Parameters

- `label`: The text label displayed next to the slider.
- `value`: The current value of the slider.
- `min`: The minimum allowable value for the slider.
- `max`: The maximum allowable value for the slider.
- `format`: The text format for displaying the current value (default is "%.2f").
- `flags`: Additional flags for configuring the behavior of the slider (ImGuiSliderFlags) (default is 0).

#### Return Value

1. Updated value after user interaction.
2. Boolean indicating whether the value has changed due to user interaction.

#### Example

```lua
local value, changed = imgui.SliderPro("Slider", 0.5, 0.0, 1.0)
if changed then
  println("Slider value changed to:", value)
end
```

---

### `Slider`

```lua
function Slider(
    label: string,
    value: number[float],
    min: number[float],
    max: number[float],
    format: string = "%.2f",
    flags: number[int] = 0
) -> number[float], bool
```

#### Description

Creates a slider for number values similar to `SliderPro`, but using the default ImGui slider.

#### Parameters

- `label`: Text label for the slider.
- `value`: Current value.
- `min`: Minimum value.
- `max`: Maximum value.
- `format`: Text format (default is "%.2f").
- `flags`: Additional ImGui flags (ImGuiSliderFlags) (default is 0).

#### Return Value

1. Updated value.
2. Boolean indicating if the value changed.

#### Example

```lua
local value = 1.0
-- ...
value, changed = imgui.Slider("Slider", value, 0.0, 1.0)
if changed then
  println("Slider value changed to:", value)
end
```

---

### `Combo`

```lua
function Combo(
    label: string,
    selection: number[int],
    items: table[list[string]],
    maxHeight: number[int] = -1
) -> number[int], bool
```

#### Description

Creates a drop-down combo box.

#### Parameters

- `label`: Text label for the combo box.
- `items`: A list of strings with the available items.
- `selection`: Current selected item index, first item is at index 0.
- `maxHeight`: Maximum height in options (default is -1 indicating automatic).

#### Return Value

1. Updated selected index.
2. Boolean indicating if the selection changed.

#### Example

```lua
local selection = 0
-- ...
selection, changed = imgui.Combo("Fruits", selection, { "Apple", "Banana", "Orange" })
if changed then
  println("Combo selection changed to index:", selection)
end
```

---

### `ListBox`

```lua
function ListBox(
  label: string,
  selection: number[int],
  options: table[list[string]],
  maxHeight: number[int] = -1
) -> number[int], bool
```

#### Description

Creates a list box with selectable options.

#### Parameters

- `label`: Label for the list box.
- `selection`: Current selected item index (starting at 0).
- `options`: Table of string options for the list.
- `maxHeight`: Maximum height for the list (default is -1, meaning no height restriction).

#### Return Value

1. Updated selected index.
2. Boolean indicating if the selection changed.

#### Example

```lua
local selected = 0

-- ...

local items = { "Option A", "Option B", "Option C" }
selected, changed = imgui.ListBox("Choose an Option", selected, items)
if changed then
  println("Selected option:", items[selected + 1])
end
```

---

### `ColorEdit`

```lua
function ColorEdit(label: string, color: vec4, flags: number[int] = 0) -> vec4, bool
```

#### Description

Creates a color editor interface.

#### Parameters

- `label`: Label for the color editor.
- `color`: The current color as a vec4.
- `flags`: ImGui color edit flags (ImGuiColorEditFlags) (default is 0).

#### Return Value

1. Updated color as a vec4.
2. Boolean indicating if the color changed.

#### Example

```lua
local color = vec4(1.0, 1.0, 1.0, 1.0)
-- ...
color, changed = imgui.ColorEdit("Pick Color", color)
if changed then
  println("Color changed to:", color)
end
```

---

### `ColorPicker`

```lua
function ColorPicker(
    label: string,
    color: vec4,
    flags: number[int] = 0,
    refColor: vec4 = nil
) -> vec4, bool
```

#### Description

Creates a color picker.

#### Parameters

- `label`: Label for the color picker.
- `color`: Current color as vec4.
- `flags`: ImGui color picker flags (ImGuiColorEditFlags) (default is 0).
- `refColor`: Original color for comparision in the color picker (optional).

#### Return Value

1. Updated color as a vec4.
2. Boolean indicating if the color changed.

#### Example

```lua
local color = vec4(1.0, 1.0, 1.0, 1.0)
-- ...
color, changed = imgui.ColorPicker("Pick Color", color)
if changed then
  println("Color changed to:", color)
end
```

---

### `ColorButton`

```lua
function ColorButton(
    id: string,
    color: vec4,
    flags: number[int] = 0,
    size: vec2 = vec2(0, 0),
    tooltip: string = nil
) -> bool
```

#### Description

Creates a color button.

#### Parameters

- `id`: String identifier for the button.
- `color`: Color as vec4.
- `flags`: ImGui color button flags (ImGuiColorEditFlags) (default is 0).
- `size`: Size of the button, vec2(0, 0) automatically scales it.
- `tooltip`: Optional tooltip text when the item is hovered (default is nil).

#### Return Value

Boolean indicating if the button was clicked.

#### Example

```lua
local color = vec4(1.0, 1.0, 1.0, 1.0)
-- ...
if imgui.ColorButton("button1", color) then
  println("Button was clicked.")
end
```

---

### `TreeNode`

```lua
function TreeNode(label: string, flags: number[int] = 0) -> bool
```

#### Description

Creates a collapsible tree node.

#### Parameters

- `label`: Label for the tree node.
- `flags`: ImGui tree node flags (ImGuiTreeNodeFlags) (default is 0).

#### Return Value

Boolean indicating if the tree node is open.

#### Example

```lua
if imgui.TreeNode("Node 1") then
  println("Tree node is open.")
  imgui.TreePop()
end
```

---

### `TreePop`

```lua
function TreePop() -> none
```

#### Description

Closes the last opened tree node.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
if imgui.TreeNode("Node 1") then
  -- Your tree contents here
  imgui.TreePop()
end
```

---

### `InputText`

```lua
function InputText(
    label: string,
    input: string,
    reservedSize: number[int],
    flags: number[int] = 0
) -> string, bool
```

#### Description

Creates a text input box.

#### Parameters

- `label`: Label for the text box.
- `inputBuf`: Initial input text.
- `reservedSize`: Reserved size for the text.
- `flags`: Additional ImGui flags (ImGuiInputTextFlags) (default is 0).

#### Return Value

1. Updated input string.
2. Boolean indicating if the text changed.

#### Example

```lua
local name = "John Doe"
-- ...
name, changed = imgui.InputText("Name", name, 32)
if changed then
  println("Name changed to:", name)
end
```

---

### `InputTextWithHint`

```lua
function InputTextWithHint(
    label: string,
    hint: string,
    input: string,
    reservedSize: number[int],
    flags: number[int] = 0
) -> string, bool
```

#### Description

Creates a text input box with a hint.

#### Parameters

- `label`: Label for the text box.
- `hint`: Hint displayed inside the text box.
- `input`: Current input text.
- `reservedSize`: Reserved size for the text.
- `flags`: Additional ImGui flags (ImGuiInputTextFlags) (default is 0).

#### Return Value

1. Updated input string.
2. Boolean indicating if the text changed.

#### Example

```lua
local name = "John Doe"
-- ...
name, changed = imgui.InputTextWithHint("Name", "Type your name here", name, 32)
if changed then
  println("Name changed to:", name)
end
```

---

### `InputTextMultiline`

```lua
function InputTextMultiline(
    label: string,
    inputBuf: string,
    reservedSize: number[int],
    size: vec2 = vec2(0, 0),
    flags: number[int] = 0
) -> string, bool
```

#### Description

Creates a multiline text input box.

#### Parameters

- `label`: Label for the text box.
- `inputBuf`: Initial input text.
- `reservedSize`: Reserved size for the text.
- `size`: Dimensions for the box (default is vec2(0, 0)).
- `flags`: Additional ImGui flags (ImGuiInputTextFlags) (default is 0).

#### Return Value

1. Updated input string.
2. Boolean indicating if the text changed.

#### Example

```lua
local comment = "Initial text"
-- ...
comment, changed = imgui.InputTextMultiline("Comment", comment, 300)
if changed then
  println("Text changed to:", text)
end
```

---

### `InputInt`

```lua
function InputInt(
    label: string,
    num: number[int],
    step: number[int] = 1,
    stepFast: number[int] = 100,
    flags: number[int] = 0
) -> number[int], bool
```

#### Description

Creates an integer input box.

#### Parameters

- `label`: Label for the integer box.
- `num`: Current integer value.
- `step`: Incremental step (default is 1).
- `stepFast`: Faster incremental step (default is 100).
- `flags`: Additional ImGui flags (ImGuiInputTextFlags) (default is 0).

#### Return Value

1. Updated integer value.
2. Boolean indicating if the value changed.

#### Example

```lua
local age = 25
-- ...
age, changed = imgui.InputInt("Age", age)
if changed then
  println("Value changed to:", age)
end
```

---

### `InputDouble`

```lua
function InputDouble(
  label: string,
  value: number[float],
  step: number[float] = 0,
  stepFast: number[float] = 0,
  format: string = "%.2f",
  flags: number[int] = 0
) -> number[float], bool
```

#### Description

Creates an input box for float values with optional stepping.

#### Parameters

- `label`: Label for the input float box.
- `value`: Initial value for the input.
- `step`: Incremental step for the input (if 0 no step buttons provided) (default is 0).
- `stepFast`: Fast incremental step for the input when holding shift (default is 0).
- `format`: Display format for the value (default is "%.2f").
- `flags`: ImGui input flags (ImGuiInputTextFlags) (default is 0).

#### Return Value

1. Updated float value.
2. Boolean indicating if the value has been changed.

#### Example

```lua
local value = 5.0
-- ...
value, changed = imgui.InputDouble("Enter Value", value, 0.1, 1.0)
if changed then
  println("Value changed to:", value)
end
```

---

### `DragScalar`

```lua
function DragScalar(
  label: string,
  data: table[list[number[float]]],
  speed: number = 1.0,
  min: number = 0,
  max: number = 0,
  format: string = "%.2f",
  flags: number[int] = 0
) -> bool
```

#### Description

Creates a draggable scalar control widget for one or more components.

#### Parameters

- `label`: The label for the draggable scalar.
- `data`: A table containing the scalar values to be adjusted.
- `speed`: The rate of change for the scalar values when dragged, defaulting to `1.0`.
- `min`: The minimum value for the scalar, defaulting to `0`, a value of `0` indicates no limit.
- `max`: The maximum value for the scalar, defaulting to `0`, a value of `0` indicates no limit.
- `format`: The display format of the scalar values, defaulting to `%.2f`.
- `flags`: Optional flags (`ImGuiSliderFlags`) to adjust the behavior of the draggable scalar.

#### Return Value

Returns `true` if the scalar value(s) were changed, `false` otherwise.

#### Example

```lua
local values = { 10, 20, 30 }
if imgui.DragScalar("My Scalar", values, 0.5, 0, 100) then
    -- Scalar values were changed
end
```

---

### `SetTooltip`

```lua
function SetTooltip(
    text: string,
    tooltipFlags: number[int] = ImGuiTooltipFlags_OverridePreviousTooltip,
    windowFlags: number[int] = 0,
    textFlags: number[int] = 0
) -> none
```

#### Description

Creates a tooltip.

#### Parameters

- `text`: Text for the tooltip.
- `tooltipFlags`: Flags for tooltip behavior (ImGuiTooltipFlags) (default is ImGuiTooltipFlags_OverridePreviousTooltip).
- `windowFlags`: Additional window flags (ImGuiWindowFlags) (default is 0).
- `textFlags`: Additional text flags (ImGuiTextFlags) (default is 0).

#### Return Value

None.

#### Example

```lua
imgui.SetTooltip("This is a tooltip")
```

---

### `Begin`

```lua
function Begin(label: string, opened: bool? = nil, flags: number[int] = 0) -> bool[, bool]
```

#### Description

Starts a new ImGui window.

#### Parameters

- `label`: The name of the window.
- `opened`: This optional parameter controls the visibility and state of the close ('X') button in the window's title bar. Passing `nil` disables the close button, making it invisible.
- `flags`: ImGui window flags (default is 0).

#### Return Value

1. Boolean indicating if the window is open.
2. If `opened` parameter was specified, returns updated boolean value for `opened`.

#### Example

```lua
if imgui.Begin("MyWindow") then
  -- ... Your ImGui code here ...
  imgui.End()
end
```

---

### `End`

```lua
function End() -> none
```

#### Description

Ends the last opened ImGui window.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
if imgui.Begin("My Window") then
  -- ... Your ImGui code here ...
  imgui.End()
end
```

---

### `BeginGroup`

```lua
function BeginGroup() -> none
```

#### Description

Begins a new ImGui group.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.BeginGroup()
-- ... Group contents ...
imgui.EndGroup()
```

---

### `EndGroup`

```lua
function EndGroup() -> none
```

#### Description

Ends the last opened ImGui group.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.BeginGroup()
-- ... Group contents ...
imgui.EndGroup()
```

---

### `BeginDisabled`

```lua
function BeginDisabled() -> none
```

#### Description

Begins a disabled group of widgets. Any widgets added after calling `BeginDisabled` and before `EndDisabled` will appear visually disabled and will not be interactive.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.BeginDisabled()
imgui.Button("Disabled Button")
imgui.EndDisabled()
```

---

### `EndDisabled`

```lua
function EndDisabled() -> none
```

#### Description

Ends a disabled group started by `BeginDisabled`. Widgets added after calling `EndDisabled` will appear normal and be interactive.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.BeginDisabled()
imgui.Button("Disabled Button")
imgui.EndDisabled()
imgui.Button("Enabled Button")
```

---

### `BeginChild`

```lua
function BeginChild(
    id: number[int] | string,
    size: vec2 = vec2(0, 0),
    border: bool = false,
    flags: number[int] = 0
) -> bool
```

#### Description

Creates a new ImGui child window.

#### Parameters

- `id`: The identifier for the child window, either a number or a string.
- `size`: Size of the child window (default is vec2(0, 0)).
- `border`: Display a border around the child window (default is false).
- `flags`: Additional ImGui flags (ImGuiWindowFlags) (default is 0).

#### Return Value

Boolean indicating if the child window is open.

#### Example

```lua
if imgui.BeginChild("Child 1", vec2(200, 200)) then
  -- ... Child window contents ...
  imgui.EndChild()
end
```

---

### `EndChild`

```lua
function EndChild() -> none
```

#### Description

Ends the last opened ImGui child window.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
if imgui.BeginChild("Child 1", vec2(200, 200)) then
  -- ... Child window contents ...
  imgui.EndChild()
end
```

---

### `BeginLabeledChild`

```lua
function BeginLabeledChild(
    label: string,
    size: vec2 = vec2(0, 0),
    border: bool = false,
    flags: number[int] = 0
) -> bool
```

#### Description

Creates a new ImGui labeled child window.

#### Parameters

- `label`: The label for the child window.
- `size`: Size of the child window (default is vec2(0, 0) which will auto-resize).
- `border`: Display a border around the child window (default is false).
- `flags`: Additional ImGui flags (ImGuiWindowFlags) (default is 0).

#### Return Value

Boolean indicating if the labeled child window is open.

#### Example

```lua
if imgui.BeginLabeledChild("Labeled Child", vec2(200, 200)) then
  -- ... Labeled child window contents ...
  imgui.EndLabeledChild()
end
```

---

### `EndLabeledChild`

```lua
function EndLabeledChild() -> none
```

#### Description

Ends the last opened ImGui labeled child window.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
if imgui.BeginLabeledChild("Labeled Child", vec2(200, 200)) then
  -- ... Labeled child window contents ...
  imgui.EndLabeledChild()
end
```

---

### `BeginMenu`

```lua
function BeginMenu(label: string, icon: string = nil, enabled: bool = true) -> bool
```

#### Description

Starts the definition of a new menu inside a popup.

#### Parameters

- `label`: Label for the menu.
- `icon`: Icon for the menu (empty string is the same as nil) (default is nil).
- `enabled`: Indicates if the menu is enabled or not (default is true).

#### Return Value

Boolean indicating if the menu is opened.

#### Example

```lua
if imgui.BeginMenu("File") then
  -- Menu items here
  imgui.EndMenu()
end
```

---

### `EndMenu`

```lua
function EndMenu() -> none
```

#### Description

Ends the definition of a menu.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
if imgui.BeginMenu("File") then
  -- Menu items here
  imgui.EndMenu()
end
```

---

### `MenuItem`

```lua
function MenuItem(
    label: string,
    shortcut: string = nil,
    selected: bool = nil,
    enabled: bool = true
) -> bool, bool?
```

#### Description

Creates a menu item inside a popup.

#### Parameters

- `label`: Text for the menu item.
- `shortcut`: Optional shortcut displayed beside the label.
- `selected`: Current selected state.
- `enabled`: Specifies if the item is clickable.

#### Return Value

1. Boolean indicating if the item was clicked.
2. Optional boolean indicating the new selected state if `selected` was passed.

#### Example

```lua
local clicked, selected = imgui.MenuItem("Option", "Ctrl+O", true)
```

---

### `BeginPopup`

```lua
function BeginPopup(
    type: number[int],
    id: string = nil,
    flags: number[int] = varies
) -> bool
```

#### Description

Initializes a new popup context within the ImGui rendering environment. The behavior and appearance of the popup are determined by the parameters provided.

#### Parameters

- `type`: An integer representing the type of popup to initiate, specified using `ImGuiPopupType` enumeration.
  - ImGuiPopupType_Normal (`0`): Equivalent to `BeginPopup`. Requires a string identifier (`id`).
  - ImGuiPopupType_ContextItem (`1`): Equivalent to `BeginPopupContextItem`.
  - ImGuiPopupType_ContextVoid (`2`): Equivalent to `BeginPopupContextVoid`.
  - ImGuiPopupType_ContextWindow (`3`): Equivalent to `BeginPopupContextWindow`.
  
- `id`: An optional string identifier for the popup. This is required only for `ImGuiPopupType_Normal` (`0`). An empty string will be treated as no identifier.
  
- `flags`: Additional ImGui flags to control the behavior and appearance of the popup. The type of flags used depends on the popup type:
  - For `ImGuiPopupType_Normal`: Use `ImGuiWindowFlags` (default is `0`).
  - For all other types: Use `ImGuiPopupFlags` (default is `ImGuiPopupFlags_MouseButtonRight`).

#### Return Value

Returns a boolean indicating whether the popup is currently open and active. 

#### Example

```lua
-- Initialize a context window popup
if imgui.BeginPopup(3, "My window context popup", 1) then
  -- Insert the contents of the popup here
  if imgui.MenuItem("Item 1") then
    println("Item 1 selected")
  end
  
  imgui.EndPopup()
end
```

---

### `EndPopup`

```lua
function EndPopup() -> none
```

#### Description

End the current popup.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
-- Within a BeginPopup/EndPopup block
imgui.EndPopup()
```

---

### `Popup`

```lua
function Popup(
    type: number[int],
    ...
) -> none
```

#### Description

Creates a specialized popup window for displaying messages or custom ImGui content. The popup type and behavior are determined by the `type` argument and additional parameters.

#### Parameters

- `type`: An integer that specifies the kind of popup to display. Available types are:
  - `0`: Basic message popup. Additional Parameters:
    - `message: string`: The content of the message displayed in the popup.
    - `title: string`: The title displayed on the popup window.
    - `buttons: number[int] = 1`: Flags for the buttons to display in the popup. Available flags include:
      - `OK` = 1 << 0
      - `CANCEL` = 1 << 1
      - `YES` = 1 << 2
      - `NO` = 1 << 3
      - `RETRY` = 1 << 4
      - `CROSS_EXIT` = 1 << 5
    - `onClose: function = nil`: An optional callback function that is invoked when the popup closes.

  - `1`: Custom popup with dynamic ImGui content. Additional Parameters:
    - `onGUI: function`: A callback function that generates custom ImGui content for the popup.
    - `onClose: function`: A callback function invoked when the popup is closed.

#### onClose Callback

The `onClose` callback is invoked when the popup is closed.

- **Return Value**: A boolean value indicating whether the popup can be closed.
- **Parameters**: The callback function receives one parameter, a `number[int]` indicating which button was pressed to close the popup.

#### onGUI Callback

The `onGUI` callback is invoked during each render cycle to generate custom ImGui content for the popup.

- **Return Value**: A boolean value indicating whether to close the popup.
- **Parameters**: None.

#### Return Value

None.

#### Example

```lua
-- Define the onClose callback
function onMyPopupClosed(buttonPressed)
  println("Popup closed with button:", buttonPressed)
  return true -- Allow the popup to close
end

-- Define the onGUI callback
function onMyPopupGUI()
  imgui.Text("Place custom widgets or any ImGui content here.")

  if imgui.Button("Close Popup") then
    return true -- Close the popup
  end

  return false -- Keep the popup open
end

-- Example usage

-- Display a basic message popup with OK and CANCEL button
imgui.Popup(0, "This is the message content", "Popup Title", 1 | 2, onMyPopupClosed)

-- or

-- Display a custom popup with dynamic ImGui content
imgui.Popup(1, onMyPopupGUI, onMyPopupClosed)
```

---

### `CloseCurrentPopup`

```lua
function CloseCurrentPopup() -> none
```

#### Description

Closes the current popup immediately.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.CloseCurrentPopup()
```

---

### `OpenPopup`

```lua
function OpenPopup(
    id: string,
    flags: number[int] = 0
) -> none
```

#### Description

Opens a popup by id.

#### Parameters

- `id`: Identifier for the popup.
- `flags`: Additional ImGui flags (ImGuiPopupFlags) (default is 0).

#### Return Value

None.

#### Example

```lua
imgui.OpenPopup("My Popup Id")
```

---

### `PushID`

```lua
function PushID(
    id: string|number[int]
) -> none
```

#### Description

Pushes an ID onto the ID stack.

#### Parameters

- `id`: Identifier, either a string or an integer.

#### Return Value

None.

#### Example

```lua
imgui.PushID("Unique ID")
```

---

### `PopID`

```lua
function PopID() -> none
```

#### Description

Pops the last ID from the ID stack.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.PopID()
```

---

### `PushStyleColor`

```lua
function PushStyleColor(colIndex: number[int], color: number[int]|vec4, push: bool = true) -> none
```

#### Description

Pushes a style color onto the stack.

#### Parameters

- `colIndex`: Index of the style color (ImGuiCol).
- `color`: The color value (ImU32 or vec4).
- `push`: Whether to save and push the original value of the color onto the color stack.

#### Return Value

None.

#### Example

```lua
-- Red text
imgui.PushStyleColor(ImGuiCol_Text, 0xFF0000FF)

-- Needs to be popped before next frame using PopStyleColor
```

---

### `PopStyleColor`

```lua
function PopStyleColor(count: number[int] = 1) -> none
```

#### Description

Pops style color(s) from the stack.

#### Parameters

- `count`: Number of style colors to pop (default is 1).

#### Return Value

None.

#### Example

```lua
imgui.PopStyleColor()
```

---

### `PushStyleVar`

```lua
function PushStyleVar(varIndex: number[int], value: number[float]|vec2, push: bool = true) -> none
```

#### Description

Pushes a style variable onto the stack.

#### Parameters

- `varIndex`: Index of the style variable (ImGuiStyleVar).
- `value`: The value for the variable. Can be a float or vec2 depending on the variable.
- `push`: Whether to save and push the original value of the variable onto the style var stack.

#### Return Value

None.

#### Example

```lua
-- Set Window Padding
imgui.PushStyleVar(ImGuiStyleVar_WindowPadding, vec2(4, 4))

-- Needs to be popped before next frame using PopStyleVar
```

---

### `PopStyleVar`

```lua
function PopStyleVar(count: number[int] = 1) -> none
```

#### Description

Pops style variables from the stack.

#### Parameters

- `count`: Number of style variables to pop (default is 1).

#### Return Value

None.

#### Example

```lua
imgui.PopStyleVar()
```

---

### `GetStyleColor`

```lua
function GetStyleColor(colIndex: number[int]) -> vec4
```

#### Description

Gets the style color value at the given index.

#### Parameters

- `colIndex`: Index of the style color (ImGuiCol).

#### Return Value

The RGBA color value as a vec4.

#### Example

```lua
local textColor = imgui.GetStyleColor(ImGuiCol_Text)
```

---

### `GetStyleVar`

```lua
function GetStyleVar(varIndex: number[int]) -> number[float]|vec2
```

#### Description

Gets the style variable value at the given index.

#### Parameters

- `varIndex`: Index of the style variable (ImGuiStyleVar).

#### Return Value

The value of the variable, can be a float or vec2 depending on the variable.

#### Example

```lua
local value = imgui.GetStyleVar(ImGuiStyleVar_WindowPadding)
```

---

### `Spacing`

```lua
function Spacing() -> none
```

#### Description

Adds a vertical spacing.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.Spacing()
```

---

### `Dummy`

```lua
function Dummy(size: vec2) -> none
```

#### Description

Creates a dummy (invisible) item of the specified size.

#### Parameters

- `size`: Size of the dummy item.

#### Return Value

None.

#### Example

```lua
imgui.Dummy(vec2(50, 50))
```

---

### `NewLine`

```lua
function NewLine() -> none
```

#### Description

Adds a new line.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.NewLine()
```

---

### `SameLine`

```lua
function SameLine(offset: number[float] = 0, spacing: number[float] = -1) -> none
```

#### Description

Places content on the same line.

#### Parameters

- `offset`: The X offset (default is 0).
- `spacing`: Spacing between items (default is -1).

#### Return Value

None.

#### Example

```lua
imgui.SameLine(0, 4)
```

---

### `Indent`

```lua
function Indent(indentWidth: number[float] = 0) -> none
```

#### Description

Indents the following ImGui content.

#### Parameters

- `indentWidth`: Width of the indent (default is 0).

#### Return Value

None.

#### Example

```lua
imgui.Indent(20)
```

---

### `Unindent`

```lua
function Unindent(indentWidth: number[float] = 0) -> none
```

#### Description

Unindents the content.

#### Parameters

- `indentWidth`: Width of the indent to remove (default is 0).

#### Return Value

None.

#### Example

```lua
imgui.Unindent(20)
```

---

### `SetNextItemWidth`

```lua
function SetNextItemWidth(width: number[float]) -> none
```

#### Description

Sets the width of the next item in the ImGui window.

#### Parameters

- `width`: The width to set for the next item.

#### Return Value

None.

#### Example

```lua
imgui.SetNextItemWidth(200.0)
imgui.InputText("Name", "John Doe", 40)
```

---

### `Separator`

```lua
function Separator(flags: number[int] = 0) -> none
```

#### Description

Inserts a separator line in the ImGui window. Optionally, takes ImGui flags for customization.

#### Parameters

- `flags`: Additional ImGui flags for customization (ImGuiSeparatorFlags) (default is 0).

#### Return Value

None.

#### Example

```lua
imgui.Text("Above Separator")
imgui.Separator()
imgui.Text("Below Separator")
```

---

### `ColorConvertVec4ToU32`

```lua
function ColorConvertVec4ToU32(color: vec4) -> number[int]
```

#### Description

Converts a color from a vec4 format to a ImU32 format.

#### Parameters

- `color`: The color to convert, specified as a vec4 (RGBA).

#### Return Value

The color as a ImU32 number.

#### Example

```lua
local u32Color = imgui.ColorConvertVec4ToU32(vec4(0.5, 0.5, 0.5, 1.0))
```

---

### `ColorConvertU32ToVec4`

```lua
function ColorConvertU32ToVec4(color: number[int]) -> vec4
```

#### Description

Converts a color from a ImU32 format to a vec4 format.

#### Parameters

- `color`: The color to convert, specified as a ImU32.

#### Return Value

The color as a vec4 (RGBA).

#### Example

```lua
local vec4Color = imgui.ColorConvertU32ToVec4(0xFFFF00FF)
```

---

### `Columns`

```lua
function Columns(count: number[int] = 1, id: string = nil, border: bool = true) -> none
```

#### Description

Begins a specified number of columns for subsequent elements.

#### Parameters

- `count`: Number of columns.
- `id`: Identifier for columns (empty string is the same as nil) (default is nil).
- `border`: Indicates if the border should be shown (default is true).

#### Return Value

None.

#### Example

```lua
imgui.Columns(2)
imgui.SetColumnOffset(1, 100)

-- First column content

imgui.NextColumn()

-- Second column content
```

---

### `NextColumn`

```lua
function NextColumn() -> none
```

#### Description

Moves the item cursor to the next column.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.NextColumn()
```

---

### `SetColumnOffset`

```lua
function SetColumnOffset(columnIndex: number[int], offset: number[float]) -> none
```

#### Description

Sets the offset of a specified column.

#### Parameters

- `columnIndex`: Index of the column to adjust.
- `offset`: Offset to set.

#### Return Value

None.

#### Example

```lua
imgui.SetColumnOffset(1, 100)
```

---

### `SetColumnWidth`

```lua
function SetColumnWidth(columnIndex: number[int], width: number[float]) -> none
```

#### Description

Sets the width of a specified column.

#### Parameters

- `columnIndex`: Index of the column to adjust.
- `width`: Width to set.

#### Return Value

None.

#### Example

```lua
imgui.SetColumnWidth(1, 100)
```

---

### `SetWindowFontScale`

```lua
function SetWindowFontScale(scale: number[float]) -> none
```

#### Description

Adjusts the font scale for the current window.

#### Parameters

- `scale`: Font scale factor.

#### Return Value

None.

#### Example

```lua
imgui.SetWindowFontScale(1.5)
```

---

### `SetKeyboardFocusHere`

```lua
function SetKeyboardFocusHere(offset: number[int] = 0) -> none
```

#### Description

Focuses a widget for keyboard input.

#### Parameters

- `offset`: Offset of the widget to be focused, 0 would be the next widget, 1 the very next widget, etc (default is 0).

#### Return Value

None.

#### Example

```lua
imgui.SetKeyboardFocusHere()
-- The next widget will be focused by default

-- For example
input = imgui.InputText("Input", input)
```

---

### `GetBackgroundDrawList`

```lua
function GetBackgroundDrawList() -> userdata[ImDrawListMT]
```

#### Description

Retrieves the draw list for rendering shapes in the background.

#### Parameters

None.

#### Return Value

Light userdata representing the background draw list.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
-- Use draw list to render shapes in the background
```

---

### `GetForegroundDrawList`

```lua
function GetForegroundDrawList() -> userdata[ImDrawListMT]
```

#### Description

Retrieves the draw list for rendering shapes in the foreground.

#### Parameters

None.

#### Return Value

Light userdata representing the foreground draw list.

#### Example

```lua
local draw = imgui.GetForegroundDrawList()
-- Use draw list to render shapes in the foreground
```

---

### `GetWindowDrawList`

```lua
function GetWindowDrawList() -> userdata[ImDrawListMT]
```

#### Description

Retrieves the draw list for rendering shapes within the current window.

#### Parameters

None.

#### Return Value

Light userdata representing the window draw list.

#### Example

```lua
local draw = imgui.GetWindowDrawList()
-- Use draw list to render shapes in the current window
```

---

### `CalcTextSize`

```lua
function CalcTextSize(text: string, hideId: bool = false, wrapWidth: float = -1.0) -> vec2
```

#### Description

Calculates the size of a text string.

#### Parameters

- `text`: The text string to measure.
- `hideId`: Whether to hide the text's identifier (which is after "##" in the text) or not (default is `false`).
- `wrapWidth`: The wrapping width for the text (default is `-1.0`).

#### Return Value

A vector (`vec2`) containing the width and height of the text.

#### Example

```lua
local textSize = imgui.CalcTextSize("Hello, World!")
```

---

### `CalcItemSize`

```lua
function CalcItemSize(size: vec2, defaultWidth: float, defaultHeight: float) -> vec2
```

#### Description

Calculates the size of an item.

#### Parameters

- `size`: A vector (`vec2`) representing the initial size.
- `defaultWidth`: The default width for the item.
- `defaultHeight`: The default height for the item.

#### Return Value

A vector (`vec2`) containing the calculated width and height.

#### Example

```lua
local itemSize = imgui.CalcItemSize(vec2(10, 20), 100, 50)
```

---

### `GetCursorPos`

```lua
function GetCursorPos() -> vec2
```

#### Description

Returns the current item cursor position inside the current ImGui window.

#### Parameters

None.

#### Return Value

- A vector (`vec2`) containing the x and y coordinates of the cursor.

#### Example

```lua
local itemCursorPos = imgui.GetCursorPos()
```

---

### `SetCursorPos`

```lua
function SetCursorPos(pos: vec2) -> none
```

#### Description

Sets the item cursor position.

#### Parameters

- `pos`: A vector (`vec2`) representing the new item cursor position.

#### Return Value

None.

#### Example

```lua
imgui.SetCursorPos(vec2(100, 200))
imgui.Text("I will be shown 100 pixels to the right and 200 pixels down")
```

---

### `GetContentRegionAvail`

```lua
function GetContentRegionAvail() -> vec2
```

#### Description

Gets the size of the available content region in the current window.

#### Parameters

None.

#### Return Value

Vector containing the width and height of the available content region.

#### Example

```lua
local availableSpace = imgui.GetContentRegionAvail()
println("Available space:", availableSpace)
```

---

### `GetWindowSize`

```lua
function GetWindowSize() -> vec2
```

#### Description

Returns the current window size.

#### Parameters

None.

#### Return Value

- A vector (`vec2`) containing the width and height of the window.

#### Example

```lua
local windowSize = imgui.GetWindowSize()
```

---

### `SetWindowSize`

```lua
function SetWindowSize(size: vec2, cond: number[int] = ImGuiCond_Always) -> none
```

#### Description

Sets the current window size.

#### Parameters

- `size`: A vector (`vec2`) representing the new window size.
- `cond`: Optional ImGui condition to be met (ImGuiCond) (default is `ImGuiCond_Always`).

#### Return Value

None.

#### Example

```lua
imgui.SetWindowSize(vec2(800, 600))
```

---

### `GetWindowPos`

```lua
function GetWindowPos() -> vec2
```

#### Description

Returns the current window position.

#### Parameters

None.

#### Return Value

- A vector (`vec2`) containing the x and y coordinates of the window.

#### Example

```lua
local windowPos = imgui.GetWindowPos()
```

---

### `SetWindowPos`

```lua
function SetWindowPos(pos: vec2, cond: number[int] = ImGuiCond_Always) -> none
```

#### Description

Sets the window position.

#### Parameters

- `pos`: A vector (`vec2`) representing the new window position.
- `cond`: Optional ImGui condition to be met (ImGuiCond) (default is `ImGuiCond_Always`).

#### Return Value

None.

#### Example

```lua
imgui.SetWindowPos(vec2(100, 200))
```

---

### `GetDisplaySize`

```lua
function GetDisplaySize() -> vec2
```

#### Description

Returns the size of the display (game window).

#### Parameters

None.

#### Return Value

- A vector (`vec2`) containing the width and height of the display (game window).

#### Example

```lua
local displaySize = imgui.GetDisplaySize()
```

---

### `GetDisplayCenter`

```lua
function GetDisplayCenter() -> vec2
```

#### Description

Returns the center position of the display (game window).

#### Parameters

None.

#### Return Value

- A vector (`vec2`) containing the x and y coordinates of the display center (game window).

#### Example

```lua
local displayCenter = imgui.GetDisplayCenter()
```

---

### `GetMousePos`

```lua
function GetMousePos() -> vec2
```

#### Description

Returns the current mouse cursor position.

#### Parameters

None.

#### Return Value

- A vector (`vec2`) containing the x and y coordinates of the mouse (relative to the game window).

#### Example

```lua
local mousePos = imgui.GetMousePos()
```

---

### `IsWindowAppearing`

```lua
function IsWindowAppearing() -> bool
```

#### Description

Checks if the current window is appearing.

#### Parameters

None.

#### Return Value

- A boolean value indicating whether the current window is appearing or not.

#### Example

```lua
local isAppearing = imgui.IsWindowAppearing()
```

---

### `IsItemHovered`

```lua
function IsItemHovered(flags: number[int] = 0) -> bool
```

#### Description

Checks if the last item is hovered.

#### Parameters

- `flags`: Additional flags for the hover check (ImGuiHoveredFlags) (default is `0`).

#### Return Value

- A boolean value indicating whether the item is hovered or not.

#### Example

```lua
local isHovered = imgui.IsItemHovered()
```

---

### `IsItemActive`

```lua
function IsItemActive() -> bool
```

#### Description

Checks if the last item is active.

#### Parameters

None.

#### Return Value

- Boolean indicating whether the last item is active.

#### Example

```lua
if imgui.IsItemActive() then
  println("The last item is active.")
end
```

---

### `IsItemClicked`

```lua
function IsItemClicked(mouseButton: number[int] = 0) -> bool
```

#### Description

Checks if the last item is clicked.

#### Parameters

- `mouseButton`: The mouse button to check (ImGuiMouseButton) (default is 0).

#### Return Value

- Boolean indicating whether the last item is clicked.

#### Example

```lua
if imgui.IsItemClicked(ImGuiMouseButton_Right) then
  println("The last item is clicked with the right mouse button.")
end
```

---

### `IsItemFocused`

```lua
function IsItemFocused() -> bool
```

#### Description

Checks if the last item is focused.

#### Parameters

None.

#### Return Value

- Boolean indicating whether the last item is focused.

#### Example

```lua
if imgui.IsItemFocused() then
  println("The last item is focused.")
end
```

---

### `IsAnyItemHovered`

```lua
function IsAnyItemHovered() -> bool
```

#### Description

Checks if any item is hovered.

#### Parameters

None.

#### Return Value

- Boolean indicating whether any item is hovered.

#### Example

```lua
if imgui.IsAnyItemHovered() then
  println("An item is hovered.")
end
```

---

### `IsAnyItemActive`

```lua
function IsAnyItemActive() -> bool
```

#### Description

Checks if any item is active.

#### Parameters

None.

#### Return Value

- Boolean indicating whether any item is active.

#### Example

```lua
if imgui.IsAnyItemActive() then
  println("An item is active.")
end
```

---

### `IsAnyItemFocused`

```lua
function IsAnyItemFocused() -> bool
```

#### Description

Checks if any item is focused.

#### Parameters

None.

#### Return Value

- Boolean indicating whether any item is focused.

#### Example

```lua
if imgui.IsAnyItemFocused() then
  println("An item is focused.")
end
```

---

### `IsKeyDown`

```lua
function IsKeyDown(key: number[int]) -> bool
```

#### Description

Checks if a specific key is down.

#### Parameters

- `key`: The key to check (ImGuiKey).

#### Return Value

- Boolean indicating whether the key is down.

#### Example

```lua
if imgui.IsKeyDown(ImGuiKey_A) then
  println("Key A is down.")
end
```

---

### `IsKeyPressed`

```lua
function IsKeyPressed(key: number[int], repeat: bool = true) -> bool
```

#### Description

Checks if a specific key is pressed.

#### Parameters

- `key`: The key to check (ImGuiKey).
- `repeat`: Whether to consider key repeats (default is true).

#### Return Value

- Boolean indicating whether the key is pressed.

#### Example

```lua
if imgui.IsKeyPressed(ImGuiKey_A, false) then
  println("Key A is pressed without repeat.")
end
```

---

### `IsKeyReleased`

```lua
function IsKeyReleased(key: number[int]) -> bool
```

#### Description

Checks if a specific key is released.

#### Parameters

- `key`: The key to check (ImGuiKey).

#### Return Value

- Boolean indicating whether the key is released.

#### Example

```lua
if imgui.IsKeyReleased(ImGuiKey_A) then
  println("Key A is released.")
end
```

---

### `IsMouseDown`

```lua
function IsMouseDown(button: number[int]) -> bool
```

#### Description

Checks if a specific mouse button is down.

#### Parameters

- `button`: The mouse button to check (ImGuiMouseButton).

#### Return Value

- Boolean indicating whether the mouse button is down.

#### Example

```lua
if imgui.IsMouseDown(ImGuiMouseButton_Right) then
  println("Right mouse button is down.")
end
```

---

### `IsMouseClicked`

```lua
function IsMouseClicked(button: number[int], repeat: bool = true) -> bool
```

#### Description

Checks if a specific mouse button is clicked.

#### Parameters

- `button`: The mouse button to check (ImGuiMouseButton).
- `repeat`: Whether to consider click repeats (default is true).

#### Return Value

- Boolean indicating whether the mouse button is clicked.

#### Example

```lua
if imgui.IsMouseClicked(ImGuiMouseButton_Right, false) then
  println("Right mouse button is clicked without repeat.")
end
```

---

### `IsMouseReleased`

```lua
function IsMouseReleased(button: number[int]) -> bool
```

#### Description

Checks if a specific mouse button is released.

#### Parameters

- `button`: The mouse button to check (ImGuiMouseButton).

#### Return Value

- Boolean indicating whether the mouse button is released.

#### Example

```lua
if imgui.IsMouseReleased(ImGuiMouseButton_Right) then
  println("Right mouse button is released.")
end
```

---

### `IsMouseDoubleClicked`

```lua
function IsMouseDoubleClicked(button: number[int]) -> bool
```

#### Description

Checks if a specific mouse button is double-clicked.

#### Parameters

- `button`: The mouse button to check (ImGuiMouseButton).

#### Return Value

- Boolean indicating whether the mouse button is double-clicked.

#### Example

```lua
if imgui.IsMouseDoubleClicked(ImGuiMouseButton_Right) then
  println("Right mouse button is double-clicked.")
end
```

---

### `IsGameFocused`

```lua
function IsGameFocused() -> bool
```

#### Description

Checks if the game window is focused.

#### Parameters

None.

#### Return Value

- Boolean indicating whether the game is focused.

#### Example

```lua
if imgui.IsGameFocused() then
  println("The game window is focused.")
end
```

---

### `IsMenuOpen`

```lua
function IsMenuOpen() -> bool
```

#### Description

Checks if the built-in cheat menu is open.

#### Parameters

None.

#### Return Value

- Boolean indicating whether the menu is open.

#### Example

```lua
if imgui.IsMenuOpen() then
  println("The cheat menu is open.")
end
```

---

### `IsMenuOverlayVisible`

```lua
function IsMenuOverlayVisible() -> bool
```

#### Description

Checks if the cheat menu overlay is visible. The difference to `IsMenuOpen` is that it will return true even while the menu is being hidden (fading out). 

#### Parameters

None.

#### Return Value

- Boolean indicating whether the menu overlay is visible.

#### Example

```lua
if imgui.IsMenuOverlayVisible() then
  println("The cheat menu overlay is visible.")
end
```

---

### `OpenMenu`

```lua
function OpenMenu() -> none
```

#### Description

Force opens the cheat menu.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.OpenMenu()
```

---

### `HideMenu`

```lua
function HideMenu() -> none
```

#### Description

Hides the cheat menu.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imgui.HideMenu()
```

---
### `GetWindowInfo`

```lua
function GetWindowInfo(name: string) -> table|nil
```

#### Description

Retrieves information about a specific ImGui window by its name.

#### Parameters

- `name`: The name of the ImGui window to search for.

#### Return Value

A table with the following keys and their corresponding values if the window is found; otherwise, `nil`.
- `pos`: The position of the window (`vec2`).
- `lastPos`: The position of the window last frame (`vec2`).
- `size`: The size of the window (`vec2`).
- `extensionSize`: The extension size of the window (`vec2`).
- `sizeFull`: The full size of the window (`vec2`).
- `id`: The ID of the window (`number[int]`).
- `flags`: The window flags (`number[int]`).
- `alpha`: The window's alpha value (`number[float]`).
- `name`: The window's name (`name`).

#### Example

```lua
local windowInfo = imgui.GetWindowInfo("###CheatMenuWindow")

if windowInfo then
    println("Window info:", tableToStr(windowInfo))
else
    println("Window not found")
end
```

---

### `GetDeltaTime`

```lua
function GetDeltaTime() -> number[float]
```

#### Description

Retrieves the time elapsed since the last frame in seconds, as used by the ImGui system.

#### Parameters

None.

#### Return Value

Returns the delta time in seconds as a `number[float]`.

#### Example

```lua
local deltaTime = imgui.GetDeltaTime()
println("Delta Time:", deltaTime)
```

---

### `CreateImageResource`

```lua
function CreateImageResource(source: string|number[ptr], sourceSize: number[int] = ?) -> userdata[ImageAssetMT]|nil
```

#### Description

Creates an image resource from provided image data. It handles both string and pointer types for the source. Supported formats: `.jpg, .jpeg, .png, .bmp, .gif (as static image), .psd, .tga, .hdr, .pic, .pnm`.

#### Parameters

- `source`: The image data as a raw binary string or a pointer to the image data in memory.
- `sourceSize`: The size of the image data in bytes, required only if `source` is a pointer in memory to the image data.

#### Return Value

Returns `userdata` associated with the `ImageAssetMT` metatble on success, or `nil` on failure.

#### Example

```lua
local imgData = "\x89\x50.." -- image data in a string
local imageResource = imgui.CreateImageResource(imgData)

if imageResource then
    -- Image resource created successfully
else
    -- Failed to create image resource, image format or data is unsupported
end
```

---

## Classes (Metatables)

---

### ImDrawListMT

`ImDrawListMT` offers a set of features for rendering individual graphical elements on the screen using ImGui. You can obtain a draw list by calling one of the following functions: `GetBackgroundDrawList`, `GetForegroundDrawList`, or `GetWindowDrawList`.

---

### `ImDrawListMT:AddText`

```lua
function ImDrawListMT:AddText(pos: vec2, color: number[int]|vec4, text: string) -> none
```

#### Description

Adds a text element at a specific position with a given color on the current ImDrawList.

#### Parameters

- `pos`: A 2D vector specifying the position where the text should be rendered.
- `color`: An 32-bit integer representing the color of the text in ImU32 format or vec4.
- `text`: The actual string of text that you wish to render.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()

draw:AddText(vec2(50, 50), 0xFFFFFFFF, "Hello, ImGui!")
```

---

### `ImDrawListMT:AddLine`

```lua
function ImDrawListMT:AddLine(
    startPos: vec2,
    endPos: vec2,
    color: number[int]|vec4,
    thickness: number[float] = 1.0
) -> none
```

#### Description

Draws a line between two points on the current ImDrawList.

#### Parameters

- `startPos`: The starting position of the line as a 2D vector.
- `endPos`: The ending position of the line as a 2D vector.
- `color`: The color of the line, either ImU32 format or vec4 format.
- `thickness`: The thickness of the line.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddLine(vec2(10, 10), vec2(100, 100), 0xFFFFFFFF, 2.0)
```

---

### `ImDrawListMT:AddRect`

```lua
function ImDrawListMT:AddRect(
    minPos: vec2,
    maxPos: vec2,
    color: number[int]|vec4,
    rounding: number = 0.0,
    flags: number[int] = 0,
    thickness: number[float] = 1.0
) -> none
```

#### Description

Draws a rectangle with optional rounded corners on the current ImDrawList.

#### Parameters

- `minPos`: The minimum corner position of the rectangle as a 2D vector.
- `maxPos`: The maximum corner position of the rectangle as a 2D vector.
- `color`: The color of the rectangle outline in ImU32 or vec4 format.
- `rounding`: Radius of rounded corners.
- `flags`: Flags for rectangle rounding (ImDrawFlags).
- `thickness`: The thickness of the rectangle lines.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddRect(vec2(10, 10), vec2(100, 100), 0xFFFFFFFF, 5.0, 0, 2.0)
```

---

### `ImDrawListMT:AddRectFilled`

```lua
function ImDrawListMT:AddRectFilled(
    minPos: vec2,
    maxPos: vec2,
    color: number[int]|vec4,
    rounding: number[float] = 0.0,
    flags: number[int] = 0
) -> none
```

#### Description

Draws a filled rectangle with optional rounded corners on the current ImDrawList.

#### Parameters

- `minPos`: The minimum corner position of the rectangle as a 2D vector.
- `maxPos`: The maximum corner position of the rectangle as a 2D vector.
- `color`: The fill color of the rectangle in ImU32 or vec4 format.
- `rounding`: Radius of rounded corners.
- `flags`: Flags for rectangle behavior (ImDrawFlags).

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddRectFilled(vec2(10, 10), vec2(100, 100), 0xFFFFFFFF, 5.0, 0)
```

---

### `ImDrawListMT:AddRectFilledMultiColor`

```lua
function ImDrawListMT:AddRectFilledMultiColor(
    minPos: vec2,
    maxPos: vec2,
    colUpLeft: number[int]|vec4,
    colUpRight: number[int]|vec4,
    colBotRight: number[int]|vec4,
    colBotLeft: number[int]|vec4
) -> none
```

#### Description

Draws a filled rectangle with multicolor vertices. It allows each corner of the rectangle to have a different color, creating a gradient effect across the rectangle.

#### Parameters
- `minPos`: The minimum (top-left) coordinate of the rectangle.
- `maxPos`: The maximum (bottom-right) coordinate of the rectangle.
- `colUpLeft`: The color for the upper-left corner of the rectangle.
- `colUpRight`: The color for the upper-right corner of the rectangle.
- `colBotRight`: The color for the bottom-right corner of the rectangle.
- `colBotLeft`: The color for the bottom-left corner of the rectangle.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddRectFilledMultiColor(vec2(50, 50), vec2(150, 150), 0xFF0000FF, 0xFFFF000, 0xFF00FF00, 0xFFFFFFFF)
```

---

### `ImDrawListMT:AddCircle`

```lua
function ImDrawListMT:AddCircle(
    center: vec2,
    radius: number[float],
    color: number[int]|vec4,
    segments: number[int] = 0,
    thickness: number[float] = 1.0
) -> none
```

#### Description

Draws a circle on the current ImDrawList.

#### Parameters

- `center`: The center position of the circle as a 2D vector.
- `radius`: The radius of the circle.
- `color`: The color of the circle outline in ImU32 or vec4 format.
- `segments`: Number of segments used for drawing the circle, 0 for automatic adjustment.
- `thickness`: The thickness of the circle outline.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddCircle(vec2(50, 50), 20, 0xFFFFFFFF, 0, 2.0)
```

---

### `ImDrawListMT:AddCircleFilled`

```lua
function ImDrawListMT:AddCircleFilled(
    center: vec2,
    radius: number[float],
    color: number[int]|vec4,
    segments: number[int] = 0
) -> none
```

#### Description

Draws a filled circle on the current ImDrawList.

#### Parameters

- `center`: The center position of the circle as a 2D vector.
- `radius`: The radius of the circle.
- `color`: The fill color of the circle in ImU32 or vec4 format.
- `segments`: Number of segments used for drawing the circle, 0 for automatic adjustment.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddCircleFilled(vec2(50, 50), 20, 0xFFFFFFFF)
```

---

### `ImDrawListMT:AddTriangle`

```lua
function ImDrawListMT:AddTriangle(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    color: number[int]|vec4,
    thickness: number[float] = 1.0
) -> none
```

#### Description

Draws a triangle on the current ImDrawList.

#### Parameters

- `p1`, `p2`, `p3`: The vertices of the triangle as 2D vectors.
- `color`: The color of the triangle outline in ImU32 or vec4 format.
- `thickness`: The thickness of the triangle outline.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddTriangle(vec2(10, 10), vec2(50, 50), vec2(10, 90), 0xFFFFFFFF, 2.0)
```

---

### `ImDrawListMT:AddTriangleFilled`

```lua
function ImDrawListMT:AddTriangleFilled(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    color: number[int]|vec4
) -> none
```

#### Description

Draws a filled triangle on the current ImDrawList.

#### Parameters

- `p1`, `p2`, `p3`: The vertices of the triangle as 2D vectors.
- `color`: The fill color of the triangle in ImU32 or vec4 format.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddTriangleFilled(vec2(10, 10), vec2(50, 50), vec2(10, 90), 0xFFFFFFFF)
```

---

### `ImDrawListMT:AddQuad`

```lua
function ImDrawListMT:AddQuad(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    p4: vec2,
    color: number[int]|vec4,
    thickness: number[float] = 1.0
) -> none
```

#### Description

Adds a quadrilateral shape to the ImDrawList with specified vertices, color, and optional thickness.

#### Parameters

- `p1`, `p2`, `p3`, `p4`: Vertices of the quadrilateral in 2D coordinates.
- `color`: Color of the shape in ImU32 or vec4 format.
- `thickness`: Optional thickness of the shape's lines.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddQuad(vec2(10, 10), vec2(50, 10), vec2(50, 50), vec2(10, 80), 0xFFFFFFFF)
```

---

### `ImDrawListMT:AddQuadFilled`

```lua
function ImDrawListMT:AddQuadFilled(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    p4: vec2,
    color: number[int]|vec4
) -> none
```

#### Description

Adds a filled quadrilateral shape to the ImDrawList with specified vertices and color.

#### Parameters

- `p1`, `p2`, `p3`, `p4`: Vertices of the quadrilateral in 2D coordinates.
- `color`: Fill color of the shape in ImU32 or vec4 format.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddQuadFilled(vec2(10, 10), vec2(50, 10), vec2(50, 50), vec2(10, 80), 0xFFFFFFFF)
```

---

### `ImDrawListMT:AddImage`

```lua
function ImDrawListMT:AddImage(
    texture: number[ptr],
    max: vec2,
    min: vec2,
    uvMin: vec2 = vec2(0, 0),
    uvMax: vec2 = vec2(1, 1),
    color: number[int]|vec4 = white
) -> none
```

#### Description

Adds an image to the ImDrawList with specified bounds and optional UV and tint color.
Read more about [images](###imageasset).

#### Parameters

- `texture`: Pointer to the texture object in memory to render.
- `max`: Upper-right corner of the image rectangle.
- `min`: Lower-left corner of the image rectangle.
- `uvMin`: Optional. Lower-left corner of the UV rectangle.
- `uvMax`: Optional. Upper-right corner of the UV rectangle.
- `color`: Optional tint color in ImU32 or vec4 format.

#### Return Value

None.

#### Example

```lua
local image_data = "aa00..."
local texture = imgui.CreateImageResource(mem.bin2hex(image_data))

-- ...

local draw = imgui.GetBackgroundDrawList()
draw:AddImage(texture:GetTextureID(), vec2(100, 100), vec2(200, 200))
```

---

### `ImDrawListMT:AddBezierCubic`

```lua
function ImDrawListMT:AddBezierCubic(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    p4: vec2,
    color: number[int]|vec4,
    thickness: number[float] = 1.0,
    segments: number[int] = 0
) -> none
```

#### Description

Adds a cubic Bezier curve to the ImDrawList.

#### Parameters

- `p1`, `p2`, `p3`, `p4`: Control points of the curve.
- `color`: Curve color in ImU32 or vec4 format.
- `thickness`: Optional thickness of the curve.
- `segments`: Optional number of segments to use (higher values are smoother).

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddBezierCubic(vec2(50, 50), vec2(150, 50), vec2(150, 150), vec2(50, 150), 0xFF00FF00)
```

---

### `ImDrawListMT:AddBezierCurve`

```lua
function ImDrawListMT:AddBezierCurve(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    p4: vec2,
    color: number[int]|vec4,
    thickness: number[float] = 1.0,
    segments: numbr[int] = 0
) -> none
```

#### Description

Adds a general Bezier curve to the ImDrawList.

#### Parameters

- `p1`, `p2`, `p3`, `p4`: Control points of the curve.
- `color`: Curve color in ImU32 or vec4 format.
- `thickness`: Optional thickness of the curve.
- `segments`: Optional number of segments to use (higher values are smoother).

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddBezierCurve(vec2(10, 10), vec2(50, 30), vec2(100, 30), vec2(200, 10), 0xFF0000FF)
```

---

### `ImDrawListMT:AddBezierQuadratic`

```lua
function ImDrawListMT:AddBezierQuadratic(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    color: number[int]|vec4,
    thickness: number[float] = 1.0,
    segments: number[int] = 0
) -> none
```

#### Description

Adds a quadratic Bezier curve to the ImDrawList.

#### Parameters

- `p1`, `p2`, `p3`: Control points of the curve.
- `color`: Curve color in ImU32 or vec4 format.
- `thickness`: Optional thickness of the curve.
- `segments`: Optional number of segments to use (higher values are smoother).

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddBezierQuadratic(vec2(10, 10), vec2(50, 30), vec2(100, 10), 0xFFFF0000)
```

---

### `ImDrawListMT:AddPolyline`

```lua
function ImDrawListMT:AddPolyline(
    points: table[list[vec2]],
    color: number[int]|vec4,
    flags: number[int] = 0,
    thickness: number[float] = 1.0
) -> none
```

#### Description

Adds a polyline to the ImDrawList. The polyline is specified by a table of 2D points.

#### Parameters

- `points`: A table of 2D vectors specifying the vertices of the polyline.
- `color`: Color of the polyline in ImU32 or vec4 format.
- `flags`: Optional flags for customizing the appearance (ImDrawFlags).
- `thickness`: Optional thickness of the polyline.

#### Return Value

None.

#### Example

```lua
local draw = imgui.GetBackgroundDrawList()
draw:AddPolyline({ vec2(10, 10), vec2(20, 20), vec2(30, 10) }, 0xFFFFFFFF)
```

---

### ImageAssetMT

`ImageAssetMT` provides a high-level easy-to-use interface for rendering any image in various ways using `ImGui`. To create an instance of this class use [CreateImageResource](#createimageresource). The image resource is automatically destroyed and released by the Lua garbage collector when it's no-longer referenced, so using the texture ID after losing all references to the asset will lead to crashes.

---

### `ImageAssetMT:GetTextureID`

```lua
function ImageAssetMT:GetTextureID() -> number[ptr]
```

#### Description

Retrieves the texture ID of an `ImageAssetMT` object.

#### Parameters

None.

#### Return Value

Returns a pointer to the texture of the asset, can be `0` if the asset is freed.

#### Example

```lua
local textureID = imageAsset:GetTextureID()
println("Texture ID:", textureID)
```

---

### `ImageAssetMT:GetSize`

```lua
function ImageAssetMT:GetSize() -> vec2
```

#### Description

Retrieves the image size of an asset object as a `vec2` containing width and height.

#### Parameters

None.

#### Return Value

Returns a `vec2` representing the width and height of the image.

#### Example

```lua
local size = imageAsset:GetSize()
println("Image size:", size)
```

---

### `ImageAssetMT:IsLoaded`

```lua
function ImageAssetMT:IsLoaded() -> bool
```

#### Description

Determines if the `ImageAssetMT` object has an image loaded.

#### Parameters

None.

#### Return Value

Returns `true` if image data is loaded, `false` otherwise.

#### Example

```lua
local isLoaded = imageAsset:IsLoaded()
println("Is loaded:", isLoaded)
```

---

### `ImageAssetMT:Free`

```lua
function ImageAssetMT:Free() -> none
```

#### Description

Frees the image resource associated with the `ImageAssetMT` object.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
imageAsset:Free()
```

---

### `ImageAssetMT:AddImage`

```lua
function ImageAssetMT:AddImage(
  drawList: userdata[ImDrawListMT],
  min: vec2,
  max: vec2,
  uvMin: vec2 = vec2(0, 0),
  uvMax: vec2 = vec2(1, 1),
  color: number[int]|vec4 = 0xFFFFFFFF
) -> none
```

#### Description

Adds an image to the specified ImGui drawing list. Use inside ImGui context only.

#### Parameters
- `drawList`: The drawing list to which the image will be added.
- `min`: The minimum coordinates for the image.
- `max`: The maximum coordinates for the image.
- `uvMin`: The minimum UV coordinates, defaulting to `(0, 0)` if not provided.
- `uvMax`: The maximum UV coordinates, defaulting to `(1, 1)` if not provided.
- `color`: Color filter, defaulting to white (all channels) if not provided.

#### Return Value

None.

#### Example

```lua
local drawList = imgui.GetBackgroundDrawList()
imageAsset:AddImage(drawList, vec2(0, 0), vec2(100, 100))
```

---

### `ImageAssetMT:Image`

```lua
function ImageAssetMT:Image(
  scale: vec2 = vec2(1, 1),
  uv0: vec2 = vec2(0, 0),
  uv1: vec2 = vec(1, 1),
  tintCol: number[int]|vec4 = 0xFFFFFFFF,
  borderCol: number[int]|vec4 = 0
) -> none
```

#### Description

Renders the image inside an ImGui window with specified parameters.

#### Parameters

- `scale`: The scale factor for the image, defaulting to `(1, 1)` if not provided.
- `uv0`: The lower UV coordinates, defaulting to `(0, 0)` if not provided.
- `uv1`: The upper UV coordinates, defaulting to `(1, 1)` if not provided.
- `tintCol`: The tint color, defaulting to white if not provided.
- `borderCol`: The border color, defaulting to transparent if not provided.

#### Return Value

None.

#### Example

```lua
-- Inside ImGui window context
imageAsset:Image()
```

---

### `ImageAssetMT:ImageButton`

```lua
function ImageAssetMT:ImageButton(
  scale: vec2 = vec2(1, 1),
  uv0: vec2 = vec2(0, 0),
  uv1: vec2 = vec2(1, 1),
  framePadding: number[int] = -1,
  bgColor: number[int]|vec4 = 0,
  tintCol: number[int]|vec4 = vec4(1, 1, 1, 1)
) -> bool
```

#### Description

Renders an `ImGui` widget button with the image. Use in the context of ImGui windows only.

#### Parameters

- `scale`: The scale factor for the image.
- `uv0`: The lower UV coordinates.
- `uv1`: The upper UV coordinates.
- `framePadding`: Padding around the image within the button, `-1` for default padding.
- `bgColor`: The background color of the button, defaulting to transparent.
- `tintCol`: The tint color of the image, defaulting to white.

#### Return Value

Returns `true` if the button is pressed, `false` otherwise.

#### Example

```lua
-- Inside ImGui window context
if imageAsset:ImageButton(vec2(0.5, 0.5)) then
  -- Handle button press
end
```

---

### `ImageAssetMT:ImageQuad`

```lua
function ImageAssetMT:ImageQuad(
  drawList: userdata[ImDrawListMT],
  p1: vec2,
  p2: vec2,
  p3: vec2,
  p4: vec2,
  color: number[int] = 0xFFFFFFFF,
  uv1: vec2 = vec2(0, 0),
  uv2: vec2 = vec2(1, 0),
  uv3: vec2 = vec2(1, 1),
  uv4: vec2 = vec2(0, 1)
) -> none
```

#### Description

Draws an image on the specified ImGui drawing list in a more complex away. Using the 4 control points, it's possible to stretch and rotate the image in complex ways.

#### Parameters

- `drawList`: The drawing list where the image will be added.
- `p1`: The top-left corner point of the quadrilateral.
- `p2`: The top-right corner point.
- `p3`: The bottomn-right corner point.
- `p4`: The bottom-left corner point.
- `color`: The filter color of the image, defaulting to white (all channels).
- `uv1`: The UV coordinates for the first point.
- `uv2`: The UV coordinates for the second point.
- `uv3`: The UV coordinates for the third point.
- `uv4`: The UV coordinates for the fourth point.

#### Return Value

None.

#### Example

```lua
imageAsset:ImageQuad(drawList, vec2(10, 10), vec2(100, 10), vec2(100, 100), vec2(10, 100))
```

---

### `ImageAssetMT:ImageRounded`

```lua
function ImageAssetMT:ImageRounded(
  drawList: userdata[ImDrawListMT],
  min: vec2,
  max: vec2,
  rounding: number[float],
  color: number[int] = 0xFFFFFFFF,
  flags: number[int] = 0,
  uvMin: vec2 = vec2(0, 0),
  uvMax: vec2 = vec2(1, 1)
) -> none
```

#### Description

Renders a rounded image on the specified ImGui drawing list.

#### Parameters

- `drawList`: The drawing list where the image will be rendered.
- `min`: The minimum coordinates for the image.
- `max`: The maximum coordinates for the image.
- `rounding`: The radius of the rounding on the corners.
- `color`: The filter color of the image, defaulting to white (all channels).
- `flags`: Flags (`ImDrawFlags`) for rendering, defaulting to none.
- `uvMin`: The lower UV coordinates for the image.
- `uvMax`: The upper UV coordinates for the image.

#### Return Value

None.

#### Example

```lua
imageAsset:ImageRounded(drawList, vec2(30, 30), vec2(130, 80), 10)
```

---

## Predefined Constants

Upon loading our library via the `require` function, a set of predefined constants becomes globally accessible within your Lua script. These constants are typically ImGui flags or specific constant values, like `ImGuiWindowFlags`, and they're defined as Lua numbers (`number[int]`).

For a deeper understanding of the purpose and usage of each constant, you can refer to the official ImGui documentation. A detailed description is beyond the scope of this guide, but you can find relevant information [here](https://github.com/ocornut/imgui/blob/v1.89.2/imgui.h). Just search for the value you want to learn about in that file.

By familiarizing yourself with these constants, you can better utilize the ImGui library's functionalities within your scripts.

Here's a list of all predefined constants available:

```lua
-- imgui.h
ImGuiWindowFlags_None
ImGuiWindowFlags_NoTitleBar
ImGuiWindowFlags_NoResize
ImGuiWindowFlags_NoMove
ImGuiWindowFlags_NoScrollbar
ImGuiWindowFlags_NoScrollWithMouse
ImGuiWindowFlags_NoCollapse
ImGuiWindowFlags_AlwaysAutoResize
ImGuiWindowFlags_NoBackground
ImGuiWindowFlags_NoSavedSettings
ImGuiWindowFlags_NoMouseInputs
ImGuiWindowFlags_MenuBar
ImGuiWindowFlags_HorizontalScrollbar
ImGuiWindowFlags_NoFocusOnAppearing
ImGuiWindowFlags_NoBringToFrontOnFocus
ImGuiWindowFlags_AlwaysVerticalScrollbar
ImGuiWindowFlags_AlwaysHorizontalScrollbar
ImGuiWindowFlags_AlwaysUseWindowPadding
ImGuiWindowFlags_NoNavInputs
ImGuiWindowFlags_NoNavFocus
ImGuiWindowFlags_UnsavedDocument
ImGuiWindowFlags_UseRootDrawList
ImGuiWindowFlags_RedrawInFrame
ImGuiWindowFlags_UpdateName
ImGuiWindowFlags_NoNav
ImGuiWindowFlags_NoDecoration
ImGuiWindowFlags_NoInputs
ImGuiWindowFlags_NavFlattened
ImGuiWindowFlags_ChildWindow
ImGuiWindowFlags_Tooltip
ImGuiWindowFlags_Popup
ImGuiWindowFlags_Modal
ImGuiWindowFlags_ChildMenu
ImGuiInputTextFlags_None
ImGuiInputTextFlags_CharsDecimal
ImGuiInputTextFlags_CharsHexadecimal
ImGuiInputTextFlags_CharsUppercase
ImGuiInputTextFlags_CharsNoBlank
ImGuiInputTextFlags_AutoSelectAll
ImGuiInputTextFlags_EnterReturnsTrue
ImGuiInputTextFlags_CallbackCompletion
ImGuiInputTextFlags_CallbackHistory
ImGuiInputTextFlags_CallbackAlways
ImGuiInputTextFlags_CallbackCharFilter
ImGuiInputTextFlags_AllowTabInput
ImGuiInputTextFlags_CtrlEnterForNewLine
ImGuiInputTextFlags_NoHorizontalScroll
ImGuiInputTextFlags_AlwaysOverwrite
ImGuiInputTextFlags_ReadOnly
ImGuiInputTextFlags_Password
ImGuiInputTextFlags_NoUndoRedo
ImGuiInputTextFlags_CharsScientific
ImGuiInputTextFlags_CallbackResize
ImGuiInputTextFlags_CallbackEdit
ImGuiInputTextFlags_EscapeClearsAll
ImGuiInputTextFlags_DisableStepButtons
ImGuiTreeNodeFlags_None
ImGuiTreeNodeFlags_Selected
ImGuiTreeNodeFlags_Framed
ImGuiTreeNodeFlags_AllowItemOverlap
ImGuiTreeNodeFlags_NoTreePushOnOpen
ImGuiTreeNodeFlags_NoAutoOpenOnLog
ImGuiTreeNodeFlags_DefaultOpen
ImGuiTreeNodeFlags_OpenOnDoubleClick
ImGuiTreeNodeFlags_OpenOnArrow
ImGuiTreeNodeFlags_Leaf
ImGuiTreeNodeFlags_Bullet
ImGuiTreeNodeFlags_FramePadding
ImGuiTreeNodeFlags_SpanAvailWidth
ImGuiTreeNodeFlags_SpanFullWidth
ImGuiTreeNodeFlags_NavLeftJumpsBackHere
ImGuiTreeNodeFlags_CollapsingHeader
ImGuiPopupFlags_None
ImGuiPopupFlags_MouseButtonLeft
ImGuiPopupFlags_MouseButtonRight
ImGuiPopupFlags_MouseButtonMiddle
ImGuiPopupFlags_MouseButtonMask_
ImGuiPopupFlags_MouseButtonDefault_
ImGuiPopupFlags_NoOpenOverExistingPopup
ImGuiPopupFlags_NoOpenOverItems
ImGuiPopupFlags_AnyPopupId
ImGuiPopupFlags_AnyPopupLevel
ImGuiPopupFlags_AnyPopup
ImGuiSelectableFlags_None
ImGuiSelectableFlags_DontClosePopups
ImGuiSelectableFlags_SpanAllColumns
ImGuiSelectableFlags_AllowDoubleClick
ImGuiSelectableFlags_Disabled
ImGuiSelectableFlags_AllowItemOverlap
ImGuiComboFlags_None
ImGuiComboFlags_PopupAlignLeft
ImGuiComboFlags_HeightSmall
ImGuiComboFlags_HeightRegular
ImGuiComboFlags_HeightLarge
ImGuiComboFlags_HeightLargest
ImGuiComboFlags_NoArrowButton
ImGuiComboFlags_NoPreview
ImGuiComboFlags_HeightMask_
ImGuiTabBarFlags_None
ImGuiTabBarFlags_Reorderable
ImGuiTabBarFlags_AutoSelectNewTabs
ImGuiTabBarFlags_TabListPopupButton
ImGuiTabBarFlags_NoCloseWithMiddleMouseButton
ImGuiTabBarFlags_NoTabListScrollingButtons
ImGuiTabBarFlags_NoTooltip
ImGuiTabBarFlags_FittingPolicyResizeDown
ImGuiTabBarFlags_FittingPolicyScroll
ImGuiTabBarFlags_FittingPolicyMask_
ImGuiTabBarFlags_FittingPolicyDefault_
ImGuiTabItemFlags_None
ImGuiTabItemFlags_UnsavedDocument
ImGuiTabItemFlags_SetSelected
ImGuiTabItemFlags_NoCloseWithMiddleMouseButton
ImGuiTabItemFlags_NoPushId
ImGuiTabItemFlags_NoTooltip
ImGuiTabItemFlags_NoReorder
ImGuiTabItemFlags_Leading
ImGuiTabItemFlags_Trailing
ImGuiTableFlags_None
ImGuiTableFlags_Resizable
ImGuiTableFlags_Reorderable
ImGuiTableFlags_Hideable
ImGuiTableFlags_Sortable
ImGuiTableFlags_NoSavedSettings
ImGuiTableFlags_ContextMenuInBody
ImGuiTableFlags_RowBg
ImGuiTableFlags_BordersInnerH
ImGuiTableFlags_BordersOuterH
ImGuiTableFlags_BordersInnerV
ImGuiTableFlags_BordersOuterV
ImGuiTableFlags_BordersH
ImGuiTableFlags_BordersV
ImGuiTableFlags_BordersInner
ImGuiTableFlags_BordersOuter
ImGuiTableFlags_Borders
ImGuiTableFlags_NoBordersInBody
ImGuiTableFlags_NoBordersInBodyUntilResize
ImGuiTableFlags_SizingFixedFit
ImGuiTableFlags_SizingFixedSame
ImGuiTableFlags_SizingStretchProp
ImGuiTableFlags_SizingStretchSame
ImGuiTableFlags_NoHostExtendX
ImGuiTableFlags_NoHostExtendY
ImGuiTableFlags_NoKeepColumnsVisible
ImGuiTableFlags_PreciseWidths
ImGuiTableFlags_NoClip
ImGuiTableFlags_PadOuterX
ImGuiTableFlags_NoPadOuterX
ImGuiTableFlags_NoPadInnerX
ImGuiTableFlags_ScrollX
ImGuiTableFlags_ScrollY
ImGuiTableFlags_SortMulti
ImGuiTableFlags_SortTristate
ImGuiTableFlags_SizingMask_
ImGuiTableColumnFlags_None
ImGuiTableColumnFlags_Disabled
ImGuiTableColumnFlags_DefaultHide
ImGuiTableColumnFlags_DefaultSort
ImGuiTableColumnFlags_WidthStretch
ImGuiTableColumnFlags_WidthFixed
ImGuiTableColumnFlags_NoResize
ImGuiTableColumnFlags_NoReorder
ImGuiTableColumnFlags_NoHide
ImGuiTableColumnFlags_NoClip
ImGuiTableColumnFlags_NoSort
ImGuiTableColumnFlags_NoSortAscending
ImGuiTableColumnFlags_NoSortDescending
ImGuiTableColumnFlags_NoHeaderLabel
ImGuiTableColumnFlags_NoHeaderWidth
ImGuiTableColumnFlags_PreferSortAscending
ImGuiTableColumnFlags_PreferSortDescending
ImGuiTableColumnFlags_IndentEnable
ImGuiTableColumnFlags_IndentDisable
ImGuiTableColumnFlags_IsEnabled
ImGuiTableColumnFlags_IsVisible
ImGuiTableColumnFlags_IsSorted
ImGuiTableColumnFlags_IsHovered
ImGuiTableColumnFlags_WidthMask_
ImGuiTableColumnFlags_IndentMask_
ImGuiTableColumnFlags_StatusMask_
ImGuiTableColumnFlags_NoDirectResize_
ImGuiTableRowFlags_None
ImGuiTableRowFlags_Headers
ImGuiTableBgTarget_None
ImGuiTableBgTarget_RowBg0
ImGuiTableBgTarget_RowBg1
ImGuiTableBgTarget_CellBg
ImGuiFocusedFlags_None
ImGuiFocusedFlags_ChildWindows
ImGuiFocusedFlags_RootWindow
ImGuiFocusedFlags_AnyWindow
ImGuiFocusedFlags_NoPopupHierarchy
ImGuiFocusedFlags_RootAndChildWindows
ImGuiHoveredFlags_None
ImGuiHoveredFlags_ChildWindows
ImGuiHoveredFlags_RootWindow
ImGuiHoveredFlags_AnyWindow
ImGuiHoveredFlags_NoPopupHierarchy
ImGuiHoveredFlags_AllowWhenBlockedByPopup
ImGuiHoveredFlags_AllowWhenBlockedByActiveItem
ImGuiHoveredFlags_AllowWhenOverlapped
ImGuiHoveredFlags_AllowWhenDisabled
ImGuiHoveredFlags_NoNavOverride
ImGuiHoveredFlags_RectOnly
ImGuiHoveredFlags_RootAndChildWindows
ImGuiHoveredFlags_DelayNormal
ImGuiHoveredFlags_DelayShort
ImGuiHoveredFlags_NoSharedDelay
ImGuiDragDropFlags_None
ImGuiDragDropFlags_SourceNoPreviewTooltip
ImGuiDragDropFlags_SourceNoDisableHover
ImGuiDragDropFlags_SourceNoHoldToOpenOthers
ImGuiDragDropFlags_SourceAllowNullID
ImGuiDragDropFlags_SourceExtern
ImGuiDragDropFlags_SourceAutoExpirePayload
ImGuiDragDropFlags_AcceptBeforeDelivery
ImGuiDragDropFlags_AcceptNoDrawDefaultRect
ImGuiDragDropFlags_AcceptNoPreviewTooltip
ImGuiDragDropFlags_AcceptPeekOnly
ImGuiDataType_S8
ImGuiDataType_U8
ImGuiDataType_S16
ImGuiDataType_U16
ImGuiDataType_S32
ImGuiDataType_U32
ImGuiDataType_S64
ImGuiDataType_U64
ImGuiDataType_Float
ImGuiDataType_Double
ImGuiDir_None
ImGuiDir_Left
ImGuiDir_Right
ImGuiDir_Up
ImGuiDir_Down
ImGuiSortDirection_None
ImGuiSortDirection_Ascending
ImGuiSortDirection_Descending
ImGuiKey_None
ImGuiKey_Tab
ImGuiKey_LeftArrow
ImGuiKey_RightArrow
ImGuiKey_UpArrow
ImGuiKey_DownArrow
ImGuiKey_PageUp
ImGuiKey_PageDown
ImGuiKey_Home
ImGuiKey_End
ImGuiKey_Insert
ImGuiKey_Delete
ImGuiKey_Backspace
ImGuiKey_Space
ImGuiKey_Enter
ImGuiKey_Escape
ImGuiKey_LeftCtrl
ImGuiKey_RightCtrl
ImGuiKey_Menu
ImGuiKey_0
ImGuiKey_A
ImGuiKey_K
ImGuiKey_U
ImGuiKey_F1
ImGuiKey_F7
ImGuiKey_Apostrophe
ImGuiKey_Comma
ImGuiKey_Minus
ImGuiKey_Period
ImGuiKey_Slash
ImGuiKey_Semicolon
ImGuiKey_Equal
ImGuiKey_LeftBracket
ImGuiKey_Backslash
ImGuiKey_RightBracket
ImGuiKey_GraveAccent
ImGuiKey_CapsLock
ImGuiKey_ScrollLock
ImGuiKey_NumLock
ImGuiKey_PrintScreen
ImGuiKey_Pause
ImGuiKey_Keypad0
ImGuiKey_Keypad5
ImGuiKey_KeypadDecimal
ImGuiKey_KeypadDivide
ImGuiKey_KeypadMultiply
ImGuiKey_KeypadSubtract
ImGuiKey_KeypadAdd
ImGuiKey_KeypadEnter
ImGuiKey_KeypadEqual
ImGuiKey_GamepadStart
ImGuiKey_GamepadBack
ImGuiKey_GamepadFaceLeft
ImGuiKey_GamepadFaceRight
ImGuiKey_GamepadFaceUp
ImGuiKey_GamepadFaceDown
ImGuiKey_GamepadDpadLeft
ImGuiKey_GamepadDpadRight
ImGuiKey_GamepadDpadUp
ImGuiKey_GamepadDpadDown
ImGuiKey_GamepadL1
ImGuiKey_GamepadR1
ImGuiKey_GamepadL2
ImGuiKey_GamepadR2
ImGuiKey_GamepadL3
ImGuiKey_GamepadR3
ImGuiKey_GamepadLStickLeft
ImGuiKey_GamepadLStickRight
ImGuiKey_GamepadLStickUp
ImGuiKey_GamepadLStickDown
ImGuiKey_GamepadRStickLeft
ImGuiKey_GamepadRStickRight
ImGuiKey_GamepadRStickUp
ImGuiKey_GamepadRStickDown
ImGuiKey_MouseLeft
ImGuiKey_ReservedForModCtrl
ImGuiKey_COUNT
ImGuiMod_None
ImGuiMod_Ctrl
ImGuiMod_Shift
ImGuiMod_Alt
ImGuiMod_Super
ImGuiMod_Shortcut
ImGuiMod_Mask_
ImGuiKey_NamedKey_BEGIN
ImGuiKey_NamedKey_END
ImGuiKey_NamedKey_COUNT
ImGuiKey_KeysData_SIZE
ImGuiKey_KeysData_OFFSET
ImGuiKey_KeysData_SIZE
ImGuiKey_KeysData_OFFSET
ImGuiKey_ModCtrl
ImGuiKey_KeyPadEnter
ImGuiInputFlags_None
ImGuiInputFlags_Repeat
ImGuiInputFlags_RouteFocused
ImGuiInputFlags_RouteGlobalLow
ImGuiInputFlags_RouteGlobal
ImGuiInputFlags_RouteGlobalHigh
ImGuiInputFlags_RouteAlways
ImGuiInputFlags_RouteUnlessBgFocused
ImGuiNavInput_Activate
ImGuiNavInput_LStickLeft
ImGuiNavInput_COUNT
ImGuiConfigFlags_None
ImGuiConfigFlags_NavEnableKeyboard
ImGuiConfigFlags_NavEnableGamepad
ImGuiConfigFlags_NavEnableSetMousePos
ImGuiConfigFlags_NavNoCaptureKeyboard
ImGuiConfigFlags_NoMouse
ImGuiConfigFlags_NoMouseCursorChange
ImGuiConfigFlags_IsSRGB
ImGuiConfigFlags_IsTouchScreen
ImGuiBackendFlags_None
ImGuiBackendFlags_HasGamepad
ImGuiBackendFlags_HasMouseCursors
ImGuiBackendFlags_HasSetMousePos
ImGuiBackendFlags_RendererHasVtxOffset
ImGuiCol_Text
ImGuiCol_TextDisabled
ImGuiCol_WindowBg
ImGuiCol_ChildBg
ImGuiCol_PopupBg
ImGuiCol_Border
ImGuiCol_BorderShadow
ImGuiCol_FrameBg
ImGuiCol_FrameBgHovered
ImGuiCol_FrameBgActive
ImGuiCol_TitleBg
ImGuiCol_TitleBgActive
ImGuiCol_TitleBgCollapsed
ImGuiCol_MenuBarBg
ImGuiCol_ScrollbarBg
ImGuiCol_ScrollbarGrab
ImGuiCol_ScrollbarGrabHovered
ImGuiCol_ScrollbarGrabActive
ImGuiCol_CheckMark
ImGuiCol_SliderGrab
ImGuiCol_SliderGrabActive
ImGuiCol_Button
ImGuiCol_ButtonHovered
ImGuiCol_ButtonActive
ImGuiCol_Header
ImGuiCol_HeaderHovered
ImGuiCol_HeaderActive
ImGuiCol_Separator
ImGuiCol_SeparatorHovered
ImGuiCol_SeparatorActive
ImGuiCol_ResizeGrip
ImGuiCol_ResizeGripHovered
ImGuiCol_ResizeGripActive
ImGuiCol_Tab
ImGuiCol_TabHovered
ImGuiCol_TabActive
ImGuiCol_TabUnfocused
ImGuiCol_TabUnfocusedActive
ImGuiCol_PlotLines
ImGuiCol_PlotLinesHovered
ImGuiCol_PlotHistogram
ImGuiCol_PlotHistogramHovered
ImGuiCol_TableHeaderBg
ImGuiCol_TableBorderStrong
ImGuiCol_TableBorderLight
ImGuiCol_TableRowBg
ImGuiCol_TableRowBgAlt
ImGuiCol_TextSelectedBg
ImGuiCol_DragDropTarget
ImGuiCol_NavHighlight
ImGuiCol_NavWindowingHighlight
ImGuiCol_NavWindowingDimBg
ImGuiCol_ModalWindowDimBg
ImGuiCol_SwitchOn
ImGuiCol_SwitchOff
ImGuiStyleVar_Alpha
ImGuiStyleVar_DisabledAlpha
ImGuiStyleVar_WindowPadding
ImGuiStyleVar_WindowRounding
ImGuiStyleVar_WindowBorderSize
ImGuiStyleVar_WindowMinSize
ImGuiStyleVar_WindowTitleAlign
ImGuiStyleVar_ChildRounding
ImGuiStyleVar_ChildBorderSize
ImGuiStyleVar_PopupRounding
ImGuiStyleVar_PopupBorderSize
ImGuiStyleVar_FramePadding
ImGuiStyleVar_FrameRounding
ImGuiStyleVar_FrameBorderSize
ImGuiStyleVar_ItemSpacing
ImGuiStyleVar_ItemInnerSpacing
ImGuiStyleVar_IndentSpacing
ImGuiStyleVar_CellPadding
ImGuiStyleVar_ScrollbarSize
ImGuiStyleVar_ScrollbarRounding
ImGuiStyleVar_GrabMinSize
ImGuiStyleVar_GrabRounding
ImGuiStyleVar_TabRounding
ImGuiStyleVar_ButtonTextAlign
ImGuiStyleVar_SelectableTextAlign
ImGuiButtonFlags_None
ImGuiButtonFlags_MouseButtonLeft
ImGuiButtonFlags_MouseButtonRight
ImGuiButtonFlags_MouseButtonMiddle
ImGuiButtonFlags_MouseButtonMask_
ImGuiButtonFlags_MouseButtonDefault_
ImGuiColorEditFlags_None
ImGuiColorEditFlags_NoAlpha
ImGuiColorEditFlags_NoPicker
ImGuiColorEditFlags_NoOptions
ImGuiColorEditFlags_NoSmallPreview
ImGuiColorEditFlags_NoInputs
ImGuiColorEditFlags_NoTooltip
ImGuiColorEditFlags_NoLabel
ImGuiColorEditFlags_NoSidePreview
ImGuiColorEditFlags_NoDragDrop
ImGuiColorEditFlags_NoBorder
ImGuiColorEditFlags_AlphaBar
ImGuiColorEditFlags_AlphaPreview
ImGuiColorEditFlags_AlphaPreviewHalf
ImGuiColorEditFlags_HDR
ImGuiColorEditFlags_DisplayRGB
ImGuiColorEditFlags_DisplayHSV
ImGuiColorEditFlags_DisplayHex
ImGuiColorEditFlags_Uint8
ImGuiColorEditFlags_Float
ImGuiColorEditFlags_PickerHueBar
ImGuiColorEditFlags_PickerHueWheel
ImGuiColorEditFlags_InputRGB
ImGuiColorEditFlags_InputHSV
ImGuiColorEditFlags_HoverPreview
ImGuiColorEditFlags_DefaultOptions_
ImGuiColorEditFlags_DisplayMask_
ImGuiColorEditFlags_DataTypeMask_
ImGuiColorEditFlags_PickerMask_
ImGuiColorEditFlags_InputMask_
ImGuiSliderFlags_None
ImGuiSliderFlags_AlwaysClamp
ImGuiSliderFlags_Logarithmic
ImGuiSliderFlags_NoRoundToFormat
ImGuiSliderFlags_NoInput
ImGuiSliderFlags_InvalidMask_
ImGuiSliderFlags_ClampOnInput
ImGuiMouseButton_Left
ImGuiMouseButton_Right
ImGuiMouseButton_Middle
ImGuiMouseCursor_None
ImGuiMouseCursor_Arrow
ImGuiMouseCursor_TextInput
ImGuiMouseCursor_ResizeAll
ImGuiMouseCursor_ResizeNS
ImGuiMouseCursor_ResizeEW
ImGuiMouseCursor_ResizeNESW
ImGuiMouseCursor_ResizeNWSE
ImGuiMouseCursor_Hand
ImGuiMouseCursor_NotAllowed
ImGuiCond_None
ImGuiCond_Always
ImGuiCond_Once
ImGuiCond_FirstUseEver
ImGuiCond_Appearing
ImDrawFlags_None                        
ImDrawFlags_Closed                      
ImDrawFlags_RoundCornersTopLeft         
ImDrawFlags_RoundCornersTopRight        
ImDrawFlags_RoundCornersBottomLeft      
ImDrawFlags_RoundCornersBottomRight     
ImDrawFlags_RoundCornersNone            
ImDrawFlags_RoundCornersTop             
ImDrawFlags_RoundCornersBottom          
ImDrawFlags_RoundCornersLeft            
ImDrawFlags_RoundCornersRight           
ImDrawFlags_RoundCornersAll             
ImDrawFlags_RoundCornersDefault_        
ImDrawFlags_RoundCornersMask_           
ImDrawListFlags_None                    
ImDrawListFlags_AntiAliasedLines        
ImDrawListFlags_AntiAliasedLinesUseTex  
ImDrawListFlags_AntiAliasedFill         
ImDrawListFlags_AllowVtxOffset


-- imgui_internal.h
ImGuiItemFlags_None
ImGuiItemFlags_NoTabStop
ImGuiItemFlags_ButtonRepeat
ImGuiItemFlags_Disabled
ImGuiItemFlags_NoNav
ImGuiItemFlags_NoNavDefaultFocus
ImGuiItemFlags_SelectableDontClosePopup
ImGuiItemFlags_MixedValue
ImGuiItemFlags_ReadOnly
ImGuiItemFlags_NoWindowHoverableCheck
ImGuiItemFlags_Inputable
ImGuiItemStatusFlags_None
ImGuiItemStatusFlags_HoveredRect
ImGuiItemStatusFlags_HasDisplayRect
ImGuiItemStatusFlags_Edited
ImGuiItemStatusFlags_ToggledSelection
ImGuiItemStatusFlags_ToggledOpen
ImGuiItemStatusFlags_HasDeactivated
ImGuiItemStatusFlags_Deactivated
ImGuiItemStatusFlags_HoveredWindow
ImGuiItemStatusFlags_FocusedByTabbing
ImGuiItemStatusFlags_Visible
ImGuiInputTextFlags_Multiline
ImGuiInputTextFlags_NoMarkEdited
ImGuiInputTextFlags_MergedItem
ImGuiButtonFlags_PressedOnClick
ImGuiButtonFlags_PressedOnClickRelease
ImGuiButtonFlags_PressedOnClickReleaseAnywhere
ImGuiButtonFlags_PressedOnRelease
ImGuiButtonFlags_PressedOnDoubleClick
ImGuiButtonFlags_PressedOnDragDropHold
ImGuiButtonFlags_Repeat
ImGuiButtonFlags_FlattenChildren
ImGuiButtonFlags_AllowItemOverlap
ImGuiButtonFlags_DontClosePopups
ImGuiButtonFlags_AlignTextBaseLine
ImGuiButtonFlags_NoKeyModifiers
ImGuiButtonFlags_NoHoldingActiveId
ImGuiButtonFlags_NoNavFocus
ImGuiButtonFlags_NoHoveredOnFocus
ImGuiButtonFlags_NoSetKeyOwner
ImGuiButtonFlags_NoTestKeyOwner
ImGuiButtonFlags_PressedOnMask_
ImGuiButtonFlags_PressedOnDefault_
ImGuiComboFlags_CustomPreview
ImGuiSliderFlags_Vertical
ImGuiSliderFlags_ReadOnly
ImGuiSelectableFlags_NoHoldingActiveID
ImGuiSelectableFlags_SelectOnNav
ImGuiSelectableFlags_SelectOnClick
ImGuiSelectableFlags_SelectOnRelease
ImGuiSelectableFlags_SpanAvailWidth
ImGuiSelectableFlags_DrawHoveredWhenHeld
ImGuiSelectableFlags_SetNavIdOnHover
ImGuiSelectableFlags_NoPadWithHalfSpacing
ImGuiSelectableFlags_NoSetKeyOwner
ImGuiTreeNodeFlags_ClipLabelForTrailingButton
ImGuiSeparatorFlags_None
ImGuiSeparatorFlags_Horizontal
ImGuiSeparatorFlags_Vertical
ImGuiSeparatorFlags_SpanAllColumns
ImGuiTextFlags_None
ImGuiTextFlags_NoWidthForLargeClippedText
ImGuiTooltipFlags_None
ImGuiTooltipFlags_OverridePreviousTooltip
ImGuiLayoutType_Horizontal
ImGuiLogType_None
ImGuiLogType_TTY
ImGuiLogType_File
ImGuiLogType_Buffer
ImGuiLogType_Clipboard
ImGuiAxis_None
ImGuiAxis_X
ImGuiPlotType_Lines
ImGuiPlotType_Histogram
ImGuiPopupPositionPolicy_Default
ImGuiPopupPositionPolicy_ComboBox
ImGuiPopupPositionPolicy_Tooltip
ImGuiDataType_String
ImGuiDataType_Pointer
ImGuiDataType_ID
ImGuiNextWindowDataFlags_None
ImGuiNextWindowDataFlags_HasPos
ImGuiNextWindowDataFlags_HasSize
ImGuiNextWindowDataFlags_HasContentSize
ImGuiNextWindowDataFlags_HasCollapsed
ImGuiNextWindowDataFlags_HasSizeConstraint
ImGuiNextWindowDataFlags_HasFocus
ImGuiNextWindowDataFlags_HasBgAlpha
ImGuiNextWindowDataFlags_HasScroll
ImGuiNextItemDataFlags_None
ImGuiNextItemDataFlags_HasWidth
ImGuiNextItemDataFlags_HasOpen
ImGuiInputEventType_None
ImGuiInputEventType_MousePos
ImGuiInputEventType_MouseWheel
ImGuiInputEventType_MouseButton
ImGuiInputEventType_Key
ImGuiInputEventType_Text
ImGuiInputEventType_Focus
ImGuiInputSource_None
ImGuiInputSource_Mouse
ImGuiInputSource_Keyboard
ImGuiInputSource_Gamepad
ImGuiInputSource_Clipboard
ImGuiInputSource_Nav
ImGuiInputFlags_RepeatRateDefault
ImGuiInputFlags_RepeatRateNavMove
ImGuiInputFlags_RepeatRateNavTweak
ImGuiInputFlags_RepeatRateMask_
ImGuiInputFlags_CondHovered
ImGuiInputFlags_CondActive
ImGuiInputFlags_CondDefault_
ImGuiInputFlags_CondMask_
ImGuiInputFlags_LockThisFrame
ImGuiInputFlags_LockUntilRelease
ImGuiInputFlags_RouteMask_
ImGuiInputFlags_RouteExtraMask_
ImGuiInputFlags_SupportedByIsKeyPressed
ImGuiInputFlags_SupportedByShortcut
ImGuiInputFlags_SupportedBySetKeyOwner
ImGuiInputFlags_SupportedBySetItemKeyOwner
ImGuiActivateFlags_None
ImGuiActivateFlags_PreferInput
ImGuiActivateFlags_PreferTweak
ImGuiActivateFlags_TryToPreserveState
ImGuiScrollFlags_None
ImGuiScrollFlags_KeepVisibleEdgeX
ImGuiScrollFlags_KeepVisibleEdgeY
ImGuiScrollFlags_KeepVisibleCenterX
ImGuiScrollFlags_KeepVisibleCenterY
ImGuiScrollFlags_AlwaysCenterX
ImGuiScrollFlags_AlwaysCenterY
ImGuiScrollFlags_NoScrollParent
ImGuiScrollFlags_MaskX_
ImGuiScrollFlags_MaskY_
ImGuiNavHighlightFlags_None
ImGuiNavHighlightFlags_TypeDefault
ImGuiNavHighlightFlags_TypeThin
ImGuiNavHighlightFlags_AlwaysDraw
ImGuiNavHighlightFlags_NoRounding
ImGuiNavMoveFlags_None
ImGuiNavMoveFlags_LoopX
ImGuiNavMoveFlags_LoopY
ImGuiNavMoveFlags_WrapX
ImGuiNavMoveFlags_WrapY
ImGuiNavMoveFlags_AllowCurrentNavId
ImGuiNavMoveFlags_AlsoScoreVisibleSet
ImGuiNavMoveFlags_ScrollToEdgeY
ImGuiNavMoveFlags_Forwarded
ImGuiNavMoveFlags_DebugNoResult
ImGuiNavMoveFlags_FocusApi
ImGuiNavMoveFlags_Tabbing
ImGuiNavMoveFlags_Activate
ImGuiNavMoveFlags_DontSetNavHighlight
ImGuiNavLayer_Main
ImGuiNavLayer_Menu
ImGuiOldColumnFlags_None
ImGuiOldColumnFlags_NoBorder
ImGuiOldColumnFlags_NoResize
ImGuiOldColumnFlags_NoPreserveWidths
ImGuiOldColumnFlags_NoForceWithinWindow
ImGuiOldColumnFlags_GrowParentContentsSize
ImGuiColumnsFlags_None
ImGuiColumnsFlags_NoBorder
ImGuiColumnsFlags_NoResize
ImGuiColumnsFlags_NoPreserveWidths
ImGuiColumnsFlags_NoForceWithinWindow
ImGuiColumnsFlags_GrowParentContentsSize
ImGuiLocKey_TableSizeOne
ImGuiLocKey_TableSizeAllFit
ImGuiLocKey_TableSizeAllDefault
ImGuiLocKey_TableResetOrder
ImGuiLocKey_WindowingMainMenuBar
ImGuiLocKey_WindowingPopup
ImGuiLocKey_WindowingUntitled
ImGuiDebugLogFlags_None
ImGuiDebugLogFlags_EventActiveId
ImGuiDebugLogFlags_EventFocus
ImGuiDebugLogFlags_EventPopup
ImGuiDebugLogFlags_EventNav
ImGuiDebugLogFlags_EventClipper
ImGuiDebugLogFlags_EventIO
ImGuiDebugLogFlags_EventMask_
ImGuiDebugLogFlags_OutputToTTY
ImGuiTabBarFlags_DockNode
ImGuiTabBarFlags_IsFocused
ImGuiTabBarFlags_SaveSettings
ImGuiTabItemFlags_SectionMask_
ImGuiTabItemFlags_NoCloseButton
ImGuiTabItemFlags_Button


-- custom
ImGuiPopupType_Normal
ImGuiPopupType_ContextItem
ImGuiPopupType_ContextVoid
ImGuiPopupType_ContextWindow
```
