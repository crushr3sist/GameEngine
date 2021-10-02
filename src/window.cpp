//#include "window.h"
//#include "init.h"
//
//
//
//GLFWwindow* InitaliseGLFW(int window_width, int window_height, int OpenGL_Version) {
//    if (!glfwInit()) {
//        std::cout << "error! GLFW init" << std::endl;
//    }
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);
// 
//    GLFWwindow* window = glfwCreateWindow(window_width, window_height, "OpenGL", NULL, NULL);
//    if (!window) {
//        glfwTerminate();
//    }
//    glfwMakeContextCurrent(window);
//    return window;
//
//}

//void update()
//{
//    glfwSwapBuffers(window);
//
//    /* Poll for and process events */
//    glfwPollEvents();
//}
//
//bool closed() {
//    return glfwWindowShouldClose(window);
//}
//void clear()
//{
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//}

