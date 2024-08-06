#include <cassert>
#include <iostream>
#include "TshirtSizeClassifier.h"
#include "Test_Tshirt.h"

void TestForTshirtSizeClassifier() {
    assert(SizeChecker(37) == 'S');
    assert(SizeChecker(38) == 'S');
    assert(SizeChecker(40) == 'M');
    assert(SizeChecker(41) == 'M');
    assert(SizeChecker(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}

