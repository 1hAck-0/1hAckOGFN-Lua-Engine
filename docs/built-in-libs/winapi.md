# WinAPI Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Table of Contents
### [Introduction ](#introduction)
### [Setup ](#setup)
### Functions
  - [MessageBox](#messagebox)
  - [GetCursorPos](#getcursorpos)
  - [SetCursorPos](#setcursorpos)
  - [GetWindowPos](#getwindowpos)
  - [VirtualProtect](#virtualprotect)
  - [VirtualQuery](#virtualquery)
  - [GetProcAddress](#getprocaddress)
  - [PlaySound](#playsound)

### [Predefined Constants ](#predefined-constants)

---

## Introduction

The WinAPI Library offers a subset of the functions available in the full [WinAPI](https://learn.microsoft.com/en-us/windows/win32/apiindex/windows-api-list). While it doesn't cover the complete set of WinAPI functionalities, it focuses on providing the most commonly used functions. If you require additional WinAPI functions, you can access them by combining this library's `GetProcAddress()` function with the [FFI Library](../api.md#ffi-foreign-function-interface) to call them directly.

This library also includes a range of [predefined constants](#predefined-constants), offering useful flags and values.

For in-depth information about individual WinAPI functions, consult the official [MSDN Documentation](https://www.google.com/search?q=msdn).

## Setup

To use the WinAPI library, you need to load it at the beginning of your Lua script in the "global code" section. Here's how to do it:

```lua
local winapi = require("winapi", true)
```

Feel free to rename the `winapi` Lua table to any variable name that suits your code.

## Functions

---

### `MessageBox`

```lua
function MessageBox(message: string, title: string = ?, type: number[int] = MB_ICONINFORMATION) -> number[int]
```

#### Official Documentation

https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox

#### Description

Displays a standard Windows message box with an optional title and message type.

#### Parameters

- `message`: The text message to display.
- `title`: The title of the message box (optional, default is derived from script name).
- `type`: The type of message box to display (optional, default is `MB_ICONINFORMATION`).

#### Return Value

Returns the message box response as an integer value.

#### Example

```lua
local response = winapi.MessageBox("This is a message", "Title", MB_OKCANCEL)
println("Button pressed:", response)
```

---

### `GetCursorPos`

```lua
function GetCursorPos() -> vec2
```

#### Official Documentation

https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getcursorpos

#### Description

Retrieves the absolute position of the mouse cursor on the screen.

#### Parameters

None.

#### Return Value

Returns a vec2 containing the x and y coordinates of the cursor.

#### Example

```lua
local position = winapi.GetCursorPos()
println("Cursor pos:", position)
```

---

### `SetCursorPos`

```lua
function SetCursorPos(pos: vec2) -> bool
```

#### Official Documentation

https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setcursorpos

#### Description

Sets the absolute position of the mouse cursor on the screen. Be careful while testing and using this function as it may lock your mouse in a position and make it hard to disable your script to free your mouse.

#### Parameters

- `pos`: The new position for the cursor.

#### Return Value

Returns `true` if successful, otherwise `false`.

#### Example

```lua
winapi.SetCursorPos(vec2(200, 200))
```

---

### `GetWindowPos`

```lua
function GetWindowPos() -> vec2
```

#### Description

Retrieves the position of the game window.

#### Parameters

None.

#### Return Value

Returns a vec2 containing the x and y coordinates of the window's top-left corner.

#### Example

```lua
local position = winapi.GetWindowPos()
println("Window pos:", position)
```

---

### `VirtualProtect`

```lua
function VirtualProtect(ptr: number[ptr], size: number[int], newProtect: number[int]) -> bool, number[int]
```

#### Official Documentation

https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualprotect

#### Description

Changes the protection attributes of a region of virtual memory. An invalid pointer won't cause crashes, the function will just fail.

#### Parameters

- `ptr`: The base address of the region of pages.
- `size`: The size of the region whose access protection attributes are to be changed.
- `newProtect`: The protection attributes to apply to the specified region.

#### Return Value

1. Boolean indicating success or failure.
2. Previous protection attributes.

#### Example

```lua
local success, oldProtect = winapi.VirtualProtect(somePtr, 0x1000, PAGE_READWRITE)
```

---

### `VirtualQuery`

```lua
function VirtualQuery(ptr: number[ptr]) -> bool[, table]
```

#### Official Documentation

https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualquery

#### Description

Retrieves information about a range of pages within the virtual address space of the game process.

#### Parameters

- `ptr`: The base address of the region of pages to be queried.

#### Return Value

1. Boolean indicating success or failure.
2. A table containing detailed information about the virtual memory, if successful.

#### Example

```lua
local success, info = winapi.VirtualQuery(somePtr)
if success then
    printTable(info)
end
```

---

### `GetProcAddress`

```lua
function GetProcAddress(moduleBase: number[ptr], procName: string) -> number[ptr]
```

#### Official Documentation

https://learn.microsoft.com/en-us/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress

#### Description

Retrieves the address of an exported function or variable from the specified module.

#### Parameters

- `moduleBase`: The base address of the module.
- `procName`: The name of the exported function or variable.

#### Return Value

Returns the address of the exported function or variable.

#### Example

```lua
-- Using the memroy library to get the module base
local kernel32 = mem.GetModuleBaseAddress("kernel32.dll")
println(ptrToStr(kernel32))

local virtualAlloc = winapi.GetProcAddress(kernel32, "VirtualAlloc")
println(ptrToStr(virtualAlloc))
```

---

### `PlaySound`

```lua
function PlaySound(file: string|number[ptr], flags: number[int], module: number[ptr] = 0) -> bool
```

#### Official Documentation

https://learn.microsoft.com/en-us/previous-versions/dd743680(v=vs.85)

#### Description

Plays a sound file using the Windows API. This function supports various flags to control playback behavior, and can optionally use a sound resource from a specific module or directly from memory.
**LIMITATION:** Only `.wav` format files are supported!

#### Parameters

- `file`: The path to the sound file or the name of the sound resource or a direct memory pointer (`number[ptr]`) to the file in memory. See official documentation for details and other usage of this parameter.
- `flags`: Flags to control playback behavior. These flags can be a combination of `SND_SYNC`, `SND_ASYNC`, `SND_LOOP`, and others defined by the Windows API for `PlaySound`.
- `module`: Optional. Usually you would not need or use this parameter. See official documentation for details.

#### Return Value

Returns `true` if the sound was successfully played, `false` otherwise.

#### Example

```lua
local success = winapi.PlaySound("my_file.wav", combineFlags(SND_ASYNC, SND_FILENAME))
if success then
  println("Sound is playing.")
else
  println("Failed to play sound.")
end
```

---

## Predefined Constants

The predefined constants in this library are essentially global Lua integers (`number[int]`) that map to specific meanings, loaded along with this library. These constants are not an invention of this library but are instead directly borrowed from the actual WinAPI libraries for C. To understand what each constant represents, you can look at the [MSDN Documentation](https://www.google.com/search?q=msdn).

Here's a list of all available predefined constants:
```lua
-- Message box flags
MB_OK
MB_OKCANCEL
MB_ABORTRETRYIGNORE
MB_YESNOCANCEL
MB_YESNO
MB_RETRYCANCEL
MB_CANCELTRYCONTINUE
MB_ICONHAND
MB_ICONQUESTION
MB_ICONEXCLAMATION
MB_ICONASTERISK
MB_USERICON
MB_ICONWARNING
MB_ICONERROR
MB_ICONINFORMATION
MB_ICONSTOP
MB_DEFBUTTON1
MB_DEFBUTTON2
MB_DEFBUTTON3
MB_DEFBUTTON4
MB_APPLMODAL
MB_SYSTEMMODAL
MB_TASKMODAL
MB_HELP
MB_NOFOCUS
MB_SETFOREGROUND
MB_DEFAULT_DESKTOP_ONLY
MB_TOPMOST
MB_RIGHT
MB_RTLREADING
MB_SERVICE_NOTIFICATION
MB_SERVICE_NOTIFICATION
MB_SERVICE_NOTIFICATION_NT3X
MB_TYPEMASK
MB_ICONMASK
MB_DEFMASK
MB_MODEMASK
MB_MISCMASK

-- Memory management flags
PAGE_NOACCESS
PAGE_READONLY
PAGE_READWRITE
PAGE_WRITECOPY
PAGE_EXECUTE
PAGE_EXECUTE_READ
PAGE_EXECUTE_READWRITE
PAGE_EXECUTE_WRITECOPY
PAGE_GUARD
PAGE_NOCACHE
PAGE_WRITECOMBINE
PAGE_GRAPHICS_NOACCESS
PAGE_GRAPHICS_READONLY
PAGE_GRAPHICS_READWRITE
PAGE_GRAPHICS_EXECUTE
PAGE_GRAPHICS_EXECUTE_READ
PAGE_GRAPHICS_EXECUTE_READWRITE
PAGE_GRAPHICS_COHERENT
PAGE_GRAPHICS_NOCACHE
PAGE_ENCLAVE_THREAD_CONTROL
PAGE_REVERT_TO_FILE_MAP
PAGE_TARGETS_NO_UPDATE
PAGE_TARGETS_INVALID
PAGE_ENCLAVE_UNVALIDATED
PAGE_ENCLAVE_MASK
PAGE_ENCLAVE_DECOMMIT
PAGE_ENCLAVE_SS_FIRST
PAGE_ENCLAVE_SS_REST
MEM_COMMIT
MEM_RESERVE
MEM_REPLACE_PLACEHOLDER
MEM_RESERVE_PLACEHOLDER
MEM_RESET
MEM_TOP_DOWN
MEM_WRITE_WATCH
MEM_PHYSICAL
MEM_ROTATE
MEM_DIFFERENT_IMAGE_BASE_OK
MEM_RESET_UNDO
MEM_LARGE_PAGES
MEM_4MB_PAGES
MEM_64K_PAGES
MEM_UNMAP_WITH_TRANSIENT_BOOST
MEM_COALESCE_PLACEHOLDERS
MEM_PRESERVE_PLACEHOLDER
MEM_DECOMMIT
MEM_RELEASE
MEM_FREE
SND_SYNC
SND_ASYNC
SND_NODEFAULT
SND_MEMORY
SND_LOOP
SND_NOSTOP
SND_NOWAIT
SND_ALIAS
SND_ALIAS_ID
SND_FILENAME
SND_RESOURCE
SND_PURGE
SND_APPLICATION
SND_SENTRY
SND_RING
SND_SYSTEM
```
