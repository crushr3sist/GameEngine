#include "window.h"



void Window::WindowInstance(int windowHeight, int windowWidth, const char* windowTitle)
{
    window = glfwCreateWindow(windowHeight, windowWidth, windowTitle, NULL, NULL);

    if (!window) {
        glfwTerminate();
    }
    glfwMakeContextCurrent(window);
}

void Window::update()
{
    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();
}

bool Window::closed() {
    return glfwWindowShouldClose(window);
}
void Window::clear()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}

