#include "../VBO.h"
#include "../VAO.h"
#include "../EBO.h"
#include "window.h"
#include "shaders.h"
#include "triangle.h"
#include "shaderImports.h"
#include "triangle.h"

#include <vector>

std::string VertexShader = ImportShader("src/shaders/VertexShader.shader");

std::string FragmentShader = ImportShader("src/shaders/FragmentShader.shader");

GLfloat positions[] = {
    0.5f,  0.5f, 0.0f,  // top right
     0.5f, -0.5f, 0.0f,  // bottom right
    -0.5f,  0.5f, 0.0f,  // top left 
    // second triangle
     0.5f, -0.5f, 0.0f,  // bottom right
    -0.5f, -0.5f, 0.0f,  // bottom left
    -0.5f,  0.5f, 0.0f

};

GLuint indices[] = {
    0,1,2,
    3,4,5
};

int main() {
    Window mainWindow;

    mainWindow.WindowInstance(600, 800, "hello world");
    unsigned int shader = CreateShader(VertexShader, FragmentShader);


    VAO vao;
    vao.Bind();
	
	VBO vbo(positions, sizeof(positions));
	EBO ebo(indices, sizeof(indices));
	
	vao.LinkVBO(vbo, 0);
	
    while (!mainWindow.closed()) {

        mainWindow.clear();
		DrawTriangle(positions, 6, shader);			
        vao.Bind();
        mainWindow.update();

    }
    

}