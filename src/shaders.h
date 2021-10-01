#pragma once

#include <string>
#include <iostream>
#include <GL/glew.h>
#include "errHandles.h"


unsigned int compileShader(unsigned int type, const std::string& source);

GLuint createShader(const std::string& vertexShader, const std::string& fragmentShader);

