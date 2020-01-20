#include <iostream>
#include <cstdlib>

void practice218();
void practice220();
void practice233();

int main(int argc, const char * argv[])
{
    int *ip1, *ip2;
    double dp, *dp2;
    int ival = 42;
    int *p = &ival;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    *p = 0;
    std::cout << *p << std::endl;
    double dval;
    double *pd = &dval;
    double *pd2 = pd;

    //int *pi = pd;
    //pi = &dval;
    
    //nullptr
    int *p1 = nullptr;
    int *p2 = 0;
    int *p3 = NULL;

    double obj = 3.14, *pd1 = &obj;
    void *pv = &obj;
    pv = pd1;

    practice218();
    practice220();

    // compound definition
    int num = 1024, *pnum = &num, &r = num;
    int *pnum1=nullptr, pnum2=0; // pnum1 int*, pnum2, int;

    ival = 1024;
    int *pival = &ival;
    int **ppi = &pival;
    std::cout << "The value of ival \n"
              << "direct value : " << ival << "\n"
              << "indirect value : " << *pival << "\n"
              << "doubly indirect value : " << **ppi << std::endl;

    // A reference to a pointer
    int *pi1;
    int *&r1 = pi1;
    r1 = &ival;
    *r1 = 0;
    practice233();

    return EXIT_SUCCESS;
}

void practice218() {
    int value = 1024;
    int *p = &value;
    *p = 1;
    std::cout << *p << std::endl;
    p = 0;
    std::cout << p << std::endl;
}

void practice220() {
    int i = 42;
    int *pi = &i;
    *pi = *pi * *pi;
    std::cout << *pi << std::endl;
}

void practice233() {
    int *ip2,i2,&r2 = i2;
    int i3, *ip3 = 0;
    int* ip4, ip24;
}
