#include "errHandles.h"

static void ClearError() {
	while (glGetError() != GL_NO_ERROR);
}

static bool CheckError(std::string function, std::string file, int line) {
	while (GLenum error = glGetError()) {
		std::cout << "OpenGL Error (" << error << ") Line (" << line << ") File (" << file << ")" << std::endl;
		return false;
	}
	return true;
}
