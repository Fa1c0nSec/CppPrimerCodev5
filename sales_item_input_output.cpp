#include <iostream>
#include <cstdlib>
#include "Sales_item.h"

int main(int argc, const char * argv[])
{
    Sales_item book;
    std::cin >> book;                   //读入ISBN，售出的册数以及销售价格
    std::cout << book << std::endl;     //写入ISBN，售出的册数，总销售额和平均价格
    return EXIT_SUCCESS;
}

