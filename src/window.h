#pragma once

#include <glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>

class Window {
public:
	GLFWwindow* window;
	GLFWwindow* WindowInstance(int windowHeight, int windowWidth, const char* windowTitle);
	void update();
	bool closed();
	void clear();
};
