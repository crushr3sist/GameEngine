#pragma once

#include <string>
#include <iostream>
#include <GL/glew.h>
#include "errHandles.h"


unsigned int compileShader(unsigned int type, const std::string& source);

unsigned int createShader(const std::string& vertexShader, const std::string& fragmentShader);

