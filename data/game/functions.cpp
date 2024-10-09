#include "functions.h"
#include <cstdlib>
#include <fstream>

void clear(){
    #ifdef _WIN32
        system("cls");
    #elif defined(__APPLE__) || defined(__MACH__)
        system("clear");
    #else
        system("clear");
    #endif
}
