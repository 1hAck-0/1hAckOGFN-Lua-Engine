--[[
    This script demonstrates how you can make "game-specific" features by using the
    built-in `Unreal Engine` and `memory` libraries. Make sure to read the documentation
    for those to fully understand this script and how to make similar ones.

    TO DO FOR YOU AS PRACTICE:
    Take a look at settings.lua in this folder to understand how you can
    make customizable settings for this script such as custom text color, etc.
]]

-- ============= REQUIRED MODULES =============

local ue = require("unreal_engine", true)
local mem = require("memory", true)
local renderer = require("renderer", true)

-- ============= GAME CLASSES =============

-- Get necessary game classes
local worldClass = ue.GetObject("Engine.World")
assert(worldClass) -- Ensure worldClass is found
local containerClass = ue.GetObject("FortniteGame.BuildingContainer")
assert(containerClass) -- Ensure containerClass is found

-- ============= OFFSETS =============

-- Get memory offset for 'Levels' in the 'Engine.World' class
local worldLevels = worldClass:GetOffset("Levels")
assert(worldLevels) -- Ensure worldLevels offset is found

-- ============= GAME FUNCTIONS =============

-- Retrieve the K2_GetActorLocation function from the engine
local k2GetActorLocation = ue.GetObject("Engine.Actor:K2_GetActorLocation")
assert(k2GetActorLocation)

-- Define a function to get the location of an actor
function getActorLocation(actor)
    local paramsUd, params = mem.Alloc(12)
    if not ue.ProcessEvent(actor, k2GetActorLocation:ptr(), params) then
        return nil
    end
    return mem.ReadVec3(params)
end

-- ============= MAIN LOGIC =============

-- Function to draw the container on the screen
function drawContainer(actor)
    -- Check if the given actor is of the container class
    if not ue.IsObjectOfClass(actor, containerClass:ptr()) then
        return
    end

    -- Get the actor's location and screen position
    local location = getActorLocation(actor)
    local screenLoc, onScreen = ue.WorldToScreen(location)
    if not onScreen then return end

    -- Get the name of the container actor for display
    local name = ue.GetObjectName(actor)
    if not name then return end

    -- Draw the name of the container actor on screen
    renderer.DrawText(screenLoc, 0xFF0000FF, name)
end

-- Function called every game tick
function onGameTick()
    -- Fetch the world object
    local world = ue.GetWorld()
    if not world then return end

    -- Read the pointer to the levels within the world
    local levelsPtr = mem.ReadPtr(world + worldLevels)
    if levelsPtr == 0 then return end

    -- Get the number of levels
    local levelsNum = mem.ReadInt(world + worldLevels + 8)

    -- Iterate through all levels and their actors
    for i=0, levelsNum-1 do
        local level = mem.ReadPtr(levelsPtr + i * 8)
        if level == 0 then goto continue end

        local actors = ue.GetActorsByLevel(level)
        if not actors then goto continue end

        -- Iterate through actors and draw containers on screen
        for j=0, actors.size-1 do
            local actor = mem.ReadPtr(actors.data + j * 8)
            if actor ~= 0 then
                drawContainer(actor)
            end
        end

        ::continue::
    end
end
