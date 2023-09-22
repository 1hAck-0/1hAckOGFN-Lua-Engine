# Config Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.


## Table of Contents

### [Introduction ](#introduction)
### [Setup ](#setup)
### Functions
  - [SaveMyConfig](#savemyconfig)
  - [SaveMyConfigStr](#savemyconfigstr)
  - [GetMyConfig](#getmyconfig)
  - [GetMyConfigStr](#getmyconfigstr)
  - [ApplyMyConfig](#applymyconfig)
  - [GetCheatConfig](#getcheatconfig)
  - [ApplyCheatConfig](#applycheatconfig)


---

## Introduction

This Library offers two very useful functionalities that enhance your script's capabilities:

1. **Config Management**: Facilitates the creation, saving, and loading of your script's custom configurations within the cheat config itself.
  
2. **Real-Time Cheat Interaction**: Provides an interface for on-the-fly manipulation and retrieval of cheat feature settings, offering dynamic control during runtime.

Before diving deeper, we recommend that you familiarize yourself with the [JSON library](./json.md) first as these libraries often work in conjunction.

## Setup

To utilize this library, import it in the "global code" section at the beginning of your Lua script, as shown below:

```lua
local config = require("config", true)
```

Feel free to rename the `config` variable to something that suits your needs.

## Functions

---

### `SaveMyConfig`

```lua
function SaveMyConfig(configTable: table) -> bool
```

#### Description

Saves the given Lua table as a JSON object for configuration purposes as a part of the current cheat config. You can use this to even save the state (some variables) of your Lua script between script reloading during development.

#### Parameters

- `configTable`: Lua table to be saved.

#### Return Value

Boolean indicating the success of the save operation.

#### Example

```lua
function onSaveConfig()
  local myConfig = { username = "Alice", age = 30 }
  local success = config.SaveMyConfig(myConfig)
end
```

---

### `SaveMyConfigStr`

```lua
function SaveMyConfigStr(jsonStr: string, ignoreComments: bool = true) -> bool
```

#### Description

Parses and saves the provided config inside the cheat config from a JSON string.

#### Parameters

- `jsonStr`: JSON formatted string.
- `ignoreComments`: Boolean flag to ignore comments in the JSON string (default is true).

#### Return Value

Boolean indicating the success of the save operation.

#### Example

```lua
function onSaveConfig()
  local jsonStr = '{"username":"Alice","age":30}'
  local success = config.SaveMyConfigStr(jsonStr)
end
```

---

### `GetMyConfig`

```lua
function GetMyConfig() -> table|nil
```

#### Description

Retrieves the saved configuration associated with your script as a Lua table.

#### Parameters

None.

#### Return Value

Lua table representing the saved configuration, or `nil` if there is no valid saved config.

#### Example

```lua
local myConfig = config.GetMyConfig()
if myConfig then
  printTable(myConfig)
end
```

---

### `GetMyConfigStr`

```lua
function GetMyConfigStr(indent: number[int] = -1, indentChar: string = " ") -> string|nil
```

#### Description

Retrieves the saved configuration associated with your script as a JSON string.

#### Parameters

Look at the [JSON library](./json.md) for details.

- `indent`: Number of spaces for JSON indentation (default is -1).
- `indentChar`: Character used for indentation (default is space).

#### Return Value

JSON formatted string representing the saved configuration, or `nil` if there is no valid saved config.

#### Example

```lua
local jsonStr = config.GetMyConfigStr(2)
println(jsonStr)
```

---

### `ApplyMyConfig`

```lua
function ApplyMyConfig(configTable: table, newConfig: table) -> bool
```

#### Description

Merges a new configuration table (`newConfig`) into an existing one (`configTable`) while preserving the integrity of the original settings. This function is useful for applying saved configurations to your script without overwriting or removing any existing keys. It does so by iterating over the `newConfig` table and selectively updating matching keys in the `configTable` based on their data types and metatables.

#### Parameters

- `configTable`: The existing Lua table where you want to apply new configurations. It can be your default or currently active configuration.
- `newConfig`: The Lua table containing the new settings you wish to integrate into `configTable`.

#### Return Value

Returns `true` if the function successfully iterates `newConfig`, even if no keys were actually updated, otherwise `false`.

#### Example

```lua
local myConfig = {
  -- Your default settings go here
}

-- ...

function onLoadConfig()
  config.ApplyMyConfig(myConfig, config.GetMyConfig())
end
```

---

### `GetCheatConfig`

```lua
function GetCheatConfig() -> table|nil
```

#### Description

Retrieves the current cheat configuration as a Lua table.

#### Parameters

None.

#### Return Value

Lua table representing the current cheat configuration, or `nil` if retrieval fails.

#### Example

```lua
local cheatConfig = config.GetCheatConfig()
printTable(cheatConfig)
```

---

### `ApplyCheatConfig`

```lua
function ApplyCheatConfig(cheatConfig: table) -> bool
```

#### Description

Applies a Lua table to the cheat configuration. You can use this to interact with the already built-in features of the cheat in many different ways. You will need to get an idea of the structure of the cheat configuration first to understand how to change different settings. You can do so by looking at a saved cheat config file or using [GetCheatConfig()](#getcheatconfig) and debugging the output.

#### Parameters

- `cheatConfig`: Lua table containing the cheat settings to be applied, this can even be an entirely new configuration.

#### Return Value

Boolean indicating the success of the apply operation, will return `true` even if nothing was actually changed.

#### Example

```lua
-- Disable Aimbot inside the cheat menu
local disableAimbot = {
  ["Aim"] = {
    ["Aimbot"] = {
      ["Enabled"] = false
    }
  }
}
local success = config.ApplyCheatConfig(disableAimbot)
```

---
