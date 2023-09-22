--[[
    This script showcases the utilization of the built-in `hooks` library. Beyond a demonstration,
    it offers a useful feature - anti-kick. If you get "live" banned in-game on platforms like 
    Nova/Era, you won't be kicked unless this bypass mechanism gets patched. 
    This serves as a basic example of function hooking in practice.
]]

-- Required built-in libraries
local ffi = require("ffi")
local hooks = require("hooks", true)
local ue = require("unreal_engine", true)

local oClientReturnToMainMenu = nil

-- This function acts as the detour for the original "ClientReturnToMainMenu" function
function MyHook_ClientReturnToMainMenu(a1, a2, a3)
    -- Caution: Ensure the absence of runtime errors within Lua detour functions 
    -- to prevent crashing the entire game.

    -- The kick bypass works by abstaining from invoking the "ClientReturnToMainMenu" call.
    -- In cases where invoking the original function is needed, it would look like this:
    -- return oClientReturnToMainMenu(a1, a2, a3)

    println("Kick skipped")
end

-- Acquire the "ClientReturnToMainMenu" event from Unreal Engine
local ClientReturnToMainMenu = ue.GetObject("Engine.PlayerController:ClientReturnToMainMenu")
assert(ClientReturnToMainMenu, "Failed to get ClientReturnToMainMenu") -- This assertion shouldn't ever be triggered

-- Type-cast the event to the appropriate UFunction type
ClientReturnToMainMenu = ClientReturnToMainMenu:As("UFunctionMT")

-- Extract the native function pointer associated with the event
ClientReturnToMainMenu = ClientReturnToMainMenu:GetPtr()

-- Create a hook for the "ClientReturnToMainMenu" function, redirecting it to our custom function
local ClientReturnToMainMenuHook = hooks.CreateHook(
    ffi,
    ClientReturnToMainMenu,
    MyHook_ClientReturnToMainMenu,
    "void(*)(void*, void*, void*)", -- Determining the correct function prototype can be intricate and demands a sound comprehension of C
    true
)
assert(ClientReturnToMainMenuHook, "Failed to hook ClientReturnToMainMenuHook")
println("Hook created")

-- Activates the anti-kick feature on script execution
function onRun()
    if not ClientReturnToMainMenuHook:Enable() then
        return false
    end

    println("Anti-Kick enabled")
    return true
end

-- Overriding a tick event ensures the script's continuous execution
function onRenderTick()
end

-- Deactivates the anti-kick feature on script termination
function onStop()
    if not ClientReturnToMainMenuHook:Disable() then
        return false
    end

    println("Anti-Kick disabled")
    return true
end

-- Cleans up and uninstalls the hook on script unload
function onUnload()
    if ClientReturnToMainMenuHook then
        ClientReturnToMainMenuHook:Remove()
        println("Hook uninstalled")
    end
end
