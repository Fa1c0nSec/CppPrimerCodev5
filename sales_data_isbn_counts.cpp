#include <iostream>
#include <cstdlib>
#include <string>
#include "Sales_data.h"

int main(int argc, const char * argv[])
{
    int cnt = 0;
    Sales_data currentItem, item;
    double price = 0;
    if (std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        ++cnt;
        while (std::cin >> currentItem.bookNo >> currentItem.units_sold >> price) {
            currentItem.revenue = currentItem.units_sold * price;
            if (item.bookNo == currentItem.bookNo) {
                ++cnt;
            } else {
                std::cout << "ISBN " << item.bookNo << " has " << cnt << " records." << std::endl;
                item = currentItem;
                cnt = 1;
            }
        }
        std::cout << "ISBN " << item.bookNo << " has " << cnt << " records." << std::endl;
    }
    return EXIT_SUCCESS;
}

