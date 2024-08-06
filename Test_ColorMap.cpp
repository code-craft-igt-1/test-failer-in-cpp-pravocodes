#include "GenerateColorMap.h"
#include "ExpectedColorMap.h"
#include <iostream>
#include <cassert>

void TestForColorMapping(){
    assert(generateColorMap() == expectedColorMap);
    assert(printColorMap() == 25);
    std::cout << "All is well (maybe!)\n";
}