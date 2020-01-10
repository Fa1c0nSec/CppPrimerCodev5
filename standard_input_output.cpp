#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    std::cout << "Enter Two Numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The Sum of " << v1 << " and " << v2 << " is " << v1+v2 << std::endl;
    return EXIT_SUCCESS;
}

