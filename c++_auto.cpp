#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    int val1 = 1;
    int val2 = 2;
    auto item = val1 + val2;
    auto i = 0, *p = &i;
    //auto sz = 0, pi = 3.14;
    int &r = i;
    auto a = r;                         // a is int.
    std::cout << a << " type : " << typeid(a).name() << std::endl;
    const int ci = i, &cr = ci;
    auto b = ci;                        // b is int, const is ignored.
    auto c = cr;                        // c is int.
    auto d = &i;                        // d is int*.
    auto e = &ci;                       // e is const int*.
    const auto f = ci;                  // f is const int.
    auto &g = ci;                       // g is ref to int.
    //auto &h = 42;                     // non-const ref banned to literal type.
    const auto &j = 42;                 // const ref allowed to literal type.
    auto k = ci, &l = i;                // k is int, l is ref to int.
    auto &m = ci, *p2 = &ci;            // m is ref to const int, *p2 is const int*.
    //auto &n = i, *p3 = &ci;             // i is int &ci is const int.
    return EXIT_SUCCESS;
}

