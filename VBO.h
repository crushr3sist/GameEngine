#pragma once
#include "glew.h"
#include "glm/glm.hpp"

class VBO
{
	public:
		GLuint vbo;
		VBO(GLfloat* vertices, GLsizeiptr size);

		void Bind();
		void Unbind();
		void Delete ();
	
};
