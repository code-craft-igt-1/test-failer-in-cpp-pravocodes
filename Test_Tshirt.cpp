#include <cassert>
#include <iostream>
#include "TshirtSizeClassifier.h"

void TestForTshirtSizeClassifier(){
    assert(SizeChecker(37) == 'S');
    assert(SizeChecker(38) == 'S' || SizeChecker(38)=='M');
    assert(SizeChecker(40) == 'M');
    assert(SizeChecker(41) == 'M' || SizeChecker(41)=='L');
    assert(SizeChecker(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}