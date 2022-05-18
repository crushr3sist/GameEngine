#include "shaders.h"


unsigned int compileShader(unsigned int type,
    const std::string & source) {
    unsigned int id = glCreateShader(type);
    const char * src = & source[0];
    glShaderSource(id, 1, & src, nullptr);
    glCompileShader(id);

    return id;
}

extern unsigned int CreateShader(std::string vertexShader, std::string fragmentShader) {
    int x = 1;
    unsigned int program = glCreateProgram();
    unsigned int vs = compileShader(GL_VERTEX_SHADER, vertexShader);
    unsigned int fs = compileShader(GL_FRAGMENT_SHADER, fragmentShader);

    glAttachShader(program, vs);
    glAttachShader(program, fs);
    glLinkProgram(program);
    glValidateProgram(program);
    glDeleteShader(vs);
    glDeleteShader(fs);

    return program;

}
