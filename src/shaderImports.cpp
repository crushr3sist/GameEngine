#include "shaderImports.h"

string ImportShader(string filepath) {
    string shader;
    fstream myFile;
    myFile.open(filepath, ios:: in );
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            shader += line + "\n";
        }
    }

    return shader;
}
