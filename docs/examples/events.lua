--[[
    Event Logger Script:

    Purpose:
    This script logs and helps developers understand when different events 
    are triggered by the Lua Engine. This can be especially useful for debugging 
    and development, providing real-time feedback on the lifecycle of various events.
]]

-- Required built-in `memory` library
local mem = require("memory", true)

-- This helper function logs the event name and checks if it was called from the render thread
function onEventCalled(eventName)
    println(
        eventName.."() event called on",
        mem.IsRenderThread() and "Render Thread" or "Game Thread"
    )
end

-- Event called when the script starts running
function onRun()
    onEventCalled("onRun")
    return true
end

-- Event called when the script stops running
function onStop()
    onEventCalled("onStop")
    return true
end

-- Event called when the script is completely unloaded
function onUnload()
    onEventCalled("onUnload")
end

-- Event called every frame/tick during rendering
function onRenderTick()
    onEventCalled("onRenderTick")
end

-- Event called every frame/tick when windows are ticked (updated)
function onWindowsTick()
    onEventCalled("onWindowsTick")
end

-- Event called every frame/tick in the game's main loop
function onGameTick()
    onEventCalled("onGameTick")
end

-- Event called when user is accessing the script's settings
function onSettings()
    onEventCalled("onSettings")
    return false
end

-- Event called when saving the script's configuration
function onSaveConfig()
    onEventCalled("onSaveConfig")
end

-- Event called when loading a new script configuration
function onLoadConfig()
    onEventCalled("onLoadConfig")
end

-- Log the script load event when the script is initialized
onEventCalled("scriptLoad")
