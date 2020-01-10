#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    int sum = 0, val = 1;
    while ( val <= 10 ) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    val = 50, sum = 0;
    while ( val <= 100 ) {
        sum+= val;
        ++val;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    val = 10;
    while ( val >= 0 ) {
        std::cout << val << " ";
        --val;
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}

