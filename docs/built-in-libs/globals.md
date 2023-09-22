# Globals Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Table of Contents

#### [Setup ](#setup)

#### Functions
   - [print](#print)
   - [println](#println)
   - [printTable](#printtable)
   - [ptrToStr](#ptrtostr)
   - [tableToStr](#tabletostr)
   - [copyTable](#copytable)
   - [combineFlags](#combineflags)
   - [getUpTime](#getuptime)
   - [ud2ptr](#ud2ptr)
   - [isScriptRunning](#isscriptrunning)
   - [runScript](#runscript)
   - [stopScript](#stopscript)
   - [isConsoleOpen](#isconsoleopen)
   - [openConsole](#openconsole)
   - [closeConsole](#closeconsole)
   - [getConsoleLog](#getconsolelog)
   - [clearConsole](#clearconsole)

#### Classes (Metatables)
   - [UserdataMT](#userdatamt)
      - [ptr](#userdatamtptr)

#### Predefined Constants
   - [NULL](#null)


---

## Setup

No additional setup is required to use this library, as it's automatically loaded into every Lua script environment. The library contains commonly used functions that are available globally - hence its name ""

## Functions

---

### `print`

```lua
function print(...) -> none
```

#### Description

Outputs one or more values to the Script Console.

#### Parameters

All parameters are automatically converted to strings using Lua's `tostring` function. The parameters are then printed in order, separated by a space.

#### Return Value

None.

#### Example

```lua
print("Pov number:", 595, "\n", "New line")
```

---

### `println`

```lua
function println(...) -> none
```

#### Description

Similar to `print`, but automatically appends a newline character (`\n`) at the end.

#### Parameters

Same as `print`.

#### Return Value

None.

#### Example

```lua
println("First line")
println("Second line")
```

---

### `printTable`

```lua
function printTable(var: table) -> none
```

#### Description

Outputs a well-formatted string representing all the values within a given Lua table.

#### Parameters

- `var`: The table to be printed.

#### Return Value

None.

#### Example

```lua
local myTable = {
    ["Value1"] = 123,
    ["String"] = "For real.",
    ["Sub table"] = {
        495, 650.53, 130.4
    }
}
printTable(myTable)
```

---

### `ptrToStr`

```lua
function ptrToStr(ptr: number) -> string
```

#### Description

Converts a pointer value to a formatted string. Useful for debugging.

#### Parameters

- `ptr`: The pointer to be converted to a string.

#### Return Value

A formatted string.

#### Example

```lua
local myPtr = 0x7FDEADBEEF
println(ptrToStr(myPtr))
```

---

### `tableToStr`

```lua
function tableToStr(var: table) -> string
```

#### Description

Converts a Lua table to a well-formatted string.

#### Parameters

- `var`: The table to be converted.

#### Return Value

A formatted string.

#### Example

```lua
local myTable = {
    ["Value1"] = 123,
    ["String"] = "For real.",
    ["Sub table"] = {
        495, 650.53, 130.4
    }
}
local myTableFormatted = tableToStr(myTable)
println(myTableFormatted)
```

---

### `copyTable`

```lua
function copyTable(table: table, maxLevel: number = 9) -> table|nil
```

#### Description

Creates a deep copy of the provided table up to a specified depth level.

#### Parameters

- `table`: The source table to be copied.
- `maxLevel`: The maximum depth level to copy. Defaults to 9.

#### Return Value

A deep copy of the provided table or `nil` if the copy operation fails.

#### Example

```lua
local original = { a = 1, b = { c = 2 } }
local copied = copyTable(original)
```

---

### `combineFlags`

```lua
function combineFlags(...) -> number[int]
```

#### Description

Combines multiple flag (integer) values using bitwise OR operation.

#### Parameters

- `...`: List of integer flag values (`number[int]`).

#### Return Value

A single integer value representing the combination of all provided flags.

#### Example

```lua
local myWindowFlags = combineFlags(ImGuiWindowFlags_NoCollpase, ImGuiWindowFlags_NoResize) -- imgui library must be loaded for this
```

---

### `getUpTime`

```lua
function getUpTime() -> number[float]
```

#### Description

Retrieves the cheat's uptime in seconds.

#### Parameters

None.

#### Return Value

Uptime in seconds as a floating-point number.

#### Example

```lua
local timeStart = getUpTime()
-- task to benchmark
local timeEnd = getUpTime()
println("This task took", timeEnd - timeStart)
```

---

### `ud2ptr`

```lua
function ud2ptr(object: userdata) -> number[ptr]
```

#### Description

Converts a userdata object to its memory address.

#### Parameters

- `object`: The userdata object to be converted.

#### Return Value

The memory address as a number pointer.

#### Example

```lua
local myUserdata = ...
local udPtr = ud2ptr(myUserdata)
println("Userdata address:", ptrToStr(udPtr))
```

---

### `isScriptRunning`

```lua
function isScriptRunning() -> bool
```

#### Description

Indicates whether the current script is active.

#### Parameters

None.

#### Return Value

Returns `true` if the script is running, otherwise `false`.

#### Example

```lua
function onSettings()
    println("Is the script running?", isScriptRunning())
    return true
end
```

---

### `runScript`

```lua
function runScript() -> bool
```

#### Description

Attempts to run the current script if it's not currently active.

#### Return Value

`true` if the script wasn't already active and is now set to run, `false` otherwise.

#### Example

```lua
local wasStopped = runScript()
```

---

### `stopScript`

```lua
function stopScript() -> bool
```

#### Description

Attempts to stop the current script if it's currently active.

#### Return Value

`true` if the script was active and is now set to stop, `false` otherwise.

#### Example

```lua
local wasRunning = stopScript()
```

---

### `isConsoleOpen`

```lua
function isConsoleOpen() -> bool
```

#### Description

Checks if the current script's console is currently open.

#### Return Value

`true` if the console is open, `false` otherwise.

#### Example

```lua
local isOpen = isConsoleOpen()
```

---

### `openConsole`

```lua
function openConsole() -> bool
```

#### Description

Opens the current script's console.

#### Return Value

`true` if the console was not already open, `false` otherwise.

#### Example

```lua
local wasClosed = openConsole()
```

---

### `closeConsole`

```lua
function closeConsole() -> bool
```

#### Description

Closes the current script's console.

#### Return Value

`true` if the console was previously open, `false` otherwise.

#### Example

```lua
local wasOpen = closeConsole()
```

---

### `getConsoleLog`

```lua
function getConsoleLog() -> string
```

#### Description

Retrieves the output/log from the current script's console.

#### Return Value

The console ouput/log as a string.

#### Example

```lua
local myLog = getConsoleLog()
```

---

### `clearConsole`

```lua
function clearConsole() -> none
```

#### Description

Clears the current script's console output/log.

#### Parameters

None.

#### Return Value

None.

#### Example

```lua
println("This message will be cleared instantly.")
clearConsole()
```

---

## Classes (Metatables)

---

## `UserdataMT`

#### Description

Internally used to provide additional functionalities for userdata objects.

#### Functions

---

### `UserdataMT:ptr`

```lua
function UserdataMT:ptr() -> number[ptr]
```

#### Description

Retrieves the memory address of a userdata object.

#### Parameters

None.

#### Return Value

The memory address as a number pointer.

#### Example

```lua
local myUserdata = unreal_engine.GetObject(...)
println(myUserdata:ptr())
```

---

## Predefined Constants

Global constants are numerical values that are intended to remain unchanged during script execution. Although Lua does not support true constants, these values are meant to be treated as such.

### NULL

The `NULL` constant is defined as `0`. Originating from C/C++, this constant is provided for compatibility and is intended for use in similar contexts within Lua scripts.

---
