#include "triangle.h"
#include "glew.h"

void DrawTriangle(float positions[], unsigned int dimensions, unsigned int shader) {
	unsigned int buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, 9 * sizeof(float), positions, GL_STATIC_DRAW);
	
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, dimensions, GL_FLOAT, GL_FALSE, sizeof(float) * dimensions, 0);

	glUseProgram(shader);
	glDrawArrays(GL_TRIANGLES, 0, 6);
	glDeleteBuffers(1, &buffer);
}

