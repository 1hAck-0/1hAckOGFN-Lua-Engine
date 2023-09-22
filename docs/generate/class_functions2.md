Well done. Now write the documentation for the Lua API for the following functions for my "memory" library by following the same style and structure.
remember to start the functions with `mem.` in the examples for the functions.

There are few rules we haven't discussed that you need to follow here:
- `LuaPtr` in the source code coresponds to `number[ptr]`
- `LuaSize` in the source code coresponds to `number[int]` just like other integers
- If the function returns just 1 value, don't make the return value section a list
- Don't make the function signature multi-line unless it gets above 90 characters long
- Say "The address is not verified for validtity." at the end of each function's description
- The comment above the function says that the function has an alias, so `ReadUInt8` for example has an alias `ReadByte`, in the documentation you need to format it like this:
```
---

### `The alias name`
Alias for [original function name](#original function name)
---
```


source code:
