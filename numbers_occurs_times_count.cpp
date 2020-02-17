#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    int currentValue = 0, value = 0;    //currentValue是正在统计的数，读入新值存入value
    std::cout << "Input Numbers (End with EOF, Windows is Ctrl+Z, macOS is Ctrl+D) : " << std::endl;
    if (std::cin >> currentValue) {
        int cnt = 1;                    //cnt保存正在处理的当前值的个数
        while (std::cin >> value) {
            //读取剩余的数
            if (value == currentValue) {
                ++cnt;
            } else {
                std::cout << currentValue << " occurs " << cnt << " times." << std::endl;
                currentValue = value;
                cnt = 1;
            }
        }
        std::cout << currentValue << " occurs " << cnt << " times." << std::endl;
    }
    return EXIT_SUCCESS;
}

