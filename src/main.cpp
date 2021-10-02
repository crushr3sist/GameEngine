#include "gl3w.h"
#include "GLFW/glfw3.h"
#include <iostream>
#include <string>


int main()
{
	if (!glfwInit())
	{
		std::cout << "glfw WAS NOT initalised :(\n";
	}
	else 
	{
		std::cout << "glfw WAS initalised :) \n";
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	}
	if (gl3wInit())
	{
		printf("OpenGL %s, GLSL %s\n", glGetString(GL_VERSION), glGetString(GL_SHADING_LANGUAGE_VERSION));
	}
	else 
	{
		//std::cout << "glfw WAS initalised :)\n";
		printf("OpenGL %s, GLSL %s\n", glGetString(GL_VERSION), glGetString(GL_SHADING_LANGUAGE_VERSION));
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
