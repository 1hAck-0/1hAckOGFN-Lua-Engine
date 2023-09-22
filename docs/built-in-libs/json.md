# JSON Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Tables of Contents

### [Introduction ](#introduction)
### [Setup ](#setup)
### Functions
  - [Encode](#encode)
  - [Decode](#decode)


---

## Introduction

Lua surprisingly lacks a built-in JSON library, a toolset often considered essential for modern development. To fill this gap, we've crafted our own JSON library. This utility allows you to effortlessly convert between JSON strings and Lua tables, and vice versa.

Beyond this basic functionality, our library serves an additional purpose: it extends support to unique data types that are specific to this Lua Engine:

- **Metatables**: Our library takes into account metatables associated with Lua tables. For instance, data types like `vec2`, `vec3`, etc., which are linked to their respective metatables (`vec2_mt`, `vec3_mt`, etc.), are seamlessly encoded and decoded. The metatable information is stored in a special JSON variable, `__mt`, which is later applied to the created tables during the decoding process.
  
- **Userdata**: The library can recognize, save, and load specific userdata types that are unique to our Lua Engine. For example:
  - `HotkeyCollectionMT`: This metatable is part of the [Input Library](./input.md) and facilitates interactions with "hotkey collections" - essentially, an enhanced set of hotkeys. The ability to save and load these in a JSON context is crucial, hence its support.
  - Note: Further types may be supported in the future.

## Setup

To utilize this library, you need to import it at the beginning of your Lua script in the "global code" space as shown below:

```lua
local json = require("json", true)
```

## Functions

---

### `Encode`

```lua
function Encode(data: table, indent: number[int] = -1, indentChar: string = " ") -> string
```

#### Description

Encodes a Lua table into a JSON-formatted string.

#### Parameters

- `data`: The Lua table to be converted to JSON.
- `indent`: The number of spaces for indentation. A negative value means no indentation and no new lines while 0 means just no indentation (default is -1).
- `indentChar`: The character to use for indentation, usually a space or tab (default is " ").

#### Return Value

Returns the encoded JSON string.

#### Example

```lua
local myTable = { name = "John", age = 25 }
local jsonString = json.Encode(myTable, 2)
println(jsonString)
```

---

### `Decode`

```lua
function Decode(jsonStr: string, ignoreComments: bool = true) -> table|nil
```

#### Description

Decodes a JSON-formatted string into a Lua table.

#### Parameters

- `jsonStr`: The JSON-formatted string to be converted to a Lua table.
- `ignoreComments`: Whether to ignore comments within the JSON string (default is true).

#### Return Value

Returns the decoded Lua table or `nil` if decoding fails for whatever reason.

#### Example

```lua
local jsonString = '{ "name": "John", "age": 25 }'

local myTable = json.Decode(jsonString)
if myTable then
  printTable(myTable)
else
  println("Failed to decode JSON.")
end
```

---
