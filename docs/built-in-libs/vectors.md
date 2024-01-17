# Vectors Library Documentation

> **Note**: Before diving in, we highly recommend that you first read the [API introduction](api-introduction.md) to gain a solid understanding of the foundational concepts.

## Table of Contents
- [Setup](#setup)
- [Introduction](#introduction)
  - [Metatables](#metatables)
  - [Constructors](#constructors)
  - [Functions](#functions)
- [Source Code](#source-code)


---

## Setup

No additional setup is required to use this library. It is globally accessible in all of your scripts by default.

## Introduction

The vectors library, previously implemented in Lua, has been rewritten in C. The Lua version was the foundation for the current C-based implementation. While the core functionality remains unchanged, the C version introduces significant performance optimizations. One notable distinction is the **reduced error checking** in the new C library to maximize performance. Consequently, **proper usage of the library is now more reliant on the Lua developers themselves**. For instance, constructing a vector with non-numeric parameters leads to undefined behavior, although the library does not explicitly prevent such usage.

The library in its C implementation now supports a broader range of **vector operations**, encompassing not only vector-to-vector interactions but also operations between vectors and scalar values. This expansion of capabilities allows for more intuitive usage. For instance:

- **Vector and Scalar Operations**: Adding a scalar value to a vector now uniformly increments each component of the vector. An operation like `vec3(1, 2, 3) + 24` would yield `vec3(25, 26, 27)`, where 24 is added to each element of the vector.

- **Cross-Dimension Vector Operations**: The library accommodates operations between vectors of different dimensions. For example, adding `vec4(1.4, 23.22)` to `vec2(58, 12)` results in `vec2(59.4, 35.22)`. This is achieved by aligning the dimensions of the two vectors from the first component and performing element-wise operations.

Previously, in the original Lua library, those examples would yield an error as it was unsupported. These enhancements make the library more flexible and powerful, allowing developers to perform a wider range of mathematical operations with ease.

### Example

```lua
-- Example demonstrating vector and scalar addition
local vec = vec3(1, 2, 3) + 24
println(vec) -- vec3(25, 26, 27)

-- Example showing cross-dimension vector addition
local vec = vec2(58, 12) + vec4(1.4, 23.22)
println(vec) -- vec2(59.4, 35.22)
local vec = vec4(58, 12, 1, 5) + vec2(1.4, 23.22)
println(vec) -- vec4(59.4, 35.22, 1, 5)

-- Those same principals apply to all mathematical operations including
-- the other vector methods such as `dot`
```

### Metatables
- `vec2_mt`: The global metatable containing all the `vec2`-related methods.
- `vec3_mt`: The global metatable containing all the `vec3`-related methods.
- `vec4_mt`: The global metatable containing all the `vec4`-related methods.
- `matrix3x3_mt`: The global metatable containing all the `matrix3x3`-related methods.
- `matrix4x4_mt`: The global metatable containing all the `matrix4x4`-related methods.

### Constructors
- `vec2`: A global table linked with `vec2_mt` as its metatable, serving as a constructor for creating new `vec2` objects.
- `vec3`: A global table linked with `vec3_mt` as its metatable, serving as a constructor for creating new `vec3` objects.
- `vec4`: A global table linked with `vec4_mt` as its metatable, serving as a constructor for creating new `vec4` objects.
- `matrix3x3`: A global table linked with `matrix3x3_mt` as its metatable, serving as a constructor for creating new `matrix3x3` objects.
- `matrix4x4`: A global table linked with `matrix4x4_mt` as its metatable, serving as a constructor for creating new `matrix4x4` objects.

#### Aliases
At the end of the source code you will notice common aliases for the constructors like `Vec2`.

### Functions
All vector metatables include the following common functions. For details on their parameters, return values, and use-cases, please refer to the source code.
- `length`
- `magnitude`
- `distance`
- `dot`
- `normalize`
- `cross`

In addition to these, all **arithmetic operators** such as `+` have been overloaded to enhance the development experience.

For the matrix classes, we've provided only one built-in function, since these classes are less frequently required:
- `__mul`: Overloaded multiplication operator for matrix multiplication.

## LUA Source Code

It's important to note that this is not a 1 to 1 representation of the current vectors library, because it's been re-written in C.

```lua
-- vec2 class --
vec2_mt = {}
vec2_mt.__index = vec2_mt
vec2_mt.__name = "vec2_mt"

function vec2_mt:__call(x, y)
    local ret = setmetatable({}, vec2_mt)
    ret.x = x or 0.0
    ret.y = y or 0.0
    return ret
end

function vec2_mt:__index(key)
    if key == 1 then return self.x end
    if key == 2 then return self.y end

    return vec2_mt[key] -- default behavior
end

function vec2_mt:__newindex(key, value)
    if key == 1 then self.x = value return end
	if key == 2 then self.y = value return end
    
	rawset(self, key, value) -- default behavior
end

function vec2_mt:__tostring()
    return string.format("vec2(%g, %g)", self.x, self.y)
end

function vec2_mt:__add(other)
	return vec2(self.x + other.x, self.y + other.y)
end

function vec2_mt:__sub(other)
	return vec2(self.x - other.x, self.y - other.y)
end

function vec2_mt:__mul(other)
	return vec2(self.x * other.x, self.y * other.y)
end

function vec2_mt:__div(other)
	return vec2(self.x / other.x, self.y / other.y)
end

function vec2_mt:__mod(other)
	return vec2(math.fmod(self.x, other.x), math.fmod(self.y, other.y))
end

function vec2_mt:__pow(other)
	return vec2(self.x ^ other.x, self.y ^ other.y)
end

function vec2_mt:__unm()
	return vec2(-self.x, -self.y)
end

function vec2_mt:__eq(other)
	return self.x == other.x and self.y == other.y
end

function vec2_mt:__lt(other)
	return self.x < other.x and self.y < other.y
end

function vec2_mt:__le(other)
	return self.x <= other.x and self.y <= other.y
end

function vec2_mt:length()
    return math.sqrt(self.x * self.x + self.y * self.y)
end

function vec2_mt:magnitude()
    return self:length()
end

function vec2_mt:dot(other)
	return self.x * other.x + self.y * other.y
end

function vec2_mt:distance(other)
	return (self - other):length()
end

function vec2_mt:normalize()
	local mag = self:length()
	if mag <= 0.0 then
		return self
	end

	return vec2(self.x / mag, self.y / mag)
end

function vec2_mt:cross(other)
    return self.x * other.y - self.y * other.x
end



-- vec3 class --
vec3_mt = {}
vec3_mt.__index = vec3_mt
vec3_mt.__name = "vec3_mt"

function vec3_mt:__call(x, y, z)
    local ret = setmetatable({}, vec3_mt)
    ret.x = x or 0.0
    ret.y = y or 0.0
    ret.z = z or 0.0
    return ret
end

function vec3_mt:__index(key)
    if key == 1 then return self.x end
    if key == 2 then return self.y end
    if key == 3 then return self.z end

    return vec3_mt[key] -- default behavior
end

function vec3_mt:__newindex(key, value)
    if key == 1 then self.x = value return end
	if key == 2 then self.y = value return end
    if key == 3 then self.z = value return end
    
	rawset(self, key, value) -- default behavior
end

function vec3_mt:__tostring()
    return string.format("vec3(%g, %g, %g)", self.x, self.y, self.z)
end

function vec3_mt:__add(other)
	return vec3(self.x + other.x, self.y + other.y, self.z + other.z)
end

function vec3_mt:__sub(other)
	return vec3(self.x - other.x, self.y - other.y, self.z - other.z)
end

function vec3_mt:__mul(other)
	return vec3(self.x * other.x, self.y * other.y, self.z * other.z)
end

function vec3_mt:__div(other)
	return vec3(self.x / other.x, self.y / other.y, self.z / other.z)
end

function vec3_mt:__mod(other)
	return vec3(math.fmod(self.x, other.x), math.fmod(self.y, other.y), math.fmod(self.z, other.z))
end

function vec3_mt:__pow(other)
	return vec3(self.x ^ other.x, self.y ^ other.y, self.z ^ other.z)
end

function vec3_mt:__unm()
	return vec3(-self.x, -self.y, -self.z)
end

function vec3_mt:__eq(other)
	return self.x == other.x and self.y == other.y and self.z == other.z
end

function vec3_mt:__lt(other)
	return self.x < other.x and self.y < other.y and self.z < other.z
end

function vec3_mt:__le(other)
	return self.x <= other.x and self.y <= other.y and self.z <= other.z
end

function vec3_mt:length()
    return math.sqrt(self.x * self.x + self.y * self.y + self.z * self.z)
end

function vec3_mt:magnitude()
    return self:length()
end

function vec3_mt:dot(other)
	return self.x * other.x + self.y * other.y + self.z * other.z
end

function vec3_mt:distance(other)
	return (self - other):length()
end

function vec3_mt:normalize()
	local mag = self:length()
	if mag <= 0.0 then
		return self
	end

	return vec3(self.x / mag, self.y / mag, self.z / mag)
end

function vec3_mt:cross(other)
    return vec3(
		self.y * other.z - self.z * other.y,
        self.z * other.x - self.x * other.z,
        self.x * other.y - self.y * other.x
    )
end



-- vec4 class --
vec4_mt = {}
vec4_mt.__index = vec4_mt
vec4_mt.__name = "vec4_mt"

function vec4_mt:__call(x, y, z, w)
    local ret = setmetatable({}, vec4_mt)
    ret.x = x or 0.0
    ret.y = y or 0.0
    ret.z = z or 0.0
    ret.w = w or 0.0
    return ret
end

function vec4_mt:__index(key)
    if key == 1 then return self.x end
    if key == 2 then return self.y end
    if key == 3 then return self.z end
    if key == 4 then return self.w end

    return vec4_mt[key] -- default behavior
end

function vec4_mt:__newindex(key, value)
    if key == 1 then self.x = value return end
	if key == 2 then self.y = value return end
	if key == 3 then self.z = value return end
	if key == 4 then self.w = value return end
    
	rawset(self, key, value) -- default behavior
end

function vec4_mt:__tostring()
    return string.format("vec4(%g, %g, %g, %g)", self.x, self.y, self.z, self.w)
end

function vec4_mt:__add(other)
	return vec4(self.x + other.x, self.y + other.y, self.z + other.z, self.w + other.w)
end

function vec4_mt:__sub(other)
	return vec4(self.x - other.x, self.y - other.y, self.z - other.z, self.w - other.w)
end

function vec4_mt:__mul(other)
	return vec4(self.x * other.x, self.y * other.y, self.z * other.z, self.w * other.w)
end

function vec4_mt:__div(other)
	return vec4(self.x / other.x, self.y / other.y, self.z / other.z, self.w / other.w)
end

function vec4_mt:__mod(other)
	return vec4(math.fmod(self.x, other.x), math.fmod(self.y, other.y), math.fmod(self.z, other.z), math.fmod(self.w, other.w))
end

function vec4_mt:__pow(other)
	return vec4(self.x ^ other.x, self.y ^ other.y, self.z ^ other.z, self.w ^ other.w)
end

function vec4_mt:__unm()
	return vec4(-self.x, -self.y, -self.z, -self.w)
end

function vec4_mt:__eq(other)
	return self.x == other.x and self.y == other.y and self.z == other.z and self.w == other.w
end

function vec4_mt:__lt(other)
	return self.x < other.x and self.y < other.y and self.z < other.z and self.w < other.w
end

function vec4_mt:__le(other)
	return self.x <= other.x and self.y <= other.y and self.z <= other.z and self.w <= other.w
end

function vec4_mt:length()
    return math.sqrt(self.x * self.x + self.y * self.y + self.z * self.z + self.w * self.w)
end

function vec4_mt:magnitude()
    return self:length()
end

function vec4_mt:dot(other)
	return self.x * other.x + self.y * other.y + self.z * other.z + self.w * other.w
end

function vec4_mt:distance(other)
	return (self - other):length()
end

function vec4_mt:normalize()
	local mag = self:length()
	if mag <= 0.0 then
		return self
	end

	return vec4(self.x / mag, self.y / mag, self.z / mag, self.w / mag)
end

function vec4_mt:cross(other)
    return vec4(
        self.y * other.z - self.z * other.y,
        self.z * other.x - self.x * other.z,
        self.x * other.y - self.y * other.x,
        0.0
    )
end



-- matrix3x3 class --
matrix3x3_mt = {}
matrix3x3_mt.__index = matrix3x3_mt
matrix3x3_mt.__name = "matrix3x3_mt"

function matrix3x3_mt:__call(v1, v2, v3)
	local ret = setmetatable({}, matrix3x3_mt)
	ret[1] = v1 or vec3()
	ret[2] = v2 or vec3()
	ret[3] = v3 or vec3()
	return ret
end

function matrix3x3_mt:__mul(other)
	local ret = matrix3x3()

	for r = 1, 3 do
		ret[r] = vec3()
		
		for c = 1, 3 do
			local sum = 0.0

			for i = 1, 3 do
				sum = sum + self[r][i] * other[i][c]
			end

			ret[r][c] = sum
		end
	end

	return ret
end



-- matrix4x4 class --
matrix4x4_mt = {}
matrix4x4_mt.__index = matrix4x4_mt
matrix4x4_mt.__name = "matrix4x4_mt"

function matrix4x4_mt:__call(v1, v2, v3, v4)
	local ret = setmetatable({}, matrix4x4_mt)
	ret[1] = v1 or vec4()
	ret[2] = v2 or vec4()
	ret[3] = v3 or vec4()
	ret[4] = v4 or vec4()
	return ret
end

function matrix4x4_mt:__mul(other)
	local ret = matrix4x4()

	for r = 1, 4 do
		ret[r] = vec4()
		
		for c = 1, 4 do
			local sum = 0.0

			for i = 1, 4 do
				sum = sum + self[r][i] * other[i][c]
			end

			ret[r][c] = sum
		end
	end

	return ret
end



-- set metatables for constructors --
vec2 = {}
setmetatable(vec2, vec2_mt)
vec3 = {}
setmetatable(vec3, vec3_mt)
vec4 = {}
setmetatable(vec4, vec4_mt)
matrix3x3 = {}
setmetatable(matrix3x3, matrix3x3_mt)
matrix4x4 = {}
setmetatable(matrix4x4, matrix4x4_mt)



-- aliases --
Vec2 = vec2
Vec3 = vec3
Vec4 = vec4
Matrix3x3 = matrix3x3
Matrix4x4 = matrix4x4
FMatrix = matrix4x4

ImVec2 = vec2
ImVec4 = vec4
ImColor = vec4

FVector2 = vec2
FVector2d = vec2
FVector2f = vec2

FVector3 = vec3
FVector3d = vec3
FVector3f = vec3

FVector4 = vec4
FVector4d = vec4
FVector4f = vec4

FRotator = vec3
FVector = vec3
FQuat = vec4
FLinearColor = vec4
FMatrix = matrix4x4
```
