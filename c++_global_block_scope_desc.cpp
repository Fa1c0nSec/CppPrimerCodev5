#include <iostream>
#include <cstdlib>

int reused = 42;

int i = 42;

int main(int argc, const char * argv[])
{
    int unique = 0;
    std::cout << reused << " " << unique << std::endl;
    int reused = 0;
    std::cout << reused << " " << unique << std::endl;
    std::cout << ::reused << " " << unique << std::endl;
    
    int i = 100;
    int j = i;
    std::cout << j << std::endl;
    
    int sum = 0;
    for (int i = 0; i != 10; ++i) {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;

    return EXIT_SUCCESS;
}

