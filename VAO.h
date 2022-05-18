#pragma once

#include "glew.h"
#include "VBO.h"

class VAO
{
public:
	GLuint vao;

	VAO();

	void LinkVBO(VBO VBO, GLuint layout);
	void Bind();
	void Unbind();
	void Delete();
	void draw();

};