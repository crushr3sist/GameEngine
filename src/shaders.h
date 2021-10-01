#pragma once

#include <string>
#include <GL/glew.h>


static unsigned int compileShader(unsigned int type, const std::string& source);

static unsigned int createShader(const std::string& vertexShader, const std::string& fragmentShader);

std::string vertexShader =
"#version 330 core\n"
"\n"
"layout(location = 0) in vec4 position;\n"
"\n"
"void main()\n"
"{\n"
"	gl_position = position;\n"
"}\n";

std::string fragmentShader =
"#version 330 core\n"
"\n"
"layout(location = 0) in vec4 color;\n"
"\n"
"void main()\n"
"{\n"
"	color = vec4(1.0, 0.0, 0.0, 1.0);\n"
"}\n";