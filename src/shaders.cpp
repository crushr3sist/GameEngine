//#include "shaders.h"
//
//
//unsigned int compileShader(unsigned int type, const std::string& source)
//{
//	unsigned int id = glCreateShader(type);
//	const char* src = &source[0];
//	Error(glShaderSource(id, 1, &src, nullptr));
//	Error(glCompileShader(id));
//
//
//	return id;
//}
//
//extern unsigned int CreateShader(std::string vertexShader, std::string fragmentShader)
//{
//	int x = 1;
//	Error(unsigned int program = glCreateProgram());
//	unsigned int vs = compileShader(GL_VERTEX_SHADER, vertexShader);
//	unsigned int fs = compileShader(GL_FRAGMENT_SHADER, fragmentShader);
//
//	Error(glAttachShader(program, vs));
//	Error(glAttachShader(program, fs));
//	Error(glLinkProgram(program));
//	Error(glValidateProgram(program));
//	Error(glDeleteShader(vs));
//	Error(glDeleteShader(fs));
//
//	return program;
//
//}
//
//
//
