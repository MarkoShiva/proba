// vim: set undofile:
// Program: razlomak

#include "Razlomak.h"

#include <iostream>

int main(int argc, const char *argv[])
{
    Razlomak r(0, 1);

    std::cin >> r;

    std::cout << r << std::endl;

    std::cout << r++ << std::endl;

    std::cout << ++r << std::endl;

    double d = r;

    std::cout << d << std::endl;

    return 0;
}
