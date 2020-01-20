#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    const int ci = 1024;
    const int &ri = ci;
    //r1 = 42;
    //int &r2 = ci;
    int i = 42;
    const int &r1 = i;
    const int &r2 = 42;
    const int &r3 = r1 * 2;
    //int &r4 = r1 * 2;
    
    double dval = 3.14;
    const int &rval = dval; // == const int temp = dval; const int &rval = temp;
    int &r11 = i;
    const int &r22 = i;
    r11 = 0;
    //r22 = 0;
    const double pi = 3.14159;
    //double *ptr = &pi;
    const double *cptr = &pi;
    //*cptr = 42;
    std::cout << *cptr << std::endl;
    cptr = &dval;                       // const is for cptr, not for pointer.
    // const pointer
    int errNumb = 0;
    int *const curErr = &errNumb;
    const double *const pip = &pi;
    //*pip = 2.72   pip value cannot be changed.
    if (*curErr) {
        //errorHandler();
        *curErr = 0;
    }

    // top-level const & low-level const
    int toplevel_i = 0;
    int *const toplevel_pointer1 = &toplevel_i;      //toplevel_pointer1 cannot be changed. top-level const
    const int toplevel2_i = 42;
    const int *toplevel2_pointer2 = &toplevel2_i;    //toplevel2_pointer2 can change, low-level const
    const int *const toplevel3_pointer3 = toplevel2_pointer2;   //left const : low-level const ; right const: top-level const;
    const int &refer = toplevel2_i;                     //low-level const.
    toplevel_i = toplevel2_i;
    toplevel2_pointer2 = toplevel3_pointer3;
    //int *p = toplevel3_pointer3; 
    toplevel2_pointer2 = toplevel3_pointer3;
    toplevel2_pointer2 = &toplevel_i;
    // int &r = toplevel2_i;
    const int &refer2 = toplevel_i;
     
    return EXIT_SUCCESS;
}

