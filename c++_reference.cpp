#include <iostream>
#include <cstdlib>

void practice216();
void practice217();

int main(int argc, const char * argv[])
{
    int ival = 1024;
    int &refVal = ival;
    std::cout << refVal << std::endl;
    refVal = 2;
    int ii = refVal;
    int &refVal2 = refVal;
    std::cout << ii << refVal2 << std::endl;

    int i = 1024, i2 = 2048;
    int &r = i, r2 = i2;
    int i3 = 1024, &ri = i3;
    int &r3 = i3, &r4 = i2;
    
    //int &refval3 = 10;
    double dval = 3.14;
    //int &refVal4 = dval;
    
    practice216();
    practice217();

    return EXIT_SUCCESS;
}

void practice216() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.14159;
    std::cout << "r2=" << r2 << std::endl;
    r2 = r1;
    std::cout << "r2=" << r2 << std::endl;
    i = r2;
    std::cout << "i=" << i << std::endl;
    r1 = d;
    std::cout << "r1=" << r1 << std::endl;
}

void practice217() {
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;
}

