#include <iostream>
#include <cstdlib>
#include "Sales_item.h"

int main(int argc, const char * argv[])
{
    int cnt = 0;
    Sales_item currentItem, item;
    if (std::cin >> item) {
        ++cnt;
        while (std::cin >> currentItem) {
            if (item.isbn() == currentItem.isbn()) {
                ++cnt;
            } else {
                std::cout << "ISBN " << item.isbn() << " has " << cnt << " records." << std::endl;
                item = currentItem;
                cnt = 1;
            }
        }
        std::cout << "ISBN " << item.isbn() << " has " << cnt << " records." << std::endl;
    }
    return EXIT_SUCCESS;
}

