#include <iostream>
#include <cstdlib>
#include "Sales_item.h"

int main(int argc, const char * argv[])
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1+item2 << std::endl;
    return EXIT_SUCCESS;
}

