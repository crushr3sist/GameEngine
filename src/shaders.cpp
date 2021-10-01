#include "shaders.h"


unsigned int compileShader(unsigned int type, const std::string& source)
{
	unsigned int id = glCreateShader(type);
	const char* src = source.c_str();
	glShaderSource(id, 1, &src, nullptr);
	glCompileShader(id);

	return id;
}

GLuint createShader(const std::string& vertexShader, const std::string& fragmentShader){
	Error( GLuint program = glCreateProgram());
	int vertexShadersrc = compileShader(GL_VERTEX_SHADER, vertexShader);
	int fragmentShadersrc = compileShader(GL_FRAGMENT_SHADER, fragmentShader);

	glAttachShader(program, vertexShadersrc);
	glAttachShader(program, fragmentShadersrc);
	glLinkProgram(program);
	glValidateProgram(program);

	glDeleteShader(program);

	return program;
}


