#include "VBO.h"

VBO::VBO(GLfloat* vertices, GLsizeiptr size)
{
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, size, vertices, GL_STATIC_DRAW);
}

void VBO::Bind()
{
	glBindBuffer(GL_ARRAY_BUFFER, vbo);

	
}

void VBO::Unbind()
{
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	
}

void VBO::Delete()
{
	glDeleteBuffers(1, &vbo);
	
}


