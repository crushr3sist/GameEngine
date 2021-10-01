#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

#include "window.h"
#include "triangle.h"
#include "shaders.h"

bool initGLFW();
bool initGLEW();
int initaliseLibrary();

static void ClearError();
static bool CheckError(std::string function, std::string file, int line);