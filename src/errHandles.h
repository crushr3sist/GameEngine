#pragma once

#include <glew.h>
#include <string>
#include <iostream>

void ClearError();
bool CheckError(std::string function, std::string file, int line);

#define ASSERT(x) if (!(x)) __debugbreak();
#define Error(x) ClearError(); x; ASSERT(CheckError(#x, __FILE__, __LINE__));