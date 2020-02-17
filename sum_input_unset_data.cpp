#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    int sum = 0, value = 0;
    std::cout << "Input Numbers (End with EOF, Windows with Ctrl+Z, Mac with Ctrl+D) : "; 
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is : " << sum << std::endl;
    return EXIT_SUCCESS;
}

