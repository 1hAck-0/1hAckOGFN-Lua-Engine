# Fortnite Library Documentation

> **Note**: Before diving into the documentation, it is strongly advised to first read the [API Introduction](api-introduction.md). This will provide you with essential foundational knowledge.

## Table of Contents

### [Introduction ](#introduction)
### [Setup ](#setup)
### Functions
  - [IsGameLoaded](#isgameloaded)
  - [GetMyTeamIndex](#getmyteamindex)
  - [GetPlayers](#getplayers)
  - [GetPlayerBone](#getplayerbone)

## Introduction

The Fortnite Library is an extra toolkit that complements the [Unreal Engine](./unreal-engine.md) library, offering functionalities specific to Fortnite. Contrary to what the name might suggest, this library doesn't provide high-level functionalities, it's more about the "nuts and bolts". To learn more about the distinction, refer to [Understanding the Role of API](../api.md#understanding-the-role-of-api).

While this library can stand on its own, its true potential is unlocked when used in combination with the [Memory](./memory.md) and [Unreal Engine](./unreal-engine.md) libraries.

## Setup

Before utilizing this library, you'll need to include it in your Lua script. Add the following line to your "global code" space at the top of your script:

```lua
local fortnite = require("fortnite", true)
```

Feel free to rename the variable `fortnite` to something else if you prefer.

## Functions

---

### `IsGameLoaded`

```lua
function IsGameLoaded() -> bool
```

#### Description

Checks if the game is loaded. This is pretty much always the case since the Lua Engine shouldn't be running while the game is loading.

#### Parameters

None.

#### Return Value

Boolean indicating if the game is loaded.

#### Example

```lua
if fortnite.IsGameLoaded() then
  println("The game is loaded.")
else
  println("The game is not loaded.")
end
```

---

### `GetMyTeamIndex`

```lua
function GetMyTeamIndex() -> number[int]|nil
```

#### Description

Retrieves the index of the local pawn's team. That index is cashed by our cheat so that teammates can be identified even while the local pawn is dead (or not spawned), for example while spectating.

#### Parameters

None.

#### Return Value

The index of the team you are on, or `nil` if not available.

#### Example

```lua
local teamIndex = fortnite.GetMyTeamIndex()
if teamIndex then
  println("I am on team "..teamIndex)
else
  println("The game is not loaded.")
end
```

---

### `GetPlayers`

```lua
function GetPlayers() -> table[list[number[ptr]]]|nil
```

#### Description

Retrieves a table as a list containing pointers to all the player pawns in the game (`AFortPlayerPawn`).

#### Parameters

None.

#### Return Value

A table as a list containing pointers to all player pawns, or `nil` if the game is not loaded.

#### Example

```lua
local players = fortnite.GetPlayers()
if players then
  for i, player in ipairs(players) do
    println("Player "..i.." has pointer: "..ptrToStr(player))
  end
else
  println("The game is not loaded.")
end
```

---

### `GetPlayerBone`

```lua
function GetPlayerBone(player: number[ptr], boneIndex: number[int]) -> vec3|nil
```

#### Description

Retrieves the position of a specific bone of a player pawn. The bone positions of all bones of all players are cached by our engine so calling this function will barely hurt performance.

#### Parameters

- `player`: Pointer to the player pawn (`AFortPlayerPawn`).
- `boneIndex`: The index of the bone (between 0 and 120).

#### Return Value

A `vec3` representing the position of the specified bone, or `nil` if the game is not loaded or invalid arguments are provided.

#### Example

```lua
local bonePosition = fortnite.GetPlayerBone(playerPtr, 1)
if bonePosition then
  println("The position of the bone is:", bonePosition)
else
  println("Unable to retrieve the bone position.")
end
```

---
