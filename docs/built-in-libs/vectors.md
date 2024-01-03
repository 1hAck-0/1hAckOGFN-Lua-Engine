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

This library stands out from the other built-in Lua Engine libraries because it is implemented directly in Lua. Initially created before the development of this Lua Engine, we opted to keep the original Lua-based version for now. However, future updates may include a C-based implementation for optimization. Rest assured, the library's functionality will remain unchanged, even if we decide to rewrite it in C.

Although the source code is provided for those who are well-versed in Lua, we've prepared an outline of the library's features to facilitate quicker navigation.

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
- `dot`
- `distance`
- `normalize`

In addition to these, all arithmetic operators such as `+` have been overloaded to enhance the development experience.

For the matrix classes, we've provided only one built-in function, since these classes are less frequently required:
- `__mul`: Overloaded multiplication operator for matrix multiplication.

## Source Code

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
