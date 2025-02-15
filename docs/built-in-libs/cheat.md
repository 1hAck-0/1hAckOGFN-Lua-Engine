# Memory Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

### [Introduction ](#introduction)
### [Setup ](#setup)
## Table of Contents
- [Functions](#functions)
    - [GetAimbotTarget](#getaimbottarget)

## Introduction

The Cheat library offers access to key functionalities of the **built-in cheat system and features**, enabling scripts to interact with and control core features efficiently. Future updates may introduce additional support for event handlers and callbacks related to both the game and the cheat itself.

For interaction with the **menu settings** specifically, use the [config library](config.md) with functions like `GetCheatConfig()` instead.

## Setup

Before utilizing this library, you'll need to include it in your Lua script. Add the following line to your "global code" space at the top of your script:

```lua
local cheat = require("cheat", true)
```

Feel free to rename the variable `cheat` to something else if you prefer.

## Functions

---

### `GetAimbotTarget`

```lua
function GetAimbotTarget(currentTarget: bool = true) -> number[ptr]|nil
```

#### Description

Retrives the *current* or a *potential* aimbot target depending on the `currentTarget` parameter. Regardless of the parameters, the target is guaranteed to fit the requirments of the aimbot settings in the menu.

#### Parameters

- `currentTarget`: If `true`, the function will return the aimbot target that the cheat is currently targeting. In this case a return value of `nil` indicates the user is not targeting anyone currently. If `false` the function will return the aimbot target which best fits the requirements of the aimbot settings in the menu; these are defined by the user. In this case every call of the function rescans all players, so there is no caching of the target; a return value of `nil` means that there is absolutely no potential aimbot target, e.g. because all players are outside of the `FOV` circle setup by the user.

#### Return Value

Returns an aimbot player-target `AFortPlayerPawn*` as a pointer (`number[ptr]`) if available, otherwise `nil`.

#### Example

```lua
local potentialTarget = cheat.GetAimbotTarget(false)
println(ptrToStr(potentialTarget))
```

---
