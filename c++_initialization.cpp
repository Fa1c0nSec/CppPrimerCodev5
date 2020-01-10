#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    int units_sold = 0;
    int units_sold1 = {0};
    int units_sold2{0};
    int units_sold3(0);
    //long double ld = 3.14159265358;     ----- c++11-narrowing error
    int ld = 3;
    int a{ld}, b = {ld};
    int c{ld}, d = ld;

    /*std::cin >> int input_value;*/
    int input_value;
    std::cin >> input_value;
    //int i = {3.14};
    int i = {3};
    double wage = 1;
    double salary = wage = 9999.99;
    int ia = 3.14;

    return EXIT_SUCCESS;
}

