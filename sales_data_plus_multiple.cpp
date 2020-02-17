#include <iostream>
#include <cstdlib>
#include <string>
#include "Sales_data.h"

int main(int argc, const char * argv[])
{
    std::cout << "Input Sales Items : ";
    Sales_data sum, currentData;
    double price = 0;
    unsigned totalCount = 0;
    double totalRevenue = 0;
    std::cin >> sum.bookNo >> sum.units_sold >> price;
    sum.revenue = sum.units_sold * price;
    while(std::cin >> currentData.bookNo >> currentData.units_sold >> price) {
        currentData.revenue = currentData.units_sold * price;
        if (currentData.bookNo == sum.bookNo) {
            totalCount = sum.units_sold + currentData.units_sold;
            totalRevenue = sum.revenue + currentData.revenue;
        } else {
            std::cerr << "Data must refer to the same ISBN." << std::endl;
            return -1;
        }
    }
    std::cout << sum.bookNo << " " << totalCount << " " << totalRevenue << " ";
    if (totalCount != 0) {
        std::cout << totalRevenue / totalCount << std::endl;
    } else {
        std::cout << "[NO SALES]" << std::endl;
    }
    return EXIT_SUCCESS;
}

