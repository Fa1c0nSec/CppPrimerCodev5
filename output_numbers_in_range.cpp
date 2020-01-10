#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    int start, end = 0;
    std::cout << "Input Two Numbers in Range: " << std::endl;
    std::cin >> start >> end;
    while (start <= end) {
        std::cout << start << " ";
        start++;
    }
    std::cout << std::endl;
}

