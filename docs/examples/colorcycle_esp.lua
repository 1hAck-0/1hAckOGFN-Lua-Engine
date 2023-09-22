--[[
    This script cycles through a range of specified colors for the built-in Player ESP feature.
    While this script may appear complex, it just leverages Lua and the provided built-in libraries, nothing new.
    By understanding the documentation of these libraries, navigating through this code becomes much simpler.
]]

-- Required built-in libraries
local imgui = require("imgui", true)
local config = require("config", true)

-- Configuration for the script
local myConfig = {
    colors = {
        vec4(0.3, 0.0, 0.5, 1.0), -- purple
        vec4(0.0, 0.0, 1.0, 1.0), -- blue
        vec4(0.0, 1.0, 0.0, 1.0), -- green
        vec4(1.0, 1.0, 0.0, 1.0), -- yellow
        vec4(1.0, 0.5, 0.0, 1.0), -- orange
        vec4(1.0, 0.0, 0.0, 1.0), -- red
    },

    cycleSpeed = 10.0,

    boxes = 2,
    snaplines = 2,
    skeletons = 2,
    offScreen = 2,
    labels = 2,

    originalColors = nil,

}



--- ============= MAIN =============

-- Non-saved script variables
local cycleProgress = 0.0
local lastTick = 0.0
local currentColor = vec4()

-- Function to retrieve original colors of the cheat config
function getOriginalColors()
    local all = config.GetCheatConfig()

    if not all or not all["Visuals"] or not all["Visuals"] then
        return nil
    end

    local playerEsp = all["Visuals"]["Player ESP"]
    if not playerEsp then
        return nil
    end

    local colorKeys = {
        "Box Color",
        "Snapline Color",
        "Skeleton Color",
        "Off Screen Indicator Color",
        "Player Label Color",

        "Box Visible Color",
        "Snapline Visible Color",
        "Skeleton Visible Color",
        "Off Screen Indicator Visible Color",
        "Player Label Visible Color",
    }

    local colors = {}
    for i, colorKey in ipairs(colorKeys) do
        colors[colorKey] = playerEsp[colorKey]
    end

    return colors
end

-- Save original colors to our custom configuration
function saveOrgColors()
    if not myConfig.originalColors then
        myConfig.originalColors = getOriginalColors()
    end
end

-- Restore the original colors from our custom configuration
function restoreOrgColors()
    if myConfig.originalColors then
        local settings = {
            ["Visuals"] = {
                ["Player ESP"] = myConfig.originalColors
            }
        }

        if config.ApplyCheatConfig(settings) then
            myConfig.originalColors = nil
        end
    end
end

-- Calculate the color for the current tick
function getNewTickColor()
    local numColors = #myConfig.colors
    if numColors <= 0 then
        return nil
    end

    local iColor = 1 + math.floor(numColors * cycleProgress)
    
    local currentColor = myConfig.colors[iColor]
    local targetColor = myConfig.colors[iColor % numColors + 1]

    local colorProgress = math.fmod(cycleProgress, 1 / numColors) * numColors
    local multColor = vec4(colorProgress, colorProgress, colorProgress, colorProgress)
    local newColor = currentColor + (targetColor - currentColor) * multColor

    return newColor
end

-- Construct the cheat configuration based on the given color
function getColorConfig(color)
    return {
        ["Box Visible Color"] =
            myConfig.boxes ~= 0 and color or myConfig.originalColors["Box Visible Color"],
        ["Box Color"] =
            myConfig.boxes == 2 and color or myConfig.originalColors["Box Color"],

        ["Snapline Visible Color"] =
            myConfig.snaplines ~= 0 and color or myConfig.originalColors["Snapline Visible Color"],
        ["Snapline Color"] =
            myConfig.snaplines == 2 and color or myConfig.originalColors["Snapline Color"],

        ["Skeleton Visible Color"] =
            myConfig.skeletons ~= 0 and color or myConfig.originalColors["Skeleton Visible Color"],
        ["Skeleton Color"] =
            myConfig.skeletons == 2 and color or myConfig.originalColors["Skeleton Color"],

        ["Off Screen Indicator Visible Color"] =
            myConfig.offScreen ~= 0 and color or myConfig.originalColors["Off Screen Indicator Visible Color"],
        ["Off Screen Indicator Color"] =
            myConfig.offScreen == 2 and color or myConfig.originalColors["Off Screen Indicator Color"],

        ["Player Label Visible Color"] =
            myConfig.labels ~= 0 and color or myConfig.originalColors["Player Label Visible Color"],
        ["Player Label Color"] =
            myConfig.labels == 2 and color or myConfig.originalColors["Player Label Color"],
    }
end

-- Return cheat color configuration for this tick
function getCheatColorConfig()
    local newColor = getNewTickColor()
    if not newColor then
        return nil
    end
    currentColor = newColor

    newColor = imgui.ColorConvertVec4ToU32(newColor)
    local colorConfig = {
        ["Visuals"] = {
            ["Player ESP"] = getColorConfig(newColor)
        }
    }

    return colorConfig
end



--- ============= EVENTS =============

-- Runs when script starts
function onRun()
    lastTick = getUpTime()
    saveOrgColors()
    return true
end

-- Runs when script stops
function onStop()
    restoreOrgColors()
    return true
end

-- Runs every rendering tick
function onRenderTick()
    -- Update the Player ESP colors
    local newColors = getCheatColorConfig()
    config.ApplyCheatConfig(newColors)

    -- Update progress
    local thisTick = getUpTime()
    local newProgess = (thisTick - lastTick) / math.abs(myConfig.cycleSpeed)

    cycleProgress = math.fmod(cycleProgress + newProgess, 1.0)
    lastTick = thisTick
end

-- Save the script configuration
function onSaveConfig()
    config.SaveMyConfig(myConfig)
end

-- Load the script configuration
function onLoadConfig()
    local newConfig = config.GetMyConfig()

    if config.ApplyMyConfig(myConfig, newConfig) then

        if type(newConfig.colors) == "table" then
            myConfig.colors = newConfig.colors
        end

        if type(newConfig.originalColors) == "table" then
            myConfig.originalColors = newConfig.originalColors
        else
            myConfig.originalColors = nil
            saveOrgColors()
        end

    end
end

-- Function to manage script settings in the GUI
local colEditFlags = combineFlags(ImGuiColorEditFlags_NoInputs, ImGuiColorEditFlags_HoverPreview, ImGuiColorEditFlags_AlphaBar)
local colEditReadonlyFlags = combineFlags(colEditFlags, ImGuiColorEditFlags_NoPicker)
function onSettings()
    -- GUI components

    imgui.ColorEdit("Current Color", currentColor, colEditReadonlyFlags)

    imgui.Spacing()

    imgui.SetNextItemWidth(250.0)
    myConfig.cycleSpeed = imgui.SliderPro("Cycle Speed", myConfig.cycleSpeed, 0.1, 30, "%.1fs")

    imgui.Spacing()
    imgui.Spacing()
    imgui.Separator()

    local componentOptions = { "Never", "Visible", "Always" }
    imgui.SetNextItemWidth(100)
    myConfig.boxes = imgui.Combo("Boxes", myConfig.boxes, componentOptions)
    imgui.SetNextItemWidth(100)
    myConfig.snaplines = imgui.Combo("Snaplines", myConfig.snaplines, componentOptions)
    imgui.SetNextItemWidth(100)
    myConfig.skeletons = imgui.Combo("Skeletons", myConfig.skeletons, componentOptions)
    imgui.SetNextItemWidth(100)
    myConfig.offScreen = imgui.Combo("Off Screen Indicators", myConfig.offScreen, componentOptions)
    imgui.SetNextItemWidth(100)
    myConfig.labels = imgui.Combo("Player Labels", myConfig.labels, componentOptions)

    imgui.Separator()
    imgui.Spacing()
    imgui.Spacing()

    imgui.BeginChild("colors child", vec2(300, 150))

    local toRemove = 0
    for i, color in ipairs(myConfig.colors) do
        imgui.PushID(i)
        myConfig.colors[i] = imgui.ColorEdit("Color "..i, color, colEditFlags)

        if i > 1 then
            imgui.SameLine(0, 5)

            if imgui.Button("Remove") and toRemove == 0 then
                toRemove = i
            end
        end

        imgui.PopID()
    end

    if toRemove ~= 0 then
        table.remove(myConfig.colors, toRemove)
    end

    if imgui.Button("New Color") then
       table.insert(myConfig.colors, vec4(1, 0, 0, 1))
    end

    imgui.EndChild()
    imgui.Spacing()
    imgui.Spacing()

    if imgui.Button("OK") then
        return true
    end

    return false
end
