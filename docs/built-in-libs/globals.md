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
   - [unloadScript](#unloadScript)
   - [error](#error)
   - [warn](#warn)
   - [success](#success)
   - [isConsoleOpen](#isconsoleopen)
   - [openConsole](#openconsole)
   - [closeConsole](#closeconsole)
   - [getConsoleLog](#getconsolelog)
   - [clearConsole](#clearconsole)
   - [getScriptPath](#getscriptpath)
   - [getScriptFilename](#getscriptfilename)
   - [getRequirementsPath](#getrequirementspath)
   - [getDefaultScriptsPath](#getdefaultscriptspath)
   - [getLuaLibsPath](#getlualibspath)
   - [loadFileResource](#loadfileresource)

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
print("Pov number:", 595, "\n")
print("New line. ")
print("This will be on same line lol\n")
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

### `allocStack`

```lua
function allocStack(size: number[int]) -> bool
```

#### Description

Attempts to allocate additional space for the Lua state stack. This function is useful when you anticipate needing more stack space for operations that push a large number of values onto the stack. It is just a wrapper for the `lua_checkstack` function exposed by the Lua C API, read more [here](https://pgl.yoyo.org/luai/i/lua_checkstack).

#### Parameters

- `size`: The number of additional stack slots requested.

#### Return Value

Returns `true` if the allocation was successful, `false` otherwise.

#### Example

```lua
if allocStack(10) then
    println("Stack allocation successful.")
else
    println("Failed to allocate to desired stack space.")
end
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
- `maxLevel`: The maximum depth level to copy. Defaults to 9. Anything beyond this level is not copied to the new table!

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

Tries to start the current script if it isn't already running. If the setting Reload on Run is turned on, the script is loaded again from the file before it starts running. The `onRun` event is always called right before the script gets going. It's important to know that the script will only start running **at the end of the event** that requested it. Therefore, if an error occurs before the currently running event returns, the script will be canceled to run.

#### Return Value

Returns `true` if the script wasn't already active and is now set to run, `false` otherwise.

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

Tries to stop the current script if it is running. The `onStop` even will always get called right before the script fully stops. It's important to know that the script will only stop running **at the end of the event** that requested it. If an error occurs during the currently running event before returning, the script will be stopped anyway.

#### Return Value

Returns `true` if the script was active and is now set to stop, `false` otherwise.

#### Example

```lua
local wasRunning = stopScript()
```

---

### `unloadScript`

```lua
function unloadScript() -> none
```

#### Description

Unloads the script completely from the Lua Engine and frees all resources associated. `onStop` and `onUnload` are still called in order.
**CAUTION:** the script is actually first unloaded in the **next render tick** of the engine, however none of the script tick-based-events (like `onRenderTick`) will be called anymore. 

#### Return Value

None.

#### Example

```lua
unloadScript()
```

---

### `error`
### `warn`
### `success`

```lua
function error(message: string, openConsole: bool = false, traceCallstack: bool = false, code: number[int] = 0) -> none
```

#### Description

Logs an error message to the script console's error output area. The `error` function not only displays the message but also throws a Lua error if `traceCallstack` is true, interrupting script execution if `traceCallstack` is `true`. The `warn` and `success` functions behave similarly in logging messages, but do not stop script execution; they just log a warning or success message respectively.

#### Parameters

- `message`: The error message to be logged.
- `openConsole`: If `true`, opens the console automatically (if not already open) when the error is logged.
- `traceCallstack`: Adds the Lua callstack to the error message if `true`. For the `error` function, if `true`, a regular runtime Lua error is thrown and the script is stopped.
- `code`: An optional error code to associate with the message.

#### Return Value

None.

#### Example

```lua
-- This will log the error, open the console, throw a Lua error, and stop the script with the specified message and code.
error("An error occurred", true, true, 42)

-- The usage for `warn` and `success` is completely the same in terms of parameters:
warn("This is a warning", true)
success("Successfully bypassed Presidio", true)
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

### `getScriptPath`

```lua
function getScriptPath() -> string
```

#### Description

Retrieves the file path of the currently running script.

#### Parameters

None.

#### Return Value

Returns a `string` representing the file path of the script.

#### Example

```lua
local scriptPath = getScriptPath()
println("Current script path:", scriptPath)
```

---

### `getScriptFilename`

```lua
function getScriptFilename() -> string
```

#### Description

Retrieves the filename of the currently executing script in the Lua environment.

#### Parameters

None.

#### Return Value

Returns a `string` representing the filename of the current script.

#### Example
```lua
println("Current script filename: "..getScriptFilename())
```

---

### `getRequirementsPath`

```lua
function getRequirementsPath() -> string|nil
```

#### Description

Obtains the path to the "Requirements" directory relative to the current script, if available. This is useful for scripts that need to access their requirement files directly. Only works for installed from the Script Browser scripts.

#### Parameters

None.

#### Return Value

Returns a `string` representing the path to the "Requirements" directory. Returns `nil` if the script is not an installed script.

#### Example
```lua
local requirementsPath = getRequirementsPath()
if requirementsPath then
    println("Requirements Path:"..requirementsPath)
else
    println("Requirements Path not available (=> not an installed script).")
end
```

---

### `getDefaultScriptsPath`

```lua
function getDefaultScriptsPath() -> string
```

#### Description

Fetches the default directory path where scripts are stored.

#### Parameters

None.

#### Return Value

Returns a `string` representing the default scripts directory path.

#### Example

```lua
println("Default Scripts Path:"..getDefaultScriptsPath())
```

---

### `getLuaLibsPath`

```lua
function getLuaLibsPath() -> string
```

#### Description

Retrieves the directory path of Lua libraries associated with the script manager.

#### Parameters

None.

#### Return Value

Returns a `string` representing the Lua libraries directory path.

#### Example

```lua
println("Lua Libraries Path:"..getLuaLibsPath())
```

---

### `loadFileResource`

```lua
function loadFileResource(fileName: string, absolutePath: bool = false) -> string|false|nil
```

#### Description

Attempts to load the full content of a specified binary file into a `string`. The function first searches for the file within the script's associated requirements directory (`getRequirementsPath`) before checking the script's own directory (`getScriptPath`) if not found, unless `absolutePath` is `true`, in which case the function just attempts to open the full path provided in `fileName`.

#### Parameters

- `fileName`: The name of the file to load.
- `absolutePath`: Whether the `fileName` contains an absolute (full) path.

#### Return Value

- Returns the file content as a `string` if the file is successfully loaded, which can be empty if the file itself is empty.
- Returns `false` if the file is not found or cannot be opened, typically indicating that the file does not exist.
- Returns `nil` if an error occurs while reading the file's content, which is a quite unlikely scenario meant to catch unexpected read errors.

#### Example

```lua
local imageData = loadFileResource("my_image.png")
if imageData then
    -- File was successfully loaded and content is now in 'imageData'
elseif imageData == false then
    -- File does not exist or could not be opened
else
    -- An unexpected error occurred while reading the file
end

-- ... or using an absolute path, notice we provide a full path in the first argument!
local imageData = loadFileResource("C:\\my_image.png", true)
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

Retrieves the memory address of light userdata object. Just a shortcut for [ud2ptr](#ud2ptr).

#### Parameters

None.

#### Return Value

The memory address as a number pointer.

#### Example

```lua
local myUserdata = unreal_engine.GetObject(...)
println(myUserdata:ptr())
println(ud2ptr(myUserdata)) -- same result as the above
```

---

## Predefined Constants

Global constants are numerical values that are intended to remain unchanged during script execution. Although Lua does not support true constants, these values are meant to be treated as such.

### NULL

The `NULL` constant is defined as `0`. Originating from C/C++, this constant is provided for compatibility and is intended for use in similar contexts within Lua scripts.

---
