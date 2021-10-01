#include "init.h"
#include "window.h"
#include "triangles.cpp"

int main() {
	initaliseLibrary();
	Window mainWindow;
	mainWindow.WindowInstance(600, 800, "hello world");
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
	unsigned int shader = createShader(vertexShader, fragmentShader);
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