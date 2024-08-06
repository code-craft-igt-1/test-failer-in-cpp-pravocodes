#include <assert.h>
#include <iostream>
#include <sstream>
#include <string>
#include "GenerateColorMap.h"

std::string generateColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    std::ostringstream colorMapStream;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            colorMapStream << (i * 5 + j + 1
            ) << " | " << majorColor[i] << " | " 
            << minorColor[i] << "\n";
        }
    }
    return colorMapStream.str();
}

int printColorMap() {
    std::string colorMap = generateColorMap();
    std::cout << colorMap;
    return 25;
}

