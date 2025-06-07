#include "pch.h"
#include "StrawberryCheesecakeTheme.h"

BAKKESMOD_PLUGIN(StrawberryCheesecakeTheme, "StrawberryCheesecake Theme for bakkesmod", plugin_version, PLUGINTYPE_FREEPLAY)

void StrawberryCheesecakeTheme::onLoad()
{
	// Plugin doesnt load the gui stuff *right away* so you take x amount of ms for it to load.
	// instantly close menu because we dont care about it, just need it to style everything.
	cvarManager->executeCommand("sleep 100;openmenu StrawberryCheesecakeTheme;sleep 1;closemenu StrawberryCheesecakeTheme");
	// unload the plugin because it is no longer needed
	cvarManager->executeCommand("sleep 111;plugin unload strawberrycheesecaketheme");
}
void StrawberryCheesecakeTheme::RenderWindow()
{
	ImGuiStyle& style = ImGui::GetStyle();
	ImVec4* colors = style.Colors;

	ImVec4 Text = ImVec4{ 0.9f, 0.9f, 0.9f, 1.0f };
	ImVec4 TextDisabled = ImVec4(0.45f, 0.45f, 0.45f, 1.00f);
	ImVec4 Primary = ImGui::ColorConvertU32ToFloat4(IM_COL32(255, 92, 143, 255));
	ImVec4 Hovered = ImVec4(0.9f, 0.30f, 0.50f, 1.f);
	ImVec4 Active = ImVec4(1.0f, 0.45f, 0.65f, 1.0f);
	ImVec4 WindowBG = ImVec4(0.1f, 0.1f, 0.1f, 1.0f);
	ImVec4 Nothing = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	ImVec4 third = ImVec4(0.33f, 0.33f, 0.33f, 1.0f);

	colors[ImGuiCol_Text] = Text;
	colors[ImGuiCol_TextDisabled] = TextDisabled;
	colors[ImGuiCol_WindowBg] = WindowBG;
	colors[ImGuiCol_PopupBg] = WindowBG;
	colors[ImGuiCol_ChildBg] = Nothing;
	colors[ImGuiCol_Border] = third;
	colors[ImGuiCol_BorderShadow] = Nothing;
	colors[ImGuiCol_FrameBg] = ImVec4(0.18f, 0.18f, 0.18f, 1.0f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.28f, 0.28f, 0.28f, 1.00f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.28f, 0.28f, 0.28f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.18f, 0.18f, 0.18f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.12f, 0.12f, 0.12f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.60f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.27f, 0.27f, 0.27f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.37f, 0.37f, 0.37f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.47f, 0.47f, 0.47f, 1.00f);
	colors[ImGuiCol_CheckMark] = Primary;
	colors[ImGuiCol_SliderGrab] = Primary;
	colors[ImGuiCol_SliderGrabActive] = Hovered;
	colors[ImGuiCol_Button] = Primary;
	colors[ImGuiCol_ButtonHovered] = Hovered;
	colors[ImGuiCol_ButtonActive] = Active;
	colors[ImGuiCol_Header] = Primary;
	colors[ImGuiCol_HeaderHovered] = ImGui::ColorConvertU32ToFloat4(IM_COL32(255, 122, 163, 255));
	colors[ImGuiCol_HeaderActive] = Active;
	colors[ImGuiCol_Separator] = third;
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.47f, 0.47f, 0.54f, 1.00f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.57f, 0.57f, 0.64f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = Primary;
	colors[ImGuiCol_ResizeGripHovered] = Hovered;
	colors[ImGuiCol_ResizeGripActive] = Active;
	colors[ImGuiCol_Tab] = Primary;
	colors[ImGuiCol_TabHovered] = Hovered;
	colors[ImGuiCol_TabActive] = Active;
	colors[ImGuiCol_TabUnfocused] = Primary;
	colors[ImGuiCol_TabUnfocusedActive] = Active;

	colors[ImGuiCol_PlotLines] = Primary;
	colors[ImGuiCol_PlotLinesHovered] = Hovered;
	colors[ImGuiCol_PlotHistogram] = Primary;
	colors[ImGuiCol_PlotHistogramHovered] = Hovered;

	style.WindowRounding = 5.0f;
	style.ChildRounding = 2.0f;
	style.FrameRounding = 3.0f;
	style.PopupRounding = 6.0f;
	style.ScrollbarRounding = 6.0f;
	style.GrabRounding = 6.0f;
	style.TabRounding = 6.0f;
	style.FramePadding = ImVec2(4.f, 6.f);
	style.ItemSpacing = ImVec2(4, 4);
	style.IndentSpacing = 20.0f;
	style.ScrollbarSize = 14.0f;
	style.GrabMinSize = 10.0f;
	style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
	style.WindowMinSize = ImVec2{ 1.0f, 1.0f };
	style.WindowPadding = ImVec2{ 10.0f, 10.0f };
	style.Alpha = 0.85f;
}
