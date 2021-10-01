#include "triangle.h"
#include "errHandles.h"

void DrawTriangle(float positions[], unsigned int dimensions, unsigned int shader) {
	unsigned int buffer;
	Error(glGenBuffers(1, &buffer));
	Error(glBindBuffer(GL_ARRAY_BUFFER, buffer));
	Error(glBufferData(GL_ARRAY_BUFFER, 9 * sizeof(float), positions, GL_STATIC_DRAW));
	
	Error(glEnableVertexAttribArray(0));
	Error(glVertexAttribPointer(0, dimensions, GL_FLOAT, GL_FALSE, sizeof(float) * dimensions, 0));

	Error(glUseProgram(shader));
	glDrawArrays(GL_TRIANGLES, 0, 6);
	glDeleteBuffers(1, &buffer);
}