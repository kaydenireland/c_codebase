#include "os.h"

OS getOS(void) {
    #ifdef _WIN32 
        return Windows;
    #elif __linux__ 
        return Linux;
    #elif __APPLE__ 
        return MacOS;
    #else 
        return Unknown;

    #endif
}