#pragma once

#include <GL/glew.h>
#include <string>
#include <iostream>

static void ClearError();
static bool CheckError(std::string function, std::string file, int line);

#define ASSERT(x) if (!(x)) __debugbreak();
#define Error(x) ClearError(); x; ASSERT(CheckError(#x, __FILE__, __LINE__));