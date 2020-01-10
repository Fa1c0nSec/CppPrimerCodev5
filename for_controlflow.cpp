#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    int sum = 0;
    for (int val = 1; val <= 10; ++val) {
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "Sum of -100 to 100 inclusive is " << sum << std::endl;
    return EXIT_SUCCESS;
}

