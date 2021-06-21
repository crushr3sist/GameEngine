#pragma once
#include "init.h"

class Window {
public:
	GLFWwindow* window;
	void WindowInstance(int windowHeight, int windowWidth, const char* windowTitle);
	void update();
	bool closed();
	void clear();
};