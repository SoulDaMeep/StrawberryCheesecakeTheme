#pragma once

#include "GuiBase.h"
#include "bakkesmod/plugin/bakkesmodplugin.h"
#include "bakkesmod/plugin/pluginwindow.h"
#include "bakkesmod/plugin/PluginSettingsWindow.h"

#include "version.h"
constexpr auto plugin_version = "1.0";
class StrawberryCheesecakeTheme: public BakkesMod::Plugin::BakkesModPlugin
	,public PluginWindowBase
{
	void onLoad() override;
	void RenderWindow() override; 
};
