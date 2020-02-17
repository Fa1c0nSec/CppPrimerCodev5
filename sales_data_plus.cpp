#include <iostream>
#include <cstdlib>
#include <string>
#include "Sales_data.h"

int main(int argc, const char * argv[])
{
    Sales_data data1, data2;
    // Reading data
    double price = 0;           // Book Price
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;           // sales data1 revenue
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;           // sales data2 revenue
    // output plus data
    if (data1.bookNo == data2.bookNo) {
        unsigned totalCount = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std:: cout << data1.bookNo << " " << totalCount << " " << totalRevenue << " ";
        if (totalCount != 0) {
            std::cout << totalRevenue / totalCount << std::endl;
        } else {
            std::cout << "[NO SALES]" << std::endl;
        }
        return 0;
    } else {
        std::cerr << "Data Must Refer to the same ISBN." << std::endl;
        return -1;
    }
    return EXIT_SUCCESS;
}

