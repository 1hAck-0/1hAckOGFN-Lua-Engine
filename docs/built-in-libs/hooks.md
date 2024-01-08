# Hooks Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Table of Contents

#### [What is Hooking ](#what-is-hooking)
#### [Setup ](#setup)
#### Functions
   - [CreateHook](#createhook)
   - [CreateHookEx](#createhookex)
   - [CreateNativeDispatch](#createnativedispatch)
#### Classes (Metatables)
   - [FuncHookMT](#funchookmt)
     - [Enable](#funchookmtenable)
     - [Disable](#funchookmtdisable)
     - [Toggle](#funchookmttoggle)
     - [Remove](#funchookmtremove)
     - [GetOriginal](#funchookmtgetoriginal)
     - [GetMHStatus](#funchookmtgetmhstatus)
     - [Succeeded](#funchookmtsucceeded)
     - [IsCreated](#funchookmtiscreated)
     - [IsEnabled](#funchookmtisenabled)


---

## [What is Hooking?](https://www.vmray.com/glossary/hooking/#:~:text=Hooking%20is%20a%20computer%20programming,these%20interceptions%20are%20called%20hooks)

In the realm of game hacking, hooking is a sophisticated technique that enables the modification or interception of functions. Our cheat framework extensively employs hooks to provide many of the features you see in the menu. While the concept of "hooking" exists in other programming environments like JavaScript, it is far more complex in the context of game hacking. This complexity makes it challenging to implement hooking directly in Lua, necessitating the provision of this library.

To power this library, we utilize [MinHook](https://github.com/TsudaKageyu/minhook) for its user-friendly approach, compared to our cheat's native hooking system.

### Caution: Advanced Usage

Before delving into the usage of this library, it's crucial to understand that this is a low-level, potentially dangerous library that demands a good grasp of memory and computer architecture. Unlike traditional Lua scripting, the detour hook functions you write in your Lua script will be compiled and not executed directly in the Lua environment. This compilation process poses a higher risk; if there's a runtime error in your detour hooks, the game will crash when your detour executes. This is because the compiled code does not have the typical Lua safety. So, make sure you understand the concepts of memory and hooking techniques before employing this library.

## Setup

To use this library, you'll need to include the following lines at the top of your script, in the "global code" section:

```lua
local ffi = require("ffi")
local hooks = require("hooks", true)
```

### Importing the Library

Here, `hooks` is a Lua table that houses all the functions provided by the built-in "hooks" library. Feel free to rename the local variable `hooks` to something that suits your coding style better.

If you're familiar with Lua, you might be wondering about the second argument `true` in `require("hooks", true)`. This boolean flag instructs our Lua Engine to load the built-in "hooks" library. Omitting this argument would invoke Lua's standard `require` function, which would then search for an external library - not what we want in this case.

### Why Require FFI?

The line `local ffi = require("ffi")` might look a bit unusual. [FFI (Foreign Function Interface)](https://luajit.org/ext_ffi.html) is a standard library in LuaJIT, although it's not available in standard Lua. It serves as a bridge between Lua, a high-level language, and C, a low-level language. This bridge allows you to write C-like code in Lua. The "hooks" library leverages FFI to compile your Lua functions into bytecode, which is a prerequisite for creating hooks with Lua functions serving as the detour function.

## Functions

---

### `CreateHook`

```lua
function CreateHook(
    ffi: table[library],
    targetFunc: number[ptr],
    detourFunc: function,
    protoType: string,
    pushOriginal: bool = false
) -> userdata[FuncHookMT]|nil, userdata[cdata<protoType>]|nil
```

#### Description

Creates a detour/hook for any specified function in the address space of the game.

#### Parameters

- `ffi`: The FFI library table which you should have loaded in the [setup](#setup)

- `targetFunc`: The address of the target function in memory, if invalid, could lead to crashes

- `detourFunc`: Your detour function, basically your replacement function for the target function

- `protoType`: The C function prototype of the target function, this is used by the FFI library to correctly convert your `detourFunc` to machine code. You will have to familiarize yourself with a few C datatypes and the prototype signature for "function pointers". An example of this is in the example down below.

- `pushOriginal`: Set to false by default. Set this to true if your `detourFunc` needs to call the original target function.

#### Return Values

If the function fails to create a hook forwhatever reason, it will return a `nil` value. If the function succeeds, it will create new userdata for to the hook and set the metatable to `FuncHookMT` which is documented further down in this file. You have to keep this returned userdata referenced in your Lua script for as long as you want your hook to be active because it could get garbage collected by Lua.

If `pushOriginal` was set to true, the function also returns the original function in the form of `cdata` created by the FFI library. You can use that to call the original function as you will be able to see in the example. You don't need to keep this value referenced.

#### Example

```lua
local originalFunc = nil

function myDetour(arg1, arg2, arg3)
    -- you can do anything inside here
    -- but it's quite common to call the original function
    -- like this...
    return originalFunc(arg1, arg2, arg3)
end

local targetFunc = 0x7FF... -- any address works as long as valid
local myHook = hooks.CreateHook(
    ffi,
    targetFunc,
    myDetour,
    "int(*)(int, int, int)",
    true
)
assert(myHook, "Failed to initialize myHook")

function onRun()
    -- enable the hook when the script is ran
    if not myHook:Enable() then
        error("Failed to enable my hook")
        return false
    end

    return true
end

function onStop()
    -- disable the hook temporairly
    if not myHook:Disable() then
        return false
    end

    return true
end

function onUnload()
    -- remove the hook completely
    -- not really neccessary as it will get automatically
    -- garbage collected when the script is unloaded but
    -- good practice nevertheless
    myHook:Remove()
end
```

---

### `CreateHookEx`

```lua
function CreateHookEx(
    targetFunc: number[ptr],
    detourFunc: number[ptr],
    protoType: string = none,
    ffi: table[library] = none
) -> userdata[FuncHookMT]|nil, userdata[cdata<protoType>]|nil
```

#### Description

Creates a detour/hook for any specified function in the address space of the game but the the detour is a direct address of the function in memory instead of a Lua function.

#### Parameters

- `targetFunc`: The address of the target function in memory, if invalid, could lead to crashes

- `detourFunc`: The address of the target function in memory, if invalid, could lead to crashes

- `protoType`: The C function prototype of the target function. This parameter is not needed unless you want to get the original function as a Lua callable through FFI.

- `ffi`: The FFI library table. Only necessary if you also passed `protoType`.

#### Return Values

If the function fails to create a hook forwhatever reason, it will return a `nil` value. If the function succeeds, it will create new userdata for to the hook and set the metatable to `FuncHookMT` which is documented further down in this file. You have to keep this returned userdata referenced in your Lua script for as long as you want your hook to be active because it could get garbage collected by Lua.

If `protoType` and `ffi` were passed to `CreateHookEx`, it will also return the original function as Lua callable in the form of `cdata<protoType>` as the second return value.

#### Example

```lua
local myDetour = 0x7FF...
local targetFunc = 0x7FF...
local myHook = hooks.CreateHookEx(
    ffi,
    targetFunc,
    myDetour,
    "int(*)(int, int, int)",
    true
)
assert(myHook, "Failed to initialize myHook")
```

---

### `CreateNativeDispatch`

```lua
function CreateNativeDispatch(funcPtr: number[ptr]) -> number[ptr]|nil
```

#### Description

`CreateNativeDispatch` is not directly related to the rest of the `hooks` library, but it's necessary to support thread-safe native Lua functions, which you may need to VMT hook for example. This function creates dispatch shellcode for a provided Lua function to ensure that the Lua state remains thread-safe allowing you to let this function be called even from multiple threads outside of any Lua context.

#### Parameters

- `funcPtr`: Pointer to the native Lua function for which to create a thread-safe dispatch.

#### Return Value

Returns a pointer to dispatch shellcode for the provided native function, which can be used to thread-safely call this function even outside Lua context. Returns `nil` if the operation fails for some reason.

#### Example
```lua
function SomeFunction() end

local nativeFunc = ffi.cast("void(*)()", SomeFunction)
local funcPtr = tonumber(ffi.cast("uintptr_t", nativeFunc))

funcPtr = hooks.CreateNativeDispatch(funcPtr)
if funcPtr == nil then
    -- Should never normally happen but possible
    println("Failed to create native function dispatch!")
end

println("Safe native function dispatch for SomeFunction:", ptrToStr(funcPtr))

-- Use `funcPtr` only as long as you keep `nativeFunc` referenced!!
-- You can now safely let `SomeFunction()` be called outside of Lua
-- context using this function pointer for example to VMT hook

```

---

## Classes (Metatables)

---

## `FuncHookMT`

#### Description

Assigned to any hook userdata created with `CreateHook`. It provides all the functionallity you would need to control your function hooks.

#### Functions

---

### `FuncHookMT:Enable`

```lua
function FuncHookMT:Enable() -> bool
```

#### Description

Enables a created a hook.

#### Parameters

None.

#### Return Value

Returns true if successfully enabled, otherwise false.

#### Example

```lua
local myHook = hooks.CreateHook(...)

-- ...

if not myHook:Enable() then
    -- failed to enable hook, error handling
end
```

---

### `FuncHookMT:Disable`

```lua
function FuncHookMT:Disable() -> bool
```

#### Description

Disables a created a hook.

#### Parameters

None.

#### Return Value

Returns true if successfully disabled, otherwise false. If the hook was already disabled it will also return true.

#### Example

```lua
local myHook = hooks.CreateHook(...)

-- ...

if not myHook:Disable() then
    -- failed to disable hook, error handling
end
```

---

### `FuncHookMT:Toggle`

```lua
function FuncHookMT:Toggle() -> bool
```

#### Description

Toggles a created a hook. If the hook was enabled before the call, it will try to disable the hook, otherwise it will try to enable the hook.

#### Parameters

None.

#### Return Value

Returns true if the state has been successfully toogled. Otherwise false.

#### Example

```lua
local myHook = hooks.CreateHook(...)

-- ...

if not myHook:Toggle() then
    -- failed to toggle hook, error handling
end
```

---

### `FuncHookMT:Remove`

```lua
function FuncHookMT:Remove() -> bool
```

#### Description

Completely removes a created a hook and frees any resources associated with it such as the original function.

#### Parameters

None.

#### Return Value

Returns true if successfully removed, otherwise false. If the hook was already removed it will also return true.

#### Example

```lua
local myHook = hooks.CreateHook(...)

-- ...

if not myHook:Remove() then
    -- failed to remove hook, error handling
end
```

---

### `FuncHookMT:GetOriginal`

```lua
function FuncHookMT:GetOriginal(asPtr: bool = false) -> nil|number|userdata[cdata<protoType>]
```

#### Description

Retrieves the original function of a hook either as pointer (address) or as a directly callable function from Lua (`cdata<protoType>` FFI userdata).

#### Parameters

- `asPtr`: If this is set to true, the address of the original function will be returned as a number. Otherwise it will return the associated original function callable which is created when the hook is created, so in `CreateHook`, however you must have passed `pushOriginal` as true when you created the hook, otherwise this will always return nil.

#### Return Value

Returns the address of the original function if `asPtr` is true. If it's false it attempts to get the original function callable and returns it. If the original function is invalid for whatever reason, it could also return `nil` indicating failure.

#### Example

```lua
local myHook = hooks.CreateHook(...)

-- ...

-- call the original function
local orgFunc = myHook:GetOriginal(false)
if orgFunc then
    orgFunc(...)
end

-- print the address of the original func
println(myHook:GetOriginal(true))
```

---

### `FuncHookMT:GetMHStatus`

```lua
function FuncHookMT:GetMHStatus() -> number[int]
```

#### Description

Returns the status of the last attempted operation on the hook.

#### Parameters

None.

#### Return Value

The return value is an integer. 0 indcates `MH_OK` meaning success. For more details on error codes look at the official MinHook documentation.

#### Example

```lua
local myHook = hooks.CreateHook(...)

-- ...

if not myHook:Enable() then
    -- failed to enable hook, error handling
    local lastError = myHook:GetMHStatus()
    println("MH error code:", lastError)
end
```

---

### `FuncHookMT:Succeeded`

```lua
function FuncHookMT:Succeeded() -> bool
```

#### Description

Check whether the most recent operation on the hook succeeded.

#### Parameters

None.

#### Return Value

Returns true if the last operation on the hook was successful. Basically if the status returned by `GetMHStatus` is 0 since it stands for `MH_OK`.

#### Example

```lua
local myHook = hooks.CreateHook(...)

-- ...

if not myHook:Succeeded() then
    -- last hook operation failed
end
```

---

### `FuncHookMT:IsCreated`

```lua
function FuncHookMT:IsCreated() -> bool
```

#### Description

Check whether the hook is still created.

#### Parameters

None.

#### Return Value

Returns true if the hook wasn't removed with the `Remove` method.

#### Example

```lua
local myHook = hooks.CreateHook(...)

-- ...

if not myHook:IsCreated() then
    -- the hook was removed/released
end
```

---

### `FuncHookMT:IsEnabled`

```lua
function FuncHookMT:IsEnabled() -> bool
```

#### Description

Check whether the hook is enabled/active.

#### Parameters

None.

#### Return Value

Returns true if the hook is enabled.

#### Example

```lua
local myHook = hooks.CreateHook(...)

-- ...

if myHook:IsEnabled() then
    -- the hook is enabled
end
```

---
