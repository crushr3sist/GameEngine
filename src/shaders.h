#pragma once

#include <string>
#include <iostream>
#include <GL/glew.h>
#include "errHandles.h"


unsigned int compileShader(unsigned int type, const std::string& source);

extern unsigned int CreateShader(std::string vertexShader, std::string fragmentShader);

