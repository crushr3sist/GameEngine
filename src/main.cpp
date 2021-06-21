#include "init.h"
#include "window.h"

int main() {
	initaliseLibrary();
	Window mainWindow;
	mainWindow.WindowInstance(600, 800, "hello world");
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	while (!mainWindow.closed())
	{

		mainWindow.clear();
		glBegin(GL_TRIANGLES);
			glVertex2f(-0.5f, -0.5f);
			glVertex2f(0.0f, 0.5f);
			glVertex2f(0.5f, -0.5f);
		glEnd();
		mainWindow.update();
	}
}