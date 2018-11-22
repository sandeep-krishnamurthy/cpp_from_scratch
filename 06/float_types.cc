/*
1. Set precision in cout. #include <iomanip> std::setprecision()
2. Float v/s Double Precision - Add 0.1 10 times
2. Division - INF, IND
*/

#include <iostream>
#include <iomanip>

int main()
{
    float flt_1;
    std::cout << "Default value of float - " << flt_1;

    float flt_2 = 13432.980000003f;
    std::cout << "Cout precision is low - " << flt_2;

    std::cout << std::setprecision(17);
    std::cout << "Cout with updated precision - " << flt_2;

    float flt_3;
    flt_3 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    std::cout << "With FLOAT adding 0.1 10 times - " << flt_3;

    double dbl_1;
    dbl_1 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    std::cout << "With DOUBLE adding 0.1 10 times - " << dbl_1;

    long double ldbl_1;
    ldbl_1 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

    std::cout << "With LONG DOUBLE adding 0.1 10 times - " << ldbl_1;
}