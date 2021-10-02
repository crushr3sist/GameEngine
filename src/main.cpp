#include "window.h"
#include "shaders.h"
#include "triangle.h"
#include "shaderImports.h"


std::string VertexShader = ImportShader("src/shaders/VertexShader.shader");

std::string FragmentShader = ImportShader("src/shaders/FragmentShader.shader");


int main()
{
	Window mainWindow;
	mainWindow.WindowInstance(600, 800, "hello world");
	//glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
	unsigned int shader = CreateShader(VertexShader, FragmentShader);

	float positions[] = {
		-0.5f, -0.5f, 0.0f,
		 0.5f, -0.5f, 0.0f,
		 0.0f,  0.5f, 0.0f
	};
	while (!mainWindow.closed())
	{
		mainWindow.clear();
		DrawTriangle(positions, 3, shader);
		mainWindow.update();
		
		
		
	}
}