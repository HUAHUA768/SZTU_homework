#include <iostream>
#include "calc.h"

int main() {
    std::cout << "3 + 4 = " << add(3, 4) << std::endl;
    std::cout << "3 - 4 = " << sub(3, 4) << std::endl;
    std::cout << "3 * 4 = " << mul(3, 4) << std::endl;
    return 0;
}
