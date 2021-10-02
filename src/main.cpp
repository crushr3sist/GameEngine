#include "window.h"


int main()
{
	Window mainWindow;
	mainWindow.WindowInstance(600, 800, "hello world");

	while (!mainWindow.closed())
	{
		mainWindow.clear();
		/////////////////////////////
		///your code goes here kek///
		/////////////////////////////


		mainWindow.update();
	}

}


















//#include "init.h"
//#include "shaders.h"

//std::string VertexShader =
//	"#version 410 core\n"
//	"\n"
//	"layout(location = 0) in vec4 position;\n"
//	"\n"
//	"void main()\n"
//	"{\n"
//	"	gl_position = position;\n"
//	"}\n";
//
//std::string FragmentShader =
//	"#version 410 core\n"
//	"\n"
//	"layout(location = 0) out vec4 color;\n"
//	"\n"
//	"void main()\n"
//	"{\n"
//	"	color = vec4(1.0, 0.0, 0.0, 1.0);\n"
//	"}\n";

//int main() {
//
//	initaliseLibrary();
//
//	printf("OpenGL version supported by this platform (%s): \n",
//		glGetString(GL_VERSION));
//
//	GLFWwindow* mainWindow = InitaliseGLFW(600, 800, 3);
//
//	unsigned int shader = CreateShader(VertexShader, FragmentShader);
//	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
//	float positions[] = {
//	-0.5f, -0.5f, 0.0f,
//	 0.5f, -0.5f, 0.0f,
//	 0.0f,  0.5f, 0.0f
//	};
//	while (!mainWindow)
//	{
//
//
//		DrawTriangle(positions, 3, shader);
//		
//	}
//}
