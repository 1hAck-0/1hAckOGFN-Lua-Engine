# Render Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Table of Contents
## [Introduction ](#introduction)
## [Setup ](#setup)
## Functions
  - [DrawText](#drawtext)
  - [DrawDebugText](#drawdebugtext)
  - [DrawLine](#drawline)
  - [DrawRect](#drawrect)
  - [DrawRectFilled](#drawrectfilled)
  - [DrawCircle](#drawcircle)
  - [DrawCircleFilled](#drawcirclefilled)
  - [DrawTriangle](#drawtriangle)
  - [DrawTriangleFilled](#drawtrianglefilled)
  - [Draw3DBox](#draw3dbox)
  - [DrawActor3DBox](#drawactor3dbox)
  - [DrawQuadrilateral](#drawquadrilateral)
  - [DrawQuadrilateralFilled](#drawquadrilateralfilled)
  - [DrawBazierCubic](#drawbaziercubic)
  - [DrawImage](#drawimage)
  - [IsColorVisible](#iscolorvisible)


---

## Introduction

The Render Library leverages our rendering engine to provide the drawing of various elements or shapes on the screen. This allows the development of a broad array of visual features. Although it shares similarities with the [ImGui draw list](./imgui.md#imdrawlistmt), a key difference lies in its thread compatibility. Specifically, this library is designed to operate **ONLY on the Game Thread**. This sets it apart from the ImGui library, which functions only on the Render Thread.

For those wondering how to draw visual elements on the Game Thread, this library serves this precise need. Notably, the library underpins almost all of the "Visuals" features available in our cheat's menu. Hence, it is fundamentally built on top of the cheat's rendering engine.

## Setup

To utilize this library, begin by importing it into a Lua table. Place the following line of code at the top of your Lua script within the "global code" section:

```lua
local renderer = require("renderer", true)
```

You're welcome to rename the `renderer` Lua table to something of your choosing.

## Functions

---

### `DrawText`

```lua
function DrawText(
    pos: vec2,
    color: number[int]|vec4,
    text: string,
    centered: bool = true
) -> none
```

#### Description

Draws text on the screen at a specified position and color.

#### Parameters

- `pos`: Position to start drawing the text.
- `color`: Color of the text in (in ImU32 or vec4 format).
- `text`: Text to be displayed.
- `centered`: If true, the text will be centered at the position, default is true.

#### Return Value

None.

#### Example

```lua
renderer.DrawText(vec2(50, 50), vec4(1.0, 0.0, 1.0, 1.0), "Hello World", true)
```

---

### `DrawDebugText`

```lua
function DrawDebugText(text: string) -> none
```

#### Description

Displays debug text.

#### Parameters

- `text`: Debug text to be displayed.

#### Return Value

None.

#### Example

```lua
renderer.DrawDebugText("Debug Information")
```

---

### `DrawLine`

```lua
function DrawLine(
    p1: vec2,
    p2: vec2,
    color: number[int]|vec4,
    width: number[float] = 1.0
) -> none
```

#### Description

Draws a line between two points with a specified color and width.

#### Parameters

- `p1`: Starting point of the line.
- `p2`: Ending point of the line.
- `color`: Color of the line (in ImU32 or vec4 format).
- `width`: Width of the line, default is 1.

#### Return Value

None.

#### Example

```lua
renderer.DrawLine(vec2(10, 20), vec2(50, 60), 0xFFFFFFFF, 1)
```

---

### `DrawRect`

```lua
function DrawRect(min: vec2, max: vec2, color: number[int]|vec4, width: number[float] = 1) -> none
```

#### Description

Draws an unfilled rectangle with specified dimensions, color, and border width.

#### Parameters

- `min`: Minimum corner of the rectangle.
- `max`: Maximum corner of the rectangle.
- `color`: Color of the rectangle border (in ImU32 or vec4 format).
- `width`: Width of the border, default is 1.

#### Return Value

None.

#### Example

```lua
renderer.DrawRect(vec2(5, 5), vec2(45, 45), vec4(1.0, 0.0, 1.0, 1.0), 1)
```

---

### `DrawRectFilled`

```lua
function DrawRectFilled(min: vec2, max: vec2, color: number[int]|vec4) -> none
```

#### Description

Draws a filled rectangle with specified dimensions and color.

#### Parameters

- `min`: Minimum corner of the rectangle.
- `max`: Maximum corner of the rectangle.
- `color`: Fill color of the rectangle (in ImU32 or vec4 format).

#### Return Value

None.

#### Example

```lua
renderer.DrawRectFilled(vec2(5, 5), vec2(45, 45), vec4(1.0, 0.0, 1.0, 1.0))
```

---

### `DrawCircle`

```lua
function DrawCircle(
    center: vec2,
    radius: number,
    color: number[int]|vec4,
    segments: number[int] = 0,
    width: number[float] = 1.0
) -> none
```

#### Description

Draws a circle with a specified center, radius, color, and number of segments.

#### Parameters

- `center`: Center point of the circle.
- `radius`: Radius of the circle.
- `color`: Color of the circle (in ImU32 or vec4 format).
- `segments`: Number of segments for the circle, default is 0 (automatically adjust).
- `width`: Width of the circle, default is 1.

#### Return Value

None.

#### Example

```lua
renderer.DrawCircle(vec2(100, 100), 50, vec4(1.0, 0.0, 1.0, 1.0), 0, 1)
```

---

### `DrawCircleFilled`

```lua
function DrawCircleFilled(
    center: vec2,
    radius: number[float],
    color: number[int]|vec4,
    segments: number[int] = 0
) -> none
```

#### Description

Draws a filled circle with a specified center, radius, and color.

#### Parameters

- `center`: Center point of the circle.
- `radius`: Radius of the circle.
- `color`: Fill color of the circle (in ImU32 or vec4 format).
- `segments`: Number of segments for the circle, default is 0 (automatically adjust).

#### Return Value

None.

#### Example

```lua
renderer.DrawCircleFilled(vec2(100, 100), 50, vec4(1.0, 0.0, 1.0, 1.0))
```

---

### `DrawTriangle`

```lua
function DrawTriangle(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    color: number[int]|vec4,
    width: number[float] = 1.0
) -> none
```

#### Description

Draws an unfilled triangle with specified vertices, color, and border width.

#### Parameters

- `p1`: First vertex of the triangle.
- `p2`: Second vertex of the triangle.
- `p3`: Third vertex of the triangle.
- `color`: Color of the triangle border (in ImU32 or vec4 format).
- `width`: Width of the border, default is 1.

#### Return Value

None.

#### Example

```lua
renderer.DrawTriangle(vec2(10, 10), vec2(50, 50), vec2(10, 50), vec4(1.0, 0.0, 1.0, 1.0), 1)
```

---

### `DrawTriangleFilled`

```lua
function DrawTriangleFilled(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    color: number[int]|vec4
) -> none
```

#### Description

Draws a filled triangle with specified vertices and color.

#### Parameters

- `p1`: First vertex of the triangle.
- `p2`: Second vertex of the triangle.
- `p3`: Third vertex of the triangle.
- `color`: Fill color of the triangle (in ImU32 or vec4 format).

#### Return Value

None.

#### Example

```lua
renderer.DrawTriangleFilled(vec2(10, 10), vec2(50, 50), vec2(10, 50), vec4(1.0, 0.0, 1.0, 1.0))
```

---

### `Draw3DBox`

```lua
function Draw3DBox(
    origin: vec3,
    extent: vec3,
    yaw: number[float],
    color: number[int]|vec4,
    fillColor: number[int]|vec4 = 0,
    width: number[float] = 1.5
) -> none
```

#### Description

Draws a 3D box with specified origin, extent, orientation, and colors.

#### Parameters

- `origin`: Center of the 3D box as a 3d world coordinate (in cms).
- `extent`: Half-dimensions of the box (in cms).
- `yaw`: Horizontal orientation (yaw) of the box in degrees.
- `color`: Border color of the box (in ImU32 or vec4 format).
- `fillColor`: Fill color of the box, default is transparent (in ImU32 or vec4 format).
- `width`: Width of the box border, default is 1.5.

#### Return Value

None.

#### Example

```lua
renderer.Draw3DBox(worldLoc, boxExtent, 0, vec4(1.0, 0.0, 1.0, 1.0), 0, 1.5)
```

---

### `DrawActor3DBox`

```lua
function DrawActor3DBox(
    actor: number[ptr],
    color: number[int]|vec4,
    fillColor: number[int]|vec4 = 0,
    width: number[float] = 1.5,
    onlyCollidingComponents: bool = true,
    includeFromChildActors: bool = false
) -> none
```

#### Description

Draws a 3D box around a given actor (`AActor`) in the 3D world.

#### Parameters

- `actor`: A pointer to the actor (`AActor`) around whom the 3D box is to be drawn.
- `color`: The outline color of the 3D box (in ImU32 or vec4 format).
- `fillColor`: The fill color of the 3D box (default is 0, meaning no fill) (in ImU32 or vec4 format).
- `width`: The line width of the box outline (default is 1.5).
- `onlyCollidingComponents`: Whether to only include colliding components (default is true).
- `includeFromChildActors`: Whether to include the child actors of the actor (default is false).

#### Return Value

None.

#### Example

```lua
renderer.DrawActor3DBox(actor, vec4(1.0, 0.0, 0.0, 1.0))
```

---

### `DrawQuadrilateral`

```lua
function DrawQuadrilateral(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    p4: vec2,
    color: number[int]|vec4,
    width: number[float] = 1.0
) -> none
```

#### Description

Draws a quadrilateral on the screen.

#### Parameters

- `p1`, `p2`, `p3`, `p4`: The 4 corner points.
- `color`: The color of the quadrilateral outline (in ImU32 or vec4 format).
- `width`: The line width (default is 1.0).

#### Return Value

None.

#### Example

```lua
renderer.DrawQuadrilateral(vec2(10, 10), vec2(50, 10), vec2(50, 50), vec2(10, 50), vec4(1.0, 0.0, 0.0, 1.0))
```

---

### `DrawQuadrilateralFilled`

```lua
function DrawQuadrilateralFilled(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    p4: vec2,
    color: number[int]|vec4
) -> none
```

#### Description

Draws a filled quadrilateral on the screen.

#### Parameters

- `p1`, `p2`, `p3`, `p4`: The 4 corner points.
- `color`: The fill color of the quadrilateral (in ImU32 or vec4 format).

#### Return Value

None.

#### Example

```lua
renderer.DrawQuadrilateralFilled(vec2(10, 10), vec2(50, 10), vec2(50, 50), vec2(10, 50), vec4(1.0, 0.0, 0.0, 1.0))
```

---

### `DrawBazierCubic`

```lua
function DrawBazierCubic(
    p1: vec2,
    p2: vec2,
    p3: vec2,
    p4: vec2,
    color: number[int]|vec4,
    width: number[float] = 1.0,
    segments: number[int] = 0
) -> none
```

#### Description

Draws a cubic Bézier curve on the screen.

#### Parameters

- `p1`: The first control point.
- `p2`: The second control point.
- `p3`: The third control point.
- `p4`: The fourth control point.
- `color`: The color of the curve (in ImU32 or vec4 format).
- `width`: The line width (default is 1.0).
- `segments`: Number of segments for the curve (default is 0, meaning automatic).

#### Return Value

None.

#### Example

```lua
renderer.DrawBazierCubic(vec2(10, 20), vec2(40, 50), vec2(60, 30), vec2(100, 100), vec4(1.0, 0.0, 0.0, 1.0))
```

---

### `DrawImage`

```lua
function DrawImage(
  texture: number[ptr],
  min: vec2,
  max: vec2,
  uvMin: vec2 = vec2(0, 0),
  uvMax: vec2 = vec2(1, 1),
  color: number[int] = 0xFFFFFFFF
) -> none
```

#### Description

Draws an image texture on the screen. Use [imgui.CreateImageResource](imgui.md#createimageresource) to create an image texture.

#### Parameters

- `texture`: Pointer to the texture to be drawn.
- `min`: The minimum coordinates for the image.
- `max`: The maximum coordinates for the image.
- `uvMin`: The lower UV coordinates for the image, defaulting to `(0, 0)`.
- `uvMax`: The upper UV coordinates for the image, defaulting to `(1, 1)`.
- `color`: The filter color of the image, defaulting to white (all channels).

#### Return Value

None.

#### Example

```lua
renderer.DrawImage(texture, vec2(100, 100), vec2(200, 200))
```

---

### `IsColorVisible`

```lua
function IsColorVisible(color: number[int]|vec4) -> bool
```

#### Description

Checks if a given color is visible on the current renderer.

#### Parameters

- `color`: The color to check for visibility (in ImU32 or vec4 format).

#### Return Value

Boolean indicating if the color is visible.

#### Example

```lua
if renderer.IsColorVisible(someColor) then
  println("The color is visible.")
end
```

---
