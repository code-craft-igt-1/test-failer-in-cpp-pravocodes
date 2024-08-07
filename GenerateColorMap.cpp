#include <assert.h>
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include "GenerateColorMap.h"

std::string generateColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    std::ostringstream colorMapStream;
    colorMapStream << std::setw(5) << "No." << std::setw(19) << "Major Color";
    colorMapStream << std::setw(19) << "Minor Color" << std::endl;
    colorMapStream << "----------------------------------------------" << std::endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            colorMapStream << std::setw(5) << (i * 5 + j + 1) << "    |";
            colorMapStream << std::setw(15) << majorColor[i] << "    |";
            colorMapStream << std::setw(15) << minorColor[i] << std::endl;
        }
    }
    return colorMapStream.str();
}

int printColorMap() {
    std::string colorMap = generateColorMap();
    std::cout << colorMap;
    return 25;
}
