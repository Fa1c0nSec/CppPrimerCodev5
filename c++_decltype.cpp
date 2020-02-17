#include <iostream>
#include <cstdlib>

double f() {
    return 3.14;
}

int main(int argc, const char * argv[])
{
    int num = 1;
    decltype(f()) sum = num;
    std::cout << sum << std::endl;
    
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    //decltype(cj) z;

    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b;
    //decltype(*p) c;
    
    decltype((i)) d = num;
    decltype(i) e;

    int a = 3, b1 = 4;
    decltype(a) c = a;
    decltype((b1)) d1 = a;      // int &d1 = a;
    ++c;
    ++d1;
    std::cout << c << " " << d1 << std::endl;

    int a2 = 3, b2 = 4;
    decltype(a) c1 = a2;
    decltype(a = b) d2 = a2;
    std::cout << c1 << " " << d2 << std::endl;
    return EXIT_SUCCESS;
}

