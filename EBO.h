#pragma once
#include "glew.h"
#include "glm/glm.hpp"

class EBO
{
	public:
		GLuint ebo;
		EBO(GLuint* indices, GLsizeiptr size);

		void Bind();
		void Unbind();
		void Delete();

};
