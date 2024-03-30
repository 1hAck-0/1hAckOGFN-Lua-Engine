# Unreal Engine Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.
> Also **[Understanding the Role of API](../api.md#understanding-the-role-of-api)** is very essential for this library.

## Table of Contents

#### [Introduction to Unreal Engine ](#introduction-to-unreal-engine)
#### [Reference Official Documentation ](#reference-official-documentation)
#### [Setting Up the Library ](#setting-up-the-library)
#### Functions
  - [StaticFindObject](#staticfindobject)
  - [StaticLoadObject](#staticloadobject)
  - [GetNameByIndex](#getnamebyindex)
  - [GetNameByIndexF](#getnamebyindexf)
  - [GetObjectName](#getobjectname)
  - [GetObjectNameF](#getobjectnamef)
  - [ProcessEvent](#processevent)
  - [IsObjectOfClass](#isobjectofclass)
  - [GetObject](#getobject)
  - [FindObject](#findobject)
  - [LoadObject](#loadobject)
  - [GetClassOffset](#getclassoffset)
  - [GetObjectByIndex](#getobjectbyindex)
  - [GetObjectsCount](#getobjectscount)
  - [WorldToScreen](#worldtoscreen)
  - [LineTraceSingle](#linetracesingle)
  - [RotationToVector](#rotationtovector)
  - [StringToFName](#stringtofname)
  - [FindObjectsOfClass](#findobjectsofclass)
  - [FreeArray](#freearray)
  - [Free](#free)
  - [FTextToFString](#ftexttofstring)
  - [FTextGet](#ftextget)
  - [FStringGet](#fstringget)
  - [TransformToMatrixWithScale](#transformtomatrixwithscale)
  - [GetGameVersionStr](#getgameversionstr)
  - [GetGameVersion](#getgameversion)
  - [GetEngineVersion](#getengineversion)
  - [GetEngine](#getengine)
  - [GetWorld](#getworld)
  - [GetGameInstance](#getgameinstance)
  - [GetPersistantLevel](#getpersistantlevel)
  - [GetActors](#getactors)
  - [GetActorsByLevel](#getactorsbylevel)
  - [GetLocalPlayer](#getlocalplayer)
  - [GetPlayerController](#getplayercontroller)
  - [GetPlayerCameraManager](#getplayercameramanager)
  - [GetLocalPawn](#getlocalpawn)
  - [GetCameraInfo](#getcamerainfo)
  - [GetViewMatrix](#getviewmatrix)
  - [GetViewTargetRootPos](#getviewtargetrootpos)
  - [GetViewTargetPelvisPos](#getviewtargetpelvispos)
  - [GetViewTargetHeadPos](#getviewtargetheadpos)
  - [GetAllActorsOfClass](#getallactorsofclass)
#### Classes (Metatables)
  - [TArrayMT](#tarraymt)
    - [Free](#tarraymtfree)
    - [ReadData](#tarraymtreaddata)
  - [FStringMT](#fstringmt)
    - [ToStr](#fstringmttostr)
    - [ToStrFree](#fstringmttostrfree)
  - [UObjectMT](#uobjectmt)
    - [As](#uobjectmtas)
    - [ProcessEvent](#uobjectmtpreprocessevent)
    - [IsOfClass](#uobjectmtisofclass)
    - [IsA](#uobjectmtisa)
    - [GetObjectName](#uobjectmtgetobjectname)
    - [GetObjectNameF](#uobjectmtgetobjectnamef)
  - [UClassMT](#uclassmt)
    - [GetField](#uclassmtgetfield)
    - [GetFieldIndex](#uclassmtgetfieldindex)
    - [GetOffset](#uclassmtgetoffset)
    - [GetBoolOffset](#uclassmtgetbooloffset)
    - [GetFunction](#uclassmtgetfunction)
    - [GetFieldName](#uclassmtgetfieldname)
    - [GetFieldFName](#uclassmtgetfieldfname)
    - [GetFieldOffset](#uclassmtgetfieldoffset)
    - [GetNextField](#uclassmtgetnextfield)
  - [UFunctionMT](#ufunctionmt)
    - [GetNumParams](#ufunctionmtgetnumparams)
    - [GetPtr](#ufunctionmtgetptr)


---

## Introduction to Unreal Engine

[Unreal Engine](https://www.unrealengine.com/en-US) is a robust game engine developed by Epic Games. Renowned for its power and popularity, it's the driving force behind games like Fortnite, funding one of the world's largest open-source projects.

To effectively use this Lua library, a basic understanding of Unreal Engine's core concepts is crucial. Terms like `UWorld`, `UObject`, `AActor`, `FName`, `FString`, `UFunction`, `UClass`, and so on, are essential. We won't delve into Unreal Engine's architecture here, as it's beyond the scope of this documentation. However, once you're familiar with these terms, you'll be well-equipped to harness this library to manipulate the game architecture and create a wide array of features and behaviors.

For a deeper understanding, you might also find the [Memory Library](memory.md) documentation helpful. Without it, this library's utility is somewhat limited.

## Reference Official Documentation

We suggest reading Unreal Engine's official documentation for specific functions you plan to use, as many functions in this library are essentially wrappers for Unreal Engine's native functions. While these are already well-documented by Unreal Engine, note that not all functionalities in this library are documented there - some features are unique to this Lua Engine, such as utility or helper functions.

## Setting Up the Library

To make use of this library, you'll need to load it at the beginning of your Lua script as shown below:

```lua
local ue = require("unreal_engine", true)
```

Doing so will load the library's functions into a Lua table named `ue`. Feel free to rename this variable as you want.

## Functions

### `StaticFindObject`

```lua
function StaticFindObject(
    class: number[ptr],
    outer: number[ptr],
    objectName: string,
    exact: bool = false
) -> number[ptr]|nil
```

#### Official Documentation

[StaticFindObject](https://docs.unrealengine.com/4.27/en-US/API/Runtime/CoreUObject/UObject/StaticFindObject/)

#### Description

Tries to find an object in memory.

#### Parameters

- `class`: the address of the class,
- `outer`: the address of the outer class, can be NULL
- `objectName`: the name of the object to be found, e. g. `"Engine.World"`.
- `exact`: read official documentation

#### Return Value

Returns the address of the object, if not found it will be `nil`.

#### Example

```lua
local worldClass = ue.StaticFindObject(NULL, NULL, "Engine.World", false)

println("UWorld class:", ptrToStr(worldClass))
```

---

### `StaticLoadObject`

```lua
function StaticLoadObject(
  class: number[ptr],
  name: string,
  filename: string = nil,
  outer: number[ptr] = 0,
  loadFlags: number[int] = 0,
  sandbox: number[ptr] = 0,
  allowObjectReconciliation: bool = false,
  instancingContext: number[ptr] = 0
) -> number[ptr]|nil
```

#### Official Documentation

[StaticLoadObject](https://docs.unrealengine.com/4.27/en-US/API/Runtime/CoreUObject/UObject/StaticLoadObject/)

#### Description

Loads a static object in the Unreal Engine environment. This function is used to load objects of a specified class, by name.

#### Parameters

- `class`: The class of the object to be loaded.
- `name`: The name of the object.
- `filename`: Optional filename for the object.
- `outer`: Optional outer context for the object.
- `loadFlags`: Optional loading flags.
- `sandbox`: Optional sandbox for the object.
- `allowObjectReconciliation`: Optional flag for object reconciliation.
- `instancingContext`: Optional instancing context.

#### Return Value

Returns the loaded object as pointer if successful, or `nil` if the loading fails.

#### Example

```lua
local myObject = ue.StaticLoadObject(myClass, "/Game/Athena/MyObject")
if myObject then
    -- Object loaded successfully
else
    -- Failed to load the object
end
```

---

### `GetNameByIndex`

```lua
function GetNameByIndex(nameIndex: number) -> string|nil
```

#### Description

Retrieves the name associated with the given index `FName`.

#### Parameters

- `nameIndex`: the index of the name.

#### Return Value

Returns the name as a string if found, otherwise `nil`.

---

### `GetNameByIndexF`

```lua
function GetNameByIndexF(index: number[int]) -> table[FStringMT]|nil
```

#### Description

Basically convets `FName` to `FString`.

⚠️ **Warning** ⚠️

Ensure you use the `Free()` method on the returned table after you don't need it anymore. Otherwise memory leaks will take place.

#### Parameters

- `index`: 64-bit integer reperesenting the index of the name, since `FName` is 64-bits in the versions of Unreal Engine that Fortnite uses

#### Return Value

Returns the a table associated with the `FStringMT` metatable or `nil` if the index is not valid.

#### Remarks

This function could cause crashes for some invalid `index` values passed.

#### Example

```lua
local nameIndex = 1
local nameStr = ue.GetNameByIndexF(nameIndex)
assert(nameStr, "Failed to get name")

println(nameStr:ToStr())
```

---

### `GetObjectName`

```lua
function GetObjectName(object: number[ptr]) -> string
```

#### Description

Gets the name of the `UObject` in memory.

#### Parameters

- `object`: the address of the object.

#### Return Value

Returns the name as a string.

---

### `GetObjectNameF`

```lua
function GetObjectNameF(object: number[ptr]) -> table[FStringMT]|nil
```

#### Description

Gets the name of the `UObject` in memory as `FString`.

⚠️ **Warning** ⚠️

Ensure you use the `Free()` method on the returned table after you don't need it anymore. Otherwise memory leaks will take place.

#### Parameters

- `object`: the address of the object.

#### Return Value

Returns the name as a `FString` table associated with `FStringMT` or `nil` if invalid.

---

### `ProcessEvent`

```lua
function ProcessEvent(
    object: number[ptr],
    targetFunc: number[ptr],
    params: number[ptr] = 0
) -> bool
```

#### Description

Processes an event for a particular object and function.

#### Parameters

- `object`: the address of the object, should be a valid `UObject`.
- `targetFunc`: the address of the function, should be a valid `UFunction`.
- `params`: a pointer to the parameters in memory necessary for the event, can be 0 if the target function doesn't take or return any values.

#### Return Value

Returns `true` if the event was processed, otherwise `false`.

#### Example

```lua
local GameplayStatics = ue.GetObject("Engine.Default__GameplayStatics")
local GS_GetTimeSeconds = ue.GetObject("Engine.GameplayStatics:GetTimeSeconds")

function getTimeSeconds()
    -- Setup the parameters for the function
    local paramsUd, params = mem.Alloc(8 + 4)
    mem.WritePtr(params, ue.GetWorld())

    -- Process the function
    if not GameplayStatics:ProcessEvent(GS_GetTimeSeconds:ptr(), params) then
        return nil
    end

    -- Read and return the return value from GetTimeSeconds 
    return mem.ReadFloat(params + 8)
end
```

---

### `IsObjectOfClass`

```lua
function IsObjectOfClass(
    object: number[ptr],
    class: number[ptr]
) -> bool
```

#### Description

Checks if an object is an instance of a given class.

#### Parameters

- `object`: the address of the object, valid `UObject`.
- `class`: the address of the class, valid `UClass`.

#### Return Value

Returns `true` if the object is of the given class, otherwise `false`.

---

### `GetObject`

```lua
function GetObject(objectName: string) -> userdata[UClassMT]|nil
```

#### Description

Retrieves the object associated with the given name. Simplified version of `StaticFindObject`.

#### Parameters

- `objectName`: the name of the object.

#### Return Value

Returns the object as a userdata object `UClassMT` or `nil` if not found.

---

### `FindObject`

Alias for [GetObject](#GetObject)

---

### `LoadObject`

```lua
function LoadObject(class: number[ptr], name: string) -> number[ptr]|nil
```

#### Description

A simplified wrapper for loading objects in the Unreal Engine environment. It loads objects of a specified class by name, without the additional parameters available in [StaticLoadObject](#StaticLoadObject).

#### Parameters

- `class`: Pointer to the class of the object to be loaded.
- `name`: The name of the object.

#### Return Value

Returns the loaded object's pointer if successful, or `nil` if the loading fails.

#### Example

```lua
local myObject = ue.LoadObject(myClass, "MyObjectName")
if myObject then
    -- Object loaded successfully
else
    -- Failed to load the object
end
```

---

### `GetClassOffset`

```lua
function GetClassOffset(
    className: string,
    memberName: string
) -> number[int]|nil
```

#### Description

Gets the offset of a class member.

#### Parameters

- `className`: the name of the class.
- `memberName`: the name of the class member.

#### Return Value

Returns the memory offset as a number, `nil` if not found.

---

### `GetObjectByIndex`

```lua
function GetObjectByIndex(index: number[int]) -> number[ptr]|nil
```

#### Description

Retrieves the `UObject` in `GObjects` at the given index.

#### Parameters

- `index`: the index of the object.

#### Return Value

Returns the address of the object if there is a valid object at the given index, otherwise `nil`.

---

### `GetObjectsCount`

```lua
function GetObjectsCount() -> number[int]
```

#### Description

Gets the count of `UObject`s in memory (owned by `GObjects`).

#### Parameters

None.

#### Return Value

Returns the number of objects.

---

### `WorldToScreen`

```lua
function WorldToScreen(worldLoc: vec3) -> vec2, bool
```

#### Description

Converts world coordinates to screen coordinates.

#### Parameters

- `worldLoc`: the world coordinates.

#### Return Value

Returns the screen coordinates as a vec2 and a boolean indicating if the coordinates are on the screen.

---

### `LineTraceSingle`

```lua
function LineTraceSingle(
    lineStart: vec3,
    lineEnd: vec3,
    traceChannel: number[int] = 0,
    fetchResult: bool = false,
    actorsToIgnore: table[TArray] = {}
) -> bool, table|nil
```

#### Official Documentation

[LineTraceSingle](https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/Kismet/UKismetSystemLibrary/LineTraceSingle/)

#### Description

Performs a single line trace in the game world.

#### Parameters

- `lineStart`: the starting point of the line trace.
- `lineEnd`: the ending point of the line trace.
- `traceChannel`: the trace channel to use.
- `fetchResult`: whether to fetch the hit result.
- `actorsToIgnore`: table of actors to ignore during the trace, `data` field must be a `number[ptr]` pointing to the beginning of the array containing the pointers of the actors to ignore in memory, `size` field must be the number of actors to ignore.

#### Return Value

Returns a boolean indicating if something was hit and an optional table containing hit details if `fetchResult` was `true`.

---

### `RotationToVector`

```lua
function RotationToVector(rotation: vec3) -> vec3
```

#### Description

Converts a rotation to a directional vector.

#### Parameters

- `rotation`: the rotation to convert.

#### Return Value

Returns the directional vector.

---

### `StringToFName`

```lua
function StringToFName(str: string) -> number[int]|nil
```

#### Description

Converts a string to an FName object.

#### Parameters

- `str` - The string to convert.

#### Return Value

Returns an FName object, nil if not a valid FName.

---

### `FindObjectsOfClass`

```lua
function FindObjectsOfClass(class: number[ptr]) -> table[list[number[ptr]]]
```

#### Description

Finds all loaded objects of a given class in the game.

#### Parameters

- `class` - A pointer to the `UClass` representing the Unreal class type to search for.

#### Return Value

Returns a table containing all found objects of the given type as a list of `number[ptr]`.

---

### `FreeArray`

```lua
function FreeArray(array: table[TArrayMT]) -> none
```

#### Description

Frees the memory occupied by a TArray (table with `data`, `size`, and `capacity` fields associated with `TArrayMT`) and sets the table's fields to `nil`.

#### Parameters

- `array` - The table representing a TArray to be freed.

#### Return Value

None.

---

### `Free`

```lua
function Free(data: number[ptr]) -> none
```

#### Description

Frees the memory using Unreal Engine's `FMemory::Free` function.

#### Parameters

- `data` - A pointer pointing to the memory to be freed.

#### Return Value

None.

---

### `FTextToFString`

```lua
function FTextToFString(text: number[ptr]) -> table[FStringMT]|nil
```

#### Description

Converts an FText object to FString, represented as a table with `data`, `size`, and `capacity` fields (associated with `FStringMT`).

⚠️ **Warning** ⚠️

Ensure you use the `Free()` method on the returned table after you don't need it anymore. Otherwise memory leaks will take place.

#### Parameters

- `text` - A pointer to the FText object to convert.

#### Return Value

Returns a table representing the FString or `nil` if invalid.

---

### `FTextGet`

```lua
function FTextGet(text: number[ptr]) -> string
```

#### Description

Retrieves the string content of an `FText` object.

#### Parameters

- `text` - A pointer to the `FText` object.

#### Return Value

Returns the string content of the FText object.

---

### `FStringGet`

```lua
function FStringGet(stringPtr: number[ptr], free: bool = false) -> string|nil
```

#### Description

Retrieves the string value from an `FString` object, optionally freeing its memory.

#### Parameters

- `stringPtr`: Pointer to the `FString` object.
- `free`: If set to `true`, the `FString` object is freed after retrieval (default is `false`).

#### Return Value

The string value from the `FString` object or `nil` if it is not invalid.

#### Example

```lua
local result = ue.FStringGet(fstrPtr)
if result then
  println("FString value:", result)
else
  println("Invalid FString")
end
```

---

### `TransformToMatrixWithScale`

```lua
function TransformToMatrixWithScale(transf: number[ptr]) -> table[matrix4x4]
```

#### Description

Converts an `FTransform` object to a matrix with scale.

#### Parameters

- `transf` - A pointer to the FTransform object.

#### Return Value

Returns a 4x4 matrix table.

---

### `GetGameVersionStr`

```lua
function GetGameVersionStr() -> string
```

#### Description

Retrieves the full game version as a string.

#### Parameters

None.

#### Return Value

Returns the full game version as a string.

---

### `GetGameVersion`

```lua
function GetGameVersion() -> number[float]
```

#### Description

Retrieves the game version as a float value.

#### Parameters

None.

#### Return Value

Returns the game version as a float.

---

### `GetEngineVersion`

```lua
function GetEngineVersion() -> number[float]
```

#### Description

Retrieves the Unreal Engine version as a float value.

#### Parameters

None.

#### Return Value

Returns the engine version as a float.

---

### `GetEngine`

```lua
function GetEngine() -> number[ptr]|nil
```

#### Description

Retrieves a pointer to the game engine instance (GEngine).

#### Parameters

None.

#### Return Value

Returns a pointer to the game engine instance, or `nil` if not available.

---

### `GetWorld`

```lua
function GetWorld() -> number[ptr]|nil
```

#### Description

Retrieves a pointer to the game world instance (GWorld).

#### Parameters

None.

#### Return Value

Returns a pointer to the game world instance, or `nil` if not available.

---

### `GetGameInstance`

```lua
function GetGameInstance() -> number[ptr]|nil
```

#### Description

Retrieves a pointer to the game instance (GWorld->GameInstance).

#### Parameters

None.

#### Return Value

Returns a pointer to the game instance, or `nil` if not available.

---

### `GetPersistantLevel`

```lua
function GetPersistantLevel() -> number[ptr]|nil
```

#### Description

Retrieves a pointer to the persistent level of the game world.

#### Parameters

None.

#### Return Value

Returns a pointer to the persistent level, or `nil` if not available.

---

### `GetActors`

```lua
function GetActors() -> table[TArrayMT]|nil
```

#### Description

Retrieves a TArray table containing all actors in the **persistent level**.

**DO NOT** free the returned array.

#### Parameters

None.

#### Return Value

Returns a table with `data`, `size`, and `capacity` fields (associated with `TArrayMT`), or `nil` if not available.

---

### `GetActorsByLevel`

```lua
function GetActorsByLevel(level: number[ptr]) -> table[TArrayMT]|nil
```

#### Description

Retrieves a TArray table containing all actors in the specified level (`ULevel`).

**DO NOT** free the returned array.

#### Parameters

- `level`: Pointer to the level to fetch the actors of (`ULevel`).

#### Return Value

Returns a table with `data`, `size`, and `capacity` fields (associated with `TArrayMT`), or `nil` if not available.

---

### `GetLocalPlayer`

```lua
function GetLocalPlayer() -> number[ptr]|nil
```

#### Description

Retrieves a pointer to the local player.

#### Parameters

None.

#### Return Value

Returns a pointer to the local player, or `nil` if not available.

---

### `GetPlayerController`

```lua
function GetPlayerController() -> number[ptr]|nil
```

#### Description

Retrieves a Lua pointer to the player controller.

#### Parameters

None.

#### Return Value

Returns a Lua pointer to the player controller, or `nil` if not available.

---

### `GetPlayerCameraManager`

```lua
function GetPlayerCameraManager() -> number[ptr]|nil
```

#### Description

Retrieves a pointer to the player camera manager of the local player controller.

#### Parameters

None.

#### Return Value

Returns a pointer to the player camera manager, or `nil` if not available.

---

### `GetLocalPawn`

```lua
function GetLocalPawn() -> number[ptr]|nil
```

#### Description

Retrieves a pointer to the local player's pawn (controlled character).

#### Parameters

None.

#### Return Value

Returns a pointer to the local player's pawn, or `nil` if not available. It's available only inside matches when the local player is alive. So you can use it to check if you are in a match right now.

---

### `GetCameraInfo`

```lua
function GetCameraInfo() -> table|nil
```

#### Description

Retrieves information about the camera as a table.

#### Parameters

None.

#### Return Value

Returns a table containing fields `Location` (vec3), `Rotation` (vec3), and `FOV` (number[float]). Could be `nil` if not available.

---

### `GetViewMatrix`

```lua
function GetViewMatrix() -> table[matrix4x4]|nil
```

#### Description

Retrieves the view matrix for rendering.

#### Parameters

None.

#### Return Value

Returns the view matrix as a 4x4 matrix table, could be `nil` if not available.

---

### `GetViewTargetRootPos`

```lua
function GetViewTargetRootPos() -> vec3|nil
```

#### Description

Retrieves the root position of the current view target.

#### Parameters

None.

#### Return Value

Returns the root position as a vec3, could be `nil` if not available..

---

### `GetViewTargetPelvisPos`

```lua
function GetViewTargetPelvisPos() -> vec3|nil
```

#### Description

Retrieves the pelvis position of the current view target.

#### Parameters

None.

#### Return Value

Returns the pelvis position as a vec3, could be `nil` if not available..

---

### `GetViewTargetHeadPos`

```lua
function GetViewTargetHeadPos() -> vec3|nil
```

#### Description

Retrieves the head position of the current view target.

#### Parameters

None.

#### Return Value

Returns the head position as a vec3, could be `nil` if not available..

---

### `GetAllActorsOfClass`

```lua
function GetAllActorsOfClass(actorClass: number[ptr]) -> table[list[number[ptr]]]|nil
```

#### Description

Retrieves all actors of a specified class in the game world.

#### Parameters

- `actorClass`: Pointer to the class of the actors to retrieve.

#### Return Value

Returns a table containing all actors of the specified class. Returns `nil` if the operation fails or if the parameters are invalid.

#### Example

```lua
local actors = ue.GetAllActorsOfClass(MyActorClass)
if actors then
    for _, actor in ipairs(actors) do
        -- Process each actor
    end
else
    println("Failed to retrieve actors")
end
```

---

## Classes (Metatables)

---

### `TArrayMT`

#### Description

The `TArrayMT` metatable provides functionalities for handling arrays in the Unreal Engine context.

Tables generated by this library, which are linked to `TArrayMT`, include the following fields:
- `data`: A pointer directing to the memory location where the array elements reside.
- `size`: Indicates the length of the array, specifying the number of elements it contains.
- `capacity`: Specifies the pre-allocated space for the array, indicating the number of elements it can hold without requiring reallocation.

#### Functions

---

### `TArrayMT:Free`

Shortcut for [FreeArray](#freearray)

---

### `TArrayMT:ReadData`

```lua
function TArrayMT:ReadData(elementSize: number[int]) -> table[list[number[int]]]|nil
```

#### Description

Reads all the elements in the array and returns them as a Lua table.

#### Parameters

- `elementSize`: Specifies the size (in bytes) of each element in the array.

#### Return Value

Returns a table as a list of integers representing each element if the array is valid; returns `nil` otherwise.

#### Example

```lua
local arrayContent = myArray:ReadData(8)
if arrayContent then
  -- Do something with the array content
else
  println("The array is not valid.")
end
```

---

### `FStringMT`

#### Description

The `FStringMT` metatable extends `TArrayMT` and offers additional functionalities for handling Unreal Engine strings.

#### Functions

---

### `FStringMT:ToStr`

```lua
function FStringMT:ToStr() -> string
```

##### Description

Converts the `FString` object to a Lua string.

##### Parameters

None.

##### Return Value

Returns the converted string.

##### Example

```lua
local luaString = myFString:ToStr()
```

---

### `FStringMT:ToStrFree`

```lua
function FStringMT:ToStrFree() -> string
```

##### Description

Converts the `FString` object to a Lua string and frees the original `FString` object just like [Free()](#tarraymtfree).

##### Parameters

None.

##### Return Value

Returns the converted string.

##### Example

```lua
local luaString = myFString:ToStrFree()
```

---

### `UObjectMT`

#### Description

The `UObjectMT` metatable extends `UserdataMT` and provides functionalities for handling Unreal Engine objects.

#### Functions

---

### `UObjectMT:As`

```lua
function UObjectMT:As(metatableName: string) -> userdata[metatableName]|nil
```

##### Description

Attempts to cast the UObject to the specified class.

##### Parameters

- `metatableName`: The name of the metatable to which the original UObject userdata should be cast.

##### Return Value

Returns the cast object if successful, otherwise returns `nil`.

##### Example

```lua
local objectAsFunc = myObject:As("UFunctionMT")
```

---

### `UObjectMT:ProcessEvent`

```lua
function UObjectMT:ProcessEvent(
    func: number[ptr],
    params: number[ptr] = 0
) -> bool
```

##### Description

Attempts to process an event (UFunction).

##### Parameters

- `func`: Pointer to the `UFunction` object in memory.
- `params`: Pointer to the parameters in memory, 0 if not specified.

##### Return Value

Returns whether the event has been processed.

##### Example

```lua
local processed = myObject:ProcessEvent(funcPtr, paramsPtr)
```

---

### `UObjectMT:IsOfClass`

```lua
function UObjectMT:IsOfClass(class: number[ptr]) -> bool
```

##### Description

Returns whether an object is of a class (UClass).

##### Parameters

- `class`: Pointer to the class object to check.

##### Return Value

Returns true if the object is an instance of that class, otherwise false.

##### Example

```lua
local isPlayer = myActor:IsOfClass(fortPlayerPawnClass)
```

---

### `UObjectMT:IsA`

Alias for [IsOfClass](#uobjectmtisofclass)

---

### `UObjectMT:GetObjectName`

```lua
function UObjectMT:GetObjectName() -> string
```

##### Description

Get the object name as a string.

##### Parameters

None.

##### Return Value

Returns the object name as a Lua string.

##### Example

```lua
local name = myObject:GetObjectName()
print(name)
```

---

### `UObjectMT:GetObjectNameF`

```lua
function UObjectMT:GetObjectNameF() -> table[FStringMT]|nil
```

##### Description

Get the object name as a FString.

⚠️ **Warning** ⚠️

Ensure you use the `Free()` method on the returned table after you don't need it anymore. Otherwise memory leaks will take place.

##### Parameters

None.

##### Return Value

Returns a table of `FStringMT` or `nil` if invalid.

##### Example

```lua
local name = myObject:GetObjectNameF()
print(name:ToStrFree())
```

---

### `UClassMT`

#### Description

The `UClassMT` metatable extends `UObjectMT` and offers additional functionalities for handling Unreal Engine class objects.

#### Functions

---

### `UClassMT:GetField`

```lua
function UClassMT:GetField(field: string|number[int]) -> userdata[UClassMT]|nil
```

##### Description

Retrieves a field as a `UClassMT` object from a UClass object.

##### Parameters

- `field`: the name of the field in the class or the index of the field.

##### Return Value

Returns the field as a `UClassMT` userdata object if found, otherwise `nil`.

##### Example

```lua
local field = myClass:GetField("FieldName")
println(field:GetFieldName():ToStr())
```

---

### `UClassMT:GetFieldIndex`

```lua
function UClassMT:GetFieldIndex(fieldName: string) -> number[int]
```

##### Description

Retrieves the index of a field within the UClass object.

##### Parameters

- `fieldName`: name of the field.

##### Return Value

Returns the index as an integer, -1 if not found.

##### Example

```lua
local fieldIndex = myClass:GetFieldIndex("FieldName")
```

---

### `UClassMT:GetOffset`

```lua
function UClassMT:GetOffset(fieldName: string) -> number[int]
```

##### Description

Retrieves the offset of a field.

##### Parameters

- `fieldName`: Name of the field to get.

##### Return Value

Returns the memory offset of a field in a class as an integer.

##### Example

```lua
local fieldOffset = myClass:GetOffset("FieldName")
```

---

### `UClassMT:GetBoolOffset`

```lua
function UClassMT:GetBoolOffset(fieldName: string) -> number[int], number[int]|none
```

##### Description

Retrieves the offset of a field and it's bit index if the field is a bit.

##### Parameters

- `fieldName`: Name of the field to get.

##### Return Value

Returns the memory offset of a field in a class as an integer and the index of the bit as the second argument if it field is a bit.

##### Example

```lua
local fieldOffset, fieldBit = myClass:GetBoolOffset("FieldName")
```

---

### `UClassMT:GetFunction`

```lua
function UClassMT:GetFunction(funcName: string) -> userdata[UFunctionMT]|nil
```

##### Description

Retrieves a function (method) of a UClass object.

##### Parameters

- `funcName`: Name of the function in the class.

##### Return Value

Returns the function as a `UFunctionMT` userdata object.

##### Example

```lua
local func = myClass:GetFunction("FuncName")
```

---

### `UClassMT:GetFieldName`

```lua
function UClassMT:GetFieldName() -> table[FStringMT]|nil
```

##### Description

Retrieves the field name of a UClass object as `FString`.

⚠️ **Warning** ⚠️

Ensure you use the `Free()` method on the returned table after you don't need it anymore. Otherwise memory leaks will take place.

##### Parameters

None.

##### Return Value

Returns the field name as a `FStringMT` table or `nil` if invalid.

##### Example

```lua
local fieldName = myField:GetFieldName()
```

---

### `UClassMT:GetFieldFName`

```lua
function UClassMT:GetFieldFName() -> FName
```

##### Description

Retrieves the field FName of a UClass object.

##### Parameters

None.

##### Return Value

Returns the field's FName index as a number.

##### Example

```lua
local fieldNameIndex = myField:GetFieldFName()
```

---

### `UClassMT:GetFieldOffset`

```lua
function UClassMT:GetFieldOffset() -> number[int]
```

##### Description

Retrieves the field memory offset.

##### Parameters

None.

##### Return Value

Returns the field's memory offset an integer.

##### Example

```lua
local fieldOffset = myField:GetFieldOffset()
```

---

### `UClassMT:GetNextField`

```lua
function UClassMT:GetNextField() -> userdata[UClassMT]|nil
```

##### Description

Retrieves the next field in the sequence as a `UClassMT` object.

##### Parameters

None.

##### Return Value

Returns the next field as a `UClassMT` userdata object or `nil` if there is no next.

##### Example

```lua
local nextField = myField:GetNextField()
```

---

### `UFunctionMT`

#### Description

The `UFunctionMT` metatable extends `UClassMT` and provides functionalities specifically for Unreal Engine function objects.

#### Functions

---

### `UFunctionMT:GetNumParams`

```lua
function UFunctionMT:GetNumParams() -> number[int]
```

##### Description

Retrieves the number of parameters that the UFunction object expects.

##### Parameters

None.

##### Return Value

Returns the number of parameters as an integer, if the function is not a `void` function, the return value is counted as a parameter.

##### Example

```lua
local numParams = myFunction:GetNumParams()
```

---

### `UFunctionMT:GetPtr`

```lua
function UFunctionMT:GetPtr() -> number[ptr]
```

##### Description

Retrieves the memory address of the native function.

##### Parameters

None.

##### Return Value

Returns the memory address as a pointer.

##### Example

```lua
local ptr = myFunction:GetPtr()
```

---
