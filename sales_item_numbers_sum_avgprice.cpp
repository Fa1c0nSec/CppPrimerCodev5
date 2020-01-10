#include <iostream>
#include <cstdlib>
#include "Sales_item.h"

int main(int argc, const char * argv[])
{
    Sales_item total;                       //保存下一条交易记录的变量
    //读入第一条记录
    if (std::cin >> total) {
        Sales_item trans;                   //保存和的变量
        //读入并处理剩余交易记录
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl; //打印最后一本书结果
    } else {
        std::cerr << "No Data Input!" << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

