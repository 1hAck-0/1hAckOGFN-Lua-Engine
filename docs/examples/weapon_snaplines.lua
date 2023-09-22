--[[
    This script provides the ability to draw snaplines from the local player's weapon to enemy players.

    This script uses the following built-in libraries:
    - `unreal_engine`: To interact with Unreal Engine entities and functions.
    - `memory`: To handle memory operations, such as reading and writing data.
    - `fortnite`: For some fortnite specific interactions.
    - `renderer`: To draw the snaplines on the screen from the Game Thread.
]]

-- Importing required built-in libraries
local mem = require("memory", true)
local ue = require("unreal_engine", true)
local fortnite = require("fortnite", true)
local renderer = require("renderer", true)

-- ================= CLASSES ================

local pawnClass = ue.GetObject("Engine.Pawn")
assert(pawnClass, "Engine.Pawn class not found!")

local fortPawnClass = ue.GetObject("FortniteGame.FortPawn")
assert(fortPawnClass, "FortniteGame.FortPawn class not found!")

local fortPlayerPawn = ue.GetObject("FortniteGame.FortPlayerPawn")
assert(fortPlayerPawn, "FortniteGame.FortPlayerPawn class not found!")

local fortPlayerStateAthena = ue.GetObject("FortniteGame.FortPlayerStateAthena")
assert(fortPlayerStateAthena, "FortniteGame.FortPlayerStateAthena class not found!")

-- ================= OFFSETS ================

local playerStateOff = pawnClass:GetOffset("PlayerState")
assert(playerStateOff, "PlayerState offset not found!")

local currentWeaponOff = fortPawnClass:GetOffset("CurrentWeapon")
assert(currentWeaponOff, "CurrentWeapon offset not found!")

local teamIndexOff = fortPlayerStateAthena:GetOffset("TeamIndex")
assert(teamIndexOff, "TeamIndex offset not found!")

-- ================= GAME FUNCTIONS ================

local GetMuzzleLocationFunc = ue.GetObject("FortniteGame.FortWeapon:GetMuzzleLocation")
assert(GetMuzzleLocationFunc, "FortWeapon:GetMuzzleLocation function not found!")

-- The return value offset might vary across different versions of Fortnite
-- Calculating it dynamically based on function parameters
local GetMuzzleLocationRetOffset = 4 * (GetMuzzleLocationFunc:As("UFunctionMT"):GetNumParams() - 1)

function getMuzzleLocation(weapon)
    local paramsUd, params = mem.Alloc(16)
    mem.WriteInt(params, 0)

    -- Calling the game function to get weapon muzzle location
    if not ue.ProcessEvent(weapon, GetMuzzleLocationFunc:ptr(), params) then
        return nil
    end

    -- Reading and returning the weapon's muzzle location from memory
    return mem.ReadVec3(params + GetMuzzleLocationRetOffset)
end

-- ================= UTILITY FUNCTIONS ================

function isPlayerTeammate(player)
    local state = mem.ReadPtr(player + playerStateOff)
    if not state then return false end

    local teamIndex = mem.ReadUInt8(state + teamIndexOff)
    
    -- Checking if the player is a teammate based on the team index
    return teamIndex == fortnite.GetMyTeamIndex()
end

-- ================= MAIN LOGIC ================

local myWeaponScreenLoc = nil
function drawSnapline(actor)
    -- Ensure the actor is of the FortPlayerPawn class
    if not ue.IsObjectOfClass(actor, fortPlayerPawn:ptr()) then
        return
    end

    -- Do not draw snapline for teammates
    if isPlayerTeammate(actor) then return end

    -- Retrieve the location of player's head bone (id: 66)
    local head = fortnite.GetPlayerBone(actor, 66)
    if not head then return end

    local screenHead, onScreen = ue.WorldToScreen(head)
    if not onScreen then return end

    -- Draw a red snapline from the weapon to the player's head
    renderer.DrawLine(myWeaponScreenLoc, screenHead, 0xFF0000FF, 2.0)
end

function getMyWeaponScreenLoc()
    local localPawn = ue.GetLocalPawn()
    if not localPawn then return nil end

    local weapon = mem.ReadPtr(localPawn + currentWeaponOff)
    if weapon == 0 then return nil end

    local location = getMuzzleLocation(weapon)
    if not location then return nil end

    return ue.WorldToScreen(location)
end

function onGameTick()
    -- Update weapon's screen position for local player
    myWeaponScreenLoc = getMyWeaponScreenLoc()
    if not myWeaponScreenLoc then return end

    -- Iterate over all actors and draw snaplines to the players
    local actors = ue.GetActors()
    if not actors then return end

    for i=0, actors.size-1 do
        local actor = mem.ReadPtr(actors.data + i * 8)
        if actor ~= 0 then
            drawSnapline(actor)
        end
    end
end
