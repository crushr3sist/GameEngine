//#include "init.h"
//
//static void error_callback(int error, const char* description){
//	fprintf(stderr, "Error: %s\n", description);
//}
//
//bool initGLFW(){  
//	if (!glfwInit()) {
//		glfwSetErrorCallback(error_callback);
//		glfwTerminate();
//		return false;
//	}
//	else{
//		return true;
//	}
//}
//
//bool initGLEW()
//{
//	GLenum err = glewInit();
//	if (err != GLEW_OK)
//	{
//		//Problem: glewInit failed, something is seriously wrong.
//		std::cout << "glewInit failed, aborting." << std::endl;
//		return false;
//	}
//	return true;
//}
//
//int initaliseLibrary(){
//	
//	if (initGLFW() == true) {
//		std::cout << "GLFW:\nWas Initalised correctly\n";
//		return true;
//	}
//
//	if (initGLEW() == true) {
//		std::cout << "GLEW:\nWas Initalised correctly\n";
//		return true;
//	}
//	else {
//		return false;
//
//	}
//}
