# API Documentation

Welcome to the comprehensive API Documentation for this Lua Engine. 

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Table of Contents
- [Understanding the Role of API](#understanding-the-role-of-api)
- [Why Built-in Libraries?](#why-built-in-libraries)
- [Understanding Function Prototypes](#understanding-function-prototypes)
  - [Basic Structure](#basic-structure)
  - [Return Values](#return-values)
  - [Special Symbols in Parameters](#special-symbols-in-parameters)
  - [Datatype Annotations](#datatype-annotations)
  - [Default Parameters](#default-parameters)
  - [Table Types](#table-types)
  - [Userdata Types](#userdata-types)
  - [Examples](#examples)
- [Built-in Libraries](#built-in-libraries)
  - [Globals](#globals)
  - [Vectors](#vectors)
  - [Unreal Engine](#unreal-engine)
  - [Memory](#memory)
  - [FFI (Foreign Function Interface)](#ffi-foreign-function-interface)
  - [Hooks](#hooks)
  - [ImGui](#imgui)
  - [Input](#input)
  - [Config](#config)
  - [Renderer](#renderer)
  - [WinAPI](#winapi)
  - [Cheat](#cheat)
  - [Fortnite](#fortnite)
  - [JSON](#json)
- [Additional Script Examples](#additional-script-examples)
- [Still Struggling to Create Features?](#still-struggling-to-create-features)
  - [The Path to Mastery is Paved with Experience](#the-path-to-mastery-is-paved-with-experience)
  - [The Unique Nature of Game Hacking](#the-unique-nature-of-game-hacking)
- [Reporting Bugs and Issues](#reporting-bugs-and-issues)
- [Requesting API Features](#requesting-api-features)

---

## Understanding the Role of API

If you're new to programming, you might find it confusing to see how our built-in libraries and this API as a whole can help you create the specific features you want. For instance, let's say you want to aim at the nearest player in a game. You check our libraries and realize there's no `AimAtNearestPlayer()` function. You might think, "What's the point of these libraries then?" But don't worry, here's how it works:

### Think of It Like Building Blocks

Libraries serve as the building blocks for more advanced features. They offer basic tools that you can combine and layer to create more complex abilities. In a way, you can imagine this like a tree. At the root of the tree is our Lua Engine, which allows you to start building. As you go up the branches, you add more code, layer by layer, until you reach the specific function you want to create - like aiming at the nearest player.

### Breaking It Down

The key is to break down your big goal into smaller tasks. In our example of aiming at the nearest player, you'd first need to:

1. Find the nearest player.
2. Adjust your camera to focus on them.

Each of these tasks requires its own smaller tasks, and so on. Eventually, these will align with the basic functionalities provided by our libraries.

### Why Not Just Offer High-Level Functions?

You might wonder why we don't just offer more specific, high-level functions like `AimAtNearestPlayer()`. The reason is that doing so would limit your creativity and the uniqueness of your features. By giving you basic tools through low-level libraries like the [memory library](built-in-libs/memory.md), we empower you to create a wide range of custom features, which wouldn't be possible with only high-level functionalities.

So, if you find that our engine is missing some low-level tools you need, feel free to check out [requesting API features](#requesting-api-features). We're always open to expanding our libraries based on user needs.

### Taking It All In

Phew, that was a lot! But if you've followed along, things should start making more sense now.

### Understanding the Game's Inner Workings

On top of breaking down your problems into smaller tasks, you also need to know how the game itself is built. For example, Fortnite is made using [Unreal Engine](#unreal-engine), so you'll need to learn how to use that library to interact with the game's structures, functions, and more. 

### Why You Need an SDK (Or Something Like It)

Just knowing Unreal Engine might not be enough. You also need an overview of how the game is put together - that's where an SDK (Software Development Kit) comes in. Though in this case, SDK is a bit of a misnomer. It's more like an "SAO" or Software Architecture Overview (yep, I made that term up), because it doesn't let you directly use the game's features like a regular SDK. Instead, it shows you how the game is structured - its classes, functions, data types, and so on. This info can help you understand, for example, where in the game's memory players are stored, making it easier for you to implement features like `AimAtNearestPlayer()`.

### SDK Resources for Fortnite

There are public SDKs that can help you get started. I've even uploaded two SDKs for different Fortnite seasons to make things easier:

- [SDK for Season 3.5](./SDK%20-%20Season%203.5/)
- [SDK for Season 7.4](./SDK%20-%20Season%207.4/)

### Get Comfy with C++

To get the most out of these SDKs and our Engine, you should have a solid understanding of C++. This will help you grasp how the game manages various functions and variables. 

By combining your C++ knowledge with insights from the SDKs, you'll be well-equipped to create custom features in the game.

## Why Built-in Libraries?

Our engine comes packed with an assortment of built-in libraries that serve as your primary toolkit for building impactful and efficient cheats. These libraries are custom-designed to offer you a simplified yet potent way to tap into low-level functionality such as memory management, data manipulation, and GUI rendering.

**Why should you explore these libraries?**  
Having an overview of what's available can save you time and prevent you from "reinventing the wheel." You might discover that a particular function you were considering to write from scratch is already a part of our robust libraries.

## Understanding Function Prototypes

In this documentation, we use a custom prototype syntax to describe the signature of Lua functions in the built-in libraries. The syntax is inspired by Python and tailored to the specific needs and features of Lua. Below is a guide to understanding the components of our function prototypes:

### Basic Structure

A typical function prototype is presented in the following form:

```lua
function functionName(
    param1: datatype1,
    param2: datatype2,
????...
) -> return_datatype
```

- `function`: Keyword to indicate it's a function prototype.
- `functionName`: The name of the function.
- `param1, param2, ...`: The parameters accepted by the function.
- `datatype1, datatype2, ...`: The expected datatypes for each parameter.
- `->`: Arrow indicating the function's return value.
- `return_datatype`: The datatype of the value the function returns.

### Return Values

- `none`: Indicates that the function does not return any value.

- `datatype`: Specifies the expected datatype for the return value.

- For multiple return values, types are separated by a comma after the `->`.
  
  Example: `function foo() -> number, bool`

### Special Symbols in Parameters

- `...`: Indicates that the function accepts any number of additional arguments. The nature and processing of these arguments should be referred to in the function's specific documentation, as there may be special handling for these extra arguments.

### Datatype Annotations

- `number[float]`: Indicates that the datatype is a number, likely a floating-point value.
- `number[int]`: Indicates that the datatype is a number, likely an integer (whole number).
- `number[ptr]`: Indicates that the dataype is a number, that's an address (pointer) in memory.
- `number`: Could be any number value.
- `string|nil`: Indicates that the datatype could be either a string or nil.

### Default Parameters

- `param: datatype = default_value`: Indicates that the parameter has a default value, which will be used if the parameter is not explicitly passed.

### Table Types

- `table[list[datatype]]`: Indicates a table that is structured like a list containing specific datatypes.

For example, `table[list[string]]` would suggest that the table should be an array-like list containing strings.

### Userdata Types

- `userdata[MetatableMT]`: This signature signifies that a userdata object is linked with a specific metatable identified by `MetatableMT`. Such metatables should be globally accessible within the script.

For instance, if you encounter `userdata[UObjectMT]`, it means that the userdata object is associated with the `UObjectMT` metatable and inherits all of its built-in functionality.

### Examples

Here are some examples to showcase these rules:

- `function print(...) -> none` means the `print` function accepts any number of arguments and returns nothing.

- `function getUpTime() -> number[float]` means the `getUpTime` function takes no parameters and returns a floating-point number.

- `function math_round(val: number) -> number` means the `math_round` function takes 1 number as a parameter and returns a number.

---

By understanding these custom prototype rules, you'll be better equipped to read and use the libraries effectively.

---

## Built-in Libraries

Here's a quick guide to our built-in libraries, each with a specific link to its detailed documentation:

---

### [Globals](built-in-libs/globals.md)

:star2: **Priority: High**  
Globals is your must-know library as it gets automatically loaded into every script. Unlike other libraries, it's not structured as a library table; it's globally accessible, making it immensely handy for your projects.

---

### [Vectors](built-in-libs/vectors.md)

:star2: **Priority: High**  
Like the Globals, the Vectors library is also automatically loaded and globally accessible. This library is particularly useful for anyone who needs to manipulate 2D, 3D, or 4D vectors. The vectors are Lua tables rich in built-in functionalities.

---

### [Unreal Engine](built-in-libs/unreal-engine.md)

:fire: **Priority: High**  
Dive into the heart of Unreal Engine's functionalities. Fortnite runs on this engine, so mastering this library gives you unprecedented access to the game's architecture.

---

### [Memory](built-in-libs/memory.md)

:lock: **Priority: High**  
Geared for advanced users, the Memory library exposes low-level memory management capabilities. This includes pointer manipulation and direct memory allocation. A must-know if you're diving into the deep end of cheat development.

---

### [FFI (Foreign Function Interface)](https://luajit.org/ext_ffi.html)

:hammer_and_wrench: **Priority: High**  
The FFI library, short for Foreign Function Interface, is a powerful but very low-level built-in library in LuaJIT. Unlike standard Lua, LuaJIT includes FFI as a way to directly interface with C libraries and system calls. This makes it incredibly potent for advanced operations but also complex and potentially dangerous. A good understanding of the C programming language and system architecture is crucial before diving into the FFI library. This library serves as the foundation for many advanced functionalities, including the Hooks library. It allows you to write C-like code in Lua, opening up a wide array of capabilities beyond typical Lua scripting. Use it carefully and responsibly.

---

### [Hooks](built-in-libs/hooks.md)

:link: **Priority: High**  
Hooks offers an easy way to manipulate in-game functions via function hooking. An essential tool for advanced cheat development, this library allows you to create 'detour functions' to replace existing in-game functions.

---

### [ImGui](built-in-libs/imgui.md)

:art: **Priority: Medium**  
ImGui stands for "Immediate Mode GUI," and it powers the graphical interface you see in our engine. It's highly popular in the developer community and allows you to create visually appealing and interactive user interfaces.

---

### [Input](built-in-libs/input.md)

:video_game: **Priority: Medium**  
Whether it's capturing keyboard or game controller strokes or even mouse clicks, Input is your go-to library. It syncs seamlessly with our cheat's input engine, offering an intuitive experience for those already familiar with our hotkey system.

---

### [Config](built-in-libs/config.md)

:gear: **Priority: Medium**  
Need to tweak the menu settings or save user preferences? Config offers real-time manipulation of the cheat configuration. Its utility functions also make storing long-term variables a breeze, enhancing user experience.

---

### [Renderer](built-in-libs/renderer.md)

:movie_camera: **Priority: Medium**  
Create visual elements similar to those under the cheat's "Visuals" tab using our engine's built-in renderer. Designed to work exclusively on the Game Thread, as explained in the introduction.

---

### [WinAPI](built-in-libs/winapi.md)

:computer: **Priority: Low**  
Unlock a portion of the Windows API for cheat development. Although not native to Lua, this library makes commonly used Windows functionalities accessible.

---

### [Cheat](built-in-libs/cheat.md)

:game_die: **Priority: Low**
The Cheat library provides access to built-in cheat functionalities, allowing interaction with core cheat features and settings.

---

### [Fortnite](built-in-libs/fortnite.md)

:dart: **Priority: Low**  
While the Unreal Engine library packs the most punch when it comes to modifying Fortnite's core functionalities, this specialized library serves as a fine-tuning tool. It offers specific functionalities tailored for Fortnite, filling in the gaps where the Unreal Engine library might be too broad or complex. Ideal for those nuanced modifications that can elevate your cheat script. 

---

### [JSON](built-in-libs/json.md)

:twisted_rightwards_arrows: **Priority: Low**  
JSON bridges the gap between JSON strings and Lua tables, a feature missing in Lua 5.1. It offers easy encoding and decoding, ideal for data serialization and storage tasks.

---

By recognizing the power and utility of each library, you're setting yourself up for success. These libraries are not just tools, they are your allies in scripting the ultimate cheat experience. Choose wisely and code away!

## Additional Script Examples

While each function in the built-in libraries comes with its own specific example, you might still find it challenging to understand how these individual pieces fit together in a complete script. To address this, we provide extended script examples to demonstrate the utilization of various functions and libraries. Feel free to explore the [examples](./examples/) directory to gain insights into the practical applications of these tools.

## Still Struggling to Create Features?

If you're new to programming, you might be wondering how to synthesize the information you've gleaned from this documentation into a fully functional script. Think of it this way: we've provided you with a toolbox filled with wrenches, screws, and hammers - that is, the Lua Engine, this documentation, and the built-in libraries. However, having a toolbox doesn't automatically make you a mechanic. Similarly, having these tools at your disposal doesn't instantly grant you the expertise to create compelling scripts.

### The Path to Mastery is Paved with Experience

Unfortunately, there are no shortcuts, magic tips, or quick tricks to mastering coding/prgoramming. The process is iterative and often involves a cycle of trial and error. The more you experiment, the more you'll gain the hands-on experience necessary to translate your creative ideas into functional code.

### The Unique Nature of Game Hacking

It's worth noting that game hacking is a specialized field within programming, demanding a different skill set than what is typically required for general software development. Becoming proficient in this area will also require accumulating **EXPERIENCE**. That said, diving into tutorials or guides specifically aimed at game hacking can accelerate your learning curve, particularly if you're just starting out. These resources can help you connect the dots between the theoretical knowledge you've gathered and the practical skills you'll need to develop.

## Reporting Bugs and Issues

Despite extensive testing of the Lua Engine, you may still encounter bugs or issues, particularly with our custom-built Lua libraries. If you experience any difficulties, we encourage you to report them by opening an issue on this GitHub repository. Prior to reporting, please take the following steps to ensure the issue lies within the engine itself and not in your own code:

1. **Consult the API Documentation:** Thoroughly review the API documentation to rule out the possibility that the issue you're experiencing is either intended behavior or an error in your own Lua code.

2. **Be Specific:** Provide detailed information about the issue, including the steps to reproduce it, and any error messages. The more information you provide, the quicker the issue can be resolved.

## Requesting API Features

If you need a feature that's not currently available and is difficult to implement yourself in Lua, you're welcome to submit a feature request. Keep in mind that we may not respond right away. Also, we won't consider very specific requests like "Teleport local player to Tomato Town at these coordinates." We're mainly looking for requests for core functionality that's hard to code, and we'll only accept those we see as **useful in MULTIPLE scenarios and challenging to implement**. To submit a feature request, please stick to these guidelines:

1. **Open an Issue:** Start by creating a new issue on this GitHub repository to talk about the feature you want.

2. **Be Detailed:** Tell us exactly what you're looking for. Include use-cases, why it would be helpful, and any roadblocks you foresee. The clearer you are, the easier it is for us to understand how important and doable your request is.

Thank you for contributing to the development and improvement of the Lua Engine! Your feedback and suggestions are valuable to us.
