#include <iostream>
#include <cstdlib>
#include "Sales_item.h"

int main(int argc, const char * argv[])
{
    std::cout << "Input Sales Items : ";
    Sales_item item, sum;
    while (std::cin >> item) {
        sum+=item;
    }
    std::cout << "Sales Item Sum : " << sum << std::endl;
    return EXIT_SUCCESS;
}

