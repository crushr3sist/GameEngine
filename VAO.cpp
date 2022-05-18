#include "VAO.h"
#include "VBO.h"


VAO::VAO()
{
	glGenVertexArrays(1, &vao);
	
}

void VAO::LinkVBO(VBO VBO, GLuint layout)
{
	VBO.Bind();
	glVertexAttribPointer(layout, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
	glEnableVertexAttribArray(layout);
	
	VBO.Unbind();
	
}


void VAO::Bind()
{
	glBindVertexArray(vao);
}

void VAO::Unbind()
{
	glBindVertexArray(0);
	
}

void VAO::Delete()
{
	glDeleteVertexArrays(1, &vao);
	
}

void VAO::draw()
{
	glDrawArrays(GL_TRIANGLES, 0, 3);
}
