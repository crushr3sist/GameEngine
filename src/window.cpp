#include "window.h"


GLFWwindow* Window::WindowInstance(int windowHeight, int windowWidth, const char* windowTitle)
{
    if (!glfwInit()) {
        std::cout << "error! GLFW init" << std::endl;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);

    window = glfwCreateWindow(windowHeight, windowWidth, "OpenGL", NULL, NULL);
    if (!window) {
        glfwTerminate();
    }

    glfwMakeContextCurrent(window);

    GLenum err = glewInit();

    if (err != GLEW_OK)
    {
        std::cout << "glew was not initalised" << glewGetErrorString(err);
    }
    else 
    {
        std::cout << "glew was initalised";
    }
    return window;
}

void Window::update()
{
    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();
}

bool Window::closed()
{
    return glfwWindowShouldClose(window);
}

void Window::clear()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
