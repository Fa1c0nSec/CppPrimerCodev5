#include <iostream>
#include <cstdlib>
#include "Sales_item.h"

int main(int argc, const char * argv[])
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    } else {
        std::cerr << "Data Must Refer to Same ISBN" << std::endl;
        return -1;
    }
    return EXIT_SUCCESS;
}

