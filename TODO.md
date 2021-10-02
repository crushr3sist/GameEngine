-   remove the window class and impliment this function 
```cpp

GLFWwindow* InitaliseGLFW(int window_width, int window_height, int OpenGL_Version){
    if (!glfwInit()){
        std::cout << "error! GLFW init" << std::endl;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);

    window = glfwCreateWindow(windowHeight, windowWidth, windowTitle, NULL, NULL);

    if (!window) {
        glfwTerminate();
    }
    GLFWwindow* window = glfwCreateWindow(window_width, window_height, "OpenGL", NULL, NULL);
    glfwMakeContextCurrent(window);
    return window;

}
```

