--[[
    This script demonstrates the usage of the onSettings, onSaveConfig, and onLoadConfig events.
    The main purpose is to showcase how settings can be managed in your scripts.
    This includes creating a user interface for adjusting settings and handling save/load events.
]]

-- Load necessary built-in libraries
local imgui = require("imgui", true)
local config = require("config", true)

-- Default settings for the application
local settings = {
    speed = 1.0,
    multiplier = 3
}

-- This event handles the user interface for the settings
function onSettings()
    -- Create a slider for adjusting the speed setting
    imgui.SetNextItemWidth(200.0)
    settings.speed = imgui.SliderPro("Speed", settings.speed, 1.0, 20.0, "%.1f")

    -- Separate UI elements for a cleaner layout
    imgui.Separator()

    -- Create an input field for adjusting the multiplier setting
    imgui.SetNextItemWidth(100.0)
    settings.multiplier = imgui.InputInt("Multiplier", settings.multiplier, 1, 5)

    -- Here's where you can add additional widgets if needed

    -- Additional separators and spacing for a cleaner layout
    imgui.Separator()
    imgui.Spacing()
    imgui.Spacing()

    -- An "OK" button that, when pressed, closes the settings popup
    if imgui.Button("OK") then
        return true -- Close the popup
    end

    return false -- If "OK" is not pressed, keep the settings popup open
end

-- This event handles saving the settings to a config
function onSaveConfig()
    -- Save the current settings
    config.SaveMyConfig(settings)
end

-- This event handles loading the settings from a config
function onLoadConfig()
    -- Safely load and apply the settings if available
    config.ApplyMyConfig(settings, config.GetMyConfig())
end
