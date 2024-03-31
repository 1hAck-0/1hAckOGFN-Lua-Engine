# Memory Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Table of Contents
- [Cautionary Guidelines](#cautionary-guidelines)
- [Setting Up the Memory Library](#setup)
- [Functions](#functions)
    - [Memcpy](#memcpy)
    - [Memset](#memset)
    - [Malloc](#malloc)
    - [Realloc](#realloc)
    - [Free](#free)
    - [Alloc](#alloc)
    - [IsValidPtr](#isvalidptr)
    - [IsValidReadPtr](#isvalidreadptr)
    - [IsValidWritePtr](#isvalidwriteptr)
    - [IsValidExecPtr](#isvalidexecptr)
    - [PatternScan](#patternscan)
    - [PatternScanEx](#patternscanex)
    - [PatternScanModule](#patternscanmodule)
    - [PatternScanAllModules](#patternscanallmodules)
    - [GetExeBaseAddress](#getexebaseaddress)
    - [GetExeName](#getexename)
    - [GetModuleEntry](#getmoduleentry)
    - [GetModuleBaseAddress](#getmodulebaseaddress)
    - [GetSizeOfModule](#getsizeofmodule)
    - [GetModuleName](#getmodulename)
    - [GetSectionHeader](#getsectionheader)
    - [FindPtrReference](#findptrreference)
    - [FindString](#findstring)
    - [FindWString](#findwstring)
    - [FindCodeReference](#findcodereference)
    - [IsWithinModule](#iswithinmodule)
    - [bin2hex](#bin2hex)
    - [hex2bin](#hex2bin)
    - [PatchMemcpy](#patchmemcpy)
    - [PatchMemset](#patchmemset)
    - [GetCurrentTheadId](#getcurrenttheadid)
    - [IsGameThread](#isgamethread)
    - [IsRenderThread](#isrenderthread)
    - [ReadBit](#readbit)
    - [ReadBits](#readbits)
    - [ReadUInt8](#readuint8)
    - [ReadByte](#readbyte)
    - [ReadInt8](#readint8)
    - [ReadChar](#readchar)
    - [ReadUInt16](#readuint16)
    - [ReadWord](#readword)
    - [ReadInt16](#readint16)
    - [ReadUInt32](#readuint32)
    - [ReadDword](#readdword)
    - [ReadInt32](#readint32)
    - [ReadInt](#readint)
    - [ReadInt64](#readint64)
    - [ReadUInt64](#readuint64)
    - [ReadQword](#readqword)
    - [ReadPtr](#readptr)
    - [ReadFloat](#readfloat)
    - [ReadDouble](#readdouble)
    - [ReadBool](#readbool)
    - [ReadStr](#readstr)
    - [ReadWStr](#readwstr)
    - [ReadVec2](#readvec2)
    - [ReadVec3](#readvec3)
    - [ReadVec4](#readvec4)
    - [ReadArrayData](#readarraydata)
    - [WriteBit](#writebit)
    - [WriteBits](#writebits)
    - [WriteUInt8](#writeuint8)
    - [WriteByte](#writebyte)
    - [WriteInt8](#writeint8)
    - [WriteChar](#writechar)
    - [WriteUInt16](#writeuint16)
    - [WriteWord](#writeword)
    - [WriteInt16](#writeint16)
    - [WriteUInt32](#writeuint32)
    - [WriteDword](#writedword)
    - [WriteInt32](#writeint32)
    - [WriteInt](#writeint)
    - [WriteInt64](#writeint64)
    - [WriteUInt64](#writeuint64)
    - [WriteQword](#writeqword)
    - [WritePtr](#writeptr)
    - [WriteFloat](#writefloat)
    - [WriteDouble](#writedouble)
    - [WriteBool](#writebool)
    - [WriteBinary](#writebinary)
    - [WriteStr](#writestr)
    - [WriteWStr](#writewstr)
    - [WriteVec2](#writevec2)
    - [WriteVec3](#writevec3)
    - [WriteVec4](#writevec4)
    - [WriteArrayData](#writearraydata)


---

## Cautionary Guidelines

Manipulating memory is a task that comes with many risks. A slight error could have far-reaching consequences, including but not limited to crashes due to:

- Reading, writing, or executing invalid memory addresses (MOST COMMON)
- Freeing an invalid memory address
- Overloading system RAM through memory leaks and potentially causing even a system crash
- Unintentionally disrupting game mechanics by writing unexpected values to particular memory addresses

Given these pitfalls, a deep understanding of memory management, layout, and storage, particularly in the Windows environment, is very important. Our [WinAPI Library](windows.md) offers further specialized functionality for Windows memory management that can complement this library.

## Setting Up the Memory Library

To initialize the Memory Library in your script, insert the following code snippet into the "global code" section at the top of your file:

```lua
local mem = require("memory", true)
```

Here, `mem` is a Lua table that houses all the functions provided by the built-in "memory" library. Feel free to rename the local variable `mem` to something that suits your coding style better.

## Functions

---

### `Memcpy`

```lua
function Memcpy(dst: number[ptr], src: number[ptr], size: number[int]) -> none
```

#### Description

Copies `size` bytes from the source pointer `src` to the destination pointer `dst`.

#### Parameters

- `dst`: Destination pointer.
- `src`: Source pointer.
- `size`: Number of bytes to copy.

#### Return Value

None.

#### Example

```lua
mem.Memcpy(dstPtr, srcPtr, 1024)
```

---

### `Memset`

```lua
function Memset(dst: number[ptr], val: number[int], size: number[int]) -> none
```

#### Description

Sets `size` bytes starting at pointer `dst` to the value `val`.

#### Parameters

- `dst`: Destination pointer.
- `val`: Value to set.
- `size`: Number of bytes to set.

#### Return Value

None.

#### Example

```lua
mem.Memset(dstPtr, 0, 1024)
```

---

### `Malloc`

```lua
function Malloc(size: number[int]) -> number[ptr]
```

#### Description

Allocates a block of memory with the specified `size` in bytes and returns a pointer to the beginning of the block. Unlike `Alloc`, the allocated memory is not managed by the Lua garbage collector; it is the caller's responsibility to manage and free this memory using `Free`. Failing to do so will result in memory leaks and may lead to system instability or crashes.

#### :warning: CAUTION :warning:

This memory block is solely under your management. You must explicitly free it using `Free` when it is no longer needed to avoid memory leaks and potential system issues.

#### Parameters

- `size`: The number of bytes to allocate.

#### Return Value

A pointer to the allocated block of memory.

#### Example

```lua
local newPtr = mem.Malloc(1024)
println(ptrToStr(newPtr))
```

---

### `Realloc`

```lua
function Realloc(oldBlock: number[ptr], size: number[int]) -> number[ptr]
```

#### Description

Resizes the memory block pointed to by `oldBlock` to `size` bytes.

#### Parameters

- `oldBlock`: Pointer to the memory block to resize, can be 0 if initial allocation.
- `size`: New size for the memory block.

#### Return Value

Pointer to the resized memory block.

#### Example

```lua
local resizedPtr = mem.Realloc(oldPtr, 2048)
```

---

### `Free`

```lua
function Free(block: number[ptr]) -> none
```

#### Description

Frees the memory block pointed to by `block` allocated by `Malloc`.

#### Parameters

- `block`: Pointer to the memory block to free.

#### Return Value

None.

#### Example

```lua
mem.Free(ptr)
```

---

### `Alloc`

```lua
function Alloc(size: number[int]) -> userdata, number[ptr]
```

#### Description

Allocates a block of `size` bytes as userdata within the Lua state and returns both the userdata and a pointer to that block of memory.

#### :warning: IMPORTANT :warning:

The memory block returned as userdata is managed by the Lua garbage collector. **DO NOT attempt to manually free this memory.** Freeing it can result in undefined behavior. Also, once there are no references left to the userdata object, accessing the memory block becomes unsafe. The garbage collector may free the memory at any point, which can lead to crashes if accessed afterwards.

#### Parameters

- `size`: The number of bytes to allocate.

#### Return Value

1. The allocated userdata object, managed by the Lua garbage collector.
2. Pointer to the allocated memory block within the userdata object.

#### Example

```lua
local allocUserdata, allocPtr = mem.Alloc(512)
```

---

### `IsValidPtr`

```lua
function IsValidPtr(ptr: number[ptr], size: number[int] = 1) -> bool
```

#### Description

Checks if a pointer `ptr` is valid for `size` bytes.

#### Parameters

- `ptr`: Pointer to check.
- `size`: Size of the memory to check. If less than 1, defaults to 1.

#### Return Value

Boolean indicating the validity of the pointer.

#### Example

```lua
local isValid = mem.IsValidPtr(checkPtr, 4)
```

---

### `IsValidReadPtr`

```lua
function IsValidReadPtr(ptr: number[ptr], size: number[int] = 1) -> bool
```

#### Description

Checks if a pointer `ptr` is valid for reading `size` bytes.

#### Parameters

- `ptr`: Pointer to check.
- `size`: Size of the memory to check. If less than 1, defaults to 1.

#### Return Value

Boolean indicating the validity for reading.

#### Example

```lua
local canRead = mem.IsValidReadPtr(readPtr, 4)
```

---

### `IsValidWritePtr`

```lua
function IsValidWritePtr(ptr: number[ptr], size: number[int] = 1) -> bool
```

#### Description

Checks if a pointer `ptr` is valid for writing `size` bytes.

#### Parameters

- `ptr`: Pointer to check.
- `size`: Size of the memory to check. If less than 1, defaults to 1.

#### Return Value

Boolean indicating the validity for writing.

#### Example

```lua
local canWrite = mem.IsValidWritePtr(writePtr, 4)
```

---

### `IsValidExecPtr`

```lua
function IsValidExecPtr(ptr: number[ptr], size: number[int] = 1) -> bool
```

#### Description

Checks if the given pointer is a valid executable pointer.

#### Parameters

- `ptr`: The pointer to check.
- `size`: Size of the memory to check. If less than 1, defaults to 1.

#### Return Value

Boolean indicating if the pointer is valid.

#### Example

```lua
local canExec = mem.IsValidExecPtr(0x123456, 4)
```

---

### `PatternScan`

```lua
function PatternScan(
    pattern: string,
    mask: string,
    protection: number[int] = PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE
) -> number[ptr]
```

#### Description

Searches the game module's memory for a pattern.

#### Parameters

- `pattern`: The byte pattern to search for.
- `mask`: The mask for the pattern.
- `protection`: Memory protection flags (optional).

#### Return Value

Address of the first occurrence of the pattern.

#### Example

```lua
local address = mem.PatternScan("\x89\x50\x04", "xxx")
```

---

### `PatternScanEx`

```lua
function PatternScanEx(
    baseAddr: number[ptr],
    scanSize: number[int],
    pattern: string,
    mask: string,
    protection: number[int] = PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE
) -> number[ptr]
```

#### Description

Searches a specific memory region for a pattern.

#### Parameters

- `baseAddr`: The base address to start scanning from.
- `scanSize`: The size of the memory to scan.
- `pattern`: The byte pattern to search for.
- `mask`: The mask for the pattern.
- `protection`: Memory protection flags (optional).

#### Return Value

Address of the first occurrence of the pattern.

#### Example

```lua
local address = mem.PatternScanEx(0x123456, 1000, "\x89\x50\x40", "xxx")
```

---

### `PatternScanModule`

```lua
function PatternScanModule(
    moduleName: string,
    pattern: string,
    mask: string,
    protection: number[int] = PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE
) -> number[ptr]
```

#### Description

Searches a specific module's memory for a pattern.

#### Parameters

- `moduleName`: The name of the module to scan.
- `pattern`: The byte pattern to search for.
- `mask`: The mask for the pattern.
- `protection`: Memory protection flags (optional).

#### Return Value

Address of the first occurrence of the pattern.

#### Example

```lua
local address = mem.PatternScanModule("user32.dll", "\x89\x50\x04", "xxx")
```

---

### `PatternScanAllModules`

```lua
function PatternScanAllModules(
    preferredModuleName: string,
    pattern: string,
    mask: string,
    protection: number[int] = PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE
) -> number[ptr]
```

#### Description

Searches all modules' memory for a pattern, preferring a specified module if available.

#### Parameters

- `preferredModuleName`: Preferred module to scan first, can be an empty string identifying no preference.
- `pattern`: The byte pattern to search for.
- `mask`: The mask for the pattern.
- `protection`: Memory protection flags (optional).

#### Return Value

Address of the first occurrence of the pattern.

#### Example

```lua
local address = mem.PatternScanAllModules("user32.dll", "\x89\x50\x04", "xxx")
```

---

### `GetExeBaseAddress`

```lua
function GetExeBaseAddress() -> number[ptr]
```

#### Description

Retrieves the base address of the executable.

#### Return Value

Base address of the executable.

#### Example

```lua
local baseAddress = mem.GetExeBaseAddress()
```

---

### `GetExeName`

```lua
function GetExeName() -> string
```

#### Description

Retrieves the name of the executable.

#### Return Value

Name of the executable.

#### Example

```lua
local exeName = mem.GetExeName()
```

---

### `GetModuleEntry`

```lua
function GetModuleEntry(moduleName: string) -> number[ptr]
```

#### Description

Gets the address of the entry `LDR_DATA_TABLE_ENTRY` of the specified module.

#### Parameters

- `moduleName`: The name of the module.

#### Return Value

Address of the module's entry.

#### Example

```lua
local entry = mem.GetModuleEntry("user32.dll")
```

---

### `GetModuleBaseAddress`

```lua
function GetModuleBaseAddress(moduleName: string) -> number[ptr]
```

#### Description

Returns the base address of a module in memory.

#### Parameters

- `moduleName`: Name of the module for which to retrieve the base address.

#### Return Value

Base address of the module as a pointer.

#### Example

```lua
local baseAddress = mem.GetModuleBaseAddress("ModuleName")
```

---

### `GetSizeOfModule`

```lua
function GetSizeOfModule(moduleBase: number[ptr]) -> number[int]
```

#### Description

Gets the size of the specified module in memory.

#### Parameters

- `moduleBase`: The base address of the module.

#### Return Value

Size of the module.

#### Example

```lua
local moduleSize = mem.GetSizeOfModule(mem.GetModuleBaseAddress("user32.dll"))
```

---

### `GetModuleName`

```lua
function GetModuleName(moduleBase: number[ptr]) -> string
```

#### Description

Returns the name of a module based on its base address.

#### Parameters

- `moduleBase`: Base address of the module.

#### Return Value

Name of the module.

#### Example

```lua
local moduleName = mem.GetModuleName(baseAddress)
```

---

### `GetSectionHeader`

```lua
function GetSectionHeader(moduleBase: number[ptr], sectionName: string) -> number[ptr]
```

#### Description

Returns the section header address of a given section within a module (`IMAGE_SECTION_HEADER`).

#### Parameters

- `moduleBase`: Base address of the module.
- `sectionName`: Name of the PE section.

#### Return Value

Address of the section header as a pointer.

#### Example

```lua
local sectionHeader = mem.GetSectionHeader(baseAddress, ".text")
```

---

### `FindPtrReference`

```lua
function FindPtrReference(ptr: number[ptr], section: string) -> number[ptr]
```

#### Description

Finds a pointer reference within the game module's specified section.

#### Parameters

- `ptr`: The pointer to search for.
- `section`: The section within which to search.

#### Return Value

Address where the pointer reference is found.

#### Example

```lua
local ref = mem.FindPtrReference(pointer, ".data")
```

---

### `FindString`

```lua
function FindString(str: string) -> number[ptr]
```

#### Description

Finds a string within the game module's `.rdata` section, since all static strings are stored there.

#### Parameters

- `str`: The string to search for.

#### Return Value

Address where the string is found first.

#### Example

```lua
local strAddr = mem.FindString("Some String")
```

---

### `FindWString`

```lua
function FindWString(str: string) -> number[ptr]
```

#### Description

Finds a UTF-16 (2 bytes per character) string in the game module's `.rdata` section, since all static strings are stored there.

#### Parameters

- `str`: The string to search for.

#### Return Value

Address where the wide-string is found first.

#### Example

```lua
local strAddr = mem.FindWString("Some String")
```

---

### `FindCodeReference`

```lua
function FindCodeReference(ptr: number[ptr], pattern: string = nil) -> number[ptr]
```

#### Description

Finds a reference to a specific address inside the game's code (`.text` section).

#### Parameters

- `ptr`: The pointer to search for.
- `pattern`: Optional pattern to match for the bytes in front of the reference. `?` (0x3F) characters will be treated as wildcards.

#### Return Value

Address where the reference is found inside the code.

#### Example

```lua
local codeRef = mem.FindCodeReference(pointer, "\x48\x8D?")
```

---

### `IsWithinModule`

```lua
function IsWithinModule(
    moduleBase: number[ptr],
    addr: number[ptr],
    blockSize: number[int]
) -> bool
```

#### Description

Checks if a specified block of memory falls within a module.

#### Parameters

- `moduleBase`: Base address of the module.
- `addr`: The base address of the block to check.
- `blockSize`: The size of the block.

#### Return Value

Boolean indicating whether the block falls within the specified module.

#### Example

```lua
local within = mem.IsWithinModule(baseAddress, someAddress, 1024)
```

---

### `bin2hex`

```lua
function bin2hex(str: string) -> string
```

#### Description

Converts a binary string to its hexadecimal representation.

#### Parameters

- `str`: Binary string to convert.

#### Return Value

Hexadecimal string representation of the input.

#### Example

```lua
local hexString = mem.bin2hex("abc\x01\x53de")
```

---

### `hex2bin`

```lua
function hex2bin(str: string) -> string
```

#### Description

Converts a hexadecimal string to its binary representation.

#### Parameters

- `str`: Hexadecimal string to convert.

#### Return Value

Binary string representation of the input.

#### Example

```lua
local binString = mem.hex2bin("616263")
```

---

### `PatchMemcpy`

```lua
function PatchMemcpy(
    dst: number[ptr],
    src: number[ptr],
    size: number[int]
) -> bool
```

#### Description

Performs a memory copy operation from a source address to a destination address. Prior to copying, the function attempts to set the destination memory region to read/write/execute access using VirtualProtect. This allows for writing to read-only memory regions.

#### Parameters

- `dst`: Destination pointer.
- `src`: Source pointer.
- `size`: Number of bytes to copy.

#### Return Value

Boolean indicating if the memory was successfully copied.

#### Example

```lua
local success = mem.PatchMemcpy(dstPtr, srcPtr, 256)
```

---

### `PatchMemset`

```lua
function PatchMemset(
    dst: number[ptr],
    val: number[int],
    size: number[int]
) -> bool
```

#### Description

Initializes a block of memory at a specified address to a given value. Similar to `PatchMemcpy`, this function first attempts to change the destination memory region to read/write/execute access using `VirtualProtect`. This capability enables you to memset read-only memory regions.

#### Parameters

- `dst`: Destination pointer.
- `val`: Byte value to set.
- `size`: Number of bytes to set.

#### Return Value

Boolean indicating if the memory was successfully set.

#### Example

```lua
local success = mem.PatchMemset(dstPtr, 0, 256)
```

---

### `GetCurrentThreadId`

```lua
function GetCurrentThreadId() -> number[int]
```

#### Description

Retrieves the current Windows thread ID.

#### Parameters

None.

#### Return Value

Current thread ID as an integer.

#### Example

```lua
local threadId = mem.GetCurrentThreadId()
```

---

### `IsGameThread`

```lua
function IsGameThread() -> bool
```

#### Description

Checks if the current thread is the game thread.

#### Parameters

None.

#### Return Value

Boolean indicating if the current thread is the game thread.

#### Example

```lua
local isGameThread = mem.IsGameThread()
```

---

### `IsRenderThread`

```lua
function IsRenderThread() -> bool
```

#### Description

Checks if the current thread is the render thread.

#### Parameters

None.

#### Return Value

Boolean indicating if the current thread is the render thread.

#### Example

```lua
local isRenderThread = mem.IsRenderThread()
```

---

### `ReadBit`

```lua
function ReadBit(address: number[ptr], bit: number[int]) -> bool
```

#### Description

Reads a specific bit from a memory address. It checks if the bit at the given index within the byte located at the specified address is set or not.

#### Parameters

- `address`: The memory address from which to read the bit.
- `bit`: The index of the bit to read, where 0 refers to the least significant and 8 to the most significant bit.

#### Return Value

Returns `true` if the specified bit is set, otherwise `false`.

#### Example

```lua
println("Is the 4th bit set:",  mem.ReadBit(ptr, 3))
```

---

### `ReadBits`

```lua
function ReadBits(address: number[ptr], mask: number[int]) -> bool
```

#### Description

Reads multiple bits from a memory address using a mask. It performs a bitwise AND operation between the byte located at the specified address and the provided mask and returns whether the result is equal to the mask itself, indicating that all bits are set.

#### Parameters

- `address`: The memory address from which to read the bits.
- `mask`: A bitmask specifying which bits to check. For example, a mask of `0b11` would check the two least significant bits.

#### Return Value

Returns `true` if **all** of the masked bits are set, otherwise `false`.

#### Example

```lua
println("Are both of the first 2 bits set:", mem.ReadBits(ptr, 0b11))
```

---

### `ReadUInt8`

```lua
function ReadUInt8(ptr: number[ptr]) -> number[int]
```

#### Description

Reads an unsigned 8-bit integer from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the unsigned 8-bit integer read from memory.

#### Example

```lua
local value = mem.ReadUInt8(validAddr)
println("Read value:", value)
```

---

### `ReadByte`
Alias for [ReadUInt8](#ReadUInt8)

---

### `ReadInt8`

```lua
function ReadInt8(ptr: number[ptr]) -> number[int]
```

#### Description

Reads a signed 8-bit integer from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the signed 8-bit integer read from memory.

#### Example

```lua
local value = mem.ReadInt8(validAddr)
println("Read value:", value)
```

---

### `ReadChar`
Alias for [ReadInt8](#ReadInt8)

---

### `ReadUInt16`

```lua
function ReadUInt16(ptr: number[ptr]) -> number[int]
```

#### Description

Reads an unsigned 16-bit integer from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the unsigned 16-bit integer read from memory.

#### Example

```lua
local value = mem.ReadUInt16(validAddr)
println("Read value:", value)
```

---

### `ReadWord`
Alias for [ReadUInt16](#ReadUInt16)

---

### `ReadInt16`

```lua
function ReadInt16(ptr: number[ptr]) -> number[int]
```

#### Description

Reads a signed 16-bit integer from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the signed 16-bit integer read from memory.

#### Example

```lua
local value = mem.ReadInt16(validAddr)
println("Read value:", value)
```

---

### `ReadUInt32`

```lua
function ReadUInt32(ptr: number[ptr]) -> number[int]
```

#### Description

Reads an unsigned 32-bit integer from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the unsigned 32-bit integer read from memory.

#### Example

```lua
local value = mem.ReadUInt32(validAddr)
println("Read value:", value)
```

---

### `ReadDword`
Alias for [ReadUInt32](#ReadUInt32)

---

### `ReadInt32`

```lua
function ReadInt32(ptr: number[ptr]) -> number[int]
```

#### Description

Reads a signed 32-bit integer from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the signed 32-bit integer read from memory.

#### Example

```lua
local value = mem.ReadInt32(validAddr)
println("Read value:", value)
```

---

### `ReadInt`
Alias for [ReadInt32](#ReadInt32)

---

### `ReadUInt64`

```lua
function ReadUInt64(ptr: number[ptr]) -> number[int]
```

#### Description

Reads an unsigned 64-bit integer from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the unsigned 64-bit integer read from memory.

#### Example

```lua
local value = mem.ReadUInt64(validAddr)
println("Read value:", value)
```

---

### `ReadInt64`

```lua
function ReadInt64(ptr: number[ptr]) -> number[int]
```

#### Description

Reads a signed 64-bit integer from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the signed 64-bit integer read from memory.

#### Example

```lua
local value = mem.ReadInt64(validAddr)
println("Read value:", value)
```

---

### `ReadQword`
Alias for [ReadUInt64](#ReadUInt64)

---

### `ReadPtr`
Alias for [ReadUInt64](#ReadUInt64)

---

### `ReadFloat`

```lua
function ReadFloat(ptr: number[ptr]) -> number[float]
```

#### Description

Reads a floating-point number from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the floating-point number read from memory.

#### Example

```lua
local value = mem.ReadFloat(validAddr)
println("Read value:", value)
```

---

### `ReadDouble`

```lua
function ReadDouble(ptr: number[ptr]) -> number[float]
```

#### Description

Reads a double-precision floating-point number from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the double-precision floating-point number read from memory.

#### Example

```lua
local value = mem.ReadDouble(validAddr)
println("Read value:", value)
```

---

### `ReadBool`

```lua
function ReadBool(ptr: number[ptr]) -> bool
```

#### Description

Reads a boolean value from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the boolean value read from memory.

#### Example

```lua
local value = mem.ReadBool(validAddr)
println("Read value:", value)
```

---

### `ReadStr`

```lua
function ReadStr(ptr: number[ptr], len: number[int] = ?) -> string
```

#### Description

Reads a UTF-8 (1 byte per character) string from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.
- `len`: Optional. Number of characters to read. If not specified, the function reads until a null-terminator is found.

#### Return Value

Returns the string read from memory.

#### Example

```lua
local str = mem.ReadStr(validAddr)
println("Read string:", str)
```

---

### `ReadWStr`

```lua
function ReadWStr(ptr: number[ptr], len: number[int] = ?) -> string
```

#### Description

Reads a UTF-16 (2 bytes per character) string from the specified memory address and converts it to a UTF-8 string. Characters that can not be translated to UTF-8 are replaced with a single `?` character. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.
- `len`: Optional. Number of characters to read. If not specified, the function reads until a null-terminator is found.

#### Return Value

Returns the converted string read from memory.

#### Example

```lua
local str = mem.ReadWStr(validAddr)
println("Read wide-string:", str)
```

---

### `ReadVec2`

```lua
function ReadVec2(ptr: number[ptr]) -> vec2
```

#### Description

Reads a 2D vector (2 floats in memory) from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the 2D vector read from memory.

#### Example

```lua
local vec = mem.ReadVec2(validAddr)
println("Read vector:", vec)
```

---

### `ReadVec3`

```lua
function ReadVec3(ptr: number[ptr]) -> vec3
```

#### Description

Reads a 3D vector (3 floats in memory) from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the 3D vector read from memory.

#### Example

```lua
local vec = mem.ReadVec3(validAddr)
println("Read vector:", vec)
```

---

### `ReadVec4`

```lua
function ReadVec4(ptr: number[ptr]) -> vec4
```

#### Description

Reads a 4D vector (4 floats in memory) from the specified memory address. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.

#### Return Value

Returns the 4D vector read from memory.

#### Example

```lua
local vec = mem.ReadVec4(validAddr)
println("Read vector:", vec)
```

---

### `ReadArrayData`

```lua
function ReadArrayData(
    ptr: number[ptr],
    elements: number[int],
    elementSize: number[int]
) -> table[list[number[int]]]
```

#### Description

Reads a continuous array from the specified memory address and returns it as a Lua table list. The address is not verified for validtity.

#### Parameters

- `ptr`: Pointer to the memory address to read from.
- `elements`: Number of elements to read, at least 1.
- `elementSize`: Size of each element in bytes. Should be between 1 and 8.

#### Return Value

Returns the Lua table filled with array data.

#### Example

```lua
local arr = mem.ReadArrayData(validAddr, 5, 4)
println("Read array:", table.concat(arr, ", "))
```

---

### `WriteBit`

```lua
function WriteBit(ptr: number[ptr], bit: number[int], value: bool) -> none
```

#### Description

Sets or clears a single bit in the byte at the given memory address.

#### Parameters

- `ptr`: The memory address of the target byte as a pointer.
- `bit`: The zero-based index of the bit to modify.
- `value`: A boolean indicating whether to set (`true`) or clear (`false`) the bit.

#### Return Value

None.

#### Example

```lua
-- Sets the 8th bit of the byte at memory address
mem.WriteBit(ptr, 7, true)
```

---

### `WriteBits`

```lua
function WriteBits(ptr: number[ptr], mask: number[int], value: bool) -> none
```

#### Description

Sets or clears multiple bits in a byte at the given memory address based on a specified mask.

#### Parameters

- `ptr`: The memory address of the target byte as a pointer number.
- `mask`: A bitmask representing the bits to modify. Each bit set to `1` in the mask will be affected.
- `value`: A boolean indicating whether to set (`true`) or clear (`false`) the specified bits.

#### Return Value

None.

#### Example

```lua
-- Sets the lower 4 bits of the byte at memory address
mem.WriteBits(ptr, 0b1111, true)
```

---

### `WriteUInt8`

```lua
function WriteUInt8(ptr: number[ptr], value: number[int]) -> none
```

#### Description

Writes an unsigned 8-bit integer to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The unsigned 8-bit integer value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteUInt8(validAddr, 255)
```

---

### `WriteByte`

Alias for [mem.WriteUInt8](#mem.WriteUInt8)

---

### `WriteInt8`

```lua
function WriteInt8(ptr: number[ptr], value: number[int]) -> none
```

#### Description

Writes a signed 8-bit integer to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The signed 8-bit integer value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteInt8(validAddr, -127)
```

---

### `WriteChar`

Alias for [mem.WriteInt8](#mem.WriteInt8)

---

### `WriteUInt16`

```lua
function WriteUInt16(ptr: number[ptr], value: number[int]) -> none
```

#### Description

Writes an unsigned 16-bit integer to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The unsigned 16-bit integer value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteUInt16(validAddr, 65535)
```

---

### `WriteWord`

Alias for [mem.WriteUInt16](#mem.WriteUInt16)

---

### `WriteInt16`

```lua
function WriteInt16(ptr: number[ptr], value: number[int]) -> none
```

#### Description

Writes a signed 16-bit integer to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The signed 16-bit integer value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteInt16(validAddr, -32767)
```

---

### `WriteUInt32`

```lua
function WriteUInt32(ptr: number[ptr], value: number[int]) -> none
```

#### Description

Writes an unsigned 32-bit integer to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The unsigned 32-bit integer value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteUInt32(validAddr, 4294967295)
```

---

### `WriteDword`

Alias for [mem.WriteUInt32](#mem.WriteUInt32)

---

### `WriteInt32`

```lua
function WriteInt32(ptr: number[ptr], value: number[int]) -> none
```

#### Description

Writes a signed 32-bit integer to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The signed 32-bit integer value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteInt32(validAddr, -2147483647)
```

---

### `WriteInt`

Alias for [mem.WriteInt32](#mem.WriteInt32)

---

### `WriteUInt64`

```lua
function WriteUInt64(ptr: number[ptr], value: number[int]) -> none
```

#### Description

Writes an unsigned 64-bit integer to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The unsigned 64-bit integer value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteUInt64(validAddr, 18446744073709551615)
```

---

### `WriteInt64`

```lua
function WriteInt64(ptr: number[ptr], value: number[int]) -> none
```

#### Description

Writes a signed 64-bit integer to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The signed 64-bit integer value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteInt64(validAddr, -9223372036854775807)
```

---

### `WriteQword`

Alias for [mem.WriteUInt64

](#mem.WriteUInt64)

---

### `WritePtr`

Alias for [mem.WriteInt64](#mem.WriteInt64)

---

### `WriteFloat`

```lua
function WriteFloat(ptr: number[ptr], value: number) -> none
```

#### Description

Writes a single-precision floating-point number to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The single-precision floating-point value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteFloat(validAddr, 3.14159)
```

---

### `WriteDouble`

```lua
function WriteDouble(ptr: number[ptr], value: number) -> none
```

#### Description

Writes a double-precision floating-point number to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The double-precision floating-point value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteDouble(validAddr, 3.141592653589793)
```

---

### `WriteBool`

```lua
function WriteBool(ptr: number[ptr], value: boolean) -> none
```

#### Description

Writes a boolean value to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The boolean value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteBool(validAddr, true)
```

---

### `WriteBinary`

```lua
function WriteBinary(ptr: number[ptr], data: string) -> none
```

#### Description

Writes raw binary data from a string to a specified memory address. Every character in the string represents a byte which will be written. The length of the provided string (excluding null-terminator) will be effectively the total number of bytes written. This is quite useful for copying large resources or even shellcode into memory.

#### Parameters

- `ptr`: The destination memory address where the binary data will be written.
- `data`: The binary data to write, provided as a Lua string. This can include null characters and other non-text bytes.

#### Return Value

None.

#### Example

```lua
-- 5 bytes are copied from the string to ptr in order
mem.WriteBinary(ptr, "\x00\x01\x02\x03\x04")
```

---

### `WriteStr`

```lua
function WriteStr(ptr: number[ptr], value: string, len: number[int] = ?) -> none
```

#### Description

Writes a UTF-8 (1 byte per character) string to the given memory address. The address is not verified for validity. The null-terminator is **always** included at the end, even if `len` is specified and ends before the null-terminator of the `value` itself.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The string value to write.
- `len`: Optional number of characters to write, otherwise the full given string (even if it contains a null-terminator).

#### Return Value

None.

#### Example

```lua
mem.WriteStr(validAddr, "Hello, World!")
```

---

### `WriteWStr`

```lua
function WriteWStr(ptr: number[ptr], value: string, len: number[int] = ?) -> none
```

#### Description

Writes a UTF-16 (2 bytes per character) string to the given memory address. The address is not verified for validity. The null-terminator is **always** included at the end, even if `len` is specified and ends before the null-terminator of the `value` itself.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The string value to write.
- `len`: Optional number of characters to write, otherwise the full given string (even if it contains a null-terminator).

#### Return Value

None.

#### Example

```lua
mem.WriteWStr(validAddr, "Hello, World!")
```

---

### `WriteVec2`

```lua
function WriteVec2(ptr: number[ptr], value: vec2) -> none
```

#### Description

Writes a 2D vector (2 floats in memory) to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The 2D vector value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteVec2(validAddr, vec2(1.0, 2.0))
```

---

### `WriteVec3`

```lua
function WriteVec3(ptr: number[ptr], value: vec3) -> none
```

#### Description

Writes a 3D vector (3 floats in memory) to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The 3D vector value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteVec3(validAddr, vec3(1.0, 2.0, 3.0))
```

---

### `WriteVec4`

```lua
function WriteVec4(ptr: number[ptr], value: vec4) -> none
```

#### Description

Writes a 4D vector (4 floats in memory) to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `value`: The 4D vector value to write.

#### Return Value

None.

#### Example

```lua
mem.WriteVec4(validAddr, vec4(1.0, 2.0, 3.0, 4.0))
```

---

### `WriteArrayData`

```lua
function WriteArrayData(ptr: number[ptr], elementSize: number[int], array: table[list[number[int]]]) -> none
```

#### Description

Writes a continuous array of elements to the given memory address. The address is not verified for validity.

#### Parameters

- `ptr`: Pointer to the memory address to write to.
- `elementSize`: The size of each element in bytes.
- `array`: The table containing elements to write.

#### Return Value

None.

#### Example

```lua
mem.WriteArrayData(validAddr, 4, { 1, 2, 3, 4 })
```

---
