#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    unsigned int u = 10;
    int i = -42;
    std::cout << "(-42).ui+(-42).i=" << i + i << std::endl;
    std::cout << "10.ui+(-42).i=" << u + i << std::endl;
    unsigned u1 = 42, u2 = 10;
    std::cout << "42.ui-10.i=" << u1 - u2 << std::endl;
    std::cout << "10.i-42.ui=" << u2 - u1 << std::endl;
    int a = -1;
    unsigned int b = 1;
    std::cout << "(-1).i*(1).ui=" << a * b << std::endl;
    return EXIT_SUCCESS;
}

