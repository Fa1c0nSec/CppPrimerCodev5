#include <iostream>
#include <cstdlib>

int j = 0;
constexpr int i = 42;

inline int get_size() {
    return 1;
}

inline constexpr int get_const_size() {
    return 1;
}

int main(int argc, const char * argv[])
{
    const int max_files = 20;           // const expression.
    const int limit = max_files + 1;    // const expression.
    int staff_size = 27;                // non-const expression.
    const int sz = get_size();
    constexpr int mf = 20;
    constexpr int limits = mf + 1;
    constexpr int szs = get_const_size();
    // *constexpr = nullptr / 0 / 0x0ab8c2dbe (set)
    const int *p = nullptr;             // nullptr is const;
    constexpr int *q = nullptr;         // pointer q is const;
    
    constexpr int *np = nullptr;        // np is const;
    constexpr const int *p2 = &i;       // constexpr = pointer is const;
    constexpr int *p3 = &j; 

    int null = 0, *p4 = NULL;           // practice2.32

    return EXIT_SUCCESS;
}

