// Copyright 2014 Dolphin Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#include "Common/MsgHandler.h"
#include "Core/Host.h"

void Host_Message(int id)
{
	// TODO
}

void Host_UpdateMainFrame()
{
	// TODO
}

void Host_UpdateTitle(const std::string& title)
{
	// TODO
}

void* Host_GetRenderHandle()
{
   return NULL;
}

void Host_RequestRenderWindowSize(int w, int h)
{
}

bool Host_RendererHasFocus()
{
   return true;
}

bool Host_UIHasFocus()
{
   return false;
}

bool Host_RendererIsFullscreen()
{
	return true;
}

void Host_RequestFullscreen(bool enable)
{
	// TODO
}

void Host_NotifyMapLoaded()
{
	// TODO
}

void Host_UpdateDisasmDialog()
{
	// TODO
}

void Host_SetStartupDebuggingParameters()
{
	// TODO
}

void Host_SetWiiMoteConnectionState(int state)
{
	// TODO
}

void Host_ConnectWiimote(int wm_idx, bool connect)
{
	// TODO
}

void Host_ShowVideoConfig(void* parent, const std::string& backend_name,
                          const std::string& config_name)
{
	// TODO
}

void Host_RefreshDSPDebuggerWindow()
{
	// TODO
}
