#include <iostream>
#include <cstdlib>

std::string global_str;
int global_int;

int main(int argc, const char * argv[])
{
    int local_int;
    std::string local_str;
    std::cout << global_str << global_int << local_int << local_str << std::endl;
    int _ = 1;
    return EXIT_SUCCESS;
}

