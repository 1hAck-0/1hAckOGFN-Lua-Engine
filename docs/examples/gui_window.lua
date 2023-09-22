--[[
    This script creates a custom ImGui window that is integrated into the cheat overlay.
    It allows users to toggle the visibility of the window using a predefined hotkey.
    Inside the window, there are two labeled child elements where custom content can be added.
]]

-- Required built-in libraries
local imgui = require("imgui", true)
local input = require("input", true)

-- Define the hotkey for toggling window visibility (Default is F5)
local windowHotkey = input.HotkeyCollection(INPUT_VK_F5, 1)

-- Define the default window state as open
local myWindowOpen = true

-- Combine window flags
local myWindowFlags = combineFlags(ImGuiWindowFlags_NoCollapse, ImGuiWindowFlags_NoResize)

-- Function that runs when script starts; sets the window to open
function onRun()
    myWindowOpen = true
    return true
end

-- This function manages the window rendering every tick
function onWindowsTick()
    -- Check if the hotkey to toggle window visibility is pressed
    if windowHotkey:IsActive() then
        windowHotkey:Reset()
        myWindowOpen = not myWindowOpen
    end

    -- Exit early if the window shouldn't be displayed
    if not myWindowOpen then
        return
    end

    -- Start the custom window
    local begin, windowOpen = imgui.Begin("Custom Window", myWindowOpen, myWindowFlags)
    myWindowOpen = windowOpen

    -- Exit if the window cannot begin
    if not begin then
        return
    end

    -- Set a fixed size for the window
    imgui.SetWindowSize(vec2(300, 250))

    -- Allow the user to modify the window hotkey from the GUI
    windowHotkey:ModifyButton("My Script Window Hotkeys", "Toggle Hotkeys")

    -- Visual spacing for better layout
    imgui.Spacing()
    imgui.Spacing()
    imgui.Spacing()

    -- Begin the first child content section
    imgui.BeginLabeledChild("Child 1", vec2(135, 150), true)
    -- Insert custom content for Child 1 here
    imgui.EndLabeledChild()

    -- Move cursor for the next child section
    imgui.SameLine()

    -- Begin the second child content section
    imgui.BeginLabeledChild("Child 2", vec2(135, 150), true)
    -- Insert custom content for Child 2 here
    imgui.EndLabeledChild()

    -- End the custom window
    imgui.End()
end
