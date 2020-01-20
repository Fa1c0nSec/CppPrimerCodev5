#include <iostream>
#include <cstdlib>
#include "Sales_item.h"

int main(int argc, const char * argv[])
{
    typedef double wages;
    typedef wages base, *p;
    using SI = Sales_item;
    wages hourly,weekly;
    SI item;
    typedef char *pstring;
    const pstring cstr = 0;     // != const char *cstr = 0; 
    //before comment: data type: char* after comment: data type: char, declaration: *cstr.
    const pstring *ps;
    return EXIT_SUCCESS;
}

